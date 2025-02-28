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
#include "FreeRTOS.h"
#include "task.h"

#define SPI_BUF_SIZE	4

volatile int exit_code = 0;
uint8_t rx_buf[SPI_BUF_SIZE];
uint8_t tx_buf[SPI_BUF_SIZE] = {0x12, 0x34, 0x56, 0x78};

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

        vTaskDelay(pdMS_TO_TICKS(500));  // 500 ms delay
    }
}

/** @} */
