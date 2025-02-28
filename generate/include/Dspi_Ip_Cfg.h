/*==================================================================================================
*   Project              : RTD AUTOSAR 4.7
*   Platform             : CORTEXM
*   Peripheral           : LPSPI
*   Dependencies         : 
*
*   Autosar Version      : 4.7.0
*   Autosar Revision     : ASR_REL_4_7_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 5.0.0
*   Build Version        : S32K3_RTD_5_0_0_D2408_ASR_REL_4_7_REV_0000_20241002
*
*   Copyright 2020 - 2024 NXP
*
*   NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

#ifndef DSPI_IP_CFG_H
#define DSPI_IP_CFG_H

/**
*   @file    Dspi_Ip_Cfg.h
*   @version 5.0.0
*
*   @brief   AUTOSAR Spi - Spi configuration header file.
*   @details This file is the header containing all the necessary information for SPI
*            module configuration(s).
*   @addtogroup DSPI_IP_DRIVER_CONFIGURATION Dspi Ip Driver Configuration
*   @{
*/

#ifdef __cplusplus
extern "C"
{
#endif


/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
* 4) user callback header files
==================================================================================================*/
#include "Mcal.h"
#include "OsIf.h"
#include "Dspi_Ip_Sa_PBcfg.h"
#include "S32K3_DSPI_MSC_WRAPPER.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define DSPI_IP_VENDOR_ID_CFG                       43
#define DSPI_IP_AR_RELEASE_MAJOR_VERSION_CFG        4
#define DSPI_IP_AR_RELEASE_MINOR_VERSION_CFG        7
#define DSPI_IP_AR_RELEASE_REVISION_VERSION_CFG     0
#define DSPI_IP_SW_MAJOR_VERSION_CFG                5
#define DSPI_IP_SW_MINOR_VERSION_CFG                0
#define DSPI_IP_SW_PATCH_VERSION_CFG                0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if current file and Mcal header file are of the same Autosar version */
    #if ((DSPI_IP_AR_RELEASE_MAJOR_VERSION_CFG != MCAL_AR_RELEASE_MAJOR_VERSION) || \
         (DSPI_IP_AR_RELEASE_MINOR_VERSION_CFG != MCAL_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Dspi_Ip_Cfg.h and Mcal.h are different"
    #endif

    /* Check if the current file and OsIf.h header file are of the same version */
    #if ((DSPI_IP_AR_RELEASE_MAJOR_VERSION_CFG != OSIF_AR_RELEASE_MAJOR_VERSION) || \
         (DSPI_IP_AR_RELEASE_MINOR_VERSION_CFG != OSIF_AR_RELEASE_MINOR_VERSION) \
        )
        #error "AutoSar Version Numbers of Dspi_Ip_Cfg.h and OsIf.h are different"
    #endif
#endif
/* Check if Dspi_Ip_PBcfg header file and Spi configuration header file are of the same vendor */
#if (DSPI_IP_SA_VENDOR_ID_PBCFG != DSPI_IP_VENDOR_ID_CFG)
    #error "Dspi_Ip_Sa_PBcfg.h and Dspi_Ip_Cfg.h have different vendor IDs"
#endif
    /* Check if Dspi_Ip_PBcfg header file and Spi  configuration header file are of the same Autosar version */
#if ((DSPI_IP_SA_AR_RELEASE_MAJOR_VERSION_PBCFG != DSPI_IP_AR_RELEASE_MAJOR_VERSION_CFG) || \
     (DSPI_IP_SA_AR_RELEASE_MINOR_VERSION_PBCFG != DSPI_IP_AR_RELEASE_MINOR_VERSION_CFG) || \
     (DSPI_IP_SA_AR_RELEASE_REVISION_VERSION_PBCFG != DSPI_IP_AR_RELEASE_REVISION_VERSION_CFG))
#error "AutoSar Version Numbers of Dspi_Ip_Sa_PBcfg.h and Dspi_Ip_Cfg.h are different"
#endif
/* Check if Dspi_Ip_PBcfg header file and Spi configuration header file are of the same software version */
#if ((DSPI_IP_SA_SW_MAJOR_VERSION_PBCFG != DSPI_IP_SW_MAJOR_VERSION_CFG) || \
     (DSPI_IP_SA_SW_MINOR_VERSION_PBCFG != DSPI_IP_SW_MINOR_VERSION_CFG) || \
     (DSPI_IP_SA_SW_PATCH_VERSION_PBCFG != DSPI_IP_SW_PATCH_VERSION_CFG))
