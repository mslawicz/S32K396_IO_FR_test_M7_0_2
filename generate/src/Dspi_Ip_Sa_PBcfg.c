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
/**
*   @file    Dspi_Ip_PBcfg.c
*   @version 5.0.0
*
*   @brief   AUTOSAR Spi - Post-Build(PB) configuration file code template.
*   @details Code template for Post-Build(PB) configuration file generation.
*
*   @addtogroup DSPI_IP_DRIVER_CONFIGURATION Dspi Ip Driver Configuration
*   @{
*/

#ifdef __cplusplus
extern "C"
{
#endif


/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Dspi_Ip.h"
#if (DSPI_IP_DMA_USED == STD_ON)
#include "Dma_Ip_Cfg.h"
#endif
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define DSPI_IP_SA_VENDOR_ID_PBCFG_C                        43
#define DSPI_IP_SA_AR_RELEASE_MAJOR_VERSION_PBCFG_C         4
#define DSPI_IP_SA_AR_RELEASE_MINOR_VERSION_PBCFG_C         7
#define DSPI_IP_SA_AR_RELEASE_REVISION_VERSION_PBCFG_C      0
#define DSPI_IP_SA_SW_MAJOR_VERSION_PBCFG_C                 5
#define DSPI_IP_SA_SW_MINOR_VERSION_PBCFG_C                 0
#define DSPI_IP_SA_SW_PATCH_VERSION_PBCFG_C                 0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Dspi_Ip.h and Dspi_Ip_Sa_PBcfg.c are of the same vendor */
#if (DSPI_IP_VENDOR_ID != DSPI_IP_SA_VENDOR_ID_PBCFG_C)
    #error "Dspi_Ip.h and Dspi_Ip_Sa_PBcfg.c have different vendor ids"
#endif
/* Check if Dspi_Ip.h file and Dspi_Ip_Sa_PBcfg.c file are of the same Autosar version */
#if ((DSPI_IP_AR_RELEASE_MAJOR_VERSION != DSPI_IP_SA_AR_RELEASE_MAJOR_VERSION_PBCFG_C) || \
     (DSPI_IP_AR_RELEASE_MINOR_VERSION != DSPI_IP_SA_AR_RELEASE_MINOR_VERSION_PBCFG_C) || \
     (DSPI_IP_AR_RELEASE_REVISION_VERSION != DSPI_IP_SA_AR_RELEASE_REVISION_VERSION_PBCFG_C))
#error "AutoSar Version Numbers of Dspi_Ip.h and Dspi_Ip_Sa_PBcfg.c are different"
#endif
#if ((DSPI_IP_SW_MAJOR_VERSION != DSPI_IP_SA_SW_MAJOR_VERSION_PBCFG_C) || \
     (DSPI_IP_SW_MINOR_VERSION != DSPI_IP_SA_SW_MINOR_VERSION_PBCFG_C) || \
     (DSPI_IP_SW_PATCH_VERSION != DSPI_IP_SA_SW_PATCH_VERSION_PBCFG_C))
#error "Software Version Numbers of Dspi_Ip.h and Dspi_Ip_Sa_PBcfg.c are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    #if (DSPI_IP_DMA_USED == STD_ON)
        /* Check if current file and Dma_Ip header file are of the same Autosar version */
        #if ((DMA_IP_CFG_AR_RELEASE_MAJOR_VERSION != DSPI_IP_SA_AR_RELEASE_MAJOR_VERSION_PBCFG_C) || \
             (DMA_IP_CFG_AR_RELEASE_MINOR_VERSION != DSPI_IP_SA_AR_RELEASE_MINOR_VERSION_PBCFG_C))
        #error "AutoSar Version Numbers of Dspi_Ip_Sa_PBcfg.c and Dma_Ip_Cfg.h are different"
        #endif
    #endif
#endif
/*==================================================================================================
*                                        LOCAL MACROS
==================================================================================================*/
/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/
#if (DSPI_IP_DMA_USED == STD_ON)
    #define SPI_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
#else
    #define SPI_START_SEC_VAR_INIT_UNSPECIFIED
