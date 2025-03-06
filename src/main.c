/*==================================================================================================
* Project : RTD AUTOSAR 4.7
* Platform : CORTEXM
* Peripheral : S32K3XX
* Dependencies : none
*
* Autosar Version : 4.7.0
* Autosar Revision : ASR_REL_4_7_REV_0000
* Autosar Conf.Variant :
* SW Version : 5.0.0
* Build Version : S32K3_RTD_5_0_0_D2408_ASR_REL_4_7_REV_0000_20241002
*
* Copyright 2020 - 2024 NXP
*
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be 
*   used strictly in accordance with the applicable license terms.  By expressly 
*   accepting such terms or by downloading, installing, activating and/or otherwise 
*   using the software, you are agreeing that you have read, and that you agree to 
*   comply with and are bound by, such license terms.  If you do not agree to be 
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

/**
*   @file main.c
*
*   @addtogroup main_module main module documentation
*   @{
*/

/* Including necessary configuration files. */
#include "Mcu.h"
#include "Port.h"
#include "Dio.h"
#include "Dspi_Ip.h"
#include "Lpi2c_Ip.h"
#include "FlexCAN_Ip.h"
#include "FreeRTOS.h"
#include "task.h"

#define SPI_BUF_SIZE	4
#define I2C_BUF_SIZE	3
#define IO_EX_I2C		0
#define IO_EX_ADDR		0x74	/* IO expander I2C address */
#define FlexCAN0		0
#define TX_MB_IDX       0   	/* Message Buffer 0 */
#define CAN_FRAME_SIZE	8

volatile int exit_code = 0;
uint8_t rx_buf[SPI_BUF_SIZE];
uint8_t tx_buf[SPI_BUF_SIZE] = {0x12, 0x34, 0x56, 0x78};
uint8_t i2c_tx_buf[I2C_BUF_SIZE] = {0x12, 0x34, 0x56};
uint8_t can_frame[CAN_FRAME_SIZE] = {0x12, 0x34, 0x56, 0x78, 0x9a, 0xbc, 0xde, 0xf0};

/* Data Info Structure */
static Flexcan_Ip_DataInfoType txInfo;

void vBlinkTask(void *pvParameters);

/*!
  \brief The main function for the project.
  \details The startup initialization sequence is the following:
 * - startup asm routine
 * - main()
*/
int main(void)
{
    /* Initialize the Mcu driver */
    Mcu_Init(NULL_PTR);

    /* Initialize the clock tree and apply PLL as system clock */
    Mcu_InitClock(McuClockSettingConfig_0);

    /* Apply a mode configuration */
    Mcu_SetMode(McuModeSettingConf_0);

    /* Initialize all pins using the Port driver */
    Port_Init(NULL_PTR);

    /* Initialize SPI instance */
    Dspi_Ip_Init(&Dspi_Ip_PhyUnitConfig_SpiPhyUnit_0_Instance_0);

    /* Initialize I2C instance */
    Lpi2c_Ip_MasterInit(IO_EX_I2C, &I2c_Lpi2cMasterChannel0);

    /* Initialize the FlexCAN module */
    FlexCAN_Ip_Init(FlexCAN0, &FlexCAN_State0, &FlexCAN_Config0);

    /* Create FreeRTOS task */
    xTaskCreate(vBlinkTask, "BlinkTask", configMINIMAL_STACK_SIZE, NULL, tskIDLE_PRIORITY + 1, NULL);

    /* Start FreeRTOS scheduler */
    vTaskStartScheduler();

    /* should never reach here */
    return exit_code;
}

void vBlinkTask(void *pvParameters)
{
    (void)pvParameters;
    Dspi_Ip_StatusType status;

    while (1)
    {
    	/* syncronous SPI transfer */
    	status = Dspi_Ip_SyncTransmit(&Dspi_Ip_DeviceAttributes_SSBC_Instance_0, tx_buf, rx_buf, SPI_BUF_SIZE, 100);

    	/* show transfer status on LED */
    	Dio_WriteChannel(DioConf_DioChannel_DioChannel_LED1, status == DSPI_IP_STATUS_SUCCESS);

    	/* set I2C slave device address */
    	Lpi2c_Ip_MasterSetSlaveAddr(IO_EX_I2C, IO_EX_ADDR, FALSE);
    	/* blocking I2C transmission */
    	Lpi2c_Ip_StatusType i2c_status = Lpi2c_Ip_MasterSendDataBlocking(IO_EX_I2C,  i2c_tx_buf, I2C_BUF_SIZE, TRUE, 10);
    	if(i2c_status != LPI2C_IP_SUCCESS_STATUS)
    	{
    		/* handle I2C transmission error here */
    	}

    	/* send a CAN frame */
    	Flexcan_Ip_StatusType Flexcan_status;
    	const uint32 msg_id = 0x123; // Standard CAN ID

        /* Configure the Data Info Structure */
        txInfo.msg_id_type = FLEXCAN_MSG_ID_STD; // Standard ID (11-bit)
        txInfo.data_length = CAN_FRAME_SIZE;
        txInfo.fd_enable = FALSE; // Disable CAN FD (use classic CAN)
        txInfo.enable_brs = FALSE; // No Bit Rate Switching
        txInfo.is_remote = FALSE; // No Remote Frame

        /* send a frame in blocking mode */
    	Flexcan_status = FlexCAN_Ip_SendBlocking(FlexCAN0, TX_MB_IDX, &txInfo, msg_id, can_frame, 100);
    	if(Flexcan_status != FLEXCAN_STATUS_SUCCESS)
    	{
    		/* handle FlexCAN error here */
    	}

        vTaskDelay(pdMS_TO_TICKS(500));  // 500 ms delay
    }
}

/** @} */