#error "Software Version Numbers of Dspi_Ip_Sa_PBcfg.h and Dspi_Ip_Cfg.h are different"
#endif
/*==================================================================================================
                                            CONSTANTS
==================================================================================================*/
/**
* @brief DSPI support
*/
/** @implements DSPI_IP_ENABLE_define  */
#define DSPI_IP_ENABLE     (STD_ON)

#define DSPI_IP_CONFIG_EXT \
    DSPI_IP_SA_CONFIG_PB 
/** @brief Total number of SpiPhyUnit configured as DSPI. */
#define DSPI_IP_NUMBER_OF_INSTANCES (1U)

/** @brief Number of FIFO entries supported */
#define DSPI_IP_FIFO_SIZE_U16    ((uint16)16U)

/** @brief HWUnits enabled/disabled */
#define DSPI_IP_0_ENABLED  (STD_ON)
#define DSPI_IP_SLAVE_SUPPORT  (STD_OFF)
/**
* @brief Defines if transfers are made using DMA or FIFO.
* @details Defines if transfers are made using DMA or FIFO.
*/
#define DSPI_IP_DMA_USED    (STD_OFF)

/**
* @brief If enabled, allows dual MCU clock configuration settings.
* @details If enabled, allows dual MCU clock configuration settings.
*/
#define DSPI_IP_DUAL_CLOCK_MODE  (STD_OFF)

/**
* @brief          Enable Dma Fast transfer support.
* @details        When SpiEnableDmaFastTransferSupport = TRUE,
*                 the SPI driver can be supported to transmit multiple transfers and CPU used only for processing end of sequence transfer.
*/
#define DSPI_IP_ENABLE_DMAFASTTRANSFER_SUPPORT  (STD_OFF)
 /**
* @brief          Enable User Mode Support.
* @details        When SpiEnableUserModeSupport = TRUE,
*                 the SPI driver can be executed from both supervisor and user mode.
*
* @api
*/
#define DSPI_IP_ENABLE_USER_MODE_SUPPORT           (STD_OFF)

#ifndef MCAL_ENABLE_USER_MODE_SUPPORT
 #ifdef DSPI_IP_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == DSPI_IP_ENABLE_USER_MODE_SUPPORT)
   #error MCAL_ENABLE_USER_MODE_SUPPORT is not enabled. For running  Spi in user mode the MCAL_ENABLE_USER_MODE_SUPPORT needs to be defined
  #endif /* (STD_ON == DSPI_IP_ENABLE_USER_MODE_SUPPORT) */
 #endif /* ifdef MCAL_ENABLE_USER_MODE_SUPPORT */
#endif /* ifndef MCAL_ENABLE_USER_MODE_SUPPORT*/

/**
* @brief SPI registers is controlled by REG_PROT IP.
*/
#define DSPI_IP_REG_PROT_AVAILABLE   (STD_OFF)

#if (STD_ON == DSPI_IP_REG_PROT_AVAILABLE)
/**
* @brief The protection size
*/
    #define DSPI_IP_PROT_MEM_U32                           ((uint32)4U)
#endif

/**
* @brief Maximum of frame size supported.
*/
#define DSPI_IP_FRAMESIZE_MAX_U8                              ((uint8)32U)

/**
* @brief Minimum of frame size supported.
*/
#define DSPI_IP_FRAMESIZE_MIN_U8                              ((uint8)4U)

/**
* @brief Define Timeout Method.
* @details Define a certain timeout method from OsIf will be used in the driver.
*/
#define DSPI_IP_TIMEOUT_METHOD     (OSIF_COUNTER_DUMMY)

/**
* @brief Switches ON or OFF for the detection and reporting of development errors(API parameter checking) at IP level.
*/
/** @implements DSPI_IP_DEV_ERROR_DETECT_define  */
#define DSPI_IP_DEV_ERROR_DETECT     (STD_ON)
/*==================================================================================================
 *                                     DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                            ENUMS
==================================================================================================*/


/*==================================================================================================
*                               STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/


/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/


/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif
#endif

/** @} */