#endif
#include "Spi_MemMap.h"
/* Dspi_Ip_DeviceParamsCfg Device Attribute Configuration of Spi*/
static Dspi_Ip_DeviceParamsType Dspi_Ip_DeviceParamsCfg[1U] =
{
    {
        (uint8)8U, /* Frame size - dummy value */
        (boolean)TRUE, /*Lsb - dummy value */
        (uint32)0U  /* Default Data - dummy value */
    }
};
#if (DSPI_IP_DMA_USED == STD_ON)
    #define SPI_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
#else
    #define SPI_STOP_SEC_VAR_INIT_UNSPECIFIED
#endif
#include "Spi_MemMap.h"

#define SPI_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
#include "Spi_MemMap.h"
#define SPI_STOP_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
#include "Spi_MemMap.h"
#define SPI_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Spi_MemMap.h"
/* Dspi_Ip_DeviceAttributes_SSBC Device Attribute Configuration of Spi*/
const Dspi_Ip_ExternalDeviceType Dspi_Ip_DeviceAttributes_SSBC_Instance_0 =
{
    0U,  /* Instance */
    /* ctar */
        (uint32)(DSPI_CTAR_CPOL(1U) | /* Clock Polarity (Idle State) */
        DSPI_CTAR_CPHA(1U) | /* Clock Phase */
        DSPI_CTAR_PCSSCK(2U) | DSPI_CTAR_CSSCK(3U) | /* TimeCs2Clk */
        DSPI_CTAR_PASC(2U) | DSPI_CTAR_ASC(3U) | /* TimeClk2Cs */
        DSPI_CTAR_PDT(2U) | DSPI_CTAR_DT(3U) | /* TimeCs2Cs */
        DSPI_CTAR_PBR(2U) | DSPI_CTAR_BR(4U) | DSPI_CTAR_DBR(0U)), /* Baudrate */
    (uint32)(DSPI_CTARE_FMSZE(0U) | DSPI_CTARE_DTCP(0U)), /* ctare */
    /* pushCmd */
    (uint16)((DSPI_PUSHR_CTAS(0U)|    /* Use CTAR0 */
    DSPI_PUSHR_PP_MCSC(0U) | /* Enable Fast Continuous PCS */
    DSPI_PUSHR_PCS(1) | /* Chip Select Pin Via Peripheral Engine*/
    DSPI_PUSHR_CONT(1U) /* Continuous chip select */
    )>>16u),
    &Dspi_Ip_DeviceParamsCfg[0U]
};
/* SPI controller SpiPhyUnit_0 configuration. */
const Dspi_Ip_ConfigType Dspi_Ip_PhyUnitConfig_SpiPhyUnit_0_Instance_0 =
{
    0U,  /* Instance */
     /* mcr */
    (uint32)(DSPI_MCR_MSTR(1U) | DSPI_MCR_CONT_SCKE(0U) | DSPI_MCR_FRZ(0U) | DSPI_MCR_MTFE(0U) |
    DSPI_MCR_PCSIS(1U) | DSPI_MCR_MDIS(0U) | DSPI_MCR_SMPL_PT(0U) | DSPI_MCR_XSPI(1U) | DSPI_MCR_FCPCS(0U) | DSPI_MCR_HALT(1U)),
    #if (DSPI_IP_SLAVE_SUPPORT == STD_ON)
    (boolean)FALSE,
    #endif
    #if (DSPI_IP_DMA_USED == STD_ON)
    (boolean)FALSE,
    (uint8)0U, /* txDmaChannel */
    (uint8)0U, /* txCmdDmaChannel */
    (uint8)0U, /* u8NumTxCmdDmsSGId */
    NULL_PTR, /* pu8TxCmdDmaSGId */
    (uint8)0U, /* rxDmaChannel */
    #if (DSPI_IP_ENABLE_DMAFASTTRANSFER_SUPPORT == STD_ON)
    (uint8)0U, /* u8NumOfDmaFastTransfer */
    NULL_PTR, /* pCmdDmaFast */
    (uint8)0U,
    NULL_PTR, /* List of Tx SG Id */
    NULL_PTR, /* List of Rx SG Id */
    #endif
    #endif
    DSPI_IP_POLLING, /* Transfer mode */
    (uint8)0U
};

#define SPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Spi_MemMap.h"
/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

