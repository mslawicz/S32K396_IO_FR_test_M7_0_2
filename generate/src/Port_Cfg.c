/*==================================================================================================
*   Project              : RTD AUTOSAR 4.7
*   Platform             : CORTEXM
*   Peripheral           : SIUL2
*   Dependencies         : none
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
*   @file    Port_Cfg.c
*
*   @addtogroup Port_CFG
*   @{
*/

#ifdef __cplusplus
extern "C" {
#endif

/*=================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
=================================================================================================*/
#include "Port.h"

/*=================================================================================================
*                              SOURCE FILE VERSION INFORMATION
=================================================================================================*/
/**
* @brief        Parameters that shall be published within the Port driver header file and also in the
*               module's description file
* @details      The integration of incompatible files shall be avoided.
*
*/
#define PORT_VENDOR_ID_CFG_C                       43
#define PORT_AR_RELEASE_MAJOR_VERSION_CFG_C        4
#define PORT_AR_RELEASE_MINOR_VERSION_CFG_C        7
#define PORT_AR_RELEASE_REVISION_VERSION_CFG_C     0
#define PORT_SW_MAJOR_VERSION_CFG_C                5
#define PORT_SW_MINOR_VERSION_CFG_C                0
#define PORT_SW_PATCH_VERSION_CFG_C                0

/*=================================================================================================
                                      FILE VERSION CHECKS
=================================================================================================*/
/* Check if Port_Cfg.c and Port.h are of the same Autosar version */
#if (PORT_VENDOR_ID_CFG_C != PORT_VENDOR_ID)
    #error "Port_Cfg.c and Port.h have different vendor ids"
#endif
/* Check if Port_Cfg.c and Port.h are of the same Autosar version */
#if ((PORT_AR_RELEASE_MAJOR_VERSION_CFG_C    != PORT_AR_RELEASE_MAJOR_VERSION) || \
     (PORT_AR_RELEASE_MINOR_VERSION_CFG_C    != PORT_AR_RELEASE_MINOR_VERSION) || \
     (PORT_AR_RELEASE_REVISION_VERSION_CFG_C != PORT_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Port_Cfg.c and Port.h are different"
#endif
/* Check if Port_Cfg.c and Port.h are of the same Software version */
#if ((PORT_SW_MAJOR_VERSION_CFG_C != PORT_SW_MAJOR_VERSION) || \
     (PORT_SW_MINOR_VERSION_CFG_C != PORT_SW_MINOR_VERSION) || \
     (PORT_SW_PATCH_VERSION_CFG_C != PORT_SW_PATCH_VERSION)    \
    )
    #error "Software Version Numbers of Port_Cfg.c and Port.h are different"
#endif

/*=================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
=================================================================================================*/

/*=================================================================================================
*                                       LOCAL MACROS
=================================================================================================*/


/*=================================================================================================
*                                      LOCAL CONSTANTS
=================================================================================================*/
#ifdef PORT_CODE_SIZE_OPTIMIZATION
#if (STD_ON == PORT_SET_PIN_MODE_API) && (STD_OFF == PORT_CODE_SIZE_OPTIMIZATION)

#define PORT_START_SEC_CONST_16
#include "Port_MemMap.h"

/**
* @brief Array of elements storing indexes in Port_<SIUL2 Instance>_aInMuxSettings table where IN settings for each pad reside on SIUL2 instance
*/
static const uint16 Port_SIUL2_0_au16InMuxSettingsIndex[237] = 
{
    /* Index to address the input settings for pad 0*/
    (uint16)1,
    /* Index to address the input settings for pad 1*/
    (uint16)7,
    /* Index to address the input settings for pad 2*/
    (uint16)12,
    /* Index to address the input settings for pad 3*/
    (uint16)21,
    /* Index to address the input settings for pad 4*/
    (uint16)29,
    /* Index to address the input settings for pad 5*/
    (uint16)32,
    /* Index to address the input settings for pad 6*/
    (uint16)33,
    /* Index to address the input settings for pad 7*/
    (uint16)44,
    /* Index to address the input settings for pad 8*/
    (uint16)52,
    /* Index to address the input settings for pad 9*/
    (uint16)59,
    /* Index to address the input settings for pad 10*/
    (uint16)68,
    /* Index to address the input settings for pad 11*/
    (uint16)0,
    /* Index to address the input settings for pad 12*/
    (uint16)0,
    /* Index to address the input settings for pad 13*/
    (uint16)0,
    /* Index to address the input settings for pad 14*/
    (uint16)71,
    /* Index to address the input settings for pad 15*/
    (uint16)77,
    /* Index to address the input settings for pad 16*/
    (uint16)84,
    /* Index to address the input settings for pad 17*/
    (uint16)91,
    /* Index to address the input settings for pad 18*/
    (uint16)97,
    /* Index to address the input settings for pad 19*/
    (uint16)103,
    /* Index to address the input settings for pad 20*/
    (uint16)107,
    /* Index to address the input settings for pad 21*/
    (uint16)112,
    /* Index to address the input settings for pad 22*/
    (uint16)119,
    /* Index to address the input settings for pad 23*/
    (uint16)123,
    /* Index to address the input settings for pad 24*/
    (uint16)127,
    /* Index to address the input settings for pad 25*/
    (uint16)129,
    /* Index to address the input settings for pad 26*/
    (uint16)133,
    /* Index to address the input settings for pad 27*/
    (uint16)0,
    /* Index to address the input settings for pad 28*/
    (uint16)139,
    /* Index to address the input settings for pad 29*/
    (uint16)144,
    /* Index to address the input settings for pad 30*/
    (uint16)149,
    /* Index to address the input settings for pad 31*/
    (uint16)154,
    /* Index to address the input settings for pad 32*/
    (uint16)159,
    /* Index to address the input settings for pad 33*/
    (uint16)168,
    /* Index to address the input settings for pad 34*/
    (uint16)176,
    /* Index to address the input settings for pad 35*/
    (uint16)185,
    /* Index to address the input settings for pad 36*/
    (uint16)192,
    /* Index to address the input settings for pad 37*/
    (uint16)197,
    /* Index to address the input settings for pad 38*/
    (uint16)0,
    /* Index to address the input settings for pad 39*/
    (uint16)0,
    /* Index to address the input settings for pad 40*/
    (uint16)202,
    /* Index to address the input settings for pad 41*/
    (uint16)208,
    /* Index to address the input settings for pad 42*/
    (uint16)213,
    /* Index to address the input settings for pad 43*/
    (uint16)218,
    /* Index to address the input settings for pad 44*/
    (uint16)226,
    /* Index to address the input settings for pad 45*/
    (uint16)236,
    /* Index to address the input settings for pad 46*/
    (uint16)247,
    /* Index to address the input settings for pad 47*/
    (uint16)255,
    /* Index to address the input settings for pad 48*/
    (uint16)264,
    /* Index to address the input settings for pad 49*/
    (uint16)274,
    /* Index to address the input settings for pad 50*/
    (uint16)286,
    /* Index to address the input settings for pad 51*/
    (uint16)292,
    /* Index to address the input settings for pad 52*/
    (uint16)295,
    /* Index to address the input settings for pad 53*/
    (uint16)300,
    /* Index to address the input settings for pad 54*/
    (uint16)305,
    /* Index to address the input settings for pad 55*/
    (uint16)310,
    /* Index to address the input settings for pad 56*/
    (uint16)321,
    /* Index to address the input settings for pad 57*/
    (uint16)327,
    /* Index to address the input settings for pad 58*/
    (uint16)334,
    /* Index to address the input settings for pad 59*/
    (uint16)339,
    /* Index to address the input settings for pad 60*/
    (uint16)346,
    /* Index to address the input settings for pad 61*/
    (uint16)351,
    /* Index to address the input settings for pad 62*/
    (uint16)0,
    /* Index to address the input settings for pad 63*/
    (uint16)0,
    /* Index to address the input settings for pad 64*/
    (uint16)355,
    /* Index to address the input settings for pad 65*/
    (uint16)365,
    /* Index to address the input settings for pad 66*/
    (uint16)374,
    /* Index to address the input settings for pad 67*/
    (uint16)381,
    /* Index to address the input settings for pad 68*/
    (uint16)384,
    /* Index to address the input settings for pad 69*/
    (uint16)388,
    /* Index to address the input settings for pad 70*/
    (uint16)393,
    /* Index to address the input settings for pad 71*/
    (uint16)399,
    /* Index to address the input settings for pad 72*/
    (uint16)404,
    /* Index to address the input settings for pad 73*/
    (uint16)413,
    /* Index to address the input settings for pad 74*/
    (uint16)423,
    /* Index to address the input settings for pad 75*/
    (uint16)434,
    /* Index to address the input settings for pad 76*/
    (uint16)444,
    /* Index to address the input settings for pad 77*/
    (uint16)451,
    /* Index to address the input settings for pad 78*/
    (uint16)459,
    /* Index to address the input settings for pad 79*/
    (uint16)469,
    /* Index to address the input settings for pad 80*/
    (uint16)481,
    /* Index to address the input settings for pad 81*/
    (uint16)490,
    /* Index to address the input settings for pad 82*/
    (uint16)498,
    /* Index to address the input settings for pad 83*/
    (uint16)502,
    /* Index to address the input settings for pad 84*/
    (uint16)506,
    /* Index to address the input settings for pad 85*/
    (uint16)514,
    /* Index to address the input settings for pad 86*/
    (uint16)0,
    /* Index to address the input settings for pad 87*/
    (uint16)519,
    /* Index to address the input settings for pad 88*/
    (uint16)526,
    /* Index to address the input settings for pad 89*/
    (uint16)534,
    /* Index to address the input settings for pad 90*/
    (uint16)543,
    /* Index to address the input settings for pad 91*/
    (uint16)551,
    /* Index to address the input settings for pad 92*/
    (uint16)557,
    /* Index to address the input settings for pad 93*/
    (uint16)563,
    /* Index to address the input settings for pad 94*/
    (uint16)572,
    /* Index to address the input settings for pad 95*/
    (uint16)577,
    /* Index to address the input settings for pad 96*/
    (uint16)583,
    /* Index to address the input settings for pad 97*/
    (uint16)592,
    /* Index to address the input settings for pad 98*/
    (uint16)600,
    /* Index to address the input settings for pad 99*/
    (uint16)609,
    /* Index to address the input settings for pad 100*/
    (uint16)617,
    /* Index to address the input settings for pad 101*/
    (uint16)623,
    /* Index to address the input settings for pad 102*/
    (uint16)632,
    /* Index to address the input settings for pad 103*/
    (uint16)640,
    /* Index to address the input settings for pad 104*/
    (uint16)645,
    /* Index to address the input settings for pad 105*/
    (uint16)657,
    /* Index to address the input settings for pad 106*/
    (uint16)668,
    /* Index to address the input settings for pad 107*/
    (uint16)675,
    /* Index to address the input settings for pad 108*/
    (uint16)683,
    /* Index to address the input settings for pad 109*/
    (uint16)689,
    /* Index to address the input settings for pad 110*/
    (uint16)696,
    /* Index to address the input settings for pad 111*/
    (uint16)704,
    /* Index to address the input settings for pad 112*/
    (uint16)713,
    /* Index to address the input settings for pad 113*/
    (uint16)717,
    /* Index to address the input settings for pad 114*/
    (uint16)725,
    /* Index to address the input settings for pad 115*/
    (uint16)730,
    /* Index to address the input settings for pad 116*/
    (uint16)736,
    /* Index to address the input settings for pad 117*/
    (uint16)748,
    /* Index to address the input settings for pad 118*/
    (uint16)754,
    /* Index to address the input settings for pad 119*/
    (uint16)760,
    /* Index to address the input settings for pad 120*/
    (uint16)765,
    /* Index to address the input settings for pad 121*/
    (uint16)771,
    /* Index to address the input settings for pad 122*/
    (uint16)775,
    /* Index to address the input settings for pad 123*/
    (uint16)779,
    /* Index to address the input settings for pad 124*/
    (uint16)782,
    /* Index to address the input settings for pad 125*/
    (uint16)784,
    /* Index to address the input settings for pad 126*/
    (uint16)786,
    /* Index to address the input settings for pad 127*/
    (uint16)788,
    /* Index to address the input settings for pad 128*/
    (uint16)791,
    /* Index to address the input settings for pad 129*/
    (uint16)797,
    /* Index to address the input settings for pad 130*/
    (uint16)803,
    /* Index to address the input settings for pad 131*/
    (uint16)0,
    /* Index to address the input settings for pad 132*/
    (uint16)808,
    /* Index to address the input settings for pad 133*/
    (uint16)815,
    /* Index to address the input settings for pad 134*/
    (uint16)821,
    /* Index to address the input settings for pad 135*/
    (uint16)824,
    /* Index to address the input settings for pad 136*/
    (uint16)830,
    /* Index to address the input settings for pad 137*/
    (uint16)836,
    /* Index to address the input settings for pad 138*/
    (uint16)843,
    /* Index to address the input settings for pad 139*/
    (uint16)851,
    /* Index to address the input settings for pad 140*/
    (uint16)860,
    /* Index to address the input settings for pad 141*/
    (uint16)0,
    /* Index to address the input settings for pad 142*/
    (uint16)866,
    /* Index to address the input settings for pad 143*/
    (uint16)872,
    /* Index to address the input settings for pad 144*/
    (uint16)882,
    /* Index to address the input settings for pad 145*/
    (uint16)890,
    /* Index to address the input settings for pad 146*/
    (uint16)891,
    /* Index to address the input settings for pad 147*/
    (uint16)892,
    /* Index to address the input settings for pad 148*/
    (uint16)894,
    /* Index to address the input settings for pad 149*/
    (uint16)896,
    /* Index to address the input settings for pad 150*/
    (uint16)0,
    /* Index to address the input settings for pad 151*/
    (uint16)898,
    /* Index to address the input settings for pad 152*/
    (uint16)0,
    /* Index to address the input settings for pad 153*/
    (uint16)0,
    /* Index to address the input settings for pad 154*/
    (uint16)901,
    /* Index to address the input settings for pad 155*/
    (uint16)906,
    /* Index to address the input settings for pad 156*/
    (uint16)909,
    /* Index to address the input settings for pad 157*/
    (uint16)912,
    /* Index to address the input settings for pad 158*/
    (uint16)915,
    /* Index to address the input settings for pad 159*/
    (uint16)916,
    /* Index to address the input settings for pad 160*/
    (uint16)920,
    /* Index to address the input settings for pad 161*/
    (uint16)927,
    /* Index to address the input settings for pad 162*/
    (uint16)933,
    /* Index to address the input settings for pad 163*/
    (uint16)938,
    /* Index to address the input settings for pad 164*/
    (uint16)943,
    /* Index to address the input settings for pad 165*/
    (uint16)947,
    /* Index to address the input settings for pad 166*/
    (uint16)951,
    /* Index to address the input settings for pad 167*/
    (uint16)954,
    /* Index to address the input settings for pad 168*/
    (uint16)958,
    /* Index to address the input settings for pad 169*/
    (uint16)963,
    /* Index to address the input settings for pad 170*/
    (uint16)966,
    /* Index to address the input settings for pad 171*/
    (uint16)969,
    /* Index to address the input settings for pad 172*/
    (uint16)973,
    /* Index to address the input settings for pad 173*/
    (uint16)978,
    /* Index to address the input settings for pad 174*/
    (uint16)983,
    /* Index to address the input settings for pad 175*/
    (uint16)990,
    /* Index to address the input settings for pad 176*/
    (uint16)998,
    /* Index to address the input settings for pad 177*/
    (uint16)1003,
    /* Index to address the input settings for pad 178*/
    (uint16)1005,
    /* Index to address the input settings for pad 179*/
    (uint16)1010,
    /* Index to address the input settings for pad 180*/
    (uint16)1014,
    /* Index to address the input settings for pad 181*/
    (uint16)1025,
    /* Index to address the input settings for pad 182*/
    (uint16)0,
    /* Index to address the input settings for pad 183*/
    (uint16)1034,
    /* Index to address the input settings for pad 184*/
    (uint16)1039,
    /* Index to address the input settings for pad 185*/
    (uint16)1042,
    /* Index to address the input settings for pad 186*/
    (uint16)1048,
    /* Index to address the input settings for pad 187*/
    (uint16)1054,
    /* Index to address the input settings for pad 188*/
    (uint16)1058,
    /* Index to address the input settings for pad 189*/
    (uint16)1062,
    /* Index to address the input settings for pad 190*/
    (uint16)1071,
    /* Index to address the input settings for pad 191*/
    (uint16)1074,
    /* Index to address the input settings for pad 192*/
    (uint16)1077,
    /* Index to address the input settings for pad 193*/
    (uint16)1080,
    /* Index to address the input settings for pad 194*/
    (uint16)1083,
    /* Index to address the input settings for pad 195*/
    (uint16)1088,
    /* Index to address the input settings for pad 196*/
    (uint16)1093,
    /* Index to address the input settings for pad 197*/
    (uint16)1097,
    /* Index to address the input settings for pad 198*/
    (uint16)1101,
    /* Index to address the input settings for pad 199*/
    (uint16)1103,
    /* Index to address the input settings for pad 200*/
    (uint16)1106,
    /* Index to address the input settings for pad 201*/
    (uint16)1112,
    /* Index to address the input settings for pad 202*/
    (uint16)1116,
    /* Index to address the input settings for pad 203*/
    (uint16)1119,
    /* Index to address the input settings for pad 204*/
    (uint16)1122,
    /* Index to address the input settings for pad 205*/
    (uint16)1126,
    /* Index to address the input settings for pad 206*/
    (uint16)1132,
    /* Index to address the input settings for pad 207*/
    (uint16)1135,
    /* Index to address the input settings for pad 208*/
    (uint16)1137,
    /* Index to address the input settings for pad 209*/
    (uint16)1138,
    /* Index to address the input settings for pad 210*/
    (uint16)1139,
    /* Index to address the input settings for pad 211*/
    (uint16)1140,
    /* Index to address the input settings for pad 212*/
    (uint16)1141,
    /* Index to address the input settings for pad 213*/
    (uint16)1142,
    /* Index to address the input settings for pad 214*/
    (uint16)1144,
    /* Index to address the input settings for pad 215*/
    (uint16)1145,
    /* Index to address the input settings for pad 216*/
    (uint16)1146,
    /* Index to address the input settings for pad 217*/
    (uint16)1147,
    /* Index to address the input settings for pad 218*/
    (uint16)1148,
    /* Index to address the input settings for pad 219*/
    (uint16)1149,
    /* Index to address the input settings for pad 220*/
    (uint16)0,
    /* Index to address the input settings for pad 221*/
    (uint16)0,
    /* Index to address the input settings for pad 222*/
    (uint16)0,
    /* Index to address the input settings for pad 223*/
    (uint16)0,
    /* Index to address the input settings for pad 224*/
    (uint16)0,
    /* Index to address the input settings for pad 225*/
    (uint16)0,
    /* Index to address the input settings for pad 226*/
    (uint16)0,
    /* Index to address the input settings for pad 227*/
    (uint16)0,
    /* Index to address the input settings for pad 228*/
    (uint16)0,
    /* Index to address the input settings for pad 229*/
    (uint16)0,
    /* Index to address the input settings for pad 230*/
    (uint16)0,
    /* Index to address the input settings for pad 231*/
    (uint16)1151,
    /* Index to address the input settings for pad 232*/
    (uint16)1154,
    /* Index to address the input settings for pad 233*/
    (uint16)1157,
    /* Index to address the input settings for pad 234*/
    (uint16)1160,
    /* Index to address the input settings for pad 235*/
    (uint16)1163,
    /* Index to address the input settings for pad 236*/
    (uint16)1166
};

#define PORT_STOP_SEC_CONST_16
#include "Port_MemMap.h"

#define PORT_START_SEC_CONST_UNSPECIFIED
#include "Port_MemMap.h"

/**
* @brief Array of bits storing availability of PortPinModes for MSCRs on SIUL2 instance
*/
static const Port_PinModeAvailabilityArrayType Port_SIUL2_0_au16PinModeAvailability =
{
    /*  Mode PORT_GPIO_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT0_GPIO |
        SIUL2_0_PORT1_GPIO |
        SIUL2_0_PORT2_GPIO |
        SIUL2_0_PORT3_GPIO |
        SIUL2_0_PORT4_GPIO |
        SIUL2_0_PORT5_GPIO |
        SIUL2_0_PORT6_GPIO |
        SIUL2_0_PORT7_GPIO |
        SIUL2_0_PORT8_GPIO |
        SIUL2_0_PORT9_GPIO |
        SIUL2_0_PORT10_GPIO |
        SIUL2_0_PORT14_GPIO |
        SIUL2_0_PORT15_GPIO */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT16_GPIO |
        SIUL2_0_PORT17_GPIO |
        SIUL2_0_PORT18_GPIO |
        SIUL2_0_PORT19_GPIO |
        SIUL2_0_PORT20_GPIO |
        SIUL2_0_PORT21_GPIO |
        SIUL2_0_PORT22_GPIO |
        SIUL2_0_PORT23_GPIO |
        SIUL2_0_PORT24_GPIO |
        SIUL2_0_PORT25_GPIO |
        SIUL2_0_PORT26_GPIO |
        SIUL2_0_PORT29_GPIO |
        SIUL2_0_PORT30_GPIO |
        SIUL2_0_PORT31_GPIO */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT32_GPIO |
        SIUL2_0_PORT33_GPIO |
        SIUL2_0_PORT34_GPIO |
        SIUL2_0_PORT35_GPIO |
        SIUL2_0_PORT36_GPIO |
        SIUL2_0_PORT37_GPIO |
        SIUL2_0_PORT40_GPIO |
        SIUL2_0_PORT41_GPIO |
        SIUL2_0_PORT42_GPIO |
        SIUL2_0_PORT43_GPIO |
        SIUL2_0_PORT44_GPIO |
        SIUL2_0_PORT45_GPIO |
        SIUL2_0_PORT46_GPIO |
        SIUL2_0_PORT47_GPIO */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT48_GPIO |
        SIUL2_0_PORT49_GPIO |
        SIUL2_0_PORT50_GPIO |
        SIUL2_0_PORT51_GPIO |
        SIUL2_0_PORT52_GPIO |
        SIUL2_0_PORT53_GPIO |
        SIUL2_0_PORT54_GPIO |
        SIUL2_0_PORT55_GPIO |
        SIUL2_0_PORT56_GPIO |
        SIUL2_0_PORT57_GPIO |
        SIUL2_0_PORT58_GPIO |
        SIUL2_0_PORT59_GPIO |
        SIUL2_0_PORT60_GPIO |
        SIUL2_0_PORT61_GPIO */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT64_GPIO |
        SIUL2_0_PORT65_GPIO |
        SIUL2_0_PORT66_GPIO |
        SIUL2_0_PORT67_GPIO |
        SIUL2_0_PORT68_GPIO |
        SIUL2_0_PORT69_GPIO |
        SIUL2_0_PORT70_GPIO |
        SIUL2_0_PORT71_GPIO |
        SIUL2_0_PORT72_GPIO |
        SIUL2_0_PORT73_GPIO |
        SIUL2_0_PORT74_GPIO |
        SIUL2_0_PORT75_GPIO |
        SIUL2_0_PORT76_GPIO |
        SIUL2_0_PORT77_GPIO |
        SIUL2_0_PORT78_GPIO |
        SIUL2_0_PORT79_GPIO */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT80_GPIO |
        SIUL2_0_PORT81_GPIO |
        SIUL2_0_PORT82_GPIO |
        SIUL2_0_PORT83_GPIO |
        SIUL2_0_PORT84_GPIO |
        SIUL2_0_PORT85_GPIO |
        SIUL2_0_PORT87_GPIO |
        SIUL2_0_PORT88_GPIO |
        SIUL2_0_PORT89_GPIO |
        SIUL2_0_PORT90_GPIO |
        SIUL2_0_PORT91_GPIO |
        SIUL2_0_PORT92_GPIO |
        SIUL2_0_PORT93_GPIO |
        SIUL2_0_PORT94_GPIO |
        SIUL2_0_PORT95_GPIO */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT96_GPIO |
        SIUL2_0_PORT97_GPIO |
        SIUL2_0_PORT98_GPIO |
        SIUL2_0_PORT99_GPIO |
        SIUL2_0_PORT100_GPIO |
        SIUL2_0_PORT101_GPIO |
        SIUL2_0_PORT102_GPIO |
        SIUL2_0_PORT103_GPIO |
        SIUL2_0_PORT104_GPIO |
        SIUL2_0_PORT105_GPIO |
        SIUL2_0_PORT106_GPIO |
        SIUL2_0_PORT107_GPIO |
        SIUL2_0_PORT108_GPIO |
        SIUL2_0_PORT109_GPIO |
        SIUL2_0_PORT110_GPIO |
        SIUL2_0_PORT111_GPIO */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT112_GPIO |
        SIUL2_0_PORT113_GPIO |
        SIUL2_0_PORT114_GPIO |
        SIUL2_0_PORT115_GPIO |
        SIUL2_0_PORT116_GPIO |
        SIUL2_0_PORT117_GPIO |
        SIUL2_0_PORT118_GPIO |
        SIUL2_0_PORT119_GPIO |
        SIUL2_0_PORT120_GPIO |
        SIUL2_0_PORT121_GPIO |
        SIUL2_0_PORT122_GPIO |
        SIUL2_0_PORT123_GPIO |
        SIUL2_0_PORT124_GPIO |
        SIUL2_0_PORT125_GPIO |
        SIUL2_0_PORT126_GPIO |
        SIUL2_0_PORT127_GPIO */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT128_GPIO |
        SIUL2_0_PORT129_GPIO |
        SIUL2_0_PORT130_GPIO |
        SIUL2_0_PORT132_GPIO |
        SIUL2_0_PORT133_GPIO |
        SIUL2_0_PORT134_GPIO |
        SIUL2_0_PORT135_GPIO |
        SIUL2_0_PORT136_GPIO |
        SIUL2_0_PORT137_GPIO |
        SIUL2_0_PORT138_GPIO |
        SIUL2_0_PORT139_GPIO |
        SIUL2_0_PORT142_GPIO |
        SIUL2_0_PORT143_GPIO */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT144_GPIO |
        SIUL2_0_PORT145_GPIO |
        SIUL2_0_PORT146_GPIO |
        SIUL2_0_PORT147_GPIO |
        SIUL2_0_PORT148_GPIO |
        SIUL2_0_PORT149_GPIO |
        SIUL2_0_PORT151_GPIO |
        SIUL2_0_PORT154_GPIO |
        SIUL2_0_PORT155_GPIO |
        SIUL2_0_PORT156_GPIO |
        SIUL2_0_PORT157_GPIO |
        SIUL2_0_PORT158_GPIO |
        SIUL2_0_PORT159_GPIO */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 160 - 175
        SIUL2_0_PORT160_GPIO |
        SIUL2_0_PORT161_GPIO |
        SIUL2_0_PORT162_GPIO |
        SIUL2_0_PORT163_GPIO |
        SIUL2_0_PORT164_GPIO |
        SIUL2_0_PORT165_GPIO |
        SIUL2_0_PORT166_GPIO |
        SIUL2_0_PORT167_GPIO |
        SIUL2_0_PORT168_GPIO |
        SIUL2_0_PORT169_GPIO |
        SIUL2_0_PORT170_GPIO |
        SIUL2_0_PORT171_GPIO |
        SIUL2_0_PORT172_GPIO |
        SIUL2_0_PORT173_GPIO |
        SIUL2_0_PORT174_GPIO |
        SIUL2_0_PORT175_GPIO */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 176 - 191
        SIUL2_0_PORT176_GPIO |
        SIUL2_0_PORT177_GPIO |
        SIUL2_0_PORT178_GPIO |
        SIUL2_0_PORT179_GPIO |
        SIUL2_0_PORT180_GPIO |
        SIUL2_0_PORT181_GPIO |
        SIUL2_0_PORT183_GPIO |
        SIUL2_0_PORT184_GPIO |
        SIUL2_0_PORT185_GPIO |
        SIUL2_0_PORT186_GPIO |
        SIUL2_0_PORT187_GPIO |
        SIUL2_0_PORT188_GPIO |
        SIUL2_0_PORT189_GPIO |
        SIUL2_0_PORT190_GPIO |
        SIUL2_0_PORT191_GPIO */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 192 - 207
        SIUL2_0_PORT192_GPIO |
        SIUL2_0_PORT193_GPIO |
        SIUL2_0_PORT194_GPIO |
        SIUL2_0_PORT195_GPIO |
        SIUL2_0_PORT196_GPIO |
        SIUL2_0_PORT197_GPIO |
        SIUL2_0_PORT198_GPIO |
        SIUL2_0_PORT199_GPIO |
        SIUL2_0_PORT200_GPIO |
        SIUL2_0_PORT201_GPIO |
        SIUL2_0_PORT202_GPIO |
        SIUL2_0_PORT203_GPIO |
        SIUL2_0_PORT204_GPIO |
        SIUL2_0_PORT205_GPIO |
        SIUL2_0_PORT206_GPIO |
        SIUL2_0_PORT207_GPIO */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 208 - 223
        SIUL2_0_PORT208_GPIO |
        SIUL2_0_PORT209_GPIO |
        SIUL2_0_PORT210_GPIO |
        SIUL2_0_PORT211_GPIO |
        SIUL2_0_PORT212_GPIO |
        SIUL2_0_PORT213_GPIO |
        SIUL2_0_PORT214_GPIO |
        SIUL2_0_PORT215_GPIO |
        SIUL2_0_PORT216_GPIO |
        SIUL2_0_PORT217_GPIO |
        SIUL2_0_PORT218_GPIO |
        SIUL2_0_PORT219_GPIO */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 224 - 239
        SIUL2_0_PORT231_GPIO |
        SIUL2_0_PORT232_GPIO |
        SIUL2_0_PORT233_GPIO |
        SIUL2_0_PORT234_GPIO |
        SIUL2_0_PORT235_GPIO |
        SIUL2_0_PORT236_GPIO */
        (uint16)( SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U)
                )
    }
    ,
    /*  Mode PORT_ALT1_FUNC_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT2_FCCU_FCCU_ERR0_OUT |
        SIUL2_0_PORT3_FCCU_FCCU_ERR1_OUT |
        SIUL2_0_PORT7_LPUART3_LPUART3_TX_OUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(7U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT21_LPSPI2_LPSPI2_PCS2_OUT |
        SIUL2_0_PORT23_CAN1_CAN1_TX_OUT |
        SIUL2_0_PORT31_EMAC_EMAC_PPS0_OUT */
        (uint16)( SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT32_LPI2C0_LPI2C0_SDAS_OUT |
        SIUL2_0_PORT33_LPI2C0_LPI2C0_SCLS_OUT |
        SIUL2_0_PORT34_ADC1_ADC1_MA_0_OUT |
        SIUL2_0_PORT36_EMAC_EMAC_MII_RMII_TXD_1_OUT |
        SIUL2_0_PORT37_EMAC_EMAC_MII_RMII_TXD_0_OUT |
        SIUL2_0_PORT42_LPSPI4_LPSPI4_SCK_OUT |
        SIUL2_0_PORT43_LPSPI4_LPSPI4_SIN_OUT |
        SIUL2_0_PORT44_LPSPI3_LPSPI3_PCS3_OUT |
        SIUL2_0_PORT45_LPSPI3_LPSPI3_PCS2_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT51_EMAC_EMAC_PPS0_OUT |
        SIUL2_0_PORT54_CAN1_CAN1_TX_OUT |
        SIUL2_0_PORT55_ADC1_ADC1_MA_0_OUT |
        SIUL2_0_PORT56_ADC1_ADC1_MA_1_OUT |
        SIUL2_0_PORT60_ADC1_ADC1_MA_2_OUT */
        (uint16)( SHL_PAD_U32(3U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(12U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT64_CAN3_CAN3_TX_OUT |
        SIUL2_0_PORT66_EMAC_EMAC_MII_RMII_TXD_1_OUT |
        SIUL2_0_PORT72_LPI2C0_LPI2C0_SCL_OUT |
        SIUL2_0_PORT73_LPI2C0_LPI2C0_SDA_OUT |
        SIUL2_0_PORT74_EMIOS_0_EMIOS_0_CH_6_Z_OUT |
        SIUL2_0_PORT76_ADC1_ADC1_MA_2_OUT |
        SIUL2_0_PORT79_CAN2_CAN2_TX_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT80_LPSPI3_LPSPI3_SIN_OUT |
        SIUL2_0_PORT81_LPSPI3_LPSPI3_SCK_OUT |
        SIUL2_0_PORT82_EMAC_EMAC_MII_RMII_TXD_0_OUT |
        SIUL2_0_PORT85_EMAC_EMAC_PPS1_OUT |
        SIUL2_0_PORT91_CAN5_CAN5_TX_OUT |
        SIUL2_0_PORT92_CAN3_CAN3_TX_OUT |
        SIUL2_0_PORT94_CAN4_CAN4_TX_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT98_LCU0_LCU0_OUT1_OUT |
        SIUL2_0_PORT101_EMAC_EMAC_MII_TXD2_OUT |
        SIUL2_0_PORT102_EMAC_EMAC_MII_TXD3_OUT |
        SIUL2_0_PORT103_EMAC_EMAC_MII_RMII_TXD_0_OUT |
        SIUL2_0_PORT104_LPSPI3_LPSPI3_SOUT_OUT |
        SIUL2_0_PORT106_EMAC_EMAC_MII_TXD3_OUT |
        SIUL2_0_PORT107_EMAC_EMAC_MII_TXD2_OUT |
        SIUL2_0_PORT108_EMAC_EMAC_MII_RMII_TX_CLK_OUT |
        SIUL2_0_PORT109_LPSPI5_LPSPI5_SIN_OUT |
        SIUL2_0_PORT110_LPSPI5_LPSPI5_SCK_OUT |
        SIUL2_0_PORT111_FXIO_FXIO_D6_OUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT113_LPSPI5_LPSPI5_PCS0_OUT |
        SIUL2_0_PORT114_CAN2_CAN2_TX_OUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT132_LPSPI0_LPSPI0_PCS0_OUT |
        SIUL2_0_PORT136_LPSPI3_LPSPI3_PCS1_OUT |
        SIUL2_0_PORT137_LPSPI5_LPSPI5_SOUT_OUT |
        SIUL2_0_PORT142_EMIOS_0_EMIOS_0_CH_19_Z_OUT |
        SIUL2_0_PORT143_FCCU_FCCU_ERR0_OUT */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT144_FCCU_FCCU_ERR1_OUT |
        SIUL2_0_PORT156_CAN3_CAN3_TX_OUT |
        SIUL2_0_PORT158_CAN4_CAN4_TX_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 160 - 175
        SIUL2_0_PORT164_CAN5_CAN5_TX_OUT |
        SIUL2_0_PORT174_CAN1_CAN1_TX_OUT */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 176 - 191
        SIUL2_0_PORT185_CAN2_CAN2_TX_OUT |
        SIUL2_0_PORT189_CAN3_CAN3_TX_OUT |
        SIUL2_0_PORT191_ADC1_ADC1_MA_2_OUT */
        (uint16)( SHL_PAD_U32(9U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 192 - 207
        SIUL2_0_PORT200_CAN4_CAN4_TX_OUT |
        SIUL2_0_PORT205_CAN5_CAN5_TX_OUT */
        (uint16)( SHL_PAD_U32(8U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT2_FUNC_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT7_LPSPI0_LPSPI0_PCS1_OUT |
        SIUL2_0_PORT9_LPUART2_LPUART2_TX_OUT |
        SIUL2_0_PORT10_EMIOS_0_EMIOS_0_CH_12_Z_OUT */
        (uint16)( SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT17_EMIOS_0_EMIOS_0_CH_6_Z_OUT |
        SIUL2_0_PORT24_FXIO_FXIO_D3_OUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(8U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT32_FXIO_FXIO_D14_OUT |
        SIUL2_0_PORT33_LPUART0_LPUART0_TX_OUT |
        SIUL2_0_PORT34_EMIOS_0_EMIOS_0_CH_8_Z_OUT |
        SIUL2_0_PORT35_EMIOS_0_EMIOS_0_CH_9_Z_OUT |
        SIUL2_0_PORT36_EMIOS_0_EMIOS_0_CH_4_Z_OUT |
        SIUL2_0_PORT37_EMIOS_0_EMIOS_0_CH_5_Z_OUT |
        SIUL2_0_PORT44_EMIOS_0_EMIOS_0_CH_0_Z_OUT |
        SIUL2_0_PORT45_EMIOS_0_EMIOS_0_CH_1_Z_OUT |
        SIUL2_0_PORT46_EMIOS_0_EMIOS_0_CH_2_Z_OUT |
        SIUL2_0_PORT47_EMIOS_0_EMIOS_0_CH_3_Z_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT48_EMIOS_0_EMIOS_0_CH_4_Z_OUT |
        SIUL2_0_PORT49_EMIOS_0_EMIOS_0_CH_5_Z_OUT |
        SIUL2_0_PORT60_EMAC_EMAC_MII_TXD2_OUT |
        SIUL2_0_PORT61_EMAC_EMAC_MII_RMII_TXD_0_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT64_EMIOS_0_EMIOS_0_CH_0_Z_OUT |
        SIUL2_0_PORT65_EMIOS_0_EMIOS_0_CH_1_Z_OUT |
        SIUL2_0_PORT66_EMIOS_0_EMIOS_0_CH_2_Z_OUT |
        SIUL2_0_PORT67_EMIOS_0_EMIOS_0_CH_3_Z_OUT |
        SIUL2_0_PORT68_EMIOS_0_EMIOS_0_CH_8_Z_OUT |
        SIUL2_0_PORT69_EMIOS_0_EMIOS_0_CH_16_Z_OUT |
        SIUL2_0_PORT73_LPUART1_LPUART1_TX_OUT |
        SIUL2_0_PORT75_LPUART0_LPUART0_DTR_B_OUT |
        SIUL2_0_PORT78_EMIOS_0_EMIOS_0_CH_10_Z_OUT |
        SIUL2_0_PORT79_EMIOS_0_EMIOS_0_CH_11_Z_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT82_FXIO_FXIO_D6_OUT */
        (uint16)( SHL_PAD_U32(2U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT96_EMIOS_0_EMIOS_0_CH_2_Z_OUT |
        SIUL2_0_PORT97_EMIOS_0_EMIOS_0_CH_3_Z_OUT |
        SIUL2_0_PORT101_EMIOS_0_EMIOS_0_CH_19_Z_OUT |
        SIUL2_0_PORT102_FXIO_FXIO_D3_OUT |
        SIUL2_0_PORT103_LPUART2_LPUART2_TX_OUT |
        SIUL2_0_PORT104_LPI2C1_LPI2C1_SDA_OUT |
        SIUL2_0_PORT105_LPI2C1_LPI2C1_SCL_OUT |
        SIUL2_0_PORT106_EMIOS_0_EMIOS_0_CH_16_Z_OUT |
        SIUL2_0_PORT107_EMIOS_0_EMIOS_0_CH_17_Z_OUT |
        SIUL2_0_PORT108_EMIOS_0_EMIOS_0_CH_18_Z_OUT |
        SIUL2_0_PORT109_EMIOS_0_EMIOS_0_CH_20_Z_OUT |
        SIUL2_0_PORT110_EMIOS_0_EMIOS_0_CH_21_Z_OUT |
        SIUL2_0_PORT111_EMIOS_0_EMIOS_0_CH_0_Z_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT112_EMIOS_0_EMIOS_0_CH_1_Z_OUT |
        SIUL2_0_PORT113_EMIOS_0_EMIOS_0_CH_18_Z_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT128_LPSPI0_LPSPI0_SIN_OUT |
        SIUL2_0_PORT129_LPSPI0_LPSPI0_SCK_OUT |
        SIUL2_0_PORT132_LPSPI1_LPSPI1_PCS1_OUT |
        SIUL2_0_PORT135_EMIOS_0_EMIOS_0_CH_7_Z_OUT |
        SIUL2_0_PORT136_EMIOS_0_EMIOS_0_CH_6_Z_OUT |
        SIUL2_0_PORT137_EMIOS_0_EMIOS_0_CH_7_Z_OUT |
        SIUL2_0_PORT138_LPSPI3_LPSPI3_SIN_OUT |
        SIUL2_0_PORT139_LPSPI2_LPSPI2_PCS0_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT144_LPUART3_LPUART3_TX_OUT |
        SIUL2_0_PORT147_EMIOS_0_EMIOS_0_CH_22_Z_OUT |
        SIUL2_0_PORT158_LPCMP1_LPCMP1_OUT_OUT |
        SIUL2_0_PORT159_LPCMP1_LPCMP1_RRT_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207
        SIUL2_0_PORT198_FXIO_FXIO_D10_OUT |
        SIUL2_0_PORT199_FXIO_FXIO_D11_OUT |
        SIUL2_0_PORT200_FXIO_FXIO_D12_OUT |
        SIUL2_0_PORT205_FXIO_FXIO_D13_OUT |
        SIUL2_0_PORT207_FXIO_FXIO_D14_OUT */
        (uint16)( SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT3_FUNC_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT3_LPSPI1_LPSPI1_SCK_OUT |
        SIUL2_0_PORT4_FXIO_FXIO_D6_OUT |
        SIUL2_0_PORT6_LPSPI1_LPSPI1_PCS1_OUT |
        SIUL2_0_PORT8_LPSPI2_LPSPI2_SOUT_OUT |
        SIUL2_0_PORT9_LPSPI2_LPSPI2_PCS0_OUT |
        SIUL2_0_PORT14_LPSPI1_LPSPI1_PCS3_OUT */
        (uint16)( SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT18_LPUART1_LPUART1_TX_OUT |
        SIUL2_0_PORT21_FXIO_FXIO_D0_OUT |
        SIUL2_0_PORT22_FXIO_FXIO_D1_OUT |
        SIUL2_0_PORT23_FXIO_FXIO_D2_OUT |
        SIUL2_0_PORT25_FXIO_FXIO_D2_OUT |
        SIUL2_0_PORT26_LPSPI1_LPSPI1_PCS0_OUT |
        SIUL2_0_PORT29_EMAC_EMAC_PPS2_OUT |
        SIUL2_0_PORT30_LPSPI1_LPSPI1_SOUT_OUT |
        SIUL2_0_PORT31_FXIO_FXIO_D0_OUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT32_LPSPI0_LPSPI0_PCS0_OUT |
        SIUL2_0_PORT33_LPSPI0_LPSPI0_SOUT_OUT |
        SIUL2_0_PORT34_LPSPI2_LPSPI2_SIN_OUT |
        SIUL2_0_PORT35_LPSPI2_LPSPI2_SOUT_OUT |
        SIUL2_0_PORT36_LPSPI0_LPSPI0_SOUT_OUT |
        SIUL2_0_PORT37_LPSPI0_LPSPI0_PCS1_OUT |
        SIUL2_0_PORT42_LPUART0_LPUART0_DTR_B_OUT |
        SIUL2_0_PORT45_FXIO_FXIO_D8_OUT |
        SIUL2_0_PORT46_LPSPI1_LPSPI1_SCK_OUT |
        SIUL2_0_PORT47_LPSPI1_LPSPI1_SIN_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT48_LPSPI1_LPSPI1_SOUT_OUT |
        SIUL2_0_PORT49_LPSPI1_LPSPI1_PCS3_OUT |
        SIUL2_0_PORT50_FXIO_FXIO_D1_OUT |
        SIUL2_0_PORT51_FXIO_FXIO_D2_OUT |
        SIUL2_0_PORT52_FXIO_FXIO_D3_OUT |
        SIUL2_0_PORT53_FXIO_FXIO_D4_OUT |
        SIUL2_0_PORT54_LPSPI3_LPSPI3_PCS1_OUT |
        SIUL2_0_PORT55_FXIO_FXIO_D4_OUT |
        SIUL2_0_PORT56_FXIO_FXIO_D5_OUT |
        SIUL2_0_PORT57_FXIO_FXIO_D6_OUT |
        SIUL2_0_PORT58_FXIO_FXIO_D7_OUT |
        SIUL2_0_PORT59_FXIO_FXIO_D8_OUT |
        SIUL2_0_PORT60_FXIO_FXIO_D9_OUT |
        SIUL2_0_PORT61_FXIO_FXIO_D10_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT65_QUADSPI_QUADSPI_DQSFA_OUT |
        SIUL2_0_PORT66_LPSPI3_LPSPI3_PCS2_OUT |
        SIUL2_0_PORT67_CAN0_CAN0_TX_OUT |
        SIUL2_0_PORT72_CAN1_CAN1_TX_OUT |
        SIUL2_0_PORT73_LPUART0_LPUART0_RTS_OUT |
        SIUL2_0_PORT74_CAN5_CAN5_TX_OUT |
        SIUL2_0_PORT76_EMIOS_0_EMIOS_0_CH_22_Z_OUT |
        SIUL2_0_PORT77_EMIOS_0_EMIOS_0_CH_23_Z_OUT |
        SIUL2_0_PORT78_LPSPI2_LPSPI2_PCS0_OUT |
        SIUL2_0_PORT79_LPSPI2_LPSPI2_SCK_OUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT81_CAN2_CAN2_TX_OUT |
        SIUL2_0_PORT82_FXIO_FXIO_D12_OUT |
        SIUL2_0_PORT83_FXIO_FXIO_D13_OUT |
        SIUL2_0_PORT84_FXIO_FXIO_D14_OUT |
        SIUL2_0_PORT85_FXIO_FXIO_D15_OUT |
        SIUL2_0_PORT87_FXIO_FXIO_D16_OUT |
        SIUL2_0_PORT88_FXIO_FXIO_D17_OUT |
        SIUL2_0_PORT89_FXIO_FXIO_D18_OUT |
        SIUL2_0_PORT90_FXIO_FXIO_D19_OUT |
        SIUL2_0_PORT91_FXIO_FXIO_D20_OUT |
        SIUL2_0_PORT92_FXIO_FXIO_D21_OUT |
        SIUL2_0_PORT93_FXIO_FXIO_D22_OUT |
        SIUL2_0_PORT94_FXIO_FXIO_D0_OUT |
        SIUL2_0_PORT95_FXIO_FXIO_D1_OUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT96_LPSPI3_LPSPI3_SOUT_OUT |
        SIUL2_0_PORT97_LPSPI3_LPSPI3_SCK_OUT |
        SIUL2_0_PORT98_LPSPI1_LPSPI1_SOUT_OUT |
        SIUL2_0_PORT99_LPSPI1_LPSPI1_PCS0_OUT |
        SIUL2_0_PORT100_LPSPI1_LPSPI1_PCS1_OUT |
        SIUL2_0_PORT101_EMIOS_0_EMIOS_0_CH_2_Z_OUT |
        SIUL2_0_PORT103_LPSPI3_LPSPI3_PCS3_OUT |
        SIUL2_0_PORT105_FXIO_FXIO_D0_OUT |
        SIUL2_0_PORT107_EMAC_EMAC_MII_RMII_TX_EN_OUT |
        SIUL2_0_PORT108_LPUART2_LPUART2_RTS_OUT |
        SIUL2_0_PORT109_FXIO_FXIO_D7_OUT |
        SIUL2_0_PORT110_LPUART1_LPUART1_TX_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT112_EMAC_EMAC_MII_RMII_MDIO_OUT |
        SIUL2_0_PORT113_EMAC_EMAC_MII_RMII_MDC_OUT |
        SIUL2_0_PORT114_FXIO_FXIO_D2_OUT |
        SIUL2_0_PORT115_FXIO_FXIO_D3_OUT |
        SIUL2_0_PORT116_FXIO_FXIO_D25_OUT |
        SIUL2_0_PORT117_FXIO_FXIO_D26_OUT |
        SIUL2_0_PORT118_FXIO_FXIO_D27_OUT |
        SIUL2_0_PORT119_FXIO_FXIO_D28_OUT |
        SIUL2_0_PORT120_FXIO_FXIO_D29_OUT |
        SIUL2_0_PORT127_FXIO_FXIO_D6_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT128_FXIO_FXIO_D3_OUT |
        SIUL2_0_PORT129_FXIO_FXIO_D2_OUT |
        SIUL2_0_PORT136_LPSPI5_LPSPI5_PCS1_OUT |
        SIUL2_0_PORT138_LPSPI2_LPSPI2_PCS1_OUT |
        SIUL2_0_PORT139_EMIOS_0_EMIOS_0_CH_1_Z_OUT |
        SIUL2_0_PORT143_LPSPI2_LPSPI2_SCK_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT144_LPSPI2_LPSPI2_SIN_OUT */
        (uint16)( SHL_PAD_U32(0U)
                ),
        /* Pads 160 - 175
        SIUL2_0_PORT160_LPSPI2_LPSPI2_SCK_OUT |
        SIUL2_0_PORT161_LPSPI2_LPSPI2_SIN_OUT |
        SIUL2_0_PORT162_LPSPI2_LPSPI2_SOUT_OUT |
        SIUL2_0_PORT163_LPSPI2_LPSPI2_PCS0_OUT |
        SIUL2_0_PORT167_LPI2C1_LPI2C1_SCL_OUT |
        SIUL2_0_PORT168_LPI2C1_LPI2C1_SDA_OUT |
        SIUL2_0_PORT169_ADC0_ADC0_MA_0_OUT |
        SIUL2_0_PORT170_ADC0_ADC0_MA_1_OUT |
        SIUL2_0_PORT171_ADC0_ADC0_MA_2_OUT |
        SIUL2_0_PORT172_ADC0_ADC0_MA_0_OUT |
        SIUL2_0_PORT173_ADC0_ADC0_MA_1_OUT |
        SIUL2_0_PORT174_LPCMP0_LPCMP0_OUT_OUT |
        SIUL2_0_PORT175_LPCMP0_LPCMP0_RRT_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223
        SIUL2_0_PORT208_FXIO_FXIO_D15_OUT |
        SIUL2_0_PORT209_FXIO_FXIO_D16_OUT |
        SIUL2_0_PORT210_FXIO_FXIO_D17_OUT |
        SIUL2_0_PORT211_FXIO_FXIO_D18_OUT |
        SIUL2_0_PORT212_FXIO_FXIO_D19_OUT |
        SIUL2_0_PORT213_FXIO_FXIO_D20_OUT |
        SIUL2_0_PORT214_FXIO_FXIO_D21_OUT |
        SIUL2_0_PORT215_FXIO_FXIO_D22_OUT |
        SIUL2_0_PORT216_FXIO_FXIO_D23_OUT |
        SIUL2_0_PORT217_FXIO_FXIO_D24_OUT |
        SIUL2_0_PORT218_FXIO_FXIO_D25_OUT |
        SIUL2_0_PORT219_FXIO_FXIO_D26_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 224 - 239
        SIUL2_0_PORT231_FXIO_FXIO_D23_OUT |
        SIUL2_0_PORT232_FXIO_FXIO_D24_OUT |
        SIUL2_0_PORT233_FXIO_FXIO_D25_OUT |
        SIUL2_0_PORT234_FXIO_FXIO_D26_OUT |
        SIUL2_0_PORT235_FXIO_FXIO_D27_OUT |
        SIUL2_0_PORT236_FXIO_FXIO_D28_OUT */
        (uint16)( SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U)
                )
    }
    ,
    /*  Mode PORT_ALT4_FUNC_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT3_LCU0_LCU0_OUT2_OUT |
        SIUL2_0_PORT4_LPCMP0_LPCMP0_OUT_OUT |
        SIUL2_0_PORT7_CAN0_CAN0_TX_OUT |
        SIUL2_0_PORT8_FXIO_FXIO_D6_OUT |
        SIUL2_0_PORT9_FXIO_FXIO_D7_OUT |
        SIUL2_0_PORT10_FXIO_FXIO_D0_OUT */
        (uint16)( SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT18_LPSPI1_LPSPI1_SOUT_OUT |
        SIUL2_0_PORT19_LPSPI1_LPSPI1_SCK_OUT |
        SIUL2_0_PORT20_LPSPI1_LPSPI1_SIN_OUT |
        SIUL2_0_PORT21_LPSPI1_LPSPI1_PCS0_OUT |
        SIUL2_0_PORT22_LPSPI1_LPSPI1_PCS1_OUT |
        SIUL2_0_PORT26_LPSPI0_LPSPI0_PCS0_OUT |
        SIUL2_0_PORT29_LPUART2_LPUART2_TX_OUT |
        SIUL2_0_PORT30_LPSPI0_LPSPI0_SOUT_OUT |
        SIUL2_0_PORT31_LPSPI0_LPSPI0_PCS1_OUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT32_EMIOS_0_EMIOS_0_CH_3_Z_OUT |
        SIUL2_0_PORT33_EMIOS_0_EMIOS_0_CH_7_Z_OUT |
        SIUL2_0_PORT35_ADC0_ADC0_MA_0_OUT |
        SIUL2_0_PORT37_LPSPI0_LPSPI0_PCS0_OUT |
        SIUL2_0_PORT46_LCU0_LCU0_OUT7_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT50_LPSPI1_LPSPI1_PCS1_OUT |
        SIUL2_0_PORT51_EMAC_EMAC_MII_RMII_TX_EN_OUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT64_QUADSPI_QUADSPI_IOFA4_OUT |
        SIUL2_0_PORT65_FXIO_FXIO_D5_OUT |
        SIUL2_0_PORT66_LPSPI0_LPSPI0_PCS2_OUT |
        SIUL2_0_PORT67_LPUART0_LPUART0_TX_OUT |
        SIUL2_0_PORT68_FXIO_FXIO_D5_OUT |
        SIUL2_0_PORT69_FXIO_FXIO_D4_OUT |
        SIUL2_0_PORT74_LPSPI2_LPSPI2_PCS1_OUT |
        SIUL2_0_PORT75_FXIO_FXIO_D15_OUT |
        SIUL2_0_PORT76_LPSPI2_LPSPI2_PCS1_OUT |
        SIUL2_0_PORT77_ADC1_ADC1_MA_1_OUT |
        SIUL2_0_PORT78_ADC0_ADC0_MA_1_OUT |
        SIUL2_0_PORT79_ADC0_ADC0_MA_2_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT80_LPI2C1_LPI2C1_SDAS_OUT |
        SIUL2_0_PORT81_LPI2C1_LPI2C1_SCLS_OUT |
        SIUL2_0_PORT92_FXIO_FXIO_D2_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(12U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT96_EMIOS_0_EMIOS_0_CH_16_Z_OUT |
        SIUL2_0_PORT97_EMIOS_0_EMIOS_0_CH_17_Z_OUT |
        SIUL2_0_PORT98_FXIO_FXIO_D4_OUT |
        SIUL2_0_PORT99_FXIO_FXIO_D5_OUT |
        SIUL2_0_PORT102_EMAC_EMAC_MII_RMII_TX_CLK_OUT |
        SIUL2_0_PORT103_LPSPI0_LPSPI0_PCS3_OUT |
        SIUL2_0_PORT106_TRACE_TRACE_ETM_D3_OUT |
        SIUL2_0_PORT107_TRACE_TRACE_ETM_D2_OUT |
        SIUL2_0_PORT108_TRACE_TRACE_ETM_D1_OUT |
        SIUL2_0_PORT109_LPI2C0_LPI2C0_SDA_OUT |
        SIUL2_0_PORT110_LPI2C0_LPI2C0_SCL_OUT |
        SIUL2_0_PORT111_LPSPI0_LPSPI0_SCK_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT112_LPSPI0_LPSPI0_SIN_OUT */
        (uint16)( SHL_PAD_U32(0U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT132_EMIOS_0_EMIOS_0_CH_18_Z_OUT |
        SIUL2_0_PORT133_EMIOS_0_EMIOS_0_CH_19_Z_OUT |
        SIUL2_0_PORT136_FXIO_FXIO_D12_OUT |
        SIUL2_0_PORT137_CAN3_CAN3_TX_OUT |
        SIUL2_0_PORT138_EMIOS_0_EMIOS_0_CH_20_Z_OUT |
        SIUL2_0_PORT139_EMIOS_0_EMIOS_0_CH_21_Z_OUT |
        SIUL2_0_PORT143_EMIOS_0_EMIOS_0_CH_22_Z_OUT */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT144_EMIOS_0_EMIOS_0_CH_23_Z_OUT */
        (uint16)( SHL_PAD_U32(0U)
                ),
        /* Pads 160 - 175
        SIUL2_0_PORT164_FXIO_FXIO_D0_OUT |
        SIUL2_0_PORT167_FXIO_FXIO_D1_OUT |
        SIUL2_0_PORT168_FXIO_FXIO_D2_OUT |
        SIUL2_0_PORT172_LPSPI3_LPSPI3_SIN_OUT |
        SIUL2_0_PORT173_LPSPI3_LPSPI3_SCK_OUT |
        SIUL2_0_PORT174_FCCU_FCCU_ERR0_OUT |
        SIUL2_0_PORT175_LPSPI3_LPSPI3_SOUT_OUT */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 176 - 191
        SIUL2_0_PORT176_ADC1_ADC1_MA_0_OUT |
        SIUL2_0_PORT177_ADC1_ADC1_MA_1_OUT |
        SIUL2_0_PORT178_ADC1_ADC1_MA_2_OUT |
        SIUL2_0_PORT179_ADC0_ADC0_MA_2_OUT |
        SIUL2_0_PORT180_LPI2C0_LPI2C0_SCL_OUT |
        SIUL2_0_PORT181_LPI2C0_LPI2C0_SDA_OUT |
        SIUL2_0_PORT188_FXIO_FXIO_D7_OUT |
        SIUL2_0_PORT189_ADC1_ADC1_MA_0_OUT |
        SIUL2_0_PORT190_ADC1_ADC1_MA_1_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT5_FUNC_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT2_FXIO_FXIO_D4_OUT |
        SIUL2_0_PORT3_FXIO_FXIO_D5_OUT |
        SIUL2_0_PORT6_FXIO_FXIO_D19_OUT |
        SIUL2_0_PORT7_LPUART1_LPUART1_RTS_OUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT26_FXIO_FXIO_D1_OUT |
        SIUL2_0_PORT29_LPSPI1_LPSPI1_SIN_OUT */
        (uint16)( SHL_PAD_U32(10U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT32_LCU1_LCU1_OUT5_OUT |
        SIUL2_0_PORT33_CAN0_CAN0_TX_OUT |
        SIUL2_0_PORT34_LCU1_LCU1_OUT3_OUT |
        SIUL2_0_PORT35_CAN4_CAN4_TX_OUT |
        SIUL2_0_PORT36_EMAC_EMAC_MII_RMII_MDIO_OUT |
        SIUL2_0_PORT37_SYSTEM_CLKOUT_RUN_OUT |
        SIUL2_0_PORT43_LCU0_LCU0_OUT8_OUT |
        SIUL2_0_PORT45_LCU0_LCU0_OUT3_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT54_LPUART1_LPUART1_TX_OUT |
        SIUL2_0_PORT57_LPSPI2_LPSPI2_PCS0_OUT |
        SIUL2_0_PORT59_LPSPI2_LPSPI2_SOUT_OUT |
        SIUL2_0_PORT60_LPSPI2_LPSPI2_SIN_OUT |
        SIUL2_0_PORT61_LPSPI2_LPSPI2_SCK_OUT */
        (uint16)( SHL_PAD_U32(6U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT66_EMAC_EMAC_MII_RMII_TXD_0_OUT |
        SIUL2_0_PORT72_LCU1_LCU1_OUT7_OUT |
        SIUL2_0_PORT73_LCU1_LCU1_OUT6_OUT |
        SIUL2_0_PORT74_LPSPI4_LPSPI4_PCS0_OUT |
        SIUL2_0_PORT75_LPSPI4_LPSPI4_SOUT_OUT |
        SIUL2_0_PORT76_FXIO_FXIO_D19_OUT |
        SIUL2_0_PORT77_FXIO_FXIO_D16_OUT |
        SIUL2_0_PORT79_LPUART2_LPUART2_TX_OUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT81_EMAC_EMAC_MII_RMII_RX_DV_RGMII_RXCTL_OUT |
        SIUL2_0_PORT82_EMAC_EMAC_MII_RMII_TXD_1_OUT |
        SIUL2_0_PORT83_LPSPI2_LPSPI2_PCS1_OUT |
        SIUL2_0_PORT84_ADC1_ADC1_MA_2_OUT |
        SIUL2_0_PORT85_ADC1_ADC1_MA_1_OUT |
        SIUL2_0_PORT89_LPSPI4_LPSPI4_PCS1_OUT |
        SIUL2_0_PORT91_ADC1_ADC1_MA_0_OUT |
        SIUL2_0_PORT92_LPI2C1_LPI2C1_SCL_OUT |
        SIUL2_0_PORT93_LPI2C1_LPI2C1_SDA_OUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT98_FXIO_FXIO_D6_OUT |
        SIUL2_0_PORT99_FXIO_FXIO_D7_OUT |
        SIUL2_0_PORT100_LCU0_LCU0_OUT6_OUT |
        SIUL2_0_PORT101_EMAC_EMAC_MII_TXD3_OUT |
        SIUL2_0_PORT102_EMAC_EMAC_MII_TXD2_OUT |
        SIUL2_0_PORT103_EMAC_EMAC_MII_RMII_TXD_1_OUT |
        SIUL2_0_PORT104_FXIO_FXIO_D1_OUT |
        SIUL2_0_PORT106_LPSPI0_LPSPI0_SIN_OUT |
        SIUL2_0_PORT107_EMAC_EMAC_MII_RMII_TX_CLK_OUT |
        SIUL2_0_PORT108_EMAC_EMAC_MII_RMII_TX_EN_OUT |
        SIUL2_0_PORT109_EMAC_EMAC_PPS1_OUT |
        SIUL2_0_PORT110_EMAC_EMAC_PPS0_OUT |
        SIUL2_0_PORT111_EMAC_EMAC_PPS2_OUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT113_LPSPI3_LPSPI3_PCS0_OUT |
        SIUL2_0_PORT116_LPSPI1_LPSPI1_PCS2_OUT |
        SIUL2_0_PORT117_LCU0_LCU0_OUT4_OUT |
        SIUL2_0_PORT119_HSE_HSE_TAMPER_LOOP_OUT0_OUT |
        SIUL2_0_PORT126_LCU0_LCU0_OUT8_OUT |
        SIUL2_0_PORT127_LCU0_LCU0_OUT9_OUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT136_EMAC_EMAC_MII_RMII_MDC_OUT |
        SIUL2_0_PORT137_EMAC_EMAC_PPS3_OUT |
        SIUL2_0_PORT138_SYSTEM_CLKOUT_STANDBY_OUT |
        SIUL2_0_PORT143_LPCMP1_LPCMP1_RRT_OUT */
        (uint16)( SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT144_LPUART1_LPUART1_RTS_OUT */
        (uint16)( SHL_PAD_U32(0U)
                ),
        /* Pads 160 - 175
        SIUL2_0_PORT174_FXIO_FXIO_D3_OUT |
        SIUL2_0_PORT175_FCCU_FCCU_ERR1_OUT */
        (uint16)( SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 176 - 191
        SIUL2_0_PORT176_LPSPI3_LPSPI3_PCS0_OUT |
        SIUL2_0_PORT178_LPSPI3_LPSPI3_PCS1_OUT |
        SIUL2_0_PORT179_LPSPI3_LPSPI3_PCS2_OUT |
        SIUL2_0_PORT180_LPSPI3_LPSPI3_PCS3_OUT |
        SIUL2_0_PORT181_LPSPI1_LPSPI1_PCS0_OUT |
        SIUL2_0_PORT183_LPSPI3_LPSPI3_PCS3_OUT |
        SIUL2_0_PORT185_LPSPI2_LPSPI2_PCS2_OUT |
        SIUL2_0_PORT186_LPSPI2_LPSPI2_PCS3_OUT |
        SIUL2_0_PORT188_LPSPI0_LPSPI0_PCS0_OUT |
        SIUL2_0_PORT189_LPSPI3_LPSPI3_PCS1_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT6_FUNC_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT2_LCU0_LCU0_OUT3_OUT |
        SIUL2_0_PORT3_LPUART0_LPUART0_TX_OUT |
        SIUL2_0_PORT6_LPSPI3_LPSPI3_PCS1_OUT |
        SIUL2_0_PORT7_FXIO_FXIO_D9_OUT |
        SIUL2_0_PORT9_LPSPI3_LPSPI3_PCS0_OUT |
        SIUL2_0_PORT14_FXIO_FXIO_D14_OUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT17_LPSPI3_LPSPI3_SOUT_OUT */
        (uint16)( SHL_PAD_U32(1U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT35_LCU1_LCU1_OUT2_OUT |
        SIUL2_0_PORT42_LCU0_LCU0_OUT9_OUT |
        SIUL2_0_PORT44_LCU0_LCU0_OUT2_OUT */
        (uint16)( SHL_PAD_U32(3U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(12U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT49_LPSPI3_LPSPI3_PCS0_OUT |
        SIUL2_0_PORT54_FXIO_FXIO_D15_OUT |
        SIUL2_0_PORT60_LCU1_LCU1_OUT11_OUT |
        SIUL2_0_PORT61_LCU1_LCU1_OUT10_OUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT64_EMIOS_0_EMIOS_0_CH_14_Z_OUT |
        SIUL2_0_PORT65_EMIOS_0_EMIOS_0_CH_15_Z_OUT |
        SIUL2_0_PORT66_TRACE_TRACE_ETM_CLKOUT_OUT |
        SIUL2_0_PORT67_QUADSPI_QUADSPI_PCSFA_OUT |
        SIUL2_0_PORT72_LPSPI0_LPSPI0_SCK_OUT |
        SIUL2_0_PORT73_LPSPI0_LPSPI0_SIN_OUT |
        SIUL2_0_PORT74_LCU1_LCU1_OUT11_OUT |
        SIUL2_0_PORT75_FXIO_FXIO_D19_OUT |
        SIUL2_0_PORT76_LCU1_LCU1_OUT9_OUT |
        SIUL2_0_PORT77_LCU1_LCU1_OUT8_OUT |
        SIUL2_0_PORT78_LCU1_LCU1_OUT1_OUT |
        SIUL2_0_PORT79_LCU1_LCU1_OUT0_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT80_FXIO_FXIO_D15_OUT |
        SIUL2_0_PORT81_FXIO_FXIO_D14_OUT |
        SIUL2_0_PORT82_LCU1_LCU1_OUT7_OUT |
        SIUL2_0_PORT83_LCU1_LCU1_OUT6_OUT |
        SIUL2_0_PORT84_LCU1_LCU1_OUT5_OUT |
        SIUL2_0_PORT85_LCU1_LCU1_OUT4_OUT |
        SIUL2_0_PORT87_LCU1_LCU1_OUT0_OUT |
        SIUL2_0_PORT88_LCU1_LCU1_OUT1_OUT |
        SIUL2_0_PORT89_LCU1_LCU1_OUT2_OUT |
        SIUL2_0_PORT90_LCU1_LCU1_OUT9_OUT |
        SIUL2_0_PORT91_LCU1_LCU1_OUT3_OUT |
        SIUL2_0_PORT92_LCU1_LCU1_OUT8_OUT |
        SIUL2_0_PORT95_LPUART1_LPUART1_DTR_B_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT96_FXIO_FXIO_D0_OUT |
        SIUL2_0_PORT97_FXIO_FXIO_D1_OUT |
        SIUL2_0_PORT98_LPUART3_LPUART3_TX_OUT |
        SIUL2_0_PORT99_LCU0_LCU0_OUT0_OUT |
        SIUL2_0_PORT101_FXIO_FXIO_D15_OUT |
        SIUL2_0_PORT102_FXIO_FXIO_D13_OUT |
        SIUL2_0_PORT103_TRACE_TRACE_ETM_D0_OUT |
        SIUL2_0_PORT104_EMIOS_0_EMIOS_0_CH_12_Z_OUT |
        SIUL2_0_PORT105_EMIOS_0_EMIOS_0_CH_13_Z_OUT |
        SIUL2_0_PORT106_SYSTEM_CLKOUT_RUN_OUT |
        SIUL2_0_PORT107_LPSPI0_LPSPI0_SCK_OUT |
        SIUL2_0_PORT108_LPSPI0_LPSPI0_SOUT_OUT |
        SIUL2_0_PORT110_LPCMP0_LPCMP0_RRT_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT112_LPUART2_LPUART2_RTS_OUT |
        SIUL2_0_PORT113_FXIO_FXIO_D9_OUT |
        SIUL2_0_PORT116_LPSPI3_LPSPI3_SIN_OUT |
        SIUL2_0_PORT118_LCU0_LCU0_OUT5_OUT |
        SIUL2_0_PORT119_LCU0_LCU0_OUT10_OUT |
        SIUL2_0_PORT120_LCU0_LCU0_OUT11_OUT |
        SIUL2_0_PORT126_LPSPI5_LPSPI5_PCS3_OUT |
        SIUL2_0_PORT127_ETPU_A_ETPU_A_CH_8_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT132_FXIO_FXIO_D6_OUT |
        SIUL2_0_PORT133_FXIO_FXIO_D7_OUT |
        SIUL2_0_PORT135_LPSPI3_LPSPI3_SCK_OUT |
        SIUL2_0_PORT137_EMAC_EMAC_MII_RMII_TX_EN_OUT |
        SIUL2_0_PORT138_FXIO_FXIO_D4_OUT |
        SIUL2_0_PORT139_FXIO_FXIO_D5_OUT |
        SIUL2_0_PORT142_FXIO_FXIO_D7_OUT |
        SIUL2_0_PORT143_FXIO_FXIO_D2_OUT */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT144_FXIO_FXIO_D3_OUT |
        SIUL2_0_PORT149_LPSPI4_LPSPI4_SIN_OUT |
        SIUL2_0_PORT151_LPSPI4_LPSPI4_PCS0_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U)
                ),
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191
        SIUL2_0_PORT179_HSE_HSE_TAMPER_LOOP_OUT0_OUT |
        SIUL2_0_PORT180_CAN0_CAN0_TX_OUT |
        SIUL2_0_PORT185_LPSPI4_LPSPI4_PCS0_OUT |
        SIUL2_0_PORT186_LPSPI4_LPSPI4_PCS1_OUT |
        SIUL2_0_PORT187_LPSPI4_LPSPI4_PCS2_OUT |
        SIUL2_0_PORT188_LPSPI4_LPSPI4_PCS3_OUT |
        SIUL2_0_PORT191_FXIO_FXIO_D9_OUT */
        (uint16)( SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 192 - 207
        SIUL2_0_PORT204_LPSPI4_LPSPI4_PCS3_OUT */
        (uint16)( SHL_PAD_U32(12U)
                ),
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT7_FUNC_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT2_LPSPI5_LPSPI5_SIN_OUT |
        SIUL2_0_PORT3_LPSPI5_LPSPI5_SCK_OUT |
        SIUL2_0_PORT4_JTAG_JTAG_TMS_SWD_DIO_OUT |
        SIUL2_0_PORT5_SYSTEM_RESET_B_OUT |
        SIUL2_0_PORT10_JTAG_TRACENOETM_JTAG_TDO_TRACENOETM_SWO_OUT |
        SIUL2_0_PORT14_LPSPI5_LPSPI5_PCS1_OUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT17_FXIO_FXIO_D19_OUT |
        SIUL2_0_PORT26_EMAC_EMAC_PPS0_OUT |
        SIUL2_0_PORT31_TRGMUX_TRGMUX_OUT8_OUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT32_HSE_HSE_TAMPER_LOOP_OUT0_OUT |
        SIUL2_0_PORT33_LCU1_LCU1_OUT4_OUT |
        SIUL2_0_PORT34_FXIO_FXIO_D18_OUT |
        SIUL2_0_PORT35_FXIO_FXIO_D17_OUT |
        SIUL2_0_PORT37_EMAC_EMAC_MII_RMII_MDC_OUT |
        SIUL2_0_PORT42_FXIO_FXIO_D27_OUT |
        SIUL2_0_PORT43_FXIO_FXIO_D26_OUT |
        SIUL2_0_PORT44_FXIO_FXIO_D25_OUT |
        SIUL2_0_PORT45_FXIO_FXIO_D24_OUT |
        SIUL2_0_PORT46_FXIO_FXIO_D23_OUT |
        SIUL2_0_PORT47_FXIO_FXIO_D22_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT48_FXIO_FXIO_D21_OUT |
        SIUL2_0_PORT49_FXIO_FXIO_D20_OUT |
        SIUL2_0_PORT50_TRGMUX_TRGMUX_OUT9_OUT |
        SIUL2_0_PORT51_TRGMUX_TRGMUX_OUT10_OUT |
        SIUL2_0_PORT52_TRGMUX_TRGMUX_OUT11_OUT |
        SIUL2_0_PORT53_TRGMUX_TRGMUX_OUT12_OUT |
        SIUL2_0_PORT54_TRGMUX_TRGMUX_OUT13_OUT |
        SIUL2_0_PORT55_TRGMUX_TRGMUX_OUT14_OUT |
        SIUL2_0_PORT60_EMAC_EMAC_PPS3_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(12U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT64_EMAC_EMAC_MII_RMII_TX_CLK_OUT |
        SIUL2_0_PORT66_QUADSPI_QUADSPI_IOFA3_OUT |
        SIUL2_0_PORT72_FXIO_FXIO_D12_OUT |
        SIUL2_0_PORT73_FXIO_FXIO_D13_OUT |
        SIUL2_0_PORT75_LCU1_LCU1_OUT10_OUT |
        SIUL2_0_PORT78_FXIO_FXIO_D16_OUT |
        SIUL2_0_PORT79_LPI2C1_LPI2C1_SCL_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT80_LPI2C1_LPI2C1_SDA_OUT |
        SIUL2_0_PORT81_FXIO_FXIO_D2_OUT |
        SIUL2_0_PORT84_EMAC_EMAC_PPS0_OUT |
        SIUL2_0_PORT88_TRGMUX_TRGMUX_OUT15_OUT |
        SIUL2_0_PORT90_LPSPI4_LPSPI4_SIN_OUT |
        SIUL2_0_PORT91_LPSPI4_LPSPI4_SCK_OUT |
        SIUL2_0_PORT93_FXIO_FXIO_D3_OUT |
        SIUL2_0_PORT94_FXIO_FXIO_D23_OUT |
        SIUL2_0_PORT95_FXIO_FXIO_D24_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT96_TRGMUX_TRGMUX_OUT1_OUT |
        SIUL2_0_PORT97_TRGMUX_TRGMUX_OUT2_OUT |
        SIUL2_0_PORT98_LPSPI5_LPSPI5_SOUT_OUT |
        SIUL2_0_PORT100_LPSPI5_LPSPI5_PCS0_OUT |
        SIUL2_0_PORT101_LPSPI0_LPSPI0_PCS1_OUT |
        SIUL2_0_PORT102_LPSPI0_LPSPI0_PCS0_OUT |
        SIUL2_0_PORT103_QUADSPI_QUADSPI_IOFA1_OUT |
        SIUL2_0_PORT104_FXIO_FXIO_D11_OUT |
        SIUL2_0_PORT105_FXIO_FXIO_D10_OUT |
        SIUL2_0_PORT106_QUADSPI_QUADSPI_SCKFA_OUT |
        SIUL2_0_PORT107_QUADSPI_QUADSPI_IOFA0_OUT |
        SIUL2_0_PORT108_QUADSPI_QUADSPI_IOFA2_OUT |
        SIUL2_0_PORT110_SYSTEM_CLKOUT_RUN_OUT |
        SIUL2_0_PORT111_FXIO_FXIO_D10_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT113_EMAC_EMAC_PPS2_OUT */
        (uint16)( SHL_PAD_U32(1U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT135_FXIO_FXIO_D11_OUT |
        SIUL2_0_PORT136_FXIO_FXIO_D8_OUT |
        SIUL2_0_PORT137_FXIO_FXIO_D11_OUT |
        SIUL2_0_PORT138_TRGMUX_TRGMUX_OUT4_OUT |
        SIUL2_0_PORT139_TRGMUX_TRGMUX_OUT5_OUT |
        SIUL2_0_PORT142_EMAC_EMAC_PPS1_OUT |
        SIUL2_0_PORT143_TRGMUX_TRGMUX_OUT6_OUT */
        (uint16)( SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT144_TRGMUX_TRGMUX_OUT7_OUT */
        (uint16)( SHL_PAD_U32(0U)
                ),
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191
        SIUL2_0_PORT180_FXIO_FXIO_D4_OUT |
        SIUL2_0_PORT181_FXIO_FXIO_D5_OUT |
        SIUL2_0_PORT185_FXIO_FXIO_D6_OUT |
        SIUL2_0_PORT188_TRACE_TRACE_ETM_D5_OUT |
        SIUL2_0_PORT189_FXIO_FXIO_D8_OUT |
        SIUL2_0_PORT191_TRACE_TRACE_ETM_D3_OUT */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 192 - 207
        SIUL2_0_PORT198_TRACE_TRACE_ETM_CLKOUT_OUT |
        SIUL2_0_PORT199_TRACE_TRACE_ETM_D0_OUT |
        SIUL2_0_PORT207_TRACE_TRACE_ETM_D1_OUT */
        (uint16)( SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 208 - 223
        SIUL2_0_PORT208_TRACE_TRACE_ETM_D2_OUT |
        SIUL2_0_PORT209_TRACE_TRACE_ETM_D4_OUT |
        SIUL2_0_PORT210_TRACE_TRACE_ETM_D6_OUT |
        SIUL2_0_PORT211_TRACE_TRACE_ETM_D7_OUT |
        SIUL2_0_PORT212_TRACE_TRACE_ETM_D8_OUT |
        SIUL2_0_PORT213_TRACE_TRACE_ETM_D9_OUT |
        SIUL2_0_PORT214_TRACE_TRACE_ETM_D10_OUT |
        SIUL2_0_PORT215_TRACE_TRACE_ETM_D11_OUT |
        SIUL2_0_PORT216_TRACE_TRACE_ETM_D12_OUT |
        SIUL2_0_PORT217_TRACE_TRACE_ETM_D13_OUT |
        SIUL2_0_PORT218_TRACE_TRACE_ETM_D14_OUT |
        SIUL2_0_PORT219_TRACE_TRACE_ETM_D15_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 224 - 239
        SIUL2_0_PORT231_TRACE_TRACE_ETM_D10_OUT |
        SIUL2_0_PORT232_TRACE_TRACE_ETM_D11_OUT |
        SIUL2_0_PORT233_TRACE_TRACE_ETM_D12_OUT |
        SIUL2_0_PORT234_TRACE_TRACE_ETM_D13_OUT |
        SIUL2_0_PORT235_TRACE_TRACE_ETM_D14_OUT |
        SIUL2_0_PORT236_TRACE_TRACE_ETM_D15_OUT */
        (uint16)( SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U)
                )
    }
    ,
    /*  Mode PORT_ALT8_FUNC_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT2_ETPU_A_ETPU_A_CH_2_OUT |
        SIUL2_0_PORT6_ETPU_A_ETPU_A_CH_18_OUT |
        SIUL2_0_PORT8_LPCMP0_LPCMP0_OUT_OUT |
        SIUL2_0_PORT9_LPCMP1_LPCMP1_OUT_OUT |
        SIUL2_0_PORT14_ETPU_A_ETPU_A_CH_6_OUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT17_LPUART0_LPUART0_TX_OUT |
        SIUL2_0_PORT18_LCU0_LCU0_OUT0_OUT |
        SIUL2_0_PORT20_LCU0_LCU0_OUT2_OUT |
        SIUL2_0_PORT21_EMIOS_0_EMIOS_0_CH_4_Z_OUT |
        SIUL2_0_PORT22_TRGMUX_TRGMUX_OUT3_OUT |
        SIUL2_0_PORT24_ETPU_B_ETPU_B_CH_8_OUT |
        SIUL2_0_PORT25_EMIOS_0_EMIOS_0_CH_8_Z_OUT |
        SIUL2_0_PORT26_EMIOS_0_EMIOS_0_CH_9_Z_OUT |
        SIUL2_0_PORT29_ZIPWIRE0_LFAST_0_EXT_REF_OUT |
        SIUL2_0_PORT30_EMIOS_0_EMIOS_0_CH_13_Z_OUT |
        SIUL2_0_PORT31_EMIOS_0_EMIOS_0_CH_14_Z_OUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT32_ETPU_B_ETPU_B_CH_7_OUT |
        SIUL2_0_PORT35_EMAC_EMAC_MII_TXD3_OUT |
        SIUL2_0_PORT42_LPUART1_LPUART1_TX_OUT |
        SIUL2_0_PORT43_ETPU_A_ETPU_A_CH_0_OUT |
        SIUL2_0_PORT45_LPUART0_LPUART0_TX_OUT |
        SIUL2_0_PORT46_ETPU_A_ETPU_A_CH_9_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT48_LPUART0_LPUART0_TX_OUT |
        SIUL2_0_PORT50_LPSPI5_LPSPI5_PCS2_OUT |
        SIUL2_0_PORT51_EMIOS_0_EMIOS_0_CH_15_Z_OUT |
        SIUL2_0_PORT52_LPSPI5_LPSPI5_PCS3_OUT |
        SIUL2_0_PORT53_EMIOS_0_EMIOS_0_CH_17_Z_OUT |
        SIUL2_0_PORT55_EMIOS_0_EMIOS_0_CH_19_Z_OUT |
        SIUL2_0_PORT57_ETPU_A_ETPU_A_CH_31_OUT |
        SIUL2_0_PORT58_LPSPI2_LPSPI2_PCS3_OUT |
        SIUL2_0_PORT59_LPUART1_LPUART1_TX_OUT |
        SIUL2_0_PORT60_EMAC_EMAC_MII_TXD3_OUT |
        SIUL2_0_PORT61_EMAC_EMAC_MII_RMII_TXD_1_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT64_ETPU_B_ETPU_B_CH_26_OUT |
        SIUL2_0_PORT65_TRACE_TRACE_ETM_CLKOUT_OUT |
        SIUL2_0_PORT72_ETPU_A_ETPU_A_CH_22_OUT |
        SIUL2_0_PORT75_ETPU_B_ETPU_B_CH_19_OUT |
        SIUL2_0_PORT77_LPUART2_LPUART2_TX_OUT |
        SIUL2_0_PORT79_FXIO_FXIO_D18_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT80_EMIOS_0_EMIOS_0_CH_9_Z_OUT |
        SIUL2_0_PORT81_QUADSPI_QUADSPI_IOFA7_OUT |
        SIUL2_0_PORT82_EMAC_EMAC_MII_TXD2_OUT |
        SIUL2_0_PORT84_LPCMP0_LPCMP0_RRT_OUT |
        SIUL2_0_PORT85_CAN0_CAN0_TX_OUT |
        SIUL2_0_PORT87_ADC1_ADC1_MA_2_OUT |
        SIUL2_0_PORT88_CAN1_CAN1_TX_OUT |
        SIUL2_0_PORT89_ETPU_B_ETPU_B_CH_20_OUT |
        SIUL2_0_PORT90_ETPU_B_ETPU_B_CH_18_OUT |
        SIUL2_0_PORT91_ETPU_A_ETPU_A_CH_14_OUT |
        SIUL2_0_PORT92_ETPU_B_ETPU_B_CH_5_OUT |
        SIUL2_0_PORT93_ETPU_A_ETPU_A_CH_21_OUT |
        SIUL2_0_PORT95_ETPU_A_ETPU_A_CH_17_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT96_ETPU_B_ETPU_B_CH_17_OUT |
        SIUL2_0_PORT97_LPUART1_LPUART1_TX_OUT |
        SIUL2_0_PORT98_ETPU_A_ETPU_A_CH_10_OUT |
        SIUL2_0_PORT99_ETPU_A_ETPU_A_CH_11_OUT |
        SIUL2_0_PORT100_ETPU_A_ETPU_A_CH_6_OUT |
        SIUL2_0_PORT101_ETPU_A_ETPU_A_CH_27_OUT |
        SIUL2_0_PORT102_ETPU_A_ETPU_A_CH_26_OUT |
        SIUL2_0_PORT104_QUADSPI_QUADSPI_IOFA6_OUT |
        SIUL2_0_PORT105_QUADSPI_QUADSPI_IOFA5_OUT |
        SIUL2_0_PORT106_ETPU_B_ETPU_B_CH_25_OUT |
        SIUL2_0_PORT107_ETPU_B_ETPU_B_CH_24_OUT |
        SIUL2_0_PORT110_CAN4_CAN4_TX_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT112_LPUART0_LPUART0_TX_OUT |
        SIUL2_0_PORT114_EMIOS_0_EMIOS_0_CH_15_Z_OUT |
        SIUL2_0_PORT116_ETPU_B_ETPU_B_CH_15_OUT |
        SIUL2_0_PORT117_ETPU_A_ETPU_A_CH_7_OUT |
        SIUL2_0_PORT118_ETPU_B_ETPU_B_CH_0_OUT |
        SIUL2_0_PORT119_ETPU_A_ETPU_A_CH_4_OUT |
        SIUL2_0_PORT120_ETPU_A_ETPU_A_CH_1_OUT |
        SIUL2_0_PORT121_EMIOS_0_EMIOS_0_CH_1_Z_OUT |
        SIUL2_0_PORT126_CAN1_CAN1_TX_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT128_ETPU_A_ETPU_A_CH_1_OUT |
        SIUL2_0_PORT129_LPUART3_LPUART3_TX_OUT |
        SIUL2_0_PORT133_TRGMUX_TRGMUX_OUT0_OUT |
        SIUL2_0_PORT135_ETPU_A_ETPU_A_CH_16_OUT |
        SIUL2_0_PORT138_LCU0_LCU0_OUT5_OUT |
        SIUL2_0_PORT139_LPUART0_LPUART0_TX_OUT |
        SIUL2_0_PORT142_LPUART1_LPUART1_TX_OUT |
        SIUL2_0_PORT143_ETPU_B_ETPU_B_CH_10_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT144_LCU0_LCU0_OUT3_OUT |
        SIUL2_0_PORT147_ETPU_A_ETPU_A_CH_9_OUT |
        SIUL2_0_PORT148_EMIOS_0_EMIOS_0_CH_2_Z_OUT |
        SIUL2_0_PORT151_EMIOS_0_EMIOS_0_CH_4_Z_OUT |
        SIUL2_0_PORT154_LPSPI1_LPSPI1_PCS5_OUT |
        SIUL2_0_PORT155_ETPU_B_ETPU_B_CH_28_OUT |
        SIUL2_0_PORT156_ETPU_B_ETPU_B_CH_29_OUT |
        SIUL2_0_PORT157_EMIOS_0_EMIOS_0_CH_5_Z_OUT |
        SIUL2_0_PORT159_EMIOS_0_EMIOS_0_CH_6_Z_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 160 - 175
        SIUL2_0_PORT160_LPUART1_LPUART1_TX_OUT |
        SIUL2_0_PORT161_EMIOS_0_EMIOS_0_CH_16_Z_OUT |
        SIUL2_0_PORT162_LPUART2_LPUART2_TX_OUT |
        SIUL2_0_PORT163_EMIOS_0_EMIOS_0_CH_0_Z_OUT |
        SIUL2_0_PORT164_EMIOS_0_EMIOS_0_CH_1_Z_OUT |
        SIUL2_0_PORT165_EMIOS_0_EMIOS_0_CH_2_Z_OUT |
        SIUL2_0_PORT166_LPI2C1_LPI2C1_SDA_OUT |
        SIUL2_0_PORT168_CAN2_CAN2_TX_OUT |
        SIUL2_0_PORT169_EMIOS_0_EMIOS_0_CH_5_Z_OUT |
        SIUL2_0_PORT170_EMIOS_0_EMIOS_0_CH_18_Z_OUT |
        SIUL2_0_PORT171_EMIOS_0_EMIOS_0_CH_19_Z_OUT |
        SIUL2_0_PORT172_LPUART2_LPUART2_TX_OUT |
        SIUL2_0_PORT174_CAN0_CAN0_TX_OUT |
        SIUL2_0_PORT175_ETPU_A_ETPU_A_CH_30_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 176 - 191
        SIUL2_0_PORT176_ETPU_A_ETPU_A_CH_31_OUT |
        SIUL2_0_PORT178_LPUART3_LPUART3_TX_OUT |
        SIUL2_0_PORT179_EMIOS_0_EMIOS_0_CH_5_Z_OUT |
        SIUL2_0_PORT180_LPUART0_LPUART0_TX_OUT |
        SIUL2_0_PORT181_ETPU_B_ETPU_B_CH_24_OUT |
        SIUL2_0_PORT183_LPUART1_LPUART1_TX_OUT |
        SIUL2_0_PORT184_EMIOS_0_EMIOS_0_CH_8_Z_OUT |
        SIUL2_0_PORT185_MSC0_DSPI_MSC0_PCS_0_OUT |
        SIUL2_0_PORT186_EMIOS_0_EMIOS_0_CH_10_Z_OUT |
        SIUL2_0_PORT187_MSC0_DSPI_MSC0_PCS_0_OUT |
        SIUL2_0_PORT189_EMIOS_0_EMIOS_0_CH_13_Z_OUT |
        SIUL2_0_PORT190_EMIOS_0_EMIOS_0_CH_14_Z_OUT |
        SIUL2_0_PORT191_EMIOS_0_EMIOS_0_CH_15_Z_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 192 - 207
        SIUL2_0_PORT192_EMIOS_0_EMIOS_0_CH_6_Z_OUT |
        SIUL2_0_PORT193_EMIOS_0_EMIOS_0_CH_17_Z_OUT |
        SIUL2_0_PORT194_ETPU_B_ETPU_B_CH_30_OUT |
        SIUL2_0_PORT195_EMIOS_0_EMIOS_0_CH_19_Z_OUT |
        SIUL2_0_PORT196_ETPU_A_ETPU_A_CH_26_OUT |
        SIUL2_0_PORT197_ETPU_A_ETPU_A_CH_27_OUT |
        SIUL2_0_PORT199_EMIOS_0_EMIOS_0_CH_23_Z_OUT |
        SIUL2_0_PORT201_EMIOS_0_EMIOS_0_CH_23_Z_OUT |
        SIUL2_0_PORT202_EMIOS_0_EMIOS_0_CH_7_Z_OUT |
        SIUL2_0_PORT203_EMIOS_0_EMIOS_0_CH_16_Z_OUT |
        SIUL2_0_PORT204_EMIOS_0_EMIOS_0_CH_18_Z_OUT |
        SIUL2_0_PORT206_ETPU_A_ETPU_A_CH_25_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 208 - 223
        SIUL2_0_PORT212_CAN0_CAN0_TX_OUT |
        SIUL2_0_PORT218_CAN1_CAN1_TX_OUT */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(10U)
                ),
        /* Pads 224 - 239
        SIUL2_0_PORT232_LPUART2_LPUART2_TX_OUT |
        SIUL2_0_PORT234_LPUART3_LPUART3_TX_OUT */
        (uint16)( SHL_PAD_U32(8U) |
                  SHL_PAD_U32(10U)
                )
    }
    ,
    /*  Mode PORT_ALT9_FUNC_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT2_LCU0_LCU0_OUT0_OUT |
        SIUL2_0_PORT6_LCU1_LCU1_OUT0_OUT |
        SIUL2_0_PORT8_ETPU_A_ETPU_A_CH_5_OUT |
        SIUL2_0_PORT9_LPSPI1_LPSPI1_PCS2_OUT |
        SIUL2_0_PORT14_ETPU_B_ETPU_B_CH_9_OUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT17_ETPU_A_ETPU_A_CH_8_OUT |
        SIUL2_0_PORT18_ETPU_B_ETPU_B_CH_1_OUT |
        SIUL2_0_PORT19_LCU0_LCU0_OUT1_OUT |
        SIUL2_0_PORT20_ETPU_B_ETPU_B_CH_4_OUT |
        SIUL2_0_PORT21_ETPU_B_ETPU_B_CH_11_OUT |
        SIUL2_0_PORT22_SYSTEM_CLKOUT_STANDBY_OUT |
        SIUL2_0_PORT23_LPI2C0_LPI2C0_SCLS_OUT |
        SIUL2_0_PORT24_LCU0_LCU0_OUT8_OUT |
        SIUL2_0_PORT25_ETPU_B_ETPU_B_CH_9_OUT |
        SIUL2_0_PORT29_EMAC_EMAC_MII_RMII_MDIO_OUT |
        SIUL2_0_PORT31_ETPU_B_ETPU_B_CH_28_OUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT32_LCU1_LCU1_OUT8_OUT |
        SIUL2_0_PORT42_TRACE_EVTO_1_OUT |
        SIUL2_0_PORT43_EMIOS_0_EMIOS_0_CH_9_Z_OUT |
        SIUL2_0_PORT44_ETPU_B_ETPU_B_CH_2_OUT |
        SIUL2_0_PORT45_ETPU_B_ETPU_B_CH_4_OUT |
        SIUL2_0_PORT47_LPUART3_LPUART3_TX_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT49_ETPU_B_ETPU_B_CH_16_OUT |
        SIUL2_0_PORT50_EMIOS_0_EMIOS_0_CH_15_Z_OUT |
        SIUL2_0_PORT52_ETPU_A_ETPU_A_CH_24_OUT |
        SIUL2_0_PORT53_ETPU_A_ETPU_A_CH_25_OUT |
        SIUL2_0_PORT55_ETPU_A_ETPU_A_CH_30_OUT |
        SIUL2_0_PORT56_LPSPI2_LPSPI2_PCS2_OUT |
        SIUL2_0_PORT57_ETPU_B_ETPU_B_CH_21_OUT |
        SIUL2_0_PORT59_EMIOS_0_EMIOS_0_CH_23_Z_OUT |
        SIUL2_0_PORT61_EMAC_EMAC_MII_TXD2_OUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT64_ETPU_A_ETPU_A_CH_18_OUT |
        SIUL2_0_PORT72_LCU1_LCU1_OUT4_OUT |
        SIUL2_0_PORT73_ETPU_A_ETPU_A_CH_13_OUT |
        SIUL2_0_PORT74_LPUART3_LPUART3_TX_OUT |
        SIUL2_0_PORT75_ETPU_B_ETPU_B_CH_6_OUT |
        SIUL2_0_PORT77_LPSPI2_LPSPI2_PCS2_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT81_ETPU_A_ETPU_A_CH_29_OUT |
        SIUL2_0_PORT82_LPSPI2_LPSPI2_PCS3_OUT |
        SIUL2_0_PORT83_EMAC_EMAC_MII_RMII_TXD_0_OUT |
        SIUL2_0_PORT84_ETPU_B_ETPU_B_CH_30_OUT |
        SIUL2_0_PORT85_ETPU_B_ETPU_B_CH_31_OUT |
        SIUL2_0_PORT87_ETPU_A_ETPU_A_CH_15_OUT |
        SIUL2_0_PORT88_ETPU_B_ETPU_B_CH_21_OUT |
        SIUL2_0_PORT89_ETPU_B_ETPU_B_CH_8_OUT |
        SIUL2_0_PORT90_ADC1_ADC1_MA_1_OUT |
        SIUL2_0_PORT91_LCU1_LCU1_OUT10_OUT |
        SIUL2_0_PORT92_LCU1_LCU1_OUT7_OUT |
        SIUL2_0_PORT93_LCU1_LCU1_OUT5_OUT |
        SIUL2_0_PORT94_ETPU_A_ETPU_A_CH_19_OUT |
        SIUL2_0_PORT95_LCU1_LCU1_OUT1_OUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT97_LPUART0_LPUART0_RTS_OUT |
        SIUL2_0_PORT98_LCU0_LCU0_OUT5_OUT |
        SIUL2_0_PORT99_LCU0_LCU0_OUT4_OUT |
        SIUL2_0_PORT100_FLEXPWM_0_PWM_0_A_3_OUT |
        SIUL2_0_PORT101_ETPU_B_ETPU_B_CH_16_OUT |
        SIUL2_0_PORT102_ETPU_B_ETPU_B_CH_15_OUT |
        SIUL2_0_PORT104_ETPU_A_ETPU_A_CH_28_OUT |
        SIUL2_0_PORT105_LPUART2_LPUART2_TX_OUT |
        SIUL2_0_PORT106_ETPU_A_ETPU_A_CH_17_OUT |
        SIUL2_0_PORT107_ETPU_A_ETPU_A_CH_14_OUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT114_ETPU_B_ETPU_B_CH_25_OUT |
        SIUL2_0_PORT115_ETPU_B_ETPU_B_CH_27_OUT |
        SIUL2_0_PORT117_LCU0_LCU0_OUT10_OUT |
        SIUL2_0_PORT118_FLEXPWM_0_PWM_0_B_3_OUT |
        SIUL2_0_PORT119_LCU0_LCU0_OUT2_OUT |
        SIUL2_0_PORT121_ETPU_A_ETPU_A_CH_15_OUT |
        SIUL2_0_PORT126_ETPU_A_ETPU_A_CH_16_OUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT128_ETPU_B_ETPU_B_CH_4_OUT |
        SIUL2_0_PORT129_LPUART1_LPUART1_DTR_B_OUT |
        SIUL2_0_PORT132_LCU0_LCU0_OUT7_OUT |
        SIUL2_0_PORT133_LCU0_LCU0_OUT6_OUT |
        SIUL2_0_PORT135_EMIOS_0_EMIOS_0_CH_11_Z_OUT |
        SIUL2_0_PORT138_ETPU_B_ETPU_B_CH_23_OUT |
        SIUL2_0_PORT139_LCU0_LCU0_OUT4_OUT |
        SIUL2_0_PORT143_ETPU_A_ETPU_A_CH_0_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT144_ETPU_B_ETPU_B_CH_8_OUT |
        SIUL2_0_PORT148_ETPU_B_ETPU_B_CH_3_OUT |
        SIUL2_0_PORT149_ETPU_B_ETPU_B_CH_6_OUT |
        SIUL2_0_PORT154_LPSPI2_LPSPI2_PCS3_OUT |
        SIUL2_0_PORT155_ETPU_A_ETPU_A_CH_20_OUT |
        SIUL2_0_PORT156_ETPU_A_ETPU_A_CH_21_OUT |
        SIUL2_0_PORT157_ETPU_B_ETPU_B_CH_7_OUT |
        SIUL2_0_PORT158_ETPU_B_ETPU_B_CH_10_OUT |
        SIUL2_0_PORT159_ETPU_A_ETPU_A_CH_31_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 160 - 175
        SIUL2_0_PORT160_EMIOS_0_EMIOS_0_CH_7_Z_OUT |
        SIUL2_0_PORT161_ETPU_A_ETPU_A_CH_29_OUT |
        SIUL2_0_PORT162_EMIOS_0_EMIOS_0_CH_23_Z_OUT |
        SIUL2_0_PORT163_ETPU_A_ETPU_A_CH_28_OUT |
        SIUL2_0_PORT164_ETPU_B_ETPU_B_CH_12_OUT |
        SIUL2_0_PORT165_ETPU_A_ETPU_A_CH_27_OUT |
        SIUL2_0_PORT167_ETPU_B_ETPU_B_CH_17_OUT |
        SIUL2_0_PORT168_EMIOS_0_EMIOS_0_CH_4_Z_OUT |
        SIUL2_0_PORT169_ETPU_B_ETPU_B_CH_23_OUT |
        SIUL2_0_PORT170_ETPU_B_ETPU_B_CH_24_OUT |
        SIUL2_0_PORT171_ETPU_B_ETPU_B_CH_25_OUT |
        SIUL2_0_PORT173_EMIOS_0_EMIOS_0_CH_21_Z_OUT |
        SIUL2_0_PORT174_ETPU_A_ETPU_A_CH_28_OUT |
        SIUL2_0_PORT175_ETPU_B_ETPU_B_CH_1_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 176 - 191
        SIUL2_0_PORT176_ETPU_B_ETPU_B_CH_2_OUT |
        SIUL2_0_PORT177_ETPU_B_ETPU_B_CH_22_OUT |
        SIUL2_0_PORT178_ETPU_B_ETPU_B_CH_26_OUT |
        SIUL2_0_PORT179_ETPU_B_ETPU_B_CH_23_OUT |
        SIUL2_0_PORT180_ETPU_A_ETPU_A_CH_29_OUT |
        SIUL2_0_PORT181_ETPU_A_ETPU_A_CH_14_OUT |
        SIUL2_0_PORT183_LPCMP0_LPCMP0_OUT_OUT |
        SIUL2_0_PORT185_EMIOS_0_EMIOS_0_CH_9_Z_OUT |
        SIUL2_0_PORT186_ETPU_B_ETPU_B_CH_2_OUT |
        SIUL2_0_PORT187_LPUART3_LPUART3_TX_OUT |
        SIUL2_0_PORT190_ETPU_B_ETPU_B_CH_31_OUT |
        SIUL2_0_PORT191_EMAC_EMAC_MII_RMII_TX_EN_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 192 - 207
        SIUL2_0_PORT192_ETPU_A_ETPU_A_CH_8_OUT |
        SIUL2_0_PORT193_ETPU_A_ETPU_A_CH_13_OUT |
        SIUL2_0_PORT194_ETPU_A_ETPU_A_CH_1_OUT |
        SIUL2_0_PORT195_TRACE_EVTO_0_OUT |
        SIUL2_0_PORT196_ETPU_B_ETPU_B_CH_15_OUT |
        SIUL2_0_PORT197_ETPU_B_ETPU_B_CH_16_OUT |
        SIUL2_0_PORT200_LPI2C0_LPI2C0_SCL_OUT |
        SIUL2_0_PORT201_ETPU_A_ETPU_A_CH_24_OUT |
        SIUL2_0_PORT202_ETPU_A_ETPU_A_CH_15_OUT |
        SIUL2_0_PORT203_ETPU_A_ETPU_A_CH_16_OUT |
        SIUL2_0_PORT204_ETPU_A_ETPU_A_CH_26_OUT |
        SIUL2_0_PORT205_LPI2C0_LPI2C0_SDA_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT10_FUNC_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT2_FLEXPWM_0_PWM_0_B_0_OUT |
        SIUL2_0_PORT6_FLEXPWM_1_PWM_1_B_0_OUT |
        SIUL2_0_PORT7_ETPU_A_ETPU_A_CH_20_OUT |
        SIUL2_0_PORT8_ETPU_B_ETPU_B_CH_0_OUT |
        SIUL2_0_PORT9_ETPU_A_ETPU_A_CH_12_OUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT17_EMIOS_0_EMIOS_0_CH_10_Z_OUT |
        SIUL2_0_PORT18_ETPU_A_ETPU_A_CH_3_OUT |
        SIUL2_0_PORT20_ETPU_A_ETPU_A_CH_5_OUT |
        SIUL2_0_PORT21_ETPU_A_ETPU_A_CH_1_OUT |
        SIUL2_0_PORT23_ETPU_A_ETPU_A_CH_24_OUT |
        SIUL2_0_PORT25_LCU0_LCU0_OUT9_OUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT32_FLEXPWM_1_PWM_1_X_0_OUT |
        SIUL2_0_PORT33_ETPU_B_ETPU_B_CH_9_OUT |
        SIUL2_0_PORT35_LPUART1_LPUART1_TX_OUT |
        SIUL2_0_PORT45_LCU0_LCU0_OUT9_OUT |
        SIUL2_0_PORT47_ETPU_B_ETPU_B_CH_13_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT48_ETPU_B_ETPU_B_CH_14_OUT |
        SIUL2_0_PORT49_ETPU_A_ETPU_A_CH_5_OUT |
        SIUL2_0_PORT50_ETPU_B_ETPU_B_CH_29_OUT |
        SIUL2_0_PORT52_ETPU_B_ETPU_B_CH_13_OUT |
        SIUL2_0_PORT53_ETPU_B_ETPU_B_CH_14_OUT |
        SIUL2_0_PORT55_ETPU_B_ETPU_B_CH_20_OUT |
        SIUL2_0_PORT61_LPUART2_LPUART2_TX_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT64_TRACE_TRACE_ETM_D0_OUT |
        SIUL2_0_PORT72_FLEXPWM_1_PWM_1_B_2_OUT |
        SIUL2_0_PORT73_FLEXPWM_1_PWM_1_A_3_OUT |
        SIUL2_0_PORT74_ETPU_A_ETPU_A_CH_23_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT81_ETPU_B_ETPU_B_CH_19_OUT |
        SIUL2_0_PORT83_LPUART3_LPUART3_TX_OUT |
        SIUL2_0_PORT84_ETPU_A_ETPU_A_CH_22_OUT |
        SIUL2_0_PORT85_ETPU_A_ETPU_A_CH_23_OUT |
        SIUL2_0_PORT87_EMIOS_0_EMIOS_0_CH_12_Z_OUT |
        SIUL2_0_PORT88_ETPU_A_ETPU_A_CH_12_OUT |
        SIUL2_0_PORT89_ADC0_ADC0_MA_2_OUT |
        SIUL2_0_PORT90_EMIOS_0_EMIOS_0_CH_5_Z_OUT |
        SIUL2_0_PORT91_FLEXPWM_1_PWM_1_X_2_OUT |
        SIUL2_0_PORT92_FLEXPWM_1_PWM_1_B_3_OUT |
        SIUL2_0_PORT93_FLEXPWM_1_PWM_1_A_2_OUT |
        SIUL2_0_PORT94_LCU1_LCU1_OUT3_OUT |
        SIUL2_0_PORT95_FLEXPWM_1_PWM_1_A_0_OUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT96_ETPU_A_ETPU_A_CH_7_OUT |
        SIUL2_0_PORT97_ETPU_B_ETPU_B_CH_12_OUT |
        SIUL2_0_PORT98_FLEXPWM_0_PWM_0_A_2_OUT |
        SIUL2_0_PORT99_FLEXPWM_0_PWM_0_B_2_OUT |
        SIUL2_0_PORT100_EMIOS_0_EMIOS_0_CH_23_Z_OUT |
        SIUL2_0_PORT101_TRGMUX_TRGMUX_OUT15_OUT |
        SIUL2_0_PORT104_ETPU_B_ETPU_B_CH_18_OUT |
        SIUL2_0_PORT105_ETPU_B_ETPU_B_CH_27_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT114_ETPU_A_ETPU_A_CH_17_OUT |
        SIUL2_0_PORT115_ETPU_A_ETPU_A_CH_19_OUT |
        SIUL2_0_PORT116_ETPU_B_ETPU_B_CH_3_OUT |
        SIUL2_0_PORT118_LCU0_LCU0_OUT7_OUT |
        SIUL2_0_PORT119_FLEXPWM_0_PWM_0_B_1_OUT |
        SIUL2_0_PORT120_LCU0_LCU0_OUT1_OUT |
        SIUL2_0_PORT121_ETPU_B_ETPU_B_CH_10_OUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT128_LCU0_LCU0_OUT11_OUT |
        SIUL2_0_PORT129_ETPU_A_ETPU_A_CH_2_OUT |
        SIUL2_0_PORT132_ETPU_B_ETPU_B_CH_6_OUT |
        SIUL2_0_PORT133_LPSPI1_LPSPI1_PCS3_OUT |
        SIUL2_0_PORT135_ADC0_ADC0_MA_0_OUT |
        SIUL2_0_PORT138_ETPU_A_ETPU_A_CH_10_OUT |
        SIUL2_0_PORT139_LPSPI1_LPSPI1_PCS4_OUT |
        SIUL2_0_PORT143_LCU1_LCU1_OUT8_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT144_ETPU_A_ETPU_A_CH_6_OUT |
        SIUL2_0_PORT149_PG_EXTWAKE_OUT |
        SIUL2_0_PORT154_ETPU_A_ETPU_A_CH_0_OUT |
        SIUL2_0_PORT155_EMIOS_0_EMIOS_0_CH_4_Z_OUT |
        SIUL2_0_PORT159_ETPU_B_ETPU_B_CH_11_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 160 - 175
        SIUL2_0_PORT160_ETPU_A_ETPU_A_CH_30_OUT |
        SIUL2_0_PORT161_ETPU_B_ETPU_B_CH_17_OUT |
        SIUL2_0_PORT162_ETPU_B_ETPU_B_CH_11_OUT |
        SIUL2_0_PORT168_ETPU_B_ETPU_B_CH_22_OUT |
        SIUL2_0_PORT172_EMIOS_0_EMIOS_0_CH_20_Z_OUT |
        SIUL2_0_PORT173_ETPU_B_ETPU_B_CH_27_OUT |
        SIUL2_0_PORT174_ETPU_B_ETPU_B_CH_18_OUT |
        SIUL2_0_PORT175_ETPU_B_ETPU_B_CH_20_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 176 - 191
        SIUL2_0_PORT176_ETPU_B_ETPU_B_CH_21_OUT |
        SIUL2_0_PORT178_ETPU_A_ETPU_A_CH_18_OUT |
        SIUL2_0_PORT180_ETPU_B_ETPU_B_CH_0_OUT |
        SIUL2_0_PORT181_LCU1_LCU1_OUT0_OUT |
        SIUL2_0_PORT183_ETPU_B_ETPU_B_CH_7_OUT |
        SIUL2_0_PORT185_TRACE_EVTO_0_OUT |
        SIUL2_0_PORT189_LPI2C1_LPI2C1_SCL_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 192 - 207
        SIUL2_0_PORT194_ETPU_A_ETPU_A_CH_22_OUT |
        SIUL2_0_PORT195_ETPU_B_ETPU_B_CH_31_OUT |
        SIUL2_0_PORT196_LCU0_LCU0_OUT2_OUT |
        SIUL2_0_PORT197_LCU0_LCU0_OUT3_OUT |
        SIUL2_0_PORT200_ETPU_A_ETPU_A_CH_25_OUT |
        SIUL2_0_PORT204_TRACE_EVTO_1_OUT |
        SIUL2_0_PORT205_ETPU_B_ETPU_B_CH_28_OUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT11_FUNC_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT2_EMIOS_0_EMIOS_0_CH_19_Z_OUT |
        SIUL2_0_PORT3_ETPU_A_ETPU_A_CH_3_OUT |
        SIUL2_0_PORT6_EMIOS_0_EMIOS_0_CH_13_Z_OUT |
        SIUL2_0_PORT7_LCU1_LCU1_OUT2_OUT |
        SIUL2_0_PORT8_LCU0_LCU0_OUT8_OUT |
        SIUL2_0_PORT9_ETPU_B_ETPU_B_CH_1_OUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT19_ETPU_A_ETPU_A_CH_4_OUT |
        SIUL2_0_PORT21_LCU1_LCU1_OUT9_OUT |
        SIUL2_0_PORT23_ETPU_B_ETPU_B_CH_13_OUT |
        SIUL2_0_PORT25_PG_EXTWAKE_OUT */
        (uint16)( SHL_PAD_U32(3U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT32_MSC0_DSPI_MSC0_PCS_0_OUT |
        SIUL2_0_PORT33_LCU1_LCU1_OUT9_OUT |
        SIUL2_0_PORT44_LCU0_LCU0_OUT8_OUT |
        SIUL2_0_PORT46_LCU0_LCU0_OUT11_OUT |
        SIUL2_0_PORT47_LCU0_LCU0_OUT2_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT48_ETPU_B_ETPU_B_CH_1_OUT |
        SIUL2_0_PORT49_ETPU_A_ETPU_A_CH_7_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT72_ADC0_ADC0_MA_1_OUT |
        SIUL2_0_PORT73_EMIOS_0_EMIOS_0_CH_8_Z_OUT |
        SIUL2_0_PORT74_FLEXPWM_1_PWM_1_X_3_OUT */
        (uint16)( SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT81_TRACE_TRACE_ETM_D3_OUT |
        SIUL2_0_PORT85_TRACE_EVTO_1_OUT |
        SIUL2_0_PORT87_LPSPI4_LPSPI4_PCS2_OUT |
        SIUL2_0_PORT88_LPSPI4_LPSPI4_PCS3_OUT |
        SIUL2_0_PORT91_MSC0_DSPI_MSC0_SOUT_OUT |
        SIUL2_0_PORT92_MSC0_DSPI_MSC0_PCS_1_OUT |
        SIUL2_0_PORT93_EMIOS_0_EMIOS_0_CH_10_Z_OUT |
        SIUL2_0_PORT94_FLEXPWM_1_PWM_1_A_1_OUT |
        SIUL2_0_PORT95_EMIOS_0_EMIOS_0_CH_14_Z_OUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT96_LCU1_LCU1_OUT11_OUT |
        SIUL2_0_PORT97_ETPU_A_ETPU_A_CH_2_OUT |
        SIUL2_0_PORT104_TRACE_TRACE_ETM_D2_OUT |
        SIUL2_0_PORT105_ETPU_A_ETPU_A_CH_19_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT114_LCU1_LCU1_OUT1_OUT |
        SIUL2_0_PORT115_LCU1_LCU1_OUT3_OUT |
        SIUL2_0_PORT116_LCU0_LCU0_OUT4_OUT |
        SIUL2_0_PORT117_FLEXPWM_0_PWM_0_X_2_OUT |
        SIUL2_0_PORT118_EMIOS_0_EMIOS_0_CH_19_Z_OUT |
        SIUL2_0_PORT119_LPSPI0_LPSPI0_PCS4_OUT |
        SIUL2_0_PORT120_FLEXPWM_0_PWM_0_A_0_OUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT128_LPCMP0_LPCMP0_OUT_OUT |
        SIUL2_0_PORT129_ETPU_B_ETPU_B_CH_2_OUT |
        SIUL2_0_PORT132_ETPU_A_ETPU_A_CH_12_OUT |
        SIUL2_0_PORT133_ETPU_B_ETPU_B_CH_5_OUT |
        SIUL2_0_PORT139_ETPU_B_ETPU_B_CH_22_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT154_ETPU_B_ETPU_B_CH_3_OUT |
        SIUL2_0_PORT156_LPI2C0_LPI2C0_SDAS_OUT */
        (uint16)( SHL_PAD_U32(10U) |
                  SHL_PAD_U32(12U)
                ),
        /* Pads 160 - 175
        SIUL2_0_PORT160_ETPU_B_ETPU_B_CH_12_OUT |
        SIUL2_0_PORT172_ETPU_B_ETPU_B_CH_26_OUT |
        SIUL2_0_PORT174_LCU0_LCU0_OUT4_OUT |
        SIUL2_0_PORT175_LCU0_LCU0_OUT6_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 176 - 191
        SIUL2_0_PORT176_LCU0_LCU0_OUT7_OUT |
        SIUL2_0_PORT178_LCU1_LCU1_OUT2_OUT |
        SIUL2_0_PORT180_ETPU_B_ETPU_B_CH_19_OUT |
        SIUL2_0_PORT181_EMIOS_0_EMIOS_0_CH_14_Z_OUT |
        SIUL2_0_PORT183_ETPU_A_ETPU_A_CH_13_OUT |
        SIUL2_0_PORT185_ETPU_B_ETPU_B_CH_0_OUT |
        SIUL2_0_PORT187_EMIOS_0_EMIOS_0_CH_11_Z_OUT |
        SIUL2_0_PORT189_ETPU_B_ETPU_B_CH_29_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 192 - 207
        SIUL2_0_PORT194_LCU1_LCU1_OUT6_OUT |
        SIUL2_0_PORT195_ETPU_A_ETPU_A_CH_2_OUT |
        SIUL2_0_PORT196_EMIOS_0_EMIOS_0_CH_20_Z_OUT |
        SIUL2_0_PORT197_EMIOS_0_EMIOS_0_CH_21_Z_OUT |
        SIUL2_0_PORT200_ETPU_B_ETPU_B_CH_14_OUT |
        SIUL2_0_PORT205_ETPU_A_ETPU_A_CH_20_OUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT12_FUNC_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT2_LPSPI1_LPSPI1_SIN_OUT |
        SIUL2_0_PORT7_FLEXPWM_1_PWM_1_B_1_OUT |
        SIUL2_0_PORT8_PG_EXTWAKE_OUT |
        SIUL2_0_PORT9_LCU0_LCU0_OUT9_OUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT19_TRACE_EVTO_0_OUT |
        SIUL2_0_PORT23_LCU0_LCU0_OUT0_OUT */
        (uint16)( SHL_PAD_U32(3U) |
                  SHL_PAD_U32(7U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT33_FLEXPWM_1_PWM_1_X_1_OUT |
        SIUL2_0_PORT44_FLEXPWM_0_PWM_0_X_0_OUT |
        SIUL2_0_PORT45_FLEXPWM_0_PWM_0_X_1_OUT |
        SIUL2_0_PORT46_FLEXPWM_0_PWM_0_X_3_OUT |
        SIUL2_0_PORT47_ETPU_A_ETPU_A_CH_4_OUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT48_LCU0_LCU0_OUT5_OUT */
        (uint16)( SHL_PAD_U32(0U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT72_EMIOS_0_EMIOS_0_CH_9_Z_OUT |
        SIUL2_0_PORT74_FXIO_FXIO_D18_OUT */
        (uint16)( SHL_PAD_U32(8U) |
                  SHL_PAD_U32(10U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT87_TRACE_EVTO_0_OUT |
        SIUL2_0_PORT94_LPCMP1_LPCMP1_OUT_OUT */
        (uint16)( SHL_PAD_U32(7U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT97_LCU1_LCU1_OUT10_OUT |
        SIUL2_0_PORT105_TRACE_TRACE_ETM_D1_OUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT114_MSC0_DSPI_MSC0_SCK_OUT |
        SIUL2_0_PORT116_ETPU_A_ETPU_A_CH_11_OUT |
        SIUL2_0_PORT117_LCU0_LCU0_OUT0_OUT |
        SIUL2_0_PORT120_LPSPI0_LPSPI0_PCS5_OUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(8U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT129_LPCMP1_LPCMP1_OUT_OUT |
        SIUL2_0_PORT133_ETPU_A_ETPU_A_CH_11_OUT |
        SIUL2_0_PORT139_ETPU_A_ETPU_A_CH_9_OUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT154_LCU0_LCU0_OUT10_OUT */
        (uint16)( SHL_PAD_U32(10U)
                ),
        /* Pads 160 - 175
        SIUL2_0_PORT174_EMIOS_0_EMIOS_0_CH_17_Z_OUT |
        SIUL2_0_PORT175_EMIOS_0_EMIOS_0_CH_22_Z_OUT */
        (uint16)( SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 176 - 191
        SIUL2_0_PORT176_MSC0_DSPI_MSC0_PCS_0_OUT |
        SIUL2_0_PORT178_MSC0_DSPI_MSC0_PCS_1_OUT |
        SIUL2_0_PORT180_LCU0_LCU0_OUT5_OUT |
        SIUL2_0_PORT181_MSC0_DSPI_MSC0_SOUT_OUT |
        SIUL2_0_PORT187_ETPU_B_ETPU_B_CH_30_OUT |
        SIUL2_0_PORT189_ETPU_A_ETPU_A_CH_0_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 192 - 207
        SIUL2_0_PORT195_ETPU_A_ETPU_A_CH_23_OUT |
        SIUL2_0_PORT200_LCU0_LCU0_OUT1_OUT |
        SIUL2_0_PORT205_LCU1_LCU1_OUT4_OUT */
        (uint16)( SHL_PAD_U32(3U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT13_FUNC_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT3_LCU0_LCU0_OUT3_OUT |
        SIUL2_0_PORT7_EMIOS_0_EMIOS_0_CH_11_Z_OUT */
        (uint16)( SHL_PAD_U32(3U) |
                  SHL_PAD_U32(7U)
                ),
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47
        SIUL2_0_PORT33_MSC0_DSPI_MSC0_SCK_OUT |
        SIUL2_0_PORT44_ETPU_A_ETPU_A_CH_0_OUT |
        SIUL2_0_PORT45_LCU0_LCU0_OUT1_OUT |
        SIUL2_0_PORT46_LCU0_LCU0_OUT3_OUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT48_ETPU_A_ETPU_A_CH_10_OUT */
        (uint16)( SHL_PAD_U32(0U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT74_ETPU_B_ETPU_B_CH_5_OUT */
        (uint16)( SHL_PAD_U32(10U)
                ),
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127
        SIUL2_0_PORT116_LPSPI0_LPSPI0_PCS6_OUT |
        SIUL2_0_PORT117_ETPU_A_ETPU_A_CH_2_OUT */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U)
                ),
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175
        SIUL2_0_PORT174_MSC0_DSPI_MSC0_PCS_0_OUT |
        SIUL2_0_PORT175_MSC0_DSPI_MSC0_PCS_1_OUT */
        (uint16)( SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 176 - 191
        SIUL2_0_PORT180_EMIOS_0_EMIOS_0_CH_13_Z_OUT |
        SIUL2_0_PORT183_MSC0_DSPI_MSC0_PCS_0_OUT |
        SIUL2_0_PORT189_ETPU_A_ETPU_A_CH_21_OUT */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 192 - 207
        SIUL2_0_PORT195_LCU1_LCU1_OUT7_OUT |
        SIUL2_0_PORT200_EMIOS_0_EMIOS_0_CH_22_Z_OUT |
        SIUL2_0_PORT205_EMIOS_0_EMIOS_0_CH_19_Z_OUT */
        (uint16)( SHL_PAD_U32(3U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT14_FUNC_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT3_FLEXPWM_0_PWM_0_A_1_OUT */
        (uint16)( SHL_PAD_U32(3U)
                ),
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47
        SIUL2_0_PORT45_ETPU_A_ETPU_A_CH_1_OUT |
        SIUL2_0_PORT46_ETPU_A_ETPU_A_CH_3_OUT */
        (uint16)( SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127
        SIUL2_0_PORT115_EMIOS_0_EMIOS_0_CH_0_Z_OUT |
        SIUL2_0_PORT116_EMIOS_0_EMIOS_0_CH_17_Z_OUT |
        SIUL2_0_PORT117_LPSPI0_LPSPI0_PCS7_OUT */
        (uint16)( SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U)
                ),
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191
        SIUL2_0_PORT189_LCU1_LCU1_OUT5_OUT */
        (uint16)( SHL_PAD_U32(13U)
                ),
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT15_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47
        SIUL2_0_PORT46_MSC0_DSPI_MSC0_PCS_0_OUT */
        (uint16)( SHL_PAD_U32(14U)
                ),
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127
        SIUL2_0_PORT115_MSC0_DSPI_MSC0_PCS_0_OUT |
        SIUL2_0_PORT117_MSC0_DSPI_MSC0_PCS_1_OUT */
        (uint16)( SHL_PAD_U32(3U) |
                  SHL_PAD_U32(5U)
                ),
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ANALOG_INPUT_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT0_ADC5_ADC5_P6_IN |
        SIUL2_0_PORT0_ADC6_ADC6_P4_IN |
        SIUL2_0_PORT0_SDADC_3_SDADC3_AN_3_IN |
        SIUL2_0_PORT1_ADC6_ADC6_P0_IN |
        SIUL2_0_PORT1_ADC4_ADC4_P4_IN |
        SIUL2_0_PORT1_SDADC_3_SDADC3_AN_1_IN |
        SIUL2_0_PORT2_ADC0_ADC0_X_0_IN |
        SIUL2_0_PORT2_ADC0_ADC0_S15_IN |
        SIUL2_0_PORT3_ADC2_ADC2_S13_IN |
        SIUL2_0_PORT3_ADC1_ADC1_S15_IN |
        SIUL2_0_PORT4_ADC1_ADC1_S15_IN |
        SIUL2_0_PORT6_ADC4_ADC4_S8_IN |
        SIUL2_0_PORT7_ADC4_ADC4_S9_IN |
        SIUL2_0_PORT8_ADC2_ADC2_P5_IN |
        SIUL2_0_PORT8_ADC3_ADC3_P1_IN |
        SIUL2_0_PORT9_ADC0_ADC0_P7_IN |
        SIUL2_0_PORT9_ADC2_ADC2_P6_IN |
        SIUL2_0_PORT15_ADC3_ADC3_P4_IN |
        SIUL2_0_PORT15_ADC4_ADC4_P1_IN |
        SIUL2_0_PORT15_SDADC_0_SDADC0_AN_2_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(0U) |
                  SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(15U) |
                  SHL_PAD_U32(15U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT16_ADC4_ADC4_P2_IN |
        SIUL2_0_PORT16_ADC6_ADC6_P6_IN |
        SIUL2_0_PORT16_SDADC_1_SDADC1_AN_0_IN |
        SIUL2_0_PORT17_ADC0_ADC0_S23_IN |
        SIUL2_0_PORT17_ADC1_ADC1_S23_IN |
        SIUL2_0_PORT18_ADC3_ADC3_S9_IN |
        SIUL2_0_PORT18_ADC1_ADC1_P1_IN |
        SIUL2_0_PORT19_ADC2_ADC2_S11_IN |
        SIUL2_0_PORT19_ADC0_ADC0_P2_IN |
        SIUL2_0_PORT20_ADC1_ADC1_P3_IN |
        SIUL2_0_PORT20_ADC3_ADC3_S8_IN |
        SIUL2_0_PORT21_ADC0_ADC0_S10_IN |
        SIUL2_0_PORT21_ADC2_ADC2_P4_IN |
        SIUL2_0_PORT22_ADC0_ADC0_S11_IN |
        SIUL2_0_PORT22_ADC1_ADC1_P2_IN |
        SIUL2_0_PORT24_ADC2_ADC2_P1_IN |
        SIUL2_0_PORT24_ADC1_ADC1_S10_IN |
        SIUL2_0_PORT25_ADC0_ADC0_S8_IN |
        SIUL2_0_PORT25_ADC2_ADC2_P0_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(0U) |
                  SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT32_ADC4_ADC4_S10_IN |
        SIUL2_0_PORT33_ADC4_ADC4_S11_IN |
        SIUL2_0_PORT40_ADC6_ADC6_P1_IN |
        SIUL2_0_PORT40_ADC4_ADC4_P5_IN |
        SIUL2_0_PORT40_SDADC_2_SDADC2_AN_3_IN |
        SIUL2_0_PORT41_ADC4_ADC4_P7_IN |
        SIUL2_0_PORT41_ADC6_ADC6_P3_IN |
        SIUL2_0_PORT41_SDADC_2_SDADC2_AN_0_IN |
        SIUL2_0_PORT42_ADC0_ADC0_X_2_IN |
        SIUL2_0_PORT43_ADC0_ADC0_X_3_IN |
        SIUL2_0_PORT43_ADC0_ADC0_S14_IN |
        SIUL2_0_PORT44_ADC1_ADC1_X_1_IN |
        SIUL2_0_PORT44_ADC0_ADC0_S18_IN |
        SIUL2_0_PORT45_ADC0_ADC0_S19_IN |
        SIUL2_0_PORT45_ADC1_ADC1_S19_IN |
        SIUL2_0_PORT45_ADC2_ADC2_S19_IN |
        SIUL2_0_PORT46_ADC0_ADC0_S21_IN |
        SIUL2_0_PORT46_ADC1_ADC1_S21_IN |
        SIUL2_0_PORT46_ADC2_ADC2_S21_IN |
        SIUL2_0_PORT47_ADC0_ADC0_S20_IN |
        SIUL2_0_PORT47_ADC1_ADC1_S22_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT48_ADC2_ADC2_S22_IN |
        SIUL2_0_PORT48_ADC0_ADC0_X_1_IN |
        SIUL2_0_PORT49_ADC2_ADC2_S23_IN |
        SIUL2_0_PORT49_ADC1_ADC1_X_3_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(1U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT70_ADC3_ADC3_P6_IN |
        SIUL2_0_PORT70_ADC5_ADC5_P4_IN |
        SIUL2_0_PORT70_SDADC_1_SDADC1_AN_2_IN |
        SIUL2_0_PORT71_ADC3_ADC3_P7_IN |
        SIUL2_0_PORT71_ADC5_ADC5_P5_IN |
        SIUL2_0_PORT71_SDADC_1_SDADC1_AN_3_IN |
        SIUL2_0_PORT72_ADC5_ADC5_S9_IN |
        SIUL2_0_PORT73_ADC6_ADC6_S8_IN |
        SIUL2_0_PORT74_ADC5_ADC5_S10_IN |
        SIUL2_0_PORT75_ADC5_ADC5_S11_IN */
        (uint16)( SHL_PAD_U32(6U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT88_ADC6_ADC6_S11_IN |
        SIUL2_0_PORT89_ADC6_ADC6_S10_IN |
        SIUL2_0_PORT92_ADC6_ADC6_S9_IN |
        SIUL2_0_PORT93_ADC5_ADC5_S8_IN |
        SIUL2_0_PORT95_ADC3_ADC3_S10_IN */
        (uint16)( SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT96_ADC2_ADC2_S8_IN |
        SIUL2_0_PORT96_ADC0_ADC0_P1_IN |
        SIUL2_0_PORT97_ADC1_ADC1_S13_IN |
        SIUL2_0_PORT97_ADC0_ADC0_P0_IN |
        SIUL2_0_PORT98_ADC1_ADC1_S16_IN |
        SIUL2_0_PORT98_ADC2_ADC2_S15_IN |
        SIUL2_0_PORT99_ADC1_ADC1_S17_IN |
        SIUL2_0_PORT99_ADC2_ADC2_S16_IN |
        SIUL2_0_PORT100_ADC0_ADC0_S17_IN |
        SIUL2_0_PORT100_ADC2_ADC2_S17_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(4U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT116_ADC0_ADC0_S22_IN |
        SIUL2_0_PORT116_ADC1_ADC1_X_2_IN |
        SIUL2_0_PORT117_ADC1_ADC1_S20_IN |
        SIUL2_0_PORT117_ADC2_ADC2_S20_IN |
        SIUL2_0_PORT118_ADC2_ADC2_S18_IN |
        SIUL2_0_PORT118_ADC1_ADC1_S18_IN |
        SIUL2_0_PORT119_ADC0_ADC0_S16_IN |
        SIUL2_0_PORT119_ADC2_ADC2_S14_IN |
        SIUL2_0_PORT120_ADC1_ADC1_S14_IN |
        SIUL2_0_PORT120_ADC1_ADC1_X_0_IN |
        SIUL2_0_PORT122_ADC5_ADC5_P3_IN |
        SIUL2_0_PORT122_ADC6_ADC6_P2_IN |
        SIUL2_0_PORT122_SDADC_2_SDADC2_AN_1_IN |
        SIUL2_0_PORT123_ADC4_ADC4_P6_IN |
        SIUL2_0_PORT123_ADC5_ADC5_P2_IN |
        SIUL2_0_PORT123_SDADC_2_SDADC2_AN_2_IN |
        SIUL2_0_PORT124_ADC5_ADC5_P1_IN |
        SIUL2_0_PORT124_ADC6_ADC6_P7_IN |
        SIUL2_0_PORT124_SDADC_3_SDADC3_AN_0_IN |
        SIUL2_0_PORT125_ADC5_ADC5_P7_IN |
        SIUL2_0_PORT125_ADC6_ADC6_P5_IN |
        SIUL2_0_PORT125_SDADC_3_SDADC3_AN_2_IN */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT128_ADC3_ADC3_P0_IN |
        SIUL2_0_PORT128_ADC1_ADC1_P4_IN |
        SIUL2_0_PORT129_ADC1_ADC1_P6_IN |
        SIUL2_0_PORT129_ADC2_ADC2_P7_IN |
        SIUL2_0_PORT130_ADC3_ADC3_P2_IN |
        SIUL2_0_PORT130_SDADC_0_SDADC0_AN_0_IN |
        SIUL2_0_PORT130_ADC2_ADC2_S12_IN |
        SIUL2_0_PORT132_ADC1_ADC1_S9_IN |
        SIUL2_0_PORT132_ADC2_ADC2_P2_IN |
        SIUL2_0_PORT133_ADC1_ADC1_S8_IN |
        SIUL2_0_PORT133_ADC2_ADC2_P3_IN |
        SIUL2_0_PORT134_ADC3_ADC3_P3_IN |
        SIUL2_0_PORT134_ADC4_ADC4_P0_IN |
        SIUL2_0_PORT134_SDADC_0_SDADC0_AN_1_IN |
        SIUL2_0_PORT138_ADC1_ADC1_S11_IN |
        SIUL2_0_PORT138_ADC0_ADC0_P5_IN |
        SIUL2_0_PORT139_ADC0_ADC0_S9_IN |
        SIUL2_0_PORT139_ADC1_ADC1_P5_IN |
        SIUL2_0_PORT143_ADC2_ADC2_S9_IN |
        SIUL2_0_PORT143_ADC0_ADC0_P3_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(15U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT144_ADC2_ADC2_S10_IN |
        SIUL2_0_PORT144_ADC0_ADC0_P4_IN |
        SIUL2_0_PORT145_ADC5_ADC5_P0_IN |
        SIUL2_0_PORT145_ADC4_ADC4_P3_IN |
        SIUL2_0_PORT145_SDADC_1_SDADC1_AN_1_IN |
        SIUL2_0_PORT146_ADC3_ADC3_P5_IN |
        SIUL2_0_PORT146_SDADC_0_SDADC0_AN_3_IN |
        SIUL2_0_PORT146_ADC1_ADC1_S12_IN |
        SIUL2_0_PORT151_ADC1_ADC1_P7_IN |
        SIUL2_0_PORT151_ADC0_ADC0_S12_IN |
        SIUL2_0_PORT154_ADC1_ADC1_P0_IN |
        SIUL2_0_PORT154_ADC0_ADC0_P6_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(10U)
                ),
        /* Pads 160 - 175
        SIUL2_0_PORT166_ADC3_ADC3_S11_IN |
        SIUL2_0_PORT166_ADC0_ADC0_S13_IN */
        (uint16)( SHL_PAD_U32(6U) |
                  SHL_PAD_U32(6U)
                ),
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ONLY_OUTPUT_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ONLY_INPUT_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT1_WKPU_WKPU_5_IN |
        SIUL2_0_PORT2_WKPU_WKPU_0_IN |
        SIUL2_0_PORT2_LPCMP1_LPCMP1_IN2_IN |
        SIUL2_0_PORT5_SYSTEM_RESET_B_IN |
        SIUL2_0_PORT6_WKPU_WKPU_15_IN |
        SIUL2_0_PORT8_WKPU_WKPU_23_IN |
        SIUL2_0_PORT9_WKPU_WKPU_21_IN |
        SIUL2_0_PORT15_WKPU_WKPU_20_IN */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT16_WKPU_WKPU_31_IN |
        SIUL2_0_PORT20_WKPU_WKPU_59_IN |
        SIUL2_0_PORT25_WKPU_WKPU_34_IN |
        SIUL2_0_PORT26_WKPU_WKPU_35_IN |
        SIUL2_0_PORT30_WKPU_WKPU_37_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT32_WKPU_WKPU_7_IN |
        SIUL2_0_PORT34_WKPU_WKPU_8_IN |
        SIUL2_0_PORT40_WKPU_WKPU_25_IN |
        SIUL2_0_PORT41_WKPU_WKPU_17_IN |
        SIUL2_0_PORT42_LPCMP1_LPCMP1_IN1_IN |
        SIUL2_0_PORT43_WKPU_WKPU_16_IN |
        SIUL2_0_PORT43_LPCMP1_LPCMP1_IN0_IN |
        SIUL2_0_PORT44_WKPU_WKPU_12_IN |
        SIUL2_0_PORT45_WKPU_WKPU_11_IN |
        SIUL2_0_PORT47_WKPU_WKPU_33_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT48_WKPU_WKPU_13_IN |
        SIUL2_0_PORT49_WKPU_WKPU_14_IN |
        SIUL2_0_PORT51_WKPU_WKPU_38_IN |
        SIUL2_0_PORT53_WKPU_WKPU_39_IN |
        SIUL2_0_PORT55_WKPU_WKPU_40_IN |
        SIUL2_0_PORT58_WKPU_WKPU_41_IN |
        SIUL2_0_PORT60_WKPU_WKPU_42_IN |
        SIUL2_0_PORT61_WKPU_WKPU_2_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT65_WKPU_WKPU_5_IN |
        SIUL2_0_PORT66_LPCMP0_LPCMP0_IN2_IN |
        SIUL2_0_PORT67_LPCMP0_LPCMP0_IN4_IN |
        SIUL2_0_PORT68_LPCMP1_LPCMP1_IN3_IN |
        SIUL2_0_PORT70_WKPU_WKPU_3_IN |
        SIUL2_0_PORT71_WKPU_WKPU_2_IN |
        SIUL2_0_PORT73_WKPU_WKPU_10_IN |
        SIUL2_0_PORT75_WKPU_WKPU_18_IN |
        SIUL2_0_PORT78_WKPU_WKPU_4_IN */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT80_WKPU_WKPU_3_IN |
        SIUL2_0_PORT82_WKPU_WKPU_36_IN |
        SIUL2_0_PORT84_WKPU_WKPU_43_IN |
        SIUL2_0_PORT87_WKPU_WKPU_44_IN |
        SIUL2_0_PORT88_WKPU_WKPU_46_IN |
        SIUL2_0_PORT89_WKPU_WKPU_45_IN |
        SIUL2_0_PORT90_WKPU_WKPU_48_IN |
        SIUL2_0_PORT93_WKPU_WKPU_47_IN |
        SIUL2_0_PORT95_WKPU_WKPU_49_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT96_WKPU_WKPU_6_IN |
        SIUL2_0_PORT98_WKPU_WKPU_9_IN |
        SIUL2_0_PORT99_SYSTEM_NMI_B_IN |
        SIUL2_0_PORT99_WKPU_WKPU_1_IN |
        SIUL2_0_PORT100_WKPU_WKPU_22_IN |
        SIUL2_0_PORT102_LPCMP0_LPCMP0_IN7_IN |
        SIUL2_0_PORT103_LPCMP0_LPCMP0_IN6_IN |
        SIUL2_0_PORT109_WKPU_WKPU_24_IN |
        SIUL2_0_PORT111_LPCMP0_LPCMP0_IN1_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT112_LPCMP0_LPCMP0_IN5_IN |
        SIUL2_0_PORT116_WKPU_WKPU_54_IN |
        SIUL2_0_PORT119_WKPU_WKPU_50_IN |
        SIUL2_0_PORT123_WKPU_WKPU_51_IN |
        SIUL2_0_PORT125_WKPU_WKPU_52_IN |
        SIUL2_0_PORT127_WKPU_WKPU_53_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT128_WKPU_WKPU_26_IN |
        SIUL2_0_PORT130_WKPU_WKPU_27_IN |
        SIUL2_0_PORT133_WKPU_WKPU_32_IN |
        SIUL2_0_PORT134_WKPU_WKPU_29_IN |
        SIUL2_0_PORT136_LPCMP0_LPCMP0_IN3_IN |
        SIUL2_0_PORT137_LPCMP0_LPCMP0_IN0_IN |
        SIUL2_0_PORT138_WKPU_WKPU_25_IN |
        SIUL2_0_PORT139_WKPU_WKPU_28_IN |
        SIUL2_0_PORT142_WKPU_WKPU_30_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT144_WKPU_WKPU_19_IN |
        SIUL2_0_PORT146_WKPU_WKPU_55_IN |
        SIUL2_0_PORT149_WKPU_WKPU_56_IN |
        SIUL2_0_PORT151_WKPU_WKPU_57_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U)
                ),
        /* Pads 160 - 175
        SIUL2_0_PORT161_WKPU_WKPU_20_IN |
        SIUL2_0_PORT163_WKPU_WKPU_51_IN |
        SIUL2_0_PORT173_WKPU_WKPU_29_IN */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 176 - 191
        SIUL2_0_PORT179_WKPU_WKPU_31_IN |
        SIUL2_0_PORT181_WKPU_WKPU_17_IN |
        SIUL2_0_PORT184_WKPU_WKPU_54_IN |
        SIUL2_0_PORT186_WKPU_WKPU_57_IN |
        SIUL2_0_PORT190_WKPU_WKPU_58_IN */
        (uint16)( SHL_PAD_U32(3U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 192 - 207
        SIUL2_0_PORT201_WKPU_WKPU_55_IN |
        SIUL2_0_PORT206_WKPU_WKPU_52_IN */
        (uint16)( SHL_PAD_U32(9U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 208 - 223
        SIUL2_0_PORT217_WKPU_WKPU_45_IN */
        (uint16)( SHL_PAD_U32(9U)
                ),
        /* Pads 224 - 239
        SIUL2_0_PORT231_WKPU_WKPU_8_IN |
        SIUL2_0_PORT233_WKPU_WKPU_27_IN |
        SIUL2_0_PORT235_WKPU_WKPU_18_IN */
        (uint16)( SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(11U)
                )
    }
    ,
    /*  Mode PORT_INPUT1_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT0_SIUL_EIRQ_0_IN |
        SIUL2_0_PORT1_SIUL_EIRQ_1_IN |
        SIUL2_0_PORT2_SIUL_EIRQ_2_IN |
        SIUL2_0_PORT3_SIUL_EIRQ_3_IN |
        SIUL2_0_PORT4_SIUL_EIRQ_4_IN |
        SIUL2_0_PORT5_SIUL_EIRQ_5_IN |
        SIUL2_0_PORT6_CAN0_CAN0_RX_IN |
        SIUL2_0_PORT7_SIUL_EIRQ_7_IN |
        SIUL2_0_PORT8_SIUL_EIRQ_16_IN |
        SIUL2_0_PORT9_SIUL_EIRQ_17_IN |
        SIUL2_0_PORT10_SIUL_EIRQ_18_IN |
        SIUL2_0_PORT14_SIUL_EIRQ_22_IN |
        SIUL2_0_PORT15_SIUL_EIRQ_23_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT16_SIUL_EIRQ_4_IN |
        SIUL2_0_PORT17_EMIOS_0_EMIOS_0_CH_6_Z_IN |
        SIUL2_0_PORT18_SIUL_EIRQ_0_IN |
        SIUL2_0_PORT19_SIUL_EIRQ_1_IN |
        SIUL2_0_PORT20_SIUL_EIRQ_2_IN |
        SIUL2_0_PORT21_ETPU_B_ETPU_B_CH_11_IN |
        SIUL2_0_PORT22_CAN1_CAN1_RX_IN |
        SIUL2_0_PORT23_ETPU_A_ETPU_A_CH_24_IN |
        SIUL2_0_PORT24_FXIO_FXIO_D3_IN |
        SIUL2_0_PORT25_SIUL_EIRQ_5_IN |
        SIUL2_0_PORT26_EMIOS_0_EMIOS_0_CH_9_Z_IN |
        SIUL2_0_PORT29_EMAC_EMAC_PPS2_IN |
        SIUL2_0_PORT30_SIUL_EIRQ_7_IN |
        SIUL2_0_PORT31_EMIOS_0_EMIOS_0_CH_14_Z_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT32_CAN0_CAN0_RX_IN |
        SIUL2_0_PORT33_SIUL_EIRQ_9_IN |
        SIUL2_0_PORT34_CAN4_CAN4_RX_IN |
        SIUL2_0_PORT35_SIUL_EIRQ_11_IN |
        SIUL2_0_PORT36_SIUL_EIRQ_12_IN |
        SIUL2_0_PORT37_SIUL_EIRQ_13_IN |
        SIUL2_0_PORT40_SIUL_EIRQ_14_IN |
        SIUL2_0_PORT41_SIUL_EIRQ_15_IN |
        SIUL2_0_PORT42_SIUL_EIRQ_24_IN |
        SIUL2_0_PORT43_SIUL_EIRQ_25_IN |
        SIUL2_0_PORT44_FLEXPWM_0_PWM_0_X_0_IN |
        SIUL2_0_PORT45_FLEXPWM_0_PWM_0_X_1_IN |
        SIUL2_0_PORT46_SIUL_EIRQ_28_IN |
        SIUL2_0_PORT47_FLEXPWM_0_PWM_0_FAULT_0_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT48_FLEXPWM_0_PWM_0_FAULT_1_IN |
        SIUL2_0_PORT49_FLEXPWM_0_PWM_0_FAULT_3_IN |
        SIUL2_0_PORT50_EMIOS_0_EMIOS_0_CH_15_Z_IN |
        SIUL2_0_PORT51_EMIOS_0_EMIOS_0_CH_15_Z_IN |
        SIUL2_0_PORT52_ETPU_A_ETPU_A_CH_24_IN |
        SIUL2_0_PORT53_ETPU_A_ETPU_A_CH_25_IN |
        SIUL2_0_PORT54_SIUL_EIRQ_9_IN |
        SIUL2_0_PORT55_ETPU_A_ETPU_A_CH_30_IN |
        SIUL2_0_PORT56_SIUL_EIRQ_11_IN |
        SIUL2_0_PORT57_ETPU_A_ETPU_A_CH_31_IN |
        SIUL2_0_PORT58_SIUL_EIRQ_13_IN |
        SIUL2_0_PORT59_EMIOS_0_EMIOS_0_CH_23_Z_IN |
        SIUL2_0_PORT60_SIUL_EIRQ_14_IN |
        SIUL2_0_PORT61_CAN4_CAN4_RX_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT64_SIUL_EIRQ_0_IN |
        SIUL2_0_PORT65_CAN3_CAN3_RX_IN |
        SIUL2_0_PORT66_CAN0_CAN0_RX_IN |
        SIUL2_0_PORT67_SIUL_EIRQ_3_IN |
        SIUL2_0_PORT68_SIUL_EIRQ_4_IN |
        SIUL2_0_PORT69_SIUL_EIRQ_5_IN |
        SIUL2_0_PORT70_CAN2_CAN2_RX_IN |
        SIUL2_0_PORT71_SIUL_EIRQ_7_IN |
        SIUL2_0_PORT72_SIUL_EIRQ_16_IN |
        SIUL2_0_PORT73_CAN1_CAN1_RX_IN |
        SIUL2_0_PORT74_SIUL_EIRQ_18_IN |
        SIUL2_0_PORT75_FLEXPWM_1_PWM_1_FAULT_1_IN |
        SIUL2_0_PORT76_SIUL_EIRQ_20_IN |
        SIUL2_0_PORT77_SIUL_EIRQ_21_IN |
        SIUL2_0_PORT78_CAN2_CAN2_RX_IN |
        SIUL2_0_PORT79_SIUL_EIRQ_23_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT80_CAN2_CAN2_RX_IN |
        SIUL2_0_PORT81_ETPU_A_ETPU_A_CH_29_IN |
        SIUL2_0_PORT82_FXIO_FXIO_D6_IN |
        SIUL2_0_PORT83_FXIO_FXIO_D13_IN |
        SIUL2_0_PORT84_SIUL_EIRQ_16_IN |
        SIUL2_0_PORT85_SIUL_EIRQ_17_IN |
        SIUL2_0_PORT87_CAN0_CAN0_RX_IN |
        SIUL2_0_PORT88_FLEXPWM_1_PWM_1_FAULT_3_IN |
        SIUL2_0_PORT89_FLEXPWM_1_PWM_1_FAULT_2_IN |
        SIUL2_0_PORT90_FLEXPWM_1_PWM_1_FAULT_0_IN |
        SIUL2_0_PORT91_FLEXPWM_1_PWM_1_X_2_IN |
        SIUL2_0_PORT92_FXIO_FXIO_D2_IN |
        SIUL2_0_PORT93_CAN3_CAN3_RX_IN |
        SIUL2_0_PORT94_FXIO_FXIO_D0_IN |
        SIUL2_0_PORT95_CAN4_CAN4_RX_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT96_ETPU_B_ETPU_B_CH_17_IN |
        SIUL2_0_PORT97_ETPU_B_ETPU_B_CH_12_IN |
        SIUL2_0_PORT98_SIUL_EIRQ_10_IN |
        SIUL2_0_PORT99_SIUL_EIRQ_11_IN |
        SIUL2_0_PORT100_SIUL_EIRQ_12_IN |
        SIUL2_0_PORT101_ETPU_A_ETPU_A_CH_27_IN |
        SIUL2_0_PORT102_ETPU_A_ETPU_A_CH_26_IN |
        SIUL2_0_PORT103_SIUL_EIRQ_15_IN |
        SIUL2_0_PORT104_ETPU_A_ETPU_A_CH_28_IN |
        SIUL2_0_PORT105_SIUL_EIRQ_25_IN |
        SIUL2_0_PORT106_SIUL_EIRQ_26_IN |
        SIUL2_0_PORT107_SIUL_EIRQ_27_IN |
        SIUL2_0_PORT108_SIUL_EIRQ_28_IN |
        SIUL2_0_PORT109_SIUL_EIRQ_29_IN |
        SIUL2_0_PORT110_SIUL_EIRQ_30_IN |
        SIUL2_0_PORT111_CAN3_CAN3_RX_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT112_EMIOS_0_EMIOS_0_CH_1_Z_IN |
        SIUL2_0_PORT113_CAN5_CAN5_RX_IN |
        SIUL2_0_PORT114_EMIOS_0_EMIOS_0_CH_15_Z_IN |
        SIUL2_0_PORT115_CAN2_CAN2_RX_IN |
        SIUL2_0_PORT116_FLEXPWM_0_PWM_0_FAULT_2_IN |
        SIUL2_0_PORT117_FLEXPWM_0_PWM_0_X_2_IN |
        SIUL2_0_PORT118_SIUL_EIRQ_27_IN |
        SIUL2_0_PORT119_SIUL_EIRQ_28_IN |
        SIUL2_0_PORT120_SIUL_EIRQ_29_IN |
        SIUL2_0_PORT121_ETPU_B_ETPU_B_CH_10_IN |
        SIUL2_0_PORT122_EMIOS_0_EMIOS_0_CH_23_Z_IN |
        SIUL2_0_PORT123_SIUL_EIRQ_30_IN |
        SIUL2_0_PORT124_SIUL_EIRQ_31_IN |
        SIUL2_0_PORT125_CAN0_CAN0_RX_IN |
        SIUL2_0_PORT126_LPSPI5_LPSPI5_PCS3_IN |
        SIUL2_0_PORT127_CAN1_CAN1_RX_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT128_SIUL_EIRQ_0_IN |
        SIUL2_0_PORT129_SIUL_EIRQ_1_IN |
        SIUL2_0_PORT130_SIUL_EIRQ_2_IN |
        SIUL2_0_PORT132_SIUL_EIRQ_4_IN |
        SIUL2_0_PORT133_SIUL_EIRQ_5_IN |
        SIUL2_0_PORT134_SIUL_EIRQ_6_IN |
        SIUL2_0_PORT135_EMIOS_0_EMIOS_0_CH_7_Z_IN |
        SIUL2_0_PORT136_SIUL_EIRQ_7_IN |
        SIUL2_0_PORT137_SIUL_EIRQ_8_IN |
        SIUL2_0_PORT138_SIUL_EIRQ_9_IN |
        SIUL2_0_PORT139_SIUL_EIRQ_10_IN |
        SIUL2_0_PORT142_CAN4_CAN4_RX_IN |
        SIUL2_0_PORT143_ETPU_B_ETPU_B_CH_10_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT144_SIUL_EIRQ_15_IN |
        SIUL2_0_PORT145_FXIO_FXIO_D5_IN |
        SIUL2_0_PORT146_FXIO_FXIO_D4_IN |
        SIUL2_0_PORT147_EMIOS_0_EMIOS_0_CH_22_Z_IN |
        SIUL2_0_PORT148_EMIOS_0_EMIOS_0_CH_2_Z_IN |
        SIUL2_0_PORT149_LPSPI4_LPSPI4_SIN_IN |
        SIUL2_0_PORT151_EMIOS_0_EMIOS_0_CH_4_Z_IN |
        SIUL2_0_PORT154_LPSPI1_LPSPI1_PCS5_IN |
        SIUL2_0_PORT155_EMIOS_0_EMIOS_0_CH_4_Z_IN |
        SIUL2_0_PORT156_LPI2C0_LPI2C0_SDAS_IN |
        SIUL2_0_PORT157_CAN3_CAN3_RX_IN |
        SIUL2_0_PORT158_ETPU_B_ETPU_B_CH_10_IN |
        SIUL2_0_PORT159_ETPU_A_ETPU_A_CH_31_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 160 - 175
        SIUL2_0_PORT160_ETPU_A_ETPU_A_CH_30_IN |
        SIUL2_0_PORT161_ETPU_A_ETPU_A_CH_29_IN |
        SIUL2_0_PORT162_ETPU_B_ETPU_B_CH_11_IN |
        SIUL2_0_PORT163_ETPU_A_ETPU_A_CH_28_IN |
        SIUL2_0_PORT164_ETPU_B_ETPU_B_CH_12_IN |
        SIUL2_0_PORT165_ETPU_A_ETPU_A_CH_27_IN |
        SIUL2_0_PORT166_SIUL_EIRQ_6_IN |
        SIUL2_0_PORT167_ETPU_B_ETPU_B_CH_17_IN |
        SIUL2_0_PORT168_SIUL_EIRQ_16_IN |
        SIUL2_0_PORT169_SIUL_EIRQ_17_IN |
        SIUL2_0_PORT170_SIUL_EIRQ_18_IN |
        SIUL2_0_PORT171_SIUL_EIRQ_19_IN |
        SIUL2_0_PORT172_SIUL_EIRQ_20_IN |
        SIUL2_0_PORT173_SIUL_EIRQ_21_IN |
        SIUL2_0_PORT174_ETPU_A_ETPU_A_CH_28_IN |
        SIUL2_0_PORT175_ETPU_A_ETPU_A_CH_30_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 176 - 191
        SIUL2_0_PORT176_ETPU_A_ETPU_A_CH_31_IN |
        SIUL2_0_PORT177_SDADC_1_EXT_DATA1_IN |
        SIUL2_0_PORT178_LPSPI3_LPSPI3_PCS1_IN |
        SIUL2_0_PORT179_EMIOS_0_EMIOS_0_CH_5_Z_IN |
        SIUL2_0_PORT180_ETPU_A_ETPU_A_CH_29_IN |
        SIUL2_0_PORT181_CAN0_CAN0_RX_IN |
        SIUL2_0_PORT183_LPSPI3_LPSPI3_PCS3_IN |
        SIUL2_0_PORT184_EMIOS_0_EMIOS_0_CH_8_Z_IN |
        SIUL2_0_PORT185_EMIOS_0_EMIOS_0_CH_9_Z_IN |
        SIUL2_0_PORT186_CAN2_CAN2_RX_IN |
        SIUL2_0_PORT187_EMIOS_0_EMIOS_0_CH_11_Z_IN |
        SIUL2_0_PORT188_FXIO_FXIO_D7_IN |
        SIUL2_0_PORT189_EMIOS_0_EMIOS_0_CH_13_Z_IN |
        SIUL2_0_PORT190_CAN3_CAN3_RX_IN |
        SIUL2_0_PORT191_EMIOS_0_EMIOS_0_CH_15_Z_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 192 - 207
        SIUL2_0_PORT192_SIUL_EIRQ_8_IN |
        SIUL2_0_PORT193_SIUL_EIRQ_9_IN |
        SIUL2_0_PORT194_SIUL_EIRQ_10_IN |
        SIUL2_0_PORT195_SIUL_EIRQ_11_IN |
        SIUL2_0_PORT196_ETPU_A_ETPU_A_CH_26_IN |
        SIUL2_0_PORT197_ETPU_A_ETPU_A_CH_27_IN |
        SIUL2_0_PORT198_SIUL_EIRQ_14_IN |
        SIUL2_0_PORT199_SIUL_EIRQ_15_IN |
        SIUL2_0_PORT200_ETPU_A_ETPU_A_CH_25_IN |
        SIUL2_0_PORT201_ETPU_A_ETPU_A_CH_24_IN |
        SIUL2_0_PORT202_SIUL_EIRQ_26_IN |
        SIUL2_0_PORT203_SIUL_EIRQ_27_IN |
        SIUL2_0_PORT204_ETPU_A_ETPU_A_CH_26_IN |
        SIUL2_0_PORT205_SIUL_EIRQ_29_IN |
        SIUL2_0_PORT206_ETPU_A_ETPU_A_CH_25_IN |
        SIUL2_0_PORT207_SIUL_EIRQ_31_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 208 - 223
        SIUL2_0_PORT208_FXIO_FXIO_D15_IN |
        SIUL2_0_PORT209_FXIO_FXIO_D16_IN |
        SIUL2_0_PORT210_FXIO_FXIO_D17_IN |
        SIUL2_0_PORT211_FXIO_FXIO_D18_IN |
        SIUL2_0_PORT212_FXIO_FXIO_D19_IN |
        SIUL2_0_PORT213_CAN0_CAN0_RX_IN |
        SIUL2_0_PORT214_FXIO_FXIO_D21_IN |
        SIUL2_0_PORT215_FXIO_FXIO_D22_IN |
        SIUL2_0_PORT216_FXIO_FXIO_D23_IN |
        SIUL2_0_PORT217_FXIO_FXIO_D24_IN |
        SIUL2_0_PORT218_FXIO_FXIO_D25_IN |
        SIUL2_0_PORT219_CAN1_CAN1_RX_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 224 - 239
        SIUL2_0_PORT231_SIUL_EIRQ_23_IN |
        SIUL2_0_PORT232_SIUL_EIRQ_24_IN |
        SIUL2_0_PORT233_SIUL_EIRQ_25_IN |
        SIUL2_0_PORT234_SIUL_EIRQ_26_IN |
        SIUL2_0_PORT235_SIUL_EIRQ_27_IN |
        SIUL2_0_PORT236_SIUL_EIRQ_28_IN */
        (uint16)( SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U)
                )
    }
    ,
    /*  Mode PORT_INPUT2_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT0_EMIOS_0_EMIOS_0_CH_17_Z_IN |
        SIUL2_0_PORT1_EMIOS_0_EMIOS_0_CH_9_Z_IN |
        SIUL2_0_PORT2_EMIOS_0_EMIOS_0_CH_19_Z_IN |
        SIUL2_0_PORT3_FCCU_FCCU_ERR_IN1_IN |
        SIUL2_0_PORT4_FXIO_FXIO_D6_IN |
        SIUL2_0_PORT6_SIUL_EIRQ_6_IN |
        SIUL2_0_PORT7_EMIOS_0_EMIOS_0_CH_11_Z_IN |
        SIUL2_0_PORT8_FXIO_FXIO_D6_IN |
        SIUL2_0_PORT9_FXIO_FXIO_D7_IN |
        SIUL2_0_PORT10_EMIOS_0_EMIOS_0_CH_12_Z_IN |
        SIUL2_0_PORT14_FXIO_FXIO_D14_IN |
        SIUL2_0_PORT15_EMIOS_0_EMIOS_0_CH_10_Z_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT16_EMIOS_0_EMIOS_0_CH_11_Z_IN |
        SIUL2_0_PORT17_EMIOS_0_EMIOS_0_CH_10_Z_IN |
        SIUL2_0_PORT18_LPSPI1_LPSPI1_SOUT_IN |
        SIUL2_0_PORT19_LPUART1_LPUART1_RX_IN |
        SIUL2_0_PORT20_LPSPI1_LPSPI1_SIN_IN |
        SIUL2_0_PORT21_SIUL_EIRQ_3_IN |
        SIUL2_0_PORT22_FXIO_FXIO_D1_IN |
        SIUL2_0_PORT23_FXIO_FXIO_D2_IN |
        SIUL2_0_PORT24_ETPU_B_ETPU_B_CH_8_IN |
        SIUL2_0_PORT25_EMIOS_0_EMIOS_0_CH_8_Z_IN |
        SIUL2_0_PORT26_EMAC_EMAC_PPS0_IN |
        SIUL2_0_PORT29_LPSPI1_LPSPI1_SIN_IN |
        SIUL2_0_PORT30_EMIOS_0_EMIOS_0_CH_13_Z_IN |
        SIUL2_0_PORT31_EMAC_EMAC_PPS0_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT32_SIUL_EIRQ_8_IN |
        SIUL2_0_PORT33_EMIOS_0_EMIOS_0_CH_7_Z_IN |
        SIUL2_0_PORT34_SIUL_EIRQ_10_IN |
        SIUL2_0_PORT35_EMIOS_0_EMIOS_0_CH_9_Z_IN |
        SIUL2_0_PORT36_EMIOS_0_EMIOS_0_CH_4_Z_IN |
        SIUL2_0_PORT37_EMIOS_0_EMIOS_0_CH_5_Z_IN |
        SIUL2_0_PORT40_EMIOS_0_EMIOS_0_CH_15_Z_IN |
        SIUL2_0_PORT41_FXIO_FXIO_D28_IN |
        SIUL2_0_PORT42_FXIO_FXIO_D27_IN |
        SIUL2_0_PORT43_EMIOS_0_EMIOS_0_CH_9_Z_IN |
        SIUL2_0_PORT44_SIUL_EIRQ_26_IN |
        SIUL2_0_PORT45_SIUL_EIRQ_27_IN |
        SIUL2_0_PORT46_EMIOS_0_EMIOS_0_CH_2_Z_IN |
        SIUL2_0_PORT47_SIUL_EIRQ_29_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT48_SIUL_EIRQ_30_IN |
        SIUL2_0_PORT49_SIUL_EIRQ_31_IN |
        SIUL2_0_PORT50_FXIO_FXIO_D1_IN |
        SIUL2_0_PORT51_EMAC_EMAC_PPS0_IN |
        SIUL2_0_PORT52_FXIO_FXIO_D3_IN |
        SIUL2_0_PORT53_SIUL_EIRQ_8_IN |
        SIUL2_0_PORT54_FXIO_FXIO_D15_IN |
        SIUL2_0_PORT55_CAN1_CAN1_RX_IN |
        SIUL2_0_PORT56_FXIO_FXIO_D5_IN |
        SIUL2_0_PORT57_SIUL_EIRQ_12_IN |
        SIUL2_0_PORT58_FXIO_FXIO_D7_IN |
        SIUL2_0_PORT59_FXIO_FXIO_D8_IN |
        SIUL2_0_PORT60_EMAC_EMAC_PPS3_IN |
        SIUL2_0_PORT61_FXIO_FXIO_D10_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT64_EMIOS_0_EMIOS_0_CH_0_Z_IN |
        SIUL2_0_PORT65_SIUL_EIRQ_1_IN |
        SIUL2_0_PORT66_SIUL_EIRQ_2_IN |
        SIUL2_0_PORT67_EMIOS_0_EMIOS_0_CH_3_Z_IN |
        SIUL2_0_PORT68_EMIOS_0_EMIOS_0_CH_8_Z_IN |
        SIUL2_0_PORT69_EMIOS_0_EMIOS_0_CH_16_Z_IN |
        SIUL2_0_PORT70_SIUL_EIRQ_6_IN |
        SIUL2_0_PORT71_FXIO_FXIO_D10_IN |
        SIUL2_0_PORT72_EMIOS_0_EMIOS_0_CH_9_Z_IN |
        SIUL2_0_PORT73_SIUL_EIRQ_17_IN |
        SIUL2_0_PORT74_EMIOS_0_EMIOS_0_CH_6_Z_IN |
        SIUL2_0_PORT75_CAN5_CAN5_RX_IN |
        SIUL2_0_PORT76_EMIOS_0_EMIOS_0_CH_22_Z_IN |
        SIUL2_0_PORT77_EMIOS_0_EMIOS_0_CH_23_Z_IN |
        SIUL2_0_PORT78_SIUL_EIRQ_22_IN |
        SIUL2_0_PORT79_EMIOS_0_EMIOS_0_CH_11_Z_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT80_EMIOS_0_EMIOS_0_CH_9_Z_IN |
        SIUL2_0_PORT81_FXIO_FXIO_D2_IN |
        SIUL2_0_PORT82_FXIO_FXIO_D12_IN |
        SIUL2_0_PORT83_LPSPI2_LPSPI2_PCS1_IN |
        SIUL2_0_PORT84_EMAC_EMAC_PPS0_IN |
        SIUL2_0_PORT85_EMAC_EMAC_PPS1_IN |
        SIUL2_0_PORT87_SIUL_EIRQ_18_IN |
        SIUL2_0_PORT88_SIUL_EIRQ_19_IN |
        SIUL2_0_PORT89_CAN1_CAN1_RX_IN |
        SIUL2_0_PORT90_CAN5_CAN5_RX_IN |
        SIUL2_0_PORT91_SIUL_EIRQ_22_IN |
        SIUL2_0_PORT92_FXIO_FXIO_D21_IN |
        SIUL2_0_PORT93_SIUL_EIRQ_23_IN |
        SIUL2_0_PORT94_FXIO_FXIO_D23_IN |
        SIUL2_0_PORT95_EMIOS_0_EMIOS_0_CH_14_Z_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT96_SIUL_EIRQ_8_IN |
        SIUL2_0_PORT97_SIUL_EIRQ_9_IN |
        SIUL2_0_PORT98_FXIO_FXIO_D4_IN |
        SIUL2_0_PORT99_FXIO_FXIO_D5_IN |
        SIUL2_0_PORT100_EMIOS_0_EMIOS_0_CH_23_Z_IN |
        SIUL2_0_PORT101_SIUL_EIRQ_13_IN |
        SIUL2_0_PORT102_SIUL_EIRQ_14_IN |
        SIUL2_0_PORT103_LPSPI0_LPSPI0_PCS3_IN |
        SIUL2_0_PORT104_SIUL_EIRQ_24_IN |
        SIUL2_0_PORT105_EMIOS_0_EMIOS_0_CH_13_Z_IN |
        SIUL2_0_PORT106_EMIOS_0_EMIOS_0_CH_16_Z_IN |
        SIUL2_0_PORT107_EMIOS_0_EMIOS_0_CH_17_Z_IN |
        SIUL2_0_PORT108_EMIOS_0_EMIOS_0_CH_18_Z_IN |
        SIUL2_0_PORT109_EMIOS_0_EMIOS_0_CH_20_Z_IN |
        SIUL2_0_PORT110_EMIOS_0_EMIOS_0_CH_21_Z_IN |
        SIUL2_0_PORT111_SIUL_EIRQ_31_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT112_LPSPI0_LPSPI0_SIN_IN |
        SIUL2_0_PORT113_SIUL_EIRQ_24_IN |
        SIUL2_0_PORT114_FXIO_FXIO_D2_IN |
        SIUL2_0_PORT115_EMIOS_0_EMIOS_0_CH_0_Z_IN |
        SIUL2_0_PORT116_SIUL_EIRQ_25_IN |
        SIUL2_0_PORT117_SIUL_EIRQ_26_IN |
        SIUL2_0_PORT118_EMIOS_0_EMIOS_0_CH_19_Z_IN |
        SIUL2_0_PORT119_FXIO_FXIO_D28_IN |
        SIUL2_0_PORT120_FXIO_FXIO_D29_IN |
        SIUL2_0_PORT121_EMIOS_0_EMIOS_0_CH_1_Z_IN |
        SIUL2_0_PORT122_FXIO_FXIO_D7_IN |
        SIUL2_0_PORT123_FXIO_FXIO_D31_IN |
        SIUL2_0_PORT124_LPSPI5_LPSPI5_SIN_IN |
        SIUL2_0_PORT125_LPSPI5_LPSPI5_PCS2_IN |
        SIUL2_0_PORT126_ETPU_A_ETPU_A_CH_16_IN |
        SIUL2_0_PORT127_FXIO_FXIO_D6_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT128_FXIO_FXIO_D3_IN |
        SIUL2_0_PORT129_FXIO_FXIO_D2_IN |
        SIUL2_0_PORT130_EMIOS_0_EMIOS_0_CH_3_Z_IN |
        SIUL2_0_PORT132_EMIOS_0_EMIOS_0_CH_18_Z_IN |
        SIUL2_0_PORT133_EMIOS_0_EMIOS_0_CH_19_Z_IN |
        SIUL2_0_PORT134_FXIO_FXIO_D12_IN |
        SIUL2_0_PORT135_EMIOS_0_EMIOS_0_CH_11_Z_IN |
        SIUL2_0_PORT136_EMIOS_0_EMIOS_0_CH_6_Z_IN |
        SIUL2_0_PORT137_EMIOS_0_EMIOS_0_CH_7_Z_IN |
        SIUL2_0_PORT138_EMIOS_0_EMIOS_0_CH_20_Z_IN |
        SIUL2_0_PORT139_EMIOS_0_EMIOS_0_CH_1_Z_IN |
        SIUL2_0_PORT142_SIUL_EIRQ_13_IN |
        SIUL2_0_PORT143_SIUL_EIRQ_14_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT144_EMIOS_0_EMIOS_0_CH_23_Z_IN |
        SIUL2_0_PORT147_ETPU_A_ETPU_A_CH_9_IN |
        SIUL2_0_PORT148_ETPU_B_ETPU_B_CH_3_IN |
        SIUL2_0_PORT149_ETPU_B_ETPU_B_CH_6_IN |
        SIUL2_0_PORT151_LPSPI4_LPSPI4_PCS0_IN |
        SIUL2_0_PORT154_LPSPI2_LPSPI2_PCS3_IN |
        SIUL2_0_PORT155_ETPU_B_ETPU_B_CH_28_IN |
        SIUL2_0_PORT156_ETPU_B_ETPU_B_CH_29_IN |
        SIUL2_0_PORT157_EMIOS_0_EMIOS_0_CH_5_Z_IN |
        SIUL2_0_PORT159_ETPU_B_ETPU_B_CH_11_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 160 - 175
        SIUL2_0_PORT160_ETPU_B_ETPU_B_CH_12_IN |
        SIUL2_0_PORT161_ETPU_B_ETPU_B_CH_17_IN |
        SIUL2_0_PORT162_SIUL_EIRQ_2_IN |
        SIUL2_0_PORT163_SIUL_EIRQ_3_IN |
        SIUL2_0_PORT164_SIUL_EIRQ_4_IN |
        SIUL2_0_PORT165_CAN5_CAN5_RX_IN |
        SIUL2_0_PORT166_LPI2C1_LPI2C1_SDA_IN |
        SIUL2_0_PORT167_SIUL_EIRQ_7_IN |
        SIUL2_0_PORT168_EMIOS_0_EMIOS_0_CH_4_Z_IN |
        SIUL2_0_PORT169_EMIOS_0_EMIOS_0_CH_5_Z_IN |
        SIUL2_0_PORT170_EMIOS_0_EMIOS_0_CH_18_Z_IN |
        SIUL2_0_PORT171_EMIOS_0_EMIOS_0_CH_19_Z_IN |
        SIUL2_0_PORT172_EMIOS_0_EMIOS_0_CH_20_Z_IN |
        SIUL2_0_PORT173_EMIOS_0_EMIOS_0_CH_21_Z_IN |
        SIUL2_0_PORT174_SIUL_EIRQ_22_IN |
        SIUL2_0_PORT175_CAN1_CAN1_RX_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 176 - 191
        SIUL2_0_PORT176_LPSPI3_LPSPI3_PCS0_IN |
        SIUL2_0_PORT177_ETPU_B_ETPU_B_CH_22_IN |
        SIUL2_0_PORT178_LPUART3_LPUART3_TX_IN |
        SIUL2_0_PORT179_LPUART3_LPUART3_RX_IN |
        SIUL2_0_PORT180_EMIOS_0_EMIOS_0_CH_13_Z_IN |
        SIUL2_0_PORT181_EMIOS_0_EMIOS_0_CH_14_Z_IN |
        SIUL2_0_PORT183_LPUART1_LPUART1_TX_IN |
        SIUL2_0_PORT184_LPUART1_LPUART1_RX_IN |
        SIUL2_0_PORT185_FXIO_FXIO_D6_IN |
        SIUL2_0_PORT186_EMIOS_0_EMIOS_0_CH_10_Z_IN |
        SIUL2_0_PORT187_LPSPI4_LPSPI4_PCS2_IN |
        SIUL2_0_PORT188_LPUART3_LPUART3_RX_IN |
        SIUL2_0_PORT189_FXIO_FXIO_D8_IN |
        SIUL2_0_PORT190_EMIOS_0_EMIOS_0_CH_14_Z_IN |
        SIUL2_0_PORT191_FXIO_FXIO_D9_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 192 - 207
        SIUL2_0_PORT192_EMIOS_0_EMIOS_0_CH_6_Z_IN |
        SIUL2_0_PORT193_EMIOS_0_EMIOS_0_CH_17_Z_IN |
        SIUL2_0_PORT194_ETPU_B_ETPU_B_CH_30_IN |
        SIUL2_0_PORT195_EMIOS_0_EMIOS_0_CH_19_Z_IN |
        SIUL2_0_PORT196_SIUL_EIRQ_12_IN |
        SIUL2_0_PORT197_SIUL_EIRQ_13_IN |
        SIUL2_0_PORT198_FXIO_FXIO_D10_IN |
        SIUL2_0_PORT199_EMIOS_0_EMIOS_0_CH_23_Z_IN |
        SIUL2_0_PORT200_SIUL_EIRQ_24_IN |
        SIUL2_0_PORT201_CAN4_CAN4_RX_IN |
        SIUL2_0_PORT202_EMIOS_0_EMIOS_0_CH_7_Z_IN |
        SIUL2_0_PORT203_EMIOS_0_EMIOS_0_CH_16_Z_IN |
        SIUL2_0_PORT204_SIUL_EIRQ_28_IN |
        SIUL2_0_PORT205_EMIOS_0_EMIOS_0_CH_19_Z_IN |
        SIUL2_0_PORT206_CAN5_CAN5_RX_IN |
        SIUL2_0_PORT207_FXIO_FXIO_D14_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 208 - 223
        SIUL2_0_PORT213_FXIO_FXIO_D20_IN |
        SIUL2_0_PORT219_FXIO_FXIO_D26_IN */
        (uint16)( SHL_PAD_U32(5U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 224 - 239
        SIUL2_0_PORT231_FXIO_FXIO_D23_IN |
        SIUL2_0_PORT232_FXIO_FXIO_D24_IN |
        SIUL2_0_PORT233_FXIO_FXIO_D25_IN |
        SIUL2_0_PORT234_FXIO_FXIO_D26_IN |
        SIUL2_0_PORT235_FXIO_FXIO_D27_IN |
        SIUL2_0_PORT236_FXIO_FXIO_D28_IN */
        (uint16)( SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U)
                )
    }
    ,
    /*  Mode PORT_INPUT3_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT0_FXIO_FXIO_D2_IN |
        SIUL2_0_PORT1_FXIO_FXIO_D3_IN |
        SIUL2_0_PORT2_FCCU_FCCU_ERR_IN0_IN |
        SIUL2_0_PORT3_FXIO_FXIO_D5_IN |
        SIUL2_0_PORT4_JTAG_JTAG_TMS_SWD_DIO_IN |
        SIUL2_0_PORT6_EMIOS_0_EMIOS_0_CH_13_Z_IN |
        SIUL2_0_PORT7_FXIO_FXIO_D9_IN |
        SIUL2_0_PORT8_LPUART2_LPUART2_RX_IN |
        SIUL2_0_PORT9_LPSPI1_LPSPI1_PCS2_IN |
        SIUL2_0_PORT10_FXIO_FXIO_D0_IN |
        SIUL2_0_PORT14_LPSPI1_LPSPI1_PCS3_IN |
        SIUL2_0_PORT15_FXIO_FXIO_D31_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT16_FXIO_FXIO_D30_IN |
        SIUL2_0_PORT17_FXIO_FXIO_D19_IN |
        SIUL2_0_PORT18_LPUART1_LPUART1_TX_IN |
        SIUL2_0_PORT19_LPSPI1_LPSPI1_SCK_IN |
        SIUL2_0_PORT20_PG_PGOOD_IN |
        SIUL2_0_PORT21_EMIOS_0_EMIOS_0_CH_4_Z_IN |
        SIUL2_0_PORT22_LPSPI1_LPSPI1_PCS1_IN |
        SIUL2_0_PORT23_LPI2C0_LPI2C0_SCLS_IN |
        SIUL2_0_PORT25_FXIO_FXIO_D2_IN |
        SIUL2_0_PORT26_FXIO_FXIO_D1_IN |
        SIUL2_0_PORT29_EMAC_EMAC_MII_RMII_MDIO_IN |
        SIUL2_0_PORT30_LPUART2_LPUART2_RX_IN |
        SIUL2_0_PORT31_FXIO_FXIO_D0_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT32_EMIOS_0_EMIOS_0_CH_3_Z_IN |
        SIUL2_0_PORT33_LPI2C0_LPI2C0_SCLS_IN |
        SIUL2_0_PORT34_EMIOS_0_EMIOS_0_CH_8_Z_IN |
        SIUL2_0_PORT35_FXIO_FXIO_D17_IN |
        SIUL2_0_PORT36_LPSPI0_LPSPI0_SOUT_IN |
        SIUL2_0_PORT37_LPSPI0_LPSPI0_PCS0_IN |
        SIUL2_0_PORT40_FXIO_FXIO_D29_IN |
        SIUL2_0_PORT41_LPUART1_LPUART1_RX_IN |
        SIUL2_0_PORT42_LPSPI4_LPSPI4_SCK_IN |
        SIUL2_0_PORT43_FXIO_FXIO_D26_IN |
        SIUL2_0_PORT44_EMIOS_0_EMIOS_0_CH_0_Z_IN |
        SIUL2_0_PORT45_EMIOS_0_EMIOS_0_CH_1_Z_IN |
        SIUL2_0_PORT46_FXIO_FXIO_D23_IN |
        SIUL2_0_PORT47_EMIOS_0_EMIOS_0_CH_3_Z_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT48_EMIOS_0_EMIOS_0_CH_4_Z_IN |
        SIUL2_0_PORT49_EMIOS_0_EMIOS_0_CH_5_Z_IN |
        SIUL2_0_PORT50_LPSPI1_LPSPI1_PCS1_IN |
        SIUL2_0_PORT51_FXIO_FXIO_D2_IN |
        SIUL2_0_PORT52_LPSPI5_LPSPI5_PCS3_IN |
        SIUL2_0_PORT53_EMIOS_0_EMIOS_0_CH_17_Z_IN |
        SIUL2_0_PORT54_LPSPI3_LPSPI3_PCS1_IN |
        SIUL2_0_PORT55_SIUL_EIRQ_10_IN |
        SIUL2_0_PORT56_LPSPI2_LPSPI2_PCS2_IN |
        SIUL2_0_PORT57_FXIO_FXIO_D6_IN |
        SIUL2_0_PORT58_LPSPI2_LPSPI2_PCS3_IN |
        SIUL2_0_PORT59_LPSPI2_LPSPI2_SOUT_IN |
        SIUL2_0_PORT60_FXIO_FXIO_D9_IN |
        SIUL2_0_PORT61_LPSPI2_LPSPI2_SCK_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT64_EMIOS_0_EMIOS_0_CH_14_Z_IN |
        SIUL2_0_PORT65_EMIOS_0_EMIOS_0_CH_1_Z_IN |
        SIUL2_0_PORT66_EMIOS_0_EMIOS_0_CH_2_Z_IN |
        SIUL2_0_PORT67_LPUART0_LPUART0_TX_IN |
        SIUL2_0_PORT68_FXIO_FXIO_D5_IN |
        SIUL2_0_PORT69_FXIO_FXIO_D4_IN |
        SIUL2_0_PORT70_FXIO_FXIO_D11_IN |
        SIUL2_0_PORT71_LPI2C0_LPI2C0_HREQ_IN |
        SIUL2_0_PORT72_FXIO_FXIO_D12_IN |
        SIUL2_0_PORT73_EMIOS_0_EMIOS_0_CH_8_Z_IN |
        SIUL2_0_PORT74_FXIO_FXIO_D18_IN |
        SIUL2_0_PORT75_SIUL_EIRQ_19_IN |
        SIUL2_0_PORT76_FXIO_FXIO_D19_IN |
        SIUL2_0_PORT77_FXIO_FXIO_D16_IN |
        SIUL2_0_PORT78_EMIOS_0_EMIOS_0_CH_10_Z_IN |
        SIUL2_0_PORT79_FXIO_FXIO_D18_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT80_FXIO_FXIO_D15_IN |
        SIUL2_0_PORT81_FXIO_FXIO_D14_IN |
        SIUL2_0_PORT82_LPUART2_LPUART2_RX_IN |
        SIUL2_0_PORT83_EMAC_EMAC_MII_RMII_TX_CLK_IN |
        SIUL2_0_PORT84_FXIO_FXIO_D14_IN |
        SIUL2_0_PORT85_FXIO_FXIO_D15_IN |
        SIUL2_0_PORT87_EMIOS_0_EMIOS_0_CH_12_Z_IN |
        SIUL2_0_PORT88_FXIO_FXIO_D17_IN |
        SIUL2_0_PORT89_SIUL_EIRQ_20_IN |
        SIUL2_0_PORT90_SIUL_EIRQ_21_IN |
        SIUL2_0_PORT91_FXIO_FXIO_D20_IN |
        SIUL2_0_PORT92_LPI2C1_LPI2C1_SCL_IN |
        SIUL2_0_PORT93_EMIOS_0_EMIOS_0_CH_10_Z_IN |
        SIUL2_0_PORT94_LPUART1_LPUART1_DSR_B_IN |
        SIUL2_0_PORT95_FXIO_FXIO_D1_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT96_EMIOS_0_EMIOS_0_CH_2_Z_IN |
        SIUL2_0_PORT97_EMIOS_0_EMIOS_0_CH_3_Z_IN |
        SIUL2_0_PORT98_FXIO_FXIO_D6_IN |
        SIUL2_0_PORT99_FXIO_FXIO_D7_IN |
        SIUL2_0_PORT100_LPSPI1_LPSPI1_PCS1_IN |
        SIUL2_0_PORT101_EMIOS_0_EMIOS_0_CH_2_Z_IN |
        SIUL2_0_PORT102_FXIO_FXIO_D3_IN |
        SIUL2_0_PORT103_LPSPI3_LPSPI3_PCS3_IN |
        SIUL2_0_PORT104_EMIOS_0_EMIOS_0_CH_12_Z_IN |
        SIUL2_0_PORT105_FXIO_FXIO_D0_IN |
        SIUL2_0_PORT106_LPSPI0_LPSPI0_SIN_IN |
        SIUL2_0_PORT107_LPSPI0_LPSPI0_SCK_IN |
        SIUL2_0_PORT108_LPI2C1_LPI2C1_HREQ_IN |
        SIUL2_0_PORT109_EMAC_EMAC_PPS1_IN |
        SIUL2_0_PORT110_EMAC_EMAC_PPS0_IN |
        SIUL2_0_PORT111_EMIOS_0_EMIOS_0_CH_0_Z_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT112_EMAC_EMAC_MII_RMII_MDIO_IN |
        SIUL2_0_PORT113_EMIOS_0_EMIOS_0_CH_18_Z_IN |
        SIUL2_0_PORT114_ETPU_B_ETPU_B_CH_25_IN |
        SIUL2_0_PORT115_FXIO_FXIO_D3_IN |
        SIUL2_0_PORT116_EMIOS_0_EMIOS_0_CH_17_Z_IN |
        SIUL2_0_PORT117_FXIO_FXIO_D26_IN |
        SIUL2_0_PORT118_FXIO_FXIO_D27_IN |
        SIUL2_0_PORT119_LPSPI0_LPSPI0_PCS4_IN |
        SIUL2_0_PORT120_LPSPI0_LPSPI0_PCS5_IN |
        SIUL2_0_PORT121_TRACE_EVTI_1_IN |
        SIUL2_0_PORT122_FXIO_FXIO_D30_IN |
        SIUL2_0_PORT123_LPSPI5_LPSPI5_SOUT_IN |
        SIUL2_0_PORT127_ETPU_A_ETPU_A_CH_8_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT128_LPUART3_LPUART3_RX_IN |
        SIUL2_0_PORT129_LPSPI0_LPSPI0_SCK_IN |
        SIUL2_0_PORT130_FXIO_FXIO_D13_IN |
        SIUL2_0_PORT132_FXIO_FXIO_D6_IN |
        SIUL2_0_PORT133_FXIO_FXIO_D7_IN |
        SIUL2_0_PORT134_LPSPI0_LPSPI0_PCS2_IN |
        SIUL2_0_PORT135_FXIO_FXIO_D11_IN |
        SIUL2_0_PORT136_FXIO_FXIO_D8_IN |
        SIUL2_0_PORT137_EMAC_EMAC_PPS3_IN |
        SIUL2_0_PORT138_FXIO_FXIO_D4_IN |
        SIUL2_0_PORT139_EMIOS_0_EMIOS_0_CH_21_Z_IN |
        SIUL2_0_PORT142_EMIOS_0_EMIOS_0_CH_19_Z_IN |
        SIUL2_0_PORT143_EMIOS_0_EMIOS_0_CH_22_Z_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT144_FCCU_FCCU_ERR_IN1_IN |
        SIUL2_0_PORT151_SYSTEM_SWG_EXT_REF_CLK_IN |
        SIUL2_0_PORT154_ETPU_A_ETPU_A_TCRCLK_IN |
        SIUL2_0_PORT155_ETPU_A_ETPU_A_CH_20_IN |
        SIUL2_0_PORT156_ETPU_A_ETPU_A_CH_21_IN |
        SIUL2_0_PORT157_ETPU_B_ETPU_B_CH_7_IN |
        SIUL2_0_PORT159_CAN4_CAN4_RX_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 160 - 175
        SIUL2_0_PORT160_SIUL_EIRQ_0_IN |
        SIUL2_0_PORT161_SIUL_EIRQ_1_IN |
        SIUL2_0_PORT162_EMIOS_0_EMIOS_0_CH_23_Z_IN |
        SIUL2_0_PORT163_EMIOS_0_EMIOS_0_CH_0_Z_IN |
        SIUL2_0_PORT164_EMIOS_0_EMIOS_0_CH_1_Z_IN |
        SIUL2_0_PORT165_SIUL_EIRQ_5_IN |
        SIUL2_0_PORT166_TRACE_EVTI_1_IN |
        SIUL2_0_PORT167_FXIO_FXIO_D1_IN |
        SIUL2_0_PORT168_FXIO_FXIO_D2_IN |
        SIUL2_0_PORT169_ETPU_B_ETPU_B_CH_23_IN |
        SIUL2_0_PORT170_ETPU_B_ETPU_B_CH_24_IN |
        SIUL2_0_PORT171_HSE_HSE_TAMPER_EXTIN0_IN |
        SIUL2_0_PORT172_LPSPI3_LPSPI3_SIN_IN |
        SIUL2_0_PORT173_LPUART2_LPUART2_RX_IN |
        SIUL2_0_PORT174_EMIOS_0_EMIOS_0_CH_17_Z_IN |
        SIUL2_0_PORT175_SIUL_EIRQ_23_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 176 - 191
        SIUL2_0_PORT176_SDADC_0_EXT_DATA0_IN |
        SIUL2_0_PORT178_ETPU_B_ETPU_B_CH_26_IN |
        SIUL2_0_PORT179_LPSPI3_LPSPI3_PCS2_IN |
        SIUL2_0_PORT180_FXIO_FXIO_D4_IN |
        SIUL2_0_PORT181_FXIO_FXIO_D5_IN |
        SIUL2_0_PORT183_TRACE_EVTI_0_IN |
        SIUL2_0_PORT184_TRACE_EVTI_0_IN |
        SIUL2_0_PORT185_LPSPI2_LPSPI2_PCS2_IN |
        SIUL2_0_PORT186_LPSPI2_LPSPI2_PCS3_IN |
        SIUL2_0_PORT187_LPUART3_LPUART3_TX_IN |
        SIUL2_0_PORT188_LPSPI0_LPSPI0_PCS0_IN |
        SIUL2_0_PORT189_LPI2C0_LPI2C0_HREQ_IN |
        SIUL2_0_PORT190_ETPU_B_ETPU_B_CH_31_IN |
        SIUL2_0_PORT191_TRGMUX_TRGMUX_IN6_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 192 - 207
        SIUL2_0_PORT192_ETPU_A_ETPU_A_CH_8_IN |
        SIUL2_0_PORT193_ETPU_A_ETPU_A_CH_13_IN |
        SIUL2_0_PORT194_TRACE_EVTI_0_IN |
        SIUL2_0_PORT195_ETPU_B_ETPU_B_CH_31_IN |
        SIUL2_0_PORT196_EMIOS_0_EMIOS_0_CH_20_Z_IN |
        SIUL2_0_PORT197_EMIOS_0_EMIOS_0_CH_21_Z_IN |
        SIUL2_0_PORT199_FXIO_FXIO_D11_IN |
        SIUL2_0_PORT200_EMIOS_0_EMIOS_0_CH_22_Z_IN |
        SIUL2_0_PORT201_SIUL_EIRQ_25_IN |
        SIUL2_0_PORT202_ETPU_A_ETPU_A_CH_15_IN |
        SIUL2_0_PORT203_ETPU_A_ETPU_A_CH_16_IN |
        SIUL2_0_PORT204_EMIOS_0_EMIOS_0_CH_18_Z_IN |
        SIUL2_0_PORT205_FXIO_FXIO_D13_IN |
        SIUL2_0_PORT206_SIUL_EIRQ_30_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239
        SIUL2_0_PORT231_LPUART0_LPUART0_RX_IN |
        SIUL2_0_PORT232_LPUART2_LPUART2_TX_IN |
        SIUL2_0_PORT233_LPUART2_LPUART2_RX_IN |
        SIUL2_0_PORT234_LPUART3_LPUART3_TX_IN |
        SIUL2_0_PORT235_LPUART3_LPUART3_RX_IN */
        (uint16)( SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                )
    }
    ,
    /*  Mode PORT_INPUT4_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT0_LPSPI0_LPSPI0_PCS7_IN |
        SIUL2_0_PORT1_LPSPI0_LPSPI0_PCS6_IN |
        SIUL2_0_PORT2_FXIO_FXIO_D4_IN |
        SIUL2_0_PORT3_LPSPI1_LPSPI1_SCK_IN |
        SIUL2_0_PORT6_FXIO_FXIO_D19_IN |
        SIUL2_0_PORT7_LPSPI0_LPSPI0_PCS1_IN |
        SIUL2_0_PORT8_LPSPI2_LPSPI2_SOUT_IN |
        SIUL2_0_PORT9_LPSPI2_LPSPI2_PCS0_IN |
        SIUL2_0_PORT14_LPSPI5_LPSPI5_PCS1_IN |
        SIUL2_0_PORT15_LPUART2_LPUART2_RX_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT16_LPSPI0_LPSPI0_PCS4_IN |
        SIUL2_0_PORT17_LPSPI3_LPSPI3_SOUT_IN |
        SIUL2_0_PORT18_TRACE_EVTI_0_IN |
        SIUL2_0_PORT19_ETPU_A_ETPU_A_CH_4_IN |
        SIUL2_0_PORT20_ETPU_B_ETPU_B_CH_4_IN |
        SIUL2_0_PORT21_FXIO_FXIO_D0_IN |
        SIUL2_0_PORT22_SYSTEM_SWG_EXT_REF_CLK_IN |
        SIUL2_0_PORT23_ETPU_B_ETPU_B_CH_13_IN |
        SIUL2_0_PORT25_ETPU_B_ETPU_B_CH_9_IN |
        SIUL2_0_PORT26_LPSPI0_LPSPI0_PCS0_IN |
        SIUL2_0_PORT29_LPUART2_LPUART2_TX_IN |
        SIUL2_0_PORT30_LPSPI0_LPSPI0_SOUT_IN |
        SIUL2_0_PORT31_LPSPI0_LPSPI0_PCS1_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT32_FXIO_FXIO_D14_IN |
        SIUL2_0_PORT33_LPSPI0_LPSPI0_SOUT_IN |
        SIUL2_0_PORT34_FXIO_FXIO_D18_IN |
        SIUL2_0_PORT35_LPSPI2_LPSPI2_SOUT_IN |
        SIUL2_0_PORT36_EMAC_EMAC_MII_RMII_MDIO_IN |
        SIUL2_0_PORT37_LPSPI0_LPSPI0_PCS1_IN |
        SIUL2_0_PORT40_LPSPI0_LPSPI0_PCS5_IN |
        SIUL2_0_PORT41_LPSPI4_LPSPI4_SOUT_IN |
        SIUL2_0_PORT42_LPUART1_LPUART1_TX_IN |
        SIUL2_0_PORT43_LPI2C0_LPI2C0_HREQ_IN |
        SIUL2_0_PORT44_FXIO_FXIO_D25_IN |
        SIUL2_0_PORT45_FXIO_FXIO_D8_IN |
        SIUL2_0_PORT46_LPUART3_LPUART3_RX_IN |
        SIUL2_0_PORT47_FXIO_FXIO_D22_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT48_FXIO_FXIO_D21_IN |
        SIUL2_0_PORT49_FXIO_FXIO_D20_IN |
        SIUL2_0_PORT50_LPSPI5_LPSPI5_PCS2_IN |
        SIUL2_0_PORT52_QUADSPI_QUADSPI_INTA_IN |
        SIUL2_0_PORT53_FXIO_FXIO_D4_IN |
        SIUL2_0_PORT54_EMAC_EMAC_MII_CRS_IN |
        SIUL2_0_PORT55_EMIOS_0_EMIOS_0_CH_19_Z_IN |
        SIUL2_0_PORT56_EMAC_EMAC_MII_RMII_RXD_1_IN |
        SIUL2_0_PORT57_LPSPI2_LPSPI2_PCS0_IN |
        SIUL2_0_PORT58_EMAC_EMAC_MII_RX_CLK_IN |
        SIUL2_0_PORT59_EMAC_EMAC_MII_COL_IN |
        SIUL2_0_PORT60_LPUART1_LPUART1_RX_IN |
        SIUL2_0_PORT61_LPUART2_LPUART2_TX_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT64_EMAC_EMAC_MII_RMII_RXD_0_IN |
        SIUL2_0_PORT65_EMIOS_0_EMIOS_0_CH_15_Z_IN |
        SIUL2_0_PORT66_LPUART0_LPUART0_RX_IN |
        SIUL2_0_PORT68_JTAG_JTAG_TCK_SWD_CLK_IN |
        SIUL2_0_PORT69_JTAG_JTAG_TDI_IN |
        SIUL2_0_PORT70_LPUART1_LPUART1_RX_IN |
        SIUL2_0_PORT71_LPI2C1_LPI2C1_SCL_IN |
        SIUL2_0_PORT72_LPUART1_LPUART1_RX_IN |
        SIUL2_0_PORT73_FXIO_FXIO_D13_IN |
        SIUL2_0_PORT74_LPSPI2_LPSPI2_PCS1_IN |
        SIUL2_0_PORT75_FXIO_FXIO_D15_IN |
        SIUL2_0_PORT76_LPUART2_LPUART2_RX_IN |
        SIUL2_0_PORT77_LPSPI2_LPSPI2_PCS2_IN |
        SIUL2_0_PORT78_FXIO_FXIO_D16_IN |
        SIUL2_0_PORT79_LPI2C1_LPI2C1_SCL_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT80_LPUART2_LPUART2_RX_IN |
        SIUL2_0_PORT81_LPI2C1_LPI2C1_SCLS_IN |
        SIUL2_0_PORT82_LPSPI2_LPSPI2_PCS3_IN |
        SIUL2_0_PORT83_LPUART3_LPUART3_TX_IN |
        SIUL2_0_PORT84_LPUART3_LPUART3_RX_IN |
        SIUL2_0_PORT85_ETPU_B_ETPU_B_CH_31_IN |
        SIUL2_0_PORT87_FXIO_FXIO_D16_IN |
        SIUL2_0_PORT88_LPSPI4_LPSPI4_PCS3_IN |
        SIUL2_0_PORT89_FXIO_FXIO_D18_IN |
        SIUL2_0_PORT90_EMIOS_0_EMIOS_0_CH_5_Z_IN |
        SIUL2_0_PORT91_LPI2C0_LPI2C0_HREQ_IN |
        SIUL2_0_PORT92_LPUART1_LPUART1_RIN_B_IN |
        SIUL2_0_PORT93_FXIO_FXIO_D3_IN |
        SIUL2_0_PORT94_FLEXPWM_1_PWM_1_A_1_IN |
        SIUL2_0_PORT95_FXIO_FXIO_D24_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT96_EMIOS_0_EMIOS_0_CH_16_Z_IN |
        SIUL2_0_PORT97_EMIOS_0_EMIOS_0_CH_17_Z_IN |
        SIUL2_0_PORT98_LPSPI1_LPSPI1_SOUT_IN |
        SIUL2_0_PORT99_LPUART3_LPUART3_RX_IN |
        SIUL2_0_PORT100_LPSPI5_LPSPI5_PCS0_IN |
        SIUL2_0_PORT101_EMIOS_0_EMIOS_0_CH_19_Z_IN |
        SIUL2_0_PORT102_FXIO_FXIO_D13_IN |
        SIUL2_0_PORT103_QUADSPI_QUADSPI_IOFA1_IN |
        SIUL2_0_PORT104_FXIO_FXIO_D1_IN |
        SIUL2_0_PORT105_FXIO_FXIO_D10_IN |
        SIUL2_0_PORT106_EMAC_EMAC_MII_RX_CLK_IN |
        SIUL2_0_PORT107_EMAC_EMAC_MII_RMII_TX_CLK_IN |
        SIUL2_0_PORT108_LPSPI0_LPSPI0_SOUT_IN |
        SIUL2_0_PORT109_FXIO_FXIO_D7_IN |
        SIUL2_0_PORT110_LPI2C0_LPI2C0_SCL_IN |
        SIUL2_0_PORT111_EMAC_EMAC_PPS2_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT112_LPUART0_LPUART0_TX_IN |
        SIUL2_0_PORT113_EMAC_EMAC_PPS2_IN |
        SIUL2_0_PORT114_SDADC_3_EXT_CLKIN3_IN |
        SIUL2_0_PORT115_ETPU_B_ETPU_B_CH_27_IN |
        SIUL2_0_PORT116_FXIO_FXIO_D25_IN |
        SIUL2_0_PORT117_LPSPI0_LPSPI0_PCS7_IN |
        SIUL2_0_PORT118_FLEXPWM_0_PWM_0_B_3_IN |
        SIUL2_0_PORT119_FLEXPWM_0_PWM_0_B_1_IN |
        SIUL2_0_PORT120_HSE_HSE_TAMPER_EXTIN0_IN |
        SIUL2_0_PORT121_ETPU_A_ETPU_A_CH_15_IN |
        SIUL2_0_PORT122_LPSPI5_LPSPI5_SCK_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT128_LPSPI0_LPSPI0_SIN_IN |
        SIUL2_0_PORT129_LPUART3_LPUART3_TX_IN |
        SIUL2_0_PORT130_LPSPI0_LPSPI0_SOUT_IN |
        SIUL2_0_PORT132_LPSPI0_LPSPI0_PCS0_IN |
        SIUL2_0_PORT133_LPSPI1_LPSPI1_PCS3_IN |
        SIUL2_0_PORT135_LPUART0_LPUART0_RX_IN |
        SIUL2_0_PORT136_FXIO_FXIO_D12_IN |
        SIUL2_0_PORT137_FXIO_FXIO_D11_IN |
        SIUL2_0_PORT138_LPUART0_LPUART0_RX_IN |
        SIUL2_0_PORT139_FXIO_FXIO_D5_IN |
        SIUL2_0_PORT142_EMAC_EMAC_PPS1_IN |
        SIUL2_0_PORT143_FCCU_FCCU_ERR_IN0_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT144_FXIO_FXIO_D3_IN |
        SIUL2_0_PORT154_ETPU_A_ETPU_A_CH_0_IN |
        SIUL2_0_PORT159_EMIOS_0_EMIOS_0_CH_6_Z_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 160 - 175
        SIUL2_0_PORT160_EMIOS_0_EMIOS_0_CH_7_Z_IN |
        SIUL2_0_PORT161_EMIOS_0_EMIOS_0_CH_16_Z_IN |
        SIUL2_0_PORT162_LPSPI2_LPSPI2_SOUT_IN |
        SIUL2_0_PORT163_LPUART2_LPUART2_RX_IN |
        SIUL2_0_PORT164_FXIO_FXIO_D0_IN |
        SIUL2_0_PORT165_EMIOS_0_EMIOS_0_CH_2_Z_IN |
        SIUL2_0_PORT167_LPI2C1_LPI2C1_SCL_IN |
        SIUL2_0_PORT168_LPI2C1_LPI2C1_SDA_IN |
        SIUL2_0_PORT171_ETPU_B_ETPU_B_CH_25_IN |
        SIUL2_0_PORT172_LPUART2_LPUART2_TX_IN |
        SIUL2_0_PORT173_LPSPI3_LPSPI3_SCK_IN |
        SIUL2_0_PORT174_FCCU_FCCU_ERR_IN0_IN |
        SIUL2_0_PORT175_EMIOS_0_EMIOS_0_CH_22_Z_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 176 - 191
        SIUL2_0_PORT176_ETPU_B_ETPU_B_CH_2_IN |
        SIUL2_0_PORT178_SDADC_2_EXT_DATA2_IN |
        SIUL2_0_PORT179_ETPU_B_ETPU_B_CH_23_IN |
        SIUL2_0_PORT180_LPI2C0_LPI2C0_SCL_IN |
        SIUL2_0_PORT181_LPUART0_LPUART0_RX_IN |
        SIUL2_0_PORT183_ETPU_B_ETPU_B_CH_7_IN |
        SIUL2_0_PORT185_LPSPI4_LPSPI4_PCS0_IN |
        SIUL2_0_PORT186_LPSPI4_LPSPI4_PCS1_IN |
        SIUL2_0_PORT187_ETPU_B_ETPU_B_CH_30_IN |
        SIUL2_0_PORT188_LPSPI4_LPSPI4_PCS3_IN |
        SIUL2_0_PORT189_LPI2C1_LPI2C1_SCL_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 192 - 207
        SIUL2_0_PORT194_ETPU_A_ETPU_A_CH_1_IN |
        SIUL2_0_PORT195_ETPU_A_ETPU_A_CH_2_IN |
        SIUL2_0_PORT196_ETPU_B_ETPU_B_CH_15_IN |
        SIUL2_0_PORT197_ETPU_B_ETPU_B_CH_16_IN |
        SIUL2_0_PORT200_FXIO_FXIO_D12_IN |
        SIUL2_0_PORT201_EMIOS_0_EMIOS_0_CH_23_Z_IN |
        SIUL2_0_PORT204_LPSPI4_LPSPI4_PCS3_IN |
        SIUL2_0_PORT205_LPI2C0_LPI2C0_SDA_IN */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT5_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT0_LPSPI4_LPSPI4_PCS2_IN |
        SIUL2_0_PORT1_LPSPI4_LPSPI4_PCS1_IN |
        SIUL2_0_PORT2_LPUART0_LPUART0_RX_IN |
        SIUL2_0_PORT3_LPSPI5_LPSPI5_SCK_IN |
        SIUL2_0_PORT6_LPUART3_LPUART3_RX_IN |
        SIUL2_0_PORT7_LPUART3_LPUART3_TX_IN |
        SIUL2_0_PORT8_ETPU_B_ETPU_B_TCRCLK_IN |
        SIUL2_0_PORT9_LPSPI3_LPSPI3_PCS0_IN |
        SIUL2_0_PORT14_ETPU_A_ETPU_A_CH_6_IN |
        SIUL2_0_PORT15_LPSPI0_LPSPI0_PCS3_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT16_LPSPI1_LPSPI1_PCS2_IN |
        SIUL2_0_PORT17_LPUART0_LPUART0_TX_IN |
        SIUL2_0_PORT18_ETPU_A_ETPU_A_CH_3_IN |
        SIUL2_0_PORT20_ETPU_A_ETPU_A_CH_5_IN |
        SIUL2_0_PORT21_LPSPI1_LPSPI1_PCS0_IN |
        SIUL2_0_PORT26_LPSPI1_LPSPI1_PCS0_IN |
        SIUL2_0_PORT29_ZIPWIRE0_LFAST_0_EXT_REF_IN |
        SIUL2_0_PORT30_LPSPI1_LPSPI1_SOUT_IN |
        SIUL2_0_PORT31_ETPU_B_ETPU_B_CH_28_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT32_LPUART0_LPUART0_RX_IN |
        SIUL2_0_PORT33_HSE_HSE_TAMPER_EXTIN0_IN |
        SIUL2_0_PORT34_LPUART1_LPUART1_RX_IN |
        SIUL2_0_PORT35_EMAC_EMAC_MII_RMII_TX_CLK_IN |
        SIUL2_0_PORT36_TRGMUX_TRGMUX_IN1_IN |
        SIUL2_0_PORT37_TRGMUX_TRGMUX_IN0_IN |
        SIUL2_0_PORT40_LPSPI4_LPSPI4_PCS0_IN |
        SIUL2_0_PORT41_LPUART1_LPUART1_RIN_B_IN |
        SIUL2_0_PORT42_SYSTEM_SWG_EXT_REF_CLK_IN |
        SIUL2_0_PORT43_LPSPI4_LPSPI4_SIN_IN |
        SIUL2_0_PORT44_LPUART0_LPUART0_RX_IN |
        SIUL2_0_PORT45_FXIO_FXIO_D24_IN |
        SIUL2_0_PORT46_LPSPI1_LPSPI1_SCK_IN |
        SIUL2_0_PORT47_LPSPI1_LPSPI1_SIN_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT48_LPSPI1_LPSPI1_SOUT_IN |
        SIUL2_0_PORT49_LPUART0_LPUART0_RX_IN |
        SIUL2_0_PORT50_EMAC_EMAC_MII_RMII_RX_DV_RGMII_RXCTL_IN |
        SIUL2_0_PORT52_ETPU_B_ETPU_B_CH_13_IN |
        SIUL2_0_PORT53_ETPU_B_ETPU_B_CH_14_IN |
        SIUL2_0_PORT54_LPUART1_LPUART1_TX_IN |
        SIUL2_0_PORT55_FXIO_FXIO_D4_IN |
        SIUL2_0_PORT56_EMAC_EMAC_MII_RXD2_IN |
        SIUL2_0_PORT57_EMAC_EMAC_MII_COL_IN |
        SIUL2_0_PORT58_QUADSPI_QUADSPI_INTA_IN |
        SIUL2_0_PORT59_EMAC_EMAC_MII_CRS_IN |
        SIUL2_0_PORT60_LPSPI2_LPSPI2_SIN_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT64_EMAC_EMAC_MII_RMII_RXD_1_IN |
        SIUL2_0_PORT65_FXIO_FXIO_D5_IN |
        SIUL2_0_PORT66_LPSPI0_LPSPI0_PCS2_IN |
        SIUL2_0_PORT69_LPI2C1_LPI2C1_HREQ_IN |
        SIUL2_0_PORT70_LPSPI0_LPSPI0_PCS1_IN |
        SIUL2_0_PORT71_LPSPI0_LPSPI0_PCS0_IN |
        SIUL2_0_PORT72_LPI2C0_LPI2C0_SCL_IN |
        SIUL2_0_PORT73_LPI2C0_LPI2C0_SDA_IN |
        SIUL2_0_PORT74_LPSPI4_LPSPI4_PCS0_IN |
        SIUL2_0_PORT75_FXIO_FXIO_D19_IN |
        SIUL2_0_PORT76_LPSPI2_LPSPI2_PCS1_IN |
        SIUL2_0_PORT77_EMAC_EMAC_MII_COL_IN |
        SIUL2_0_PORT78_LPSPI2_LPSPI2_PCS0_IN |
        SIUL2_0_PORT79_LPSPI2_LPSPI2_SCK_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT80_LPI2C1_LPI2C1_SDA_IN |
        SIUL2_0_PORT81_LPSPI3_LPSPI3_SCK_IN |
        SIUL2_0_PORT84_ETPU_B_ETPU_B_CH_30_IN |
        SIUL2_0_PORT85_ETPU_A_ETPU_A_CH_23_IN |
        SIUL2_0_PORT87_LPSPI4_LPSPI4_PCS2_IN |
        SIUL2_0_PORT88_TRGMUX_TRGMUX_IN7_IN |
        SIUL2_0_PORT89_LPSPI4_LPSPI4_PCS1_IN |
        SIUL2_0_PORT90_FXIO_FXIO_D19_IN |
        SIUL2_0_PORT91_LPSPI4_LPSPI4_SCK_IN |
        SIUL2_0_PORT92_FLEXPWM_1_PWM_1_B_3_IN |
        SIUL2_0_PORT93_FXIO_FXIO_D22_IN |
        SIUL2_0_PORT94_ETPU_A_ETPU_A_CH_19_IN |
        SIUL2_0_PORT95_FLEXPWM_1_PWM_1_A_0_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT96_FXIO_FXIO_D0_IN |
        SIUL2_0_PORT97_FXIO_FXIO_D1_IN |
        SIUL2_0_PORT98_LPSPI5_LPSPI5_SOUT_IN |
        SIUL2_0_PORT99_LPSPI1_LPSPI1_PCS0_IN |
        SIUL2_0_PORT100_FLEXPWM_0_PWM_0_A_3_IN |
        SIUL2_0_PORT101_FXIO_FXIO_D15_IN |
        SIUL2_0_PORT102_LPUART2_LPUART2_RX_IN |
        SIUL2_0_PORT103_LPUART2_LPUART2_TX_IN |
        SIUL2_0_PORT104_FXIO_FXIO_D11_IN |
        SIUL2_0_PORT105_LPI2C1_LPI2C1_SCL_IN |
        SIUL2_0_PORT106_QUADSPI_QUADSPI_SCKFA_IN |
        SIUL2_0_PORT107_QUADSPI_QUADSPI_IOFA0_IN |
        SIUL2_0_PORT108_EMAC_EMAC_MII_RMII_TX_CLK_IN |
        SIUL2_0_PORT109_LPUART1_LPUART1_RX_IN |
        SIUL2_0_PORT110_LPSPI5_LPSPI5_SCK_IN |
        SIUL2_0_PORT111_FXIO_FXIO_D6_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT113_FXIO_FXIO_D9_IN |
        SIUL2_0_PORT114_ETPU_A_ETPU_A_CH_17_IN |
        SIUL2_0_PORT115_SDADC_3_EXT_DATA3_IN |
        SIUL2_0_PORT116_LPSPI0_LPSPI0_PCS6_IN |
        SIUL2_0_PORT117_ETPU_A_ETPU_A_CH_2_IN |
        SIUL2_0_PORT118_ETPU_B_ETPU_B_TCRCLK_IN |
        SIUL2_0_PORT119_ETPU_A_ETPU_A_CH_4_IN |
        SIUL2_0_PORT120_FLEXPWM_0_PWM_0_A_0_IN */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT128_ETPU_A_ETPU_A_CH_1_IN |
        SIUL2_0_PORT129_ETPU_A_ETPU_A_CH_2_IN |
        SIUL2_0_PORT130_LPUART1_LPUART1_CTS_IN |
        SIUL2_0_PORT132_LPSPI1_LPSPI1_PCS1_IN |
        SIUL2_0_PORT133_ETPU_A_ETPU_A_CH_11_IN |
        SIUL2_0_PORT135_LPSPI3_LPSPI3_SCK_IN |
        SIUL2_0_PORT136_LPSPI3_LPSPI3_PCS1_IN |
        SIUL2_0_PORT137_LPSPI5_LPSPI5_SOUT_IN |
        SIUL2_0_PORT138_LPSPI2_LPSPI2_PCS1_IN |
        SIUL2_0_PORT139_LPSPI1_LPSPI1_PCS4_IN |
        SIUL2_0_PORT142_FXIO_FXIO_D7_IN |
        SIUL2_0_PORT143_FXIO_FXIO_D2_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT144_LPSPI2_LPSPI2_SIN_IN |
        SIUL2_0_PORT154_ETPU_B_ETPU_B_CH_3_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(10U)
                ),
        /* Pads 160 - 175
        SIUL2_0_PORT160_LPSPI2_LPSPI2_SCK_IN |
        SIUL2_0_PORT161_LPUART1_LPUART1_RX_IN |
        SIUL2_0_PORT162_LPUART2_LPUART2_TX_IN |
        SIUL2_0_PORT163_LPSPI2_LPSPI2_PCS0_IN |
        SIUL2_0_PORT168_ETPU_B_ETPU_B_CH_22_IN |
        SIUL2_0_PORT172_ETPU_B_ETPU_B_CH_26_IN |
        SIUL2_0_PORT173_ETPU_B_ETPU_B_CH_27_IN |
        SIUL2_0_PORT174_FXIO_FXIO_D3_IN |
        SIUL2_0_PORT175_FCCU_FCCU_ERR_IN1_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 176 - 191
        SIUL2_0_PORT176_ETPU_B_ETPU_B_CH_21_IN |
        SIUL2_0_PORT178_ETPU_A_ETPU_A_CH_18_IN |
        SIUL2_0_PORT180_LPSPI3_LPSPI3_PCS3_IN |
        SIUL2_0_PORT181_LPI2C0_LPI2C0_SDA_IN |
        SIUL2_0_PORT183_ETPU_A_ETPU_A_CH_13_IN |
        SIUL2_0_PORT185_ETPU_B_ETPU_B_TCRCLK_IN |
        SIUL2_0_PORT186_MSC0_LPUART_MSC0_RX_IN |
        SIUL2_0_PORT189_LPSPI3_LPSPI3_PCS1_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 192 - 207
        SIUL2_0_PORT194_ETPU_A_ETPU_A_CH_22_IN |
        SIUL2_0_PORT195_ETPU_A_ETPU_A_CH_23_IN |
        SIUL2_0_PORT200_LPI2C0_LPI2C0_SCL_IN |
        SIUL2_0_PORT205_ETPU_B_ETPU_B_CH_28_IN */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT6_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT0_LPUART0_LPUART0_CTS_IN |
        SIUL2_0_PORT2_LPSPI1_LPSPI1_SIN_IN |
        SIUL2_0_PORT3_LPUART0_LPUART0_TX_IN |
        SIUL2_0_PORT6_LPSPI1_LPSPI1_PCS1_IN |
        SIUL2_0_PORT7_LPUART0_LPUART0_DCD_B_IN |
        SIUL2_0_PORT8_ETPU_B_ETPU_B_CH_0_IN |
        SIUL2_0_PORT9_LPUART2_LPUART2_TX_IN |
        SIUL2_0_PORT14_ETPU_B_ETPU_B_CH_9_IN |
        SIUL2_0_PORT15_LPSPI2_LPSPI2_PCS3_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT16_LPSPI4_LPSPI4_PCS3_IN |
        SIUL2_0_PORT17_ETPU_A_ETPU_A_CH_8_IN |
        SIUL2_0_PORT18_ETPU_B_ETPU_B_CH_1_IN |
        SIUL2_0_PORT21_LPSPI2_LPSPI2_PCS2_IN |
        SIUL2_0_PORT26_PG_PGOOD_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(10U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT32_LPI2C0_LPI2C0_SDAS_IN |
        SIUL2_0_PORT33_LPUART0_LPUART0_TX_IN |
        SIUL2_0_PORT34_LPSPI2_LPSPI2_SIN_IN |
        SIUL2_0_PORT35_TRGMUX_TRGMUX_IN2_IN |
        SIUL2_0_PORT40_LPUART1_LPUART1_DCD_B_IN |
        SIUL2_0_PORT43_LPUART0_LPUART0_DSR_B_IN |
        SIUL2_0_PORT44_LPSPI3_LPSPI3_PCS3_IN |
        SIUL2_0_PORT45_LPSPI3_LPSPI3_PCS2_IN |
        SIUL2_0_PORT46_ETPU_A_ETPU_A_CH_3_IN |
        SIUL2_0_PORT47_TRGMUX_TRGMUX_IN0_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT48_TRGMUX_TRGMUX_IN1_IN |
        SIUL2_0_PORT49_LPSPI1_LPSPI1_PCS3_IN |
        SIUL2_0_PORT50_ETPU_B_ETPU_B_CH_29_IN |
        SIUL2_0_PORT55_LPUART1_LPUART1_RX_IN |
        SIUL2_0_PORT56_EMAC_EMAC_MII_RXD3_IN |
        SIUL2_0_PORT57_EMAC_EMAC_MII_RMII_RX_ER_IN |
        SIUL2_0_PORT59_LPUART1_LPUART1_TX_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT64_EMAC_EMAC_MII_RMII_TX_CLK_IN |
        SIUL2_0_PORT65_EMAC_EMAC_MII_RMII_RXD_0_IN |
        SIUL2_0_PORT66_LPSPI3_LPSPI3_PCS2_IN |
        SIUL2_0_PORT70_LPSPI1_LPSPI1_PCS1_IN |
        SIUL2_0_PORT72_LPSPI0_LPSPI0_SCK_IN |
        SIUL2_0_PORT73_LPSPI0_LPSPI0_SIN_IN |
        SIUL2_0_PORT74_LPUART3_LPUART3_TX_IN |
        SIUL2_0_PORT75_LPUART3_LPUART3_RX_IN |
        SIUL2_0_PORT76_EMAC_EMAC_MII_CRS_IN |
        SIUL2_0_PORT77_EMAC_EMAC_MII_RMII_RX_DV_RGMII_RXCTL_IN |
        SIUL2_0_PORT78_EMAC_EMAC_MII_COL_IN |
        SIUL2_0_PORT79_EMAC_EMAC_MII_CRS_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT80_LPI2C1_LPI2C1_SDAS_IN |
        SIUL2_0_PORT81_EMAC_EMAC_MII_RMII_RX_DV_RGMII_RXCTL_IN |
        SIUL2_0_PORT84_TRACE_EVTI_1_IN |
        SIUL2_0_PORT87_QUADSPI_QUADSPI_INTA_IN |
        SIUL2_0_PORT88_FLEXPWM_1_PWM_1_EXT_CLK_IN |
        SIUL2_0_PORT89_TRGMUX_TRGMUX_IN6_IN |
        SIUL2_0_PORT90_LPSPI4_LPSPI4_SIN_IN |
        SIUL2_0_PORT91_ETPU_A_ETPU_A_CH_14_IN |
        SIUL2_0_PORT92_ETPU_B_ETPU_B_CH_5_IN |
        SIUL2_0_PORT93_LPI2C1_LPI2C1_SDA_IN |
        SIUL2_0_PORT95_ETPU_A_ETPU_A_CH_17_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT96_LPUART1_LPUART1_RX_IN |
        SIUL2_0_PORT97_LPSPI3_LPSPI3_SCK_IN |
        SIUL2_0_PORT98_TRGMUX_TRGMUX_IN5_IN |
        SIUL2_0_PORT99_TRGMUX_TRGMUX_IN4_IN |
        SIUL2_0_PORT100_ETPU_A_ETPU_A_CH_6_IN |
        SIUL2_0_PORT101_LPSPI0_LPSPI0_PCS1_IN |
        SIUL2_0_PORT102_LPSPI0_LPSPI0_PCS0_IN |
        SIUL2_0_PORT104_LPUART2_LPUART2_RX_IN |
        SIUL2_0_PORT105_EMAC_EMAC_MII_RMII_RXD_0_IN |
        SIUL2_0_PORT106_ETPU_B_ETPU_B_CH_25_IN |
        SIUL2_0_PORT107_LPUART2_LPUART2_CTS_IN |
        SIUL2_0_PORT108_QUADSPI_QUADSPI_IOFA2_IN |
        SIUL2_0_PORT109_LPI2C0_LPI2C0_SDA_IN |
        SIUL2_0_PORT110_EMAC_EMAC_MII_RMII_RX_DV_RGMII_RXCTL_IN |
        SIUL2_0_PORT111_FXIO_FXIO_D10_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT113_LPUART2_LPUART2_RX_IN |
        SIUL2_0_PORT115_ETPU_A_ETPU_A_CH_19_IN |
        SIUL2_0_PORT116_LPSPI1_LPSPI1_PCS2_IN |
        SIUL2_0_PORT117_ETPU_A_ETPU_A_CH_7_IN |
        SIUL2_0_PORT118_ETPU_B_ETPU_B_CH_0_IN |
        SIUL2_0_PORT120_ETPU_A_ETPU_A_CH_1_IN */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(8U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT128_ETPU_B_ETPU_B_CH_4_IN |
        SIUL2_0_PORT129_ETPU_B_ETPU_B_CH_2_IN |
        SIUL2_0_PORT132_ETPU_B_ETPU_B_CH_6_IN |
        SIUL2_0_PORT133_ETPU_B_ETPU_B_CH_5_IN |
        SIUL2_0_PORT135_ETPU_A_ETPU_A_CH_16_IN |
        SIUL2_0_PORT136_LPSPI5_LPSPI5_PCS1_IN |
        SIUL2_0_PORT137_LPUART2_LPUART2_CTS_IN |
        SIUL2_0_PORT138_LPSPI3_LPSPI3_SIN_IN |
        SIUL2_0_PORT139_LPSPI2_LPSPI2_PCS0_IN |
        SIUL2_0_PORT142_LPUART1_LPUART1_TX_IN |
        SIUL2_0_PORT143_LPUART3_LPUART3_RX_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT144_LPUART3_LPUART3_TX_IN */
        (uint16)( SHL_PAD_U32(0U)
                ),
        /* Pads 160 - 175
        SIUL2_0_PORT160_LPUART1_LPUART1_TX_IN |
        SIUL2_0_PORT161_LPSPI2_LPSPI2_SIN_IN |
        SIUL2_0_PORT174_SDADC_0_EXT_CLKIN0_IN |
        SIUL2_0_PORT175_LPSPI3_LPSPI3_SOUT_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 176 - 191
        SIUL2_0_PORT180_LPUART0_LPUART0_TX_IN |
        SIUL2_0_PORT181_LPSPI1_LPSPI1_PCS0_IN |
        SIUL2_0_PORT185_ETPU_B_ETPU_B_CH_0_IN |
        SIUL2_0_PORT186_ETPU_B_ETPU_B_CH_2_IN |
        SIUL2_0_PORT189_ETPU_B_ETPU_B_CH_29_IN */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 192 - 207
        SIUL2_0_PORT200_ETPU_B_ETPU_B_CH_14_IN |
        SIUL2_0_PORT205_ETPU_A_ETPU_A_CH_20_IN */
        (uint16)( SHL_PAD_U32(8U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT7_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT2_LPSPI5_LPSPI5_SIN_IN |
        SIUL2_0_PORT3_FLEXPWM_0_PWM_0_A_1_IN |
        SIUL2_0_PORT6_LPSPI3_LPSPI3_PCS1_IN |
        SIUL2_0_PORT7_FLEXPWM_1_PWM_1_B_1_IN |
        SIUL2_0_PORT8_ETPU_A_ETPU_A_CH_5_IN |
        SIUL2_0_PORT9_PG_PGOOD_IN |
        SIUL2_0_PORT15_LPSPI5_LPSPI5_PCS0_IN */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT16_LPUART1_LPUART1_DSR_B_IN |
        SIUL2_0_PORT21_ETPU_A_ETPU_A_CH_1_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(5U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT32_LPSPI0_LPSPI0_PCS0_IN |
        SIUL2_0_PORT33_ETPU_B_ETPU_B_CH_9_IN |
        SIUL2_0_PORT34_TRGMUX_TRGMUX_IN3_IN |
        SIUL2_0_PORT35_LPUART1_LPUART1_TX_IN |
        SIUL2_0_PORT43_ETPU_A_ETPU_A_TCRCLK_IN |
        SIUL2_0_PORT44_LPUART0_LPUART0_DCD_B_IN |
        SIUL2_0_PORT45_LPUART0_LPUART0_TX_IN |
        SIUL2_0_PORT46_ETPU_A_ETPU_A_CH_9_IN |
        SIUL2_0_PORT47_LPUART3_LPUART3_TX_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT48_LPUART0_LPUART0_TX_IN |
        SIUL2_0_PORT49_LPSPI3_LPSPI3_PCS0_IN |
        SIUL2_0_PORT55_EMAC_EMAC_MII_COL_IN |
        SIUL2_0_PORT57_ETPU_B_ETPU_B_CH_21_IN |
        SIUL2_0_PORT59_QUADSPI_QUADSPI_INTA_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT64_EMAC_EMAC_MII_RX_CLK_IN |
        SIUL2_0_PORT65_EMAC_EMAC_MII_RMII_RXD_1_IN |
        SIUL2_0_PORT66_QUADSPI_QUADSPI_IOFA3_IN |
        SIUL2_0_PORT72_LPUART0_LPUART0_CTS_IN |
        SIUL2_0_PORT73_LPUART1_LPUART1_TX_IN |
        SIUL2_0_PORT74_LPUART0_LPUART0_DSR_B_IN |
        SIUL2_0_PORT75_LPSPI4_LPSPI4_SOUT_IN |
        SIUL2_0_PORT76_EMAC_EMAC_MII_RMII_RX_ER_IN |
        SIUL2_0_PORT77_LPUART2_LPUART2_TX_IN |
        SIUL2_0_PORT78_EMAC_EMAC_MII_RMII_RX_ER_IN |
        SIUL2_0_PORT79_EMAC_EMAC_MII_RMII_RX_DV_RGMII_RXCTL_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT80_LPSPI3_LPSPI3_SIN_IN |
        SIUL2_0_PORT81_QUADSPI_QUADSPI_IOFA7_IN |
        SIUL2_0_PORT84_QUADSPI_QUADSPI_INTA_IN |
        SIUL2_0_PORT87_ETPU_A_ETPU_A_CH_15_IN |
        SIUL2_0_PORT88_ETPU_B_ETPU_B_CH_21_IN |
        SIUL2_0_PORT89_FLEXPWM_1_PWM_1_EXT_FORCE_IN |
        SIUL2_0_PORT90_TRGMUX_TRGMUX_IN4_IN |
        SIUL2_0_PORT93_LPUART1_LPUART1_DCD_B_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT96_LPSPI3_LPSPI3_SOUT_IN |
        SIUL2_0_PORT97_LPUART1_LPUART1_TX_IN |
        SIUL2_0_PORT98_LPUART3_LPUART3_TX_IN |
        SIUL2_0_PORT99_FLEXPWM_0_PWM_0_B_2_IN |
        SIUL2_0_PORT101_EMAC_EMAC_MII_RX_CLK_IN |
        SIUL2_0_PORT102_EMAC_EMAC_MII_RMII_TX_CLK_IN |
        SIUL2_0_PORT104_LPI2C1_LPI2C1_SDA_IN |
        SIUL2_0_PORT105_EMAC_EMAC_MII_RXD2_IN |
        SIUL2_0_PORT106_ETPU_A_ETPU_A_CH_17_IN |
        SIUL2_0_PORT107_ETPU_B_ETPU_B_CH_24_IN |
        SIUL2_0_PORT109_LPSPI5_LPSPI5_SIN_IN |
        SIUL2_0_PORT110_LPUART1_LPUART1_TX_IN |
        SIUL2_0_PORT111_LPUART0_LPUART0_RX_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT113_LPSPI3_LPSPI3_PCS0_IN |
        SIUL2_0_PORT116_LPSPI3_LPSPI3_SIN_IN */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(4U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT132_ETPU_A_ETPU_A_CH_12_IN |
        SIUL2_0_PORT137_SYSTEM_SWG_EXT_REF_CLK_IN |
        SIUL2_0_PORT138_ETPU_B_ETPU_B_CH_23_IN |
        SIUL2_0_PORT139_LPUART0_LPUART0_TX_IN |
        SIUL2_0_PORT143_LPSPI2_LPSPI2_SCK_IN */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT144_ETPU_A_ETPU_A_CH_6_IN */
        (uint16)( SHL_PAD_U32(0U)
                ),
        /* Pads 160 - 175
        SIUL2_0_PORT160_SYSTEM_SWG_EXT_REF_CLK_IN |
        SIUL2_0_PORT174_ETPU_B_ETPU_B_CH_18_IN |
        SIUL2_0_PORT175_ETPU_B_ETPU_B_CH_20_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 176 - 191
        SIUL2_0_PORT180_SDADC_1_EXT_CLKIN1_IN |
        SIUL2_0_PORT181_ETPU_B_ETPU_B_CH_24_IN |
        SIUL2_0_PORT189_ETPU_A_ETPU_A_TCRCLK_IN */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT8_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT2_FLEXPWM_0_PWM_0_B_0_IN |
        SIUL2_0_PORT3_ETPU_A_ETPU_A_CH_3_IN |
        SIUL2_0_PORT6_LPUART1_LPUART1_CTS_IN |
        SIUL2_0_PORT7_ETPU_A_ETPU_A_CH_20_IN |
        SIUL2_0_PORT9_ETPU_B_ETPU_B_CH_1_IN */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47
        SIUL2_0_PORT32_ETPU_B_ETPU_B_CH_7_IN |
        SIUL2_0_PORT33_FLEXPWM_1_PWM_1_X_1_IN |
        SIUL2_0_PORT34_QUADSPI_QUADSPI_INTA_IN |
        SIUL2_0_PORT43_ETPU_A_ETPU_A_CH_0_IN |
        SIUL2_0_PORT44_ETPU_A_ETPU_A_TCRCLK_IN |
        SIUL2_0_PORT45_LPUART0_LPUART0_RIN_B_IN |
        SIUL2_0_PORT46_FLEXPWM_0_PWM_0_X_3_IN |
        SIUL2_0_PORT47_ETPU_A_ETPU_A_CH_4_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT48_ETPU_A_ETPU_A_CH_10_IN |
        SIUL2_0_PORT49_TRGMUX_TRGMUX_IN3_IN |
        SIUL2_0_PORT55_EMAC_EMAC_MII_RMII_RXD_0_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(7U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT64_ETPU_B_ETPU_B_CH_26_IN |
        SIUL2_0_PORT65_EMAC_EMAC_MII_RX_CLK_IN |
        SIUL2_0_PORT72_FLEXPWM_1_PWM_1_B_2_IN |
        SIUL2_0_PORT73_FLEXPWM_1_PWM_1_A_3_IN |
        SIUL2_0_PORT74_MSC0_DSPI_MSC0_SIN_IN |
        SIUL2_0_PORT75_TRGMUX_TRGMUX_IN5_IN |
        SIUL2_0_PORT77_QUADSPI_QUADSPI_INTA_IN |
        SIUL2_0_PORT78_EMAC_EMAC_MII_RMII_RXD_0_IN |
        SIUL2_0_PORT79_EMAC_EMAC_MII_RMII_RXD_0_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT80_EMAC_EMAC_MII_RMII_RX_ER_IN |
        SIUL2_0_PORT81_ETPU_B_ETPU_B_CH_19_IN |
        SIUL2_0_PORT84_ETPU_A_ETPU_A_CH_22_IN |
        SIUL2_0_PORT88_ETPU_A_ETPU_A_CH_12_IN |
        SIUL2_0_PORT89_ETPU_B_ETPU_B_CH_20_IN |
        SIUL2_0_PORT90_ETPU_B_ETPU_B_CH_18_IN |
        SIUL2_0_PORT93_FLEXPWM_1_PWM_1_A_2_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT96_LPUART0_LPUART0_CTS_IN |
        SIUL2_0_PORT97_ETPU_A_ETPU_A_CH_2_IN |
        SIUL2_0_PORT98_FLEXPWM_0_PWM_0_A_2_IN |
        SIUL2_0_PORT99_ETPU_A_ETPU_A_CH_11_IN |
        SIUL2_0_PORT101_TRGMUX_TRGMUX_IN7_IN |
        SIUL2_0_PORT102_ETPU_B_ETPU_B_CH_15_IN |
        SIUL2_0_PORT104_LPSPI3_LPSPI3_SOUT_IN |
        SIUL2_0_PORT105_LPUART2_LPUART2_TX_IN |
        SIUL2_0_PORT107_ETPU_A_ETPU_A_CH_14_IN |
        SIUL2_0_PORT110_QUADSPI_QUADSPI_INTA_IN |
        SIUL2_0_PORT111_LPSPI0_LPSPI0_SCK_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT113_LPSPI5_LPSPI5_PCS0_IN |
        SIUL2_0_PORT116_TRGMUX_TRGMUX_IN2_IN */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(4U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT138_ETPU_A_ETPU_A_CH_10_IN |
        SIUL2_0_PORT139_ETPU_B_ETPU_B_CH_22_IN |
        SIUL2_0_PORT143_LPUART1_LPUART1_CTS_IN */
        (uint16)( SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT144_ETPU_B_ETPU_B_CH_8_IN */
        (uint16)( SHL_PAD_U32(0U)
                ),
        /* Pads 160 - 175
        SIUL2_0_PORT175_ETPU_B_ETPU_B_CH_1_IN */
        (uint16)( SHL_PAD_U32(15U)
                ),
        /* Pads 176 - 191
        SIUL2_0_PORT180_MSC0_DSPI_MSC0_SIN_IN |
        SIUL2_0_PORT181_SDADC_2_EXT_CLKIN2_IN |
        SIUL2_0_PORT189_ETPU_A_ETPU_A_CH_0_IN */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT9_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT2_ETPU_A_ETPU_A_CH_2_IN |
        SIUL2_0_PORT6_LPUART0_LPUART0_RIN_B_IN |
        SIUL2_0_PORT9_ETPU_A_ETPU_A_CH_12_IN */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47
        SIUL2_0_PORT32_FLEXPWM_1_PWM_1_X_0_IN |
        SIUL2_0_PORT34_MSC0_LPUART_MSC0_RX_IN |
        SIUL2_0_PORT44_ETPU_A_ETPU_A_CH_0_IN |
        SIUL2_0_PORT45_MSC0_LPUART_MSC0_RX_IN |
        SIUL2_0_PORT47_ETPU_B_ETPU_B_CH_13_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT48_ETPU_B_ETPU_B_CH_14_IN |
        SIUL2_0_PORT49_FLEXPWM_0_PWM_0_EXT_CLK_IN |
        SIUL2_0_PORT55_EMAC_EMAC_MII_RMII_RXD_1_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(7U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT64_QUADSPI_QUADSPI_IOFA4_IN |
        SIUL2_0_PORT65_QUADSPI_QUADSPI_DQSFA_IN |
        SIUL2_0_PORT72_ETPU_A_ETPU_A_CH_22_IN |
        SIUL2_0_PORT73_MSC0_LPUART_MSC0_RX_IN |
        SIUL2_0_PORT74_ETPU_A_ETPU_A_CH_23_IN |
        SIUL2_0_PORT75_ETPU_B_ETPU_B_CH_19_IN |
        SIUL2_0_PORT78_EMAC_EMAC_MII_RXD2_IN |
        SIUL2_0_PORT79_EMAC_EMAC_MII_RMII_RXD_1_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT80_EMAC_EMAC_MII_RX_CLK_IN |
        SIUL2_0_PORT89_ETPU_B_ETPU_B_CH_8_IN |
        SIUL2_0_PORT93_ETPU_A_ETPU_A_CH_21_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT96_ETPU_A_ETPU_A_CH_7_IN |
        SIUL2_0_PORT98_ETPU_A_ETPU_A_CH_10_IN |
        SIUL2_0_PORT101_ETPU_B_ETPU_B_CH_16_IN |
        SIUL2_0_PORT104_EMAC_EMAC_MII_RMII_RXD_1_IN |
        SIUL2_0_PORT105_ETPU_B_ETPU_B_CH_27_IN |
        SIUL2_0_PORT111_LPUART2_LPUART2_CTS_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT116_FLEXPWM_0_PWM_0_EXT_FORCE_IN */
        (uint16)( SHL_PAD_U32(4U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT139_ETPU_A_ETPU_A_CH_9_IN |
        SIUL2_0_PORT143_ETPU_A_ETPU_A_TCRCLK_IN */
        (uint16)( SHL_PAD_U32(11U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191
        SIUL2_0_PORT180_ETPU_B_ETPU_B_TCRCLK_IN |
        SIUL2_0_PORT181_ETPU_A_ETPU_A_CH_14_IN |
        SIUL2_0_PORT189_ETPU_A_ETPU_A_CH_21_IN */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT10_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT6_FLEXPWM_1_PWM_1_B_0_IN */
        (uint16)( SHL_PAD_U32(6U)
                ),
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47
        SIUL2_0_PORT44_ETPU_B_ETPU_B_CH_2_IN |
        SIUL2_0_PORT45_ETPU_A_ETPU_A_CH_1_IN */
        (uint16)( SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT48_ETPU_B_ETPU_B_CH_1_IN |
        SIUL2_0_PORT49_ETPU_B_ETPU_B_CH_16_IN |
        SIUL2_0_PORT55_EMAC_EMAC_MII_RXD2_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(7U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT64_ETPU_A_ETPU_A_CH_18_IN |
        SIUL2_0_PORT73_ETPU_A_ETPU_A_CH_13_IN |
        SIUL2_0_PORT74_ETPU_B_ETPU_B_CH_5_IN |
        SIUL2_0_PORT75_ETPU_B_ETPU_B_CH_6_IN |
        SIUL2_0_PORT78_EMAC_EMAC_MII_RXD3_IN |
        SIUL2_0_PORT79_EMAC_EMAC_MII_RXD2_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111
        SIUL2_0_PORT104_EMAC_EMAC_MII_RXD3_IN |
        SIUL2_0_PORT105_QUADSPI_QUADSPI_IOFA5_IN */
        (uint16)( SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT116_ETPU_A_ETPU_A_CH_11_IN */
        (uint16)( SHL_PAD_U32(4U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT143_ETPU_A_ETPU_A_CH_0_IN */
        (uint16)( SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191
        SIUL2_0_PORT180_ETPU_B_ETPU_B_CH_0_IN */
        (uint16)( SHL_PAD_U32(4U)
                ),
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT11_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT6_ETPU_A_ETPU_A_CH_18_IN */
        (uint16)( SHL_PAD_U32(6U)
                ),
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47
        SIUL2_0_PORT45_ETPU_B_ETPU_B_CH_4_IN */
        (uint16)( SHL_PAD_U32(13U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT49_ETPU_A_ETPU_A_CH_7_IN |
        SIUL2_0_PORT55_ETPU_B_ETPU_B_CH_20_IN */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(7U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT74_FLEXPWM_1_PWM_1_X_3_IN |
        SIUL2_0_PORT79_EMAC_EMAC_MII_RXD3_IN */
        (uint16)( SHL_PAD_U32(10U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111
        SIUL2_0_PORT104_QUADSPI_QUADSPI_IOFA6_IN |
        SIUL2_0_PORT105_ETPU_A_ETPU_A_CH_19_IN */
        (uint16)( SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT116_ETPU_B_ETPU_B_CH_15_IN */
        (uint16)( SHL_PAD_U32(4U)
                ),
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191
        SIUL2_0_PORT180_ETPU_B_ETPU_B_CH_19_IN */
        (uint16)( SHL_PAD_U32(4U)
                ),
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT12_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63
        SIUL2_0_PORT49_ETPU_A_ETPU_A_CH_5_IN */
        (uint16)( SHL_PAD_U32(1U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT79_LPUART2_LPUART2_TX_IN */
        (uint16)( SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111
        SIUL2_0_PORT104_ETPU_B_ETPU_B_CH_18_IN */
        (uint16)( SHL_PAD_U32(8U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT116_ETPU_B_ETPU_B_CH_3_IN */
        (uint16)( SHL_PAD_U32(4U)
                ),
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT13_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT14_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT15_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT1_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT7_LPUART3_LPUART3_TX_INOUT */
        (uint16)( SHL_PAD_U32(7U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT21_LPSPI2_LPSPI2_PCS2_INOUT |
        SIUL2_0_PORT31_EMAC_EMAC_PPS0_INOUT */
        (uint16)( SHL_PAD_U32(5U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT32_LPI2C0_LPI2C0_SDAS_INOUT |
        SIUL2_0_PORT33_LPI2C0_LPI2C0_SCLS_INOUT |
        SIUL2_0_PORT42_LPSPI4_LPSPI4_SCK_INOUT |
        SIUL2_0_PORT43_LPSPI4_LPSPI4_SIN_INOUT |
        SIUL2_0_PORT44_LPSPI3_LPSPI3_PCS3_INOUT |
        SIUL2_0_PORT45_LPSPI3_LPSPI3_PCS2_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT51_EMAC_EMAC_PPS0_INOUT */
        (uint16)( SHL_PAD_U32(3U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT72_LPI2C0_LPI2C0_SCL_INOUT |
        SIUL2_0_PORT73_LPI2C0_LPI2C0_SDA_INOUT |
        SIUL2_0_PORT74_EMIOS_0_EMIOS_0_CH_6_Z_INOUT */
        (uint16)( SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT80_LPSPI3_LPSPI3_SIN_INOUT |
        SIUL2_0_PORT81_LPSPI3_LPSPI3_SCK_INOUT |
        SIUL2_0_PORT85_EMAC_EMAC_PPS1_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(5U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT104_LPSPI3_LPSPI3_SOUT_INOUT |
        SIUL2_0_PORT108_EMAC_EMAC_MII_RMII_TX_CLK_INOUT |
        SIUL2_0_PORT109_LPSPI5_LPSPI5_SIN_INOUT |
        SIUL2_0_PORT110_LPSPI5_LPSPI5_SCK_INOUT |
        SIUL2_0_PORT111_FXIO_FXIO_D6_INOUT */
        (uint16)( SHL_PAD_U32(8U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT113_LPSPI5_LPSPI5_PCS0_INOUT */
        (uint16)( SHL_PAD_U32(1U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT132_LPSPI0_LPSPI0_PCS0_INOUT |
        SIUL2_0_PORT136_LPSPI3_LPSPI3_PCS1_INOUT |
        SIUL2_0_PORT137_LPSPI5_LPSPI5_SOUT_INOUT |
        SIUL2_0_PORT142_EMIOS_0_EMIOS_0_CH_19_Z_INOUT */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT2_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT7_LPSPI0_LPSPI0_PCS1_INOUT |
        SIUL2_0_PORT9_LPUART2_LPUART2_TX_INOUT |
        SIUL2_0_PORT10_EMIOS_0_EMIOS_0_CH_12_Z_INOUT */
        (uint16)( SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT17_EMIOS_0_EMIOS_0_CH_6_Z_INOUT |
        SIUL2_0_PORT24_FXIO_FXIO_D3_INOUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(8U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT32_FXIO_FXIO_D14_INOUT |
        SIUL2_0_PORT33_LPUART0_LPUART0_TX_INOUT |
        SIUL2_0_PORT34_EMIOS_0_EMIOS_0_CH_8_Z_INOUT |
        SIUL2_0_PORT35_EMIOS_0_EMIOS_0_CH_9_Z_INOUT |
        SIUL2_0_PORT36_EMIOS_0_EMIOS_0_CH_4_Z_INOUT |
        SIUL2_0_PORT37_EMIOS_0_EMIOS_0_CH_5_Z_INOUT |
        SIUL2_0_PORT44_EMIOS_0_EMIOS_0_CH_0_Z_INOUT |
        SIUL2_0_PORT45_EMIOS_0_EMIOS_0_CH_1_Z_INOUT |
        SIUL2_0_PORT46_EMIOS_0_EMIOS_0_CH_2_Z_INOUT |
        SIUL2_0_PORT47_EMIOS_0_EMIOS_0_CH_3_Z_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT48_EMIOS_0_EMIOS_0_CH_4_Z_INOUT |
        SIUL2_0_PORT49_EMIOS_0_EMIOS_0_CH_5_Z_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT64_EMIOS_0_EMIOS_0_CH_0_Z_INOUT |
        SIUL2_0_PORT65_EMIOS_0_EMIOS_0_CH_1_Z_INOUT |
        SIUL2_0_PORT66_EMIOS_0_EMIOS_0_CH_2_Z_INOUT |
        SIUL2_0_PORT67_EMIOS_0_EMIOS_0_CH_3_Z_INOUT |
        SIUL2_0_PORT68_EMIOS_0_EMIOS_0_CH_8_Z_INOUT |
        SIUL2_0_PORT69_EMIOS_0_EMIOS_0_CH_16_Z_INOUT |
        SIUL2_0_PORT73_LPUART1_LPUART1_TX_INOUT |
        SIUL2_0_PORT78_EMIOS_0_EMIOS_0_CH_10_Z_INOUT |
        SIUL2_0_PORT79_EMIOS_0_EMIOS_0_CH_11_Z_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT82_FXIO_FXIO_D6_INOUT */
        (uint16)( SHL_PAD_U32(2U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT96_EMIOS_0_EMIOS_0_CH_2_Z_INOUT |
        SIUL2_0_PORT97_EMIOS_0_EMIOS_0_CH_3_Z_INOUT |
        SIUL2_0_PORT101_EMIOS_0_EMIOS_0_CH_19_Z_INOUT |
        SIUL2_0_PORT102_FXIO_FXIO_D3_INOUT |
        SIUL2_0_PORT103_LPUART2_LPUART2_TX_INOUT |
        SIUL2_0_PORT104_LPI2C1_LPI2C1_SDA_INOUT |
        SIUL2_0_PORT105_LPI2C1_LPI2C1_SCL_INOUT |
        SIUL2_0_PORT106_EMIOS_0_EMIOS_0_CH_16_Z_INOUT |
        SIUL2_0_PORT107_EMIOS_0_EMIOS_0_CH_17_Z_INOUT |
        SIUL2_0_PORT108_EMIOS_0_EMIOS_0_CH_18_Z_INOUT |
        SIUL2_0_PORT109_EMIOS_0_EMIOS_0_CH_20_Z_INOUT |
        SIUL2_0_PORT110_EMIOS_0_EMIOS_0_CH_21_Z_INOUT |
        SIUL2_0_PORT111_EMIOS_0_EMIOS_0_CH_0_Z_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT112_EMIOS_0_EMIOS_0_CH_1_Z_INOUT |
        SIUL2_0_PORT113_EMIOS_0_EMIOS_0_CH_18_Z_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT128_LPSPI0_LPSPI0_SIN_INOUT |
        SIUL2_0_PORT129_LPSPI0_LPSPI0_SCK_INOUT |
        SIUL2_0_PORT132_LPSPI1_LPSPI1_PCS1_INOUT |
        SIUL2_0_PORT135_EMIOS_0_EMIOS_0_CH_7_Z_INOUT |
        SIUL2_0_PORT136_EMIOS_0_EMIOS_0_CH_6_Z_INOUT |
        SIUL2_0_PORT137_EMIOS_0_EMIOS_0_CH_7_Z_INOUT |
        SIUL2_0_PORT138_LPSPI3_LPSPI3_SIN_INOUT |
        SIUL2_0_PORT139_LPSPI2_LPSPI2_PCS0_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT144_LPUART3_LPUART3_TX_INOUT |
        SIUL2_0_PORT147_EMIOS_0_EMIOS_0_CH_22_Z_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(3U)
                ),
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207
        SIUL2_0_PORT198_FXIO_FXIO_D10_INOUT |
        SIUL2_0_PORT199_FXIO_FXIO_D11_INOUT |
        SIUL2_0_PORT200_FXIO_FXIO_D12_INOUT |
        SIUL2_0_PORT205_FXIO_FXIO_D13_INOUT |
        SIUL2_0_PORT207_FXIO_FXIO_D14_INOUT */
        (uint16)( SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT3_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT3_LPSPI1_LPSPI1_SCK_INOUT |
        SIUL2_0_PORT4_FXIO_FXIO_D6_INOUT |
        SIUL2_0_PORT6_LPSPI1_LPSPI1_PCS1_INOUT |
        SIUL2_0_PORT8_LPSPI2_LPSPI2_SOUT_INOUT |
        SIUL2_0_PORT9_LPSPI2_LPSPI2_PCS0_INOUT |
        SIUL2_0_PORT14_LPSPI1_LPSPI1_PCS3_INOUT */
        (uint16)( SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT18_LPUART1_LPUART1_TX_INOUT |
        SIUL2_0_PORT21_FXIO_FXIO_D0_INOUT |
        SIUL2_0_PORT22_FXIO_FXIO_D1_INOUT |
        SIUL2_0_PORT23_FXIO_FXIO_D2_INOUT |
        SIUL2_0_PORT25_FXIO_FXIO_D2_INOUT |
        SIUL2_0_PORT26_LPSPI1_LPSPI1_PCS0_INOUT |
        SIUL2_0_PORT29_EMAC_EMAC_PPS2_INOUT |
        SIUL2_0_PORT30_LPSPI1_LPSPI1_SOUT_INOUT |
        SIUL2_0_PORT31_FXIO_FXIO_D0_INOUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT32_LPSPI0_LPSPI0_PCS0_INOUT |
        SIUL2_0_PORT33_LPSPI0_LPSPI0_SOUT_INOUT |
        SIUL2_0_PORT34_LPSPI2_LPSPI2_SIN_INOUT |
        SIUL2_0_PORT35_LPSPI2_LPSPI2_SOUT_INOUT |
        SIUL2_0_PORT36_LPSPI0_LPSPI0_SOUT_INOUT |
        SIUL2_0_PORT37_LPSPI0_LPSPI0_PCS1_INOUT |
        SIUL2_0_PORT45_FXIO_FXIO_D8_INOUT |
        SIUL2_0_PORT46_LPSPI1_LPSPI1_SCK_INOUT |
        SIUL2_0_PORT47_LPSPI1_LPSPI1_SIN_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT48_LPSPI1_LPSPI1_SOUT_INOUT |
        SIUL2_0_PORT49_LPSPI1_LPSPI1_PCS3_INOUT |
        SIUL2_0_PORT50_FXIO_FXIO_D1_INOUT |
        SIUL2_0_PORT51_FXIO_FXIO_D2_INOUT |
        SIUL2_0_PORT52_FXIO_FXIO_D3_INOUT |
        SIUL2_0_PORT53_FXIO_FXIO_D4_INOUT |
        SIUL2_0_PORT54_LPSPI3_LPSPI3_PCS1_INOUT |
        SIUL2_0_PORT55_FXIO_FXIO_D4_INOUT |
        SIUL2_0_PORT56_FXIO_FXIO_D5_INOUT |
        SIUL2_0_PORT57_FXIO_FXIO_D6_INOUT |
        SIUL2_0_PORT58_FXIO_FXIO_D7_INOUT |
        SIUL2_0_PORT59_FXIO_FXIO_D8_INOUT |
        SIUL2_0_PORT60_FXIO_FXIO_D9_INOUT |
        SIUL2_0_PORT61_FXIO_FXIO_D10_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT65_QUADSPI_QUADSPI_DQSFA_INOUT |
        SIUL2_0_PORT66_LPSPI3_LPSPI3_PCS2_INOUT |
        SIUL2_0_PORT76_EMIOS_0_EMIOS_0_CH_22_Z_INOUT |
        SIUL2_0_PORT77_EMIOS_0_EMIOS_0_CH_23_Z_INOUT |
        SIUL2_0_PORT78_LPSPI2_LPSPI2_PCS0_INOUT |
        SIUL2_0_PORT79_LPSPI2_LPSPI2_SCK_INOUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT82_FXIO_FXIO_D12_INOUT |
        SIUL2_0_PORT83_FXIO_FXIO_D13_INOUT |
        SIUL2_0_PORT84_FXIO_FXIO_D14_INOUT |
        SIUL2_0_PORT85_FXIO_FXIO_D15_INOUT |
        SIUL2_0_PORT87_FXIO_FXIO_D16_INOUT |
        SIUL2_0_PORT88_FXIO_FXIO_D17_INOUT |
        SIUL2_0_PORT89_FXIO_FXIO_D18_INOUT |
        SIUL2_0_PORT90_FXIO_FXIO_D19_INOUT |
        SIUL2_0_PORT91_FXIO_FXIO_D20_INOUT |
        SIUL2_0_PORT92_FXIO_FXIO_D21_INOUT |
        SIUL2_0_PORT93_FXIO_FXIO_D22_INOUT |
        SIUL2_0_PORT94_FXIO_FXIO_D0_INOUT |
        SIUL2_0_PORT95_FXIO_FXIO_D1_INOUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT96_LPSPI3_LPSPI3_SOUT_INOUT |
        SIUL2_0_PORT97_LPSPI3_LPSPI3_SCK_INOUT |
        SIUL2_0_PORT98_LPSPI1_LPSPI1_SOUT_INOUT |
        SIUL2_0_PORT99_LPSPI1_LPSPI1_PCS0_INOUT |
        SIUL2_0_PORT100_LPSPI1_LPSPI1_PCS1_INOUT |
        SIUL2_0_PORT101_EMIOS_0_EMIOS_0_CH_2_Z_INOUT |
        SIUL2_0_PORT103_LPSPI3_LPSPI3_PCS3_INOUT |
        SIUL2_0_PORT105_FXIO_FXIO_D0_INOUT |
        SIUL2_0_PORT109_FXIO_FXIO_D7_INOUT |
        SIUL2_0_PORT110_LPUART1_LPUART1_TX_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT112_EMAC_EMAC_MII_RMII_MDIO_INOUT |
        SIUL2_0_PORT114_FXIO_FXIO_D2_INOUT |
        SIUL2_0_PORT115_FXIO_FXIO_D3_INOUT |
        SIUL2_0_PORT116_FXIO_FXIO_D25_INOUT |
        SIUL2_0_PORT117_FXIO_FXIO_D26_INOUT |
        SIUL2_0_PORT118_FXIO_FXIO_D27_INOUT |
        SIUL2_0_PORT119_FXIO_FXIO_D28_INOUT |
        SIUL2_0_PORT120_FXIO_FXIO_D29_INOUT |
        SIUL2_0_PORT127_FXIO_FXIO_D6_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT128_FXIO_FXIO_D3_INOUT |
        SIUL2_0_PORT129_FXIO_FXIO_D2_INOUT |
        SIUL2_0_PORT136_LPSPI5_LPSPI5_PCS1_INOUT |
        SIUL2_0_PORT138_LPSPI2_LPSPI2_PCS1_INOUT |
        SIUL2_0_PORT139_EMIOS_0_EMIOS_0_CH_1_Z_INOUT |
        SIUL2_0_PORT143_LPSPI2_LPSPI2_SCK_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT144_LPSPI2_LPSPI2_SIN_INOUT */
        (uint16)( SHL_PAD_U32(0U)
                ),
        /* Pads 160 - 175
        SIUL2_0_PORT160_LPSPI2_LPSPI2_SCK_INOUT |
        SIUL2_0_PORT161_LPSPI2_LPSPI2_SIN_INOUT |
        SIUL2_0_PORT162_LPSPI2_LPSPI2_SOUT_INOUT |
        SIUL2_0_PORT163_LPSPI2_LPSPI2_PCS0_INOUT |
        SIUL2_0_PORT167_LPI2C1_LPI2C1_SCL_INOUT |
        SIUL2_0_PORT168_LPI2C1_LPI2C1_SDA_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U)
                ),
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223
        SIUL2_0_PORT208_FXIO_FXIO_D15_INOUT |
        SIUL2_0_PORT209_FXIO_FXIO_D16_INOUT |
        SIUL2_0_PORT210_FXIO_FXIO_D17_INOUT |
        SIUL2_0_PORT211_FXIO_FXIO_D18_INOUT |
        SIUL2_0_PORT212_FXIO_FXIO_D19_INOUT |
        SIUL2_0_PORT213_FXIO_FXIO_D20_INOUT |
        SIUL2_0_PORT214_FXIO_FXIO_D21_INOUT |
        SIUL2_0_PORT215_FXIO_FXIO_D22_INOUT |
        SIUL2_0_PORT216_FXIO_FXIO_D23_INOUT |
        SIUL2_0_PORT217_FXIO_FXIO_D24_INOUT |
        SIUL2_0_PORT218_FXIO_FXIO_D25_INOUT |
        SIUL2_0_PORT219_FXIO_FXIO_D26_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 224 - 239
        SIUL2_0_PORT231_FXIO_FXIO_D23_INOUT |
        SIUL2_0_PORT232_FXIO_FXIO_D24_INOUT |
        SIUL2_0_PORT233_FXIO_FXIO_D25_INOUT |
        SIUL2_0_PORT234_FXIO_FXIO_D26_INOUT |
        SIUL2_0_PORT235_FXIO_FXIO_D27_INOUT |
        SIUL2_0_PORT236_FXIO_FXIO_D28_INOUT */
        (uint16)( SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U)
                )
    }
    ,
    /*  Mode PORT_INOUT4_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT8_FXIO_FXIO_D6_INOUT |
        SIUL2_0_PORT9_FXIO_FXIO_D7_INOUT |
        SIUL2_0_PORT10_FXIO_FXIO_D0_INOUT */
        (uint16)( SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT18_LPSPI1_LPSPI1_SOUT_INOUT |
        SIUL2_0_PORT19_LPSPI1_LPSPI1_SCK_INOUT |
        SIUL2_0_PORT20_LPSPI1_LPSPI1_SIN_INOUT |
        SIUL2_0_PORT21_LPSPI1_LPSPI1_PCS0_INOUT |
        SIUL2_0_PORT22_LPSPI1_LPSPI1_PCS1_INOUT |
        SIUL2_0_PORT26_LPSPI0_LPSPI0_PCS0_INOUT |
        SIUL2_0_PORT29_LPUART2_LPUART2_TX_INOUT |
        SIUL2_0_PORT30_LPSPI0_LPSPI0_SOUT_INOUT |
        SIUL2_0_PORT31_LPSPI0_LPSPI0_PCS1_INOUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT32_EMIOS_0_EMIOS_0_CH_3_Z_INOUT |
        SIUL2_0_PORT33_EMIOS_0_EMIOS_0_CH_7_Z_INOUT |
        SIUL2_0_PORT37_LPSPI0_LPSPI0_PCS0_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(5U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT50_LPSPI1_LPSPI1_PCS1_INOUT */
        (uint16)( SHL_PAD_U32(2U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT64_QUADSPI_QUADSPI_IOFA4_INOUT |
        SIUL2_0_PORT65_FXIO_FXIO_D5_INOUT |
        SIUL2_0_PORT66_LPSPI0_LPSPI0_PCS2_INOUT |
        SIUL2_0_PORT67_LPUART0_LPUART0_TX_INOUT |
        SIUL2_0_PORT68_FXIO_FXIO_D5_INOUT |
        SIUL2_0_PORT69_FXIO_FXIO_D4_INOUT |
        SIUL2_0_PORT74_LPSPI2_LPSPI2_PCS1_INOUT |
        SIUL2_0_PORT75_FXIO_FXIO_D15_INOUT |
        SIUL2_0_PORT76_LPSPI2_LPSPI2_PCS1_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT80_LPI2C1_LPI2C1_SDAS_INOUT |
        SIUL2_0_PORT81_LPI2C1_LPI2C1_SCLS_INOUT |
        SIUL2_0_PORT92_FXIO_FXIO_D2_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(12U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT96_EMIOS_0_EMIOS_0_CH_16_Z_INOUT |
        SIUL2_0_PORT97_EMIOS_0_EMIOS_0_CH_17_Z_INOUT |
        SIUL2_0_PORT98_FXIO_FXIO_D4_INOUT |
        SIUL2_0_PORT99_FXIO_FXIO_D5_INOUT |
        SIUL2_0_PORT102_EMAC_EMAC_MII_RMII_TX_CLK_INOUT |
        SIUL2_0_PORT103_LPSPI0_LPSPI0_PCS3_INOUT |
        SIUL2_0_PORT109_LPI2C0_LPI2C0_SDA_INOUT |
        SIUL2_0_PORT110_LPI2C0_LPI2C0_SCL_INOUT |
        SIUL2_0_PORT111_LPSPI0_LPSPI0_SCK_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT112_LPSPI0_LPSPI0_SIN_INOUT */
        (uint16)( SHL_PAD_U32(0U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT132_EMIOS_0_EMIOS_0_CH_18_Z_INOUT |
        SIUL2_0_PORT133_EMIOS_0_EMIOS_0_CH_19_Z_INOUT |
        SIUL2_0_PORT136_FXIO_FXIO_D12_INOUT |
        SIUL2_0_PORT138_EMIOS_0_EMIOS_0_CH_20_Z_INOUT |
        SIUL2_0_PORT139_EMIOS_0_EMIOS_0_CH_21_Z_INOUT |
        SIUL2_0_PORT143_EMIOS_0_EMIOS_0_CH_22_Z_INOUT */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT144_EMIOS_0_EMIOS_0_CH_23_Z_INOUT */
        (uint16)( SHL_PAD_U32(0U)
                ),
        /* Pads 160 - 175
        SIUL2_0_PORT164_FXIO_FXIO_D0_INOUT |
        SIUL2_0_PORT167_FXIO_FXIO_D1_INOUT |
        SIUL2_0_PORT168_FXIO_FXIO_D2_INOUT |
        SIUL2_0_PORT172_LPSPI3_LPSPI3_SIN_INOUT |
        SIUL2_0_PORT173_LPSPI3_LPSPI3_SCK_INOUT |
        SIUL2_0_PORT175_LPSPI3_LPSPI3_SOUT_INOUT */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 176 - 191
        SIUL2_0_PORT180_LPI2C0_LPI2C0_SCL_INOUT |
        SIUL2_0_PORT181_LPI2C0_LPI2C0_SDA_INOUT |
        SIUL2_0_PORT188_FXIO_FXIO_D7_INOUT */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(12U)
                ),
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT5_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT2_FXIO_FXIO_D4_INOUT |
        SIUL2_0_PORT3_FXIO_FXIO_D5_INOUT |
        SIUL2_0_PORT6_FXIO_FXIO_D19_INOUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(6U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT26_FXIO_FXIO_D1_INOUT |
        SIUL2_0_PORT29_LPSPI1_LPSPI1_SIN_INOUT */
        (uint16)( SHL_PAD_U32(10U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT36_EMAC_EMAC_MII_RMII_MDIO_INOUT */
        (uint16)( SHL_PAD_U32(4U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT54_LPUART1_LPUART1_TX_INOUT |
        SIUL2_0_PORT57_LPSPI2_LPSPI2_PCS0_INOUT |
        SIUL2_0_PORT59_LPSPI2_LPSPI2_SOUT_INOUT |
        SIUL2_0_PORT60_LPSPI2_LPSPI2_SIN_INOUT |
        SIUL2_0_PORT61_LPSPI2_LPSPI2_SCK_INOUT */
        (uint16)( SHL_PAD_U32(6U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT74_LPSPI4_LPSPI4_PCS0_INOUT |
        SIUL2_0_PORT75_LPSPI4_LPSPI4_SOUT_INOUT |
        SIUL2_0_PORT76_FXIO_FXIO_D19_INOUT |
        SIUL2_0_PORT77_FXIO_FXIO_D16_INOUT |
        SIUL2_0_PORT79_LPUART2_LPUART2_TX_INOUT */
        (uint16)( SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT81_EMAC_EMAC_MII_RMII_RX_DV_RGMII_RXCTL_INOUT |
        SIUL2_0_PORT83_LPSPI2_LPSPI2_PCS1_INOUT |
        SIUL2_0_PORT89_LPSPI4_LPSPI4_PCS1_INOUT |
        SIUL2_0_PORT92_LPI2C1_LPI2C1_SCL_INOUT |
        SIUL2_0_PORT93_LPI2C1_LPI2C1_SDA_INOUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT98_FXIO_FXIO_D6_INOUT |
        SIUL2_0_PORT99_FXIO_FXIO_D7_INOUT |
        SIUL2_0_PORT104_FXIO_FXIO_D1_INOUT |
        SIUL2_0_PORT106_LPSPI0_LPSPI0_SIN_INOUT |
        SIUL2_0_PORT107_EMAC_EMAC_MII_RMII_TX_CLK_INOUT |
        SIUL2_0_PORT109_EMAC_EMAC_PPS1_INOUT |
        SIUL2_0_PORT110_EMAC_EMAC_PPS0_INOUT |
        SIUL2_0_PORT111_EMAC_EMAC_PPS2_INOUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT113_LPSPI3_LPSPI3_PCS0_INOUT |
        SIUL2_0_PORT116_LPSPI1_LPSPI1_PCS2_INOUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(4U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT137_EMAC_EMAC_PPS3_INOUT */
        (uint16)( SHL_PAD_U32(9U)
                ),
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175
        SIUL2_0_PORT174_FXIO_FXIO_D3_INOUT */
        (uint16)( SHL_PAD_U32(14U)
                ),
        /* Pads 176 - 191
        SIUL2_0_PORT176_LPSPI3_LPSPI3_PCS0_INOUT |
        SIUL2_0_PORT178_LPSPI3_LPSPI3_PCS1_INOUT |
        SIUL2_0_PORT179_LPSPI3_LPSPI3_PCS2_INOUT |
        SIUL2_0_PORT180_LPSPI3_LPSPI3_PCS3_INOUT |
        SIUL2_0_PORT181_LPSPI1_LPSPI1_PCS0_INOUT |
        SIUL2_0_PORT183_LPSPI3_LPSPI3_PCS3_INOUT |
        SIUL2_0_PORT185_LPSPI2_LPSPI2_PCS2_INOUT |
        SIUL2_0_PORT186_LPSPI2_LPSPI2_PCS3_INOUT |
        SIUL2_0_PORT188_LPSPI0_LPSPI0_PCS0_INOUT |
        SIUL2_0_PORT189_LPSPI3_LPSPI3_PCS1_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT6_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT3_LPUART0_LPUART0_TX_INOUT |
        SIUL2_0_PORT6_LPSPI3_LPSPI3_PCS1_INOUT |
        SIUL2_0_PORT7_FXIO_FXIO_D9_INOUT |
        SIUL2_0_PORT9_LPSPI3_LPSPI3_PCS0_INOUT |
        SIUL2_0_PORT14_FXIO_FXIO_D14_INOUT */
        (uint16)( SHL_PAD_U32(3U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT17_LPSPI3_LPSPI3_SOUT_INOUT */
        (uint16)( SHL_PAD_U32(1U)
                ),
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63
        SIUL2_0_PORT49_LPSPI3_LPSPI3_PCS0_INOUT |
        SIUL2_0_PORT54_FXIO_FXIO_D15_INOUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(6U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT64_EMIOS_0_EMIOS_0_CH_14_Z_INOUT |
        SIUL2_0_PORT65_EMIOS_0_EMIOS_0_CH_15_Z_INOUT |
        SIUL2_0_PORT72_LPSPI0_LPSPI0_SCK_INOUT |
        SIUL2_0_PORT73_LPSPI0_LPSPI0_SIN_INOUT |
        SIUL2_0_PORT75_FXIO_FXIO_D19_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT80_FXIO_FXIO_D15_INOUT |
        SIUL2_0_PORT81_FXIO_FXIO_D14_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT96_FXIO_FXIO_D0_INOUT |
        SIUL2_0_PORT97_FXIO_FXIO_D1_INOUT |
        SIUL2_0_PORT98_LPUART3_LPUART3_TX_INOUT |
        SIUL2_0_PORT101_FXIO_FXIO_D15_INOUT |
        SIUL2_0_PORT102_FXIO_FXIO_D13_INOUT |
        SIUL2_0_PORT104_EMIOS_0_EMIOS_0_CH_12_Z_INOUT |
        SIUL2_0_PORT105_EMIOS_0_EMIOS_0_CH_13_Z_INOUT |
        SIUL2_0_PORT107_LPSPI0_LPSPI0_SCK_INOUT |
        SIUL2_0_PORT108_LPSPI0_LPSPI0_SOUT_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT113_FXIO_FXIO_D9_INOUT |
        SIUL2_0_PORT116_LPSPI3_LPSPI3_SIN_INOUT |
        SIUL2_0_PORT126_LPSPI5_LPSPI5_PCS3_INOUT |
        SIUL2_0_PORT127_ETPU_A_ETPU_A_CH_8_INOUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT132_FXIO_FXIO_D6_INOUT |
        SIUL2_0_PORT133_FXIO_FXIO_D7_INOUT |
        SIUL2_0_PORT135_LPSPI3_LPSPI3_SCK_INOUT |
        SIUL2_0_PORT138_FXIO_FXIO_D4_INOUT |
        SIUL2_0_PORT139_FXIO_FXIO_D5_INOUT |
        SIUL2_0_PORT142_FXIO_FXIO_D7_INOUT |
        SIUL2_0_PORT143_FXIO_FXIO_D2_INOUT */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT144_FXIO_FXIO_D3_INOUT |
        SIUL2_0_PORT149_LPSPI4_LPSPI4_SIN_INOUT |
        SIUL2_0_PORT151_LPSPI4_LPSPI4_PCS0_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U)
                ),
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191
        SIUL2_0_PORT185_LPSPI4_LPSPI4_PCS0_INOUT |
        SIUL2_0_PORT186_LPSPI4_LPSPI4_PCS1_INOUT |
        SIUL2_0_PORT187_LPSPI4_LPSPI4_PCS2_INOUT |
        SIUL2_0_PORT188_LPSPI4_LPSPI4_PCS3_INOUT |
        SIUL2_0_PORT191_FXIO_FXIO_D9_INOUT */
        (uint16)( SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 192 - 207
        SIUL2_0_PORT204_LPSPI4_LPSPI4_PCS3_INOUT */
        (uint16)( SHL_PAD_U32(12U)
                ),
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT7_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT2_LPSPI5_LPSPI5_SIN_INOUT |
        SIUL2_0_PORT3_LPSPI5_LPSPI5_SCK_INOUT |
        SIUL2_0_PORT4_JTAG_JTAG_TMS_SWD_DIO_INOUT |
        SIUL2_0_PORT5_SYSTEM_RESET_B_INOUT |
        SIUL2_0_PORT14_LPSPI5_LPSPI5_PCS1_INOUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT17_FXIO_FXIO_D19_INOUT |
        SIUL2_0_PORT26_EMAC_EMAC_PPS0_INOUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(10U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT34_FXIO_FXIO_D18_INOUT |
        SIUL2_0_PORT35_FXIO_FXIO_D17_INOUT |
        SIUL2_0_PORT42_FXIO_FXIO_D27_INOUT |
        SIUL2_0_PORT43_FXIO_FXIO_D26_INOUT |
        SIUL2_0_PORT44_FXIO_FXIO_D25_INOUT |
        SIUL2_0_PORT45_FXIO_FXIO_D24_INOUT |
        SIUL2_0_PORT46_FXIO_FXIO_D23_INOUT |
        SIUL2_0_PORT47_FXIO_FXIO_D22_INOUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT48_FXIO_FXIO_D21_INOUT |
        SIUL2_0_PORT49_FXIO_FXIO_D20_INOUT |
        SIUL2_0_PORT60_EMAC_EMAC_PPS3_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(12U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT64_EMAC_EMAC_MII_RMII_TX_CLK_INOUT |
        SIUL2_0_PORT66_QUADSPI_QUADSPI_IOFA3_INOUT |
        SIUL2_0_PORT72_FXIO_FXIO_D12_INOUT |
        SIUL2_0_PORT73_FXIO_FXIO_D13_INOUT |
        SIUL2_0_PORT78_FXIO_FXIO_D16_INOUT |
        SIUL2_0_PORT79_LPI2C1_LPI2C1_SCL_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT80_LPI2C1_LPI2C1_SDA_INOUT |
        SIUL2_0_PORT81_FXIO_FXIO_D2_INOUT |
        SIUL2_0_PORT84_EMAC_EMAC_PPS0_INOUT |
        SIUL2_0_PORT90_LPSPI4_LPSPI4_SIN_INOUT |
        SIUL2_0_PORT91_LPSPI4_LPSPI4_SCK_INOUT |
        SIUL2_0_PORT93_FXIO_FXIO_D3_INOUT |
        SIUL2_0_PORT94_FXIO_FXIO_D23_INOUT |
        SIUL2_0_PORT95_FXIO_FXIO_D24_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT98_LPSPI5_LPSPI5_SOUT_INOUT |
        SIUL2_0_PORT100_LPSPI5_LPSPI5_PCS0_INOUT |
        SIUL2_0_PORT101_LPSPI0_LPSPI0_PCS1_INOUT |
        SIUL2_0_PORT102_LPSPI0_LPSPI0_PCS0_INOUT |
        SIUL2_0_PORT103_QUADSPI_QUADSPI_IOFA1_INOUT |
        SIUL2_0_PORT104_FXIO_FXIO_D11_INOUT |
        SIUL2_0_PORT105_FXIO_FXIO_D10_INOUT |
        SIUL2_0_PORT106_QUADSPI_QUADSPI_SCKFA_INOUT |
        SIUL2_0_PORT107_QUADSPI_QUADSPI_IOFA0_INOUT |
        SIUL2_0_PORT108_QUADSPI_QUADSPI_IOFA2_INOUT |
        SIUL2_0_PORT111_FXIO_FXIO_D10_INOUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT113_EMAC_EMAC_PPS2_INOUT */
        (uint16)( SHL_PAD_U32(1U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT135_FXIO_FXIO_D11_INOUT |
        SIUL2_0_PORT136_FXIO_FXIO_D8_INOUT |
        SIUL2_0_PORT137_FXIO_FXIO_D11_INOUT |
        SIUL2_0_PORT142_EMAC_EMAC_PPS1_INOUT */
        (uint16)( SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191
        SIUL2_0_PORT180_FXIO_FXIO_D4_INOUT |
        SIUL2_0_PORT181_FXIO_FXIO_D5_INOUT |
        SIUL2_0_PORT185_FXIO_FXIO_D6_INOUT |
        SIUL2_0_PORT189_FXIO_FXIO_D8_INOUT */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT8_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT2_ETPU_A_ETPU_A_CH_2_INOUT |
        SIUL2_0_PORT6_ETPU_A_ETPU_A_CH_18_INOUT |
        SIUL2_0_PORT14_ETPU_A_ETPU_A_CH_6_INOUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT17_LPUART0_LPUART0_TX_INOUT |
        SIUL2_0_PORT21_EMIOS_0_EMIOS_0_CH_4_Z_INOUT |
        SIUL2_0_PORT24_ETPU_B_ETPU_B_CH_8_INOUT |
        SIUL2_0_PORT25_EMIOS_0_EMIOS_0_CH_8_Z_INOUT |
        SIUL2_0_PORT26_EMIOS_0_EMIOS_0_CH_9_Z_INOUT |
        SIUL2_0_PORT29_ZIPWIRE0_LFAST_0_EXT_REF_INOUT |
        SIUL2_0_PORT30_EMIOS_0_EMIOS_0_CH_13_Z_INOUT |
        SIUL2_0_PORT31_EMIOS_0_EMIOS_0_CH_14_Z_INOUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT32_ETPU_B_ETPU_B_CH_7_INOUT |
        SIUL2_0_PORT42_LPUART1_LPUART1_TX_INOUT |
        SIUL2_0_PORT43_ETPU_A_ETPU_A_CH_0_INOUT |
        SIUL2_0_PORT45_LPUART0_LPUART0_TX_INOUT |
        SIUL2_0_PORT46_ETPU_A_ETPU_A_CH_9_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT48_LPUART0_LPUART0_TX_INOUT |
        SIUL2_0_PORT50_LPSPI5_LPSPI5_PCS2_INOUT |
        SIUL2_0_PORT51_EMIOS_0_EMIOS_0_CH_15_Z_INOUT |
        SIUL2_0_PORT52_LPSPI5_LPSPI5_PCS3_INOUT |
        SIUL2_0_PORT53_EMIOS_0_EMIOS_0_CH_17_Z_INOUT |
        SIUL2_0_PORT55_EMIOS_0_EMIOS_0_CH_19_Z_INOUT |
        SIUL2_0_PORT57_ETPU_A_ETPU_A_CH_31_INOUT |
        SIUL2_0_PORT58_LPSPI2_LPSPI2_PCS3_INOUT |
        SIUL2_0_PORT59_LPUART1_LPUART1_TX_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT64_ETPU_B_ETPU_B_CH_26_INOUT |
        SIUL2_0_PORT72_ETPU_A_ETPU_A_CH_22_INOUT |
        SIUL2_0_PORT75_ETPU_B_ETPU_B_CH_19_INOUT |
        SIUL2_0_PORT77_LPUART2_LPUART2_TX_INOUT |
        SIUL2_0_PORT79_FXIO_FXIO_D18_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT80_EMIOS_0_EMIOS_0_CH_9_Z_INOUT |
        SIUL2_0_PORT81_QUADSPI_QUADSPI_IOFA7_INOUT |
        SIUL2_0_PORT89_ETPU_B_ETPU_B_CH_20_INOUT |
        SIUL2_0_PORT90_ETPU_B_ETPU_B_CH_18_INOUT |
        SIUL2_0_PORT91_ETPU_A_ETPU_A_CH_14_INOUT |
        SIUL2_0_PORT92_ETPU_B_ETPU_B_CH_5_INOUT |
        SIUL2_0_PORT93_ETPU_A_ETPU_A_CH_21_INOUT |
        SIUL2_0_PORT95_ETPU_A_ETPU_A_CH_17_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT96_ETPU_B_ETPU_B_CH_17_INOUT |
        SIUL2_0_PORT97_LPUART1_LPUART1_TX_INOUT |
        SIUL2_0_PORT98_ETPU_A_ETPU_A_CH_10_INOUT |
        SIUL2_0_PORT99_ETPU_A_ETPU_A_CH_11_INOUT |
        SIUL2_0_PORT100_ETPU_A_ETPU_A_CH_6_INOUT |
        SIUL2_0_PORT101_ETPU_A_ETPU_A_CH_27_INOUT |
        SIUL2_0_PORT102_ETPU_A_ETPU_A_CH_26_INOUT |
        SIUL2_0_PORT104_QUADSPI_QUADSPI_IOFA6_INOUT |
        SIUL2_0_PORT105_QUADSPI_QUADSPI_IOFA5_INOUT |
        SIUL2_0_PORT106_ETPU_B_ETPU_B_CH_25_INOUT |
        SIUL2_0_PORT107_ETPU_B_ETPU_B_CH_24_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT112_LPUART0_LPUART0_TX_INOUT |
        SIUL2_0_PORT114_EMIOS_0_EMIOS_0_CH_15_Z_INOUT |
        SIUL2_0_PORT116_ETPU_B_ETPU_B_CH_15_INOUT |
        SIUL2_0_PORT117_ETPU_A_ETPU_A_CH_7_INOUT |
        SIUL2_0_PORT118_ETPU_B_ETPU_B_CH_0_INOUT |
        SIUL2_0_PORT119_ETPU_A_ETPU_A_CH_4_INOUT |
        SIUL2_0_PORT120_ETPU_A_ETPU_A_CH_1_INOUT |
        SIUL2_0_PORT121_EMIOS_0_EMIOS_0_CH_1_Z_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT128_ETPU_A_ETPU_A_CH_1_INOUT |
        SIUL2_0_PORT129_LPUART3_LPUART3_TX_INOUT |
        SIUL2_0_PORT135_ETPU_A_ETPU_A_CH_16_INOUT |
        SIUL2_0_PORT139_LPUART0_LPUART0_TX_INOUT |
        SIUL2_0_PORT142_LPUART1_LPUART1_TX_INOUT |
        SIUL2_0_PORT143_ETPU_B_ETPU_B_CH_10_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT147_ETPU_A_ETPU_A_CH_9_INOUT |
        SIUL2_0_PORT148_EMIOS_0_EMIOS_0_CH_2_Z_INOUT |
        SIUL2_0_PORT151_EMIOS_0_EMIOS_0_CH_4_Z_INOUT |
        SIUL2_0_PORT154_LPSPI1_LPSPI1_PCS5_INOUT |
        SIUL2_0_PORT155_ETPU_B_ETPU_B_CH_28_INOUT |
        SIUL2_0_PORT156_ETPU_B_ETPU_B_CH_29_INOUT |
        SIUL2_0_PORT157_EMIOS_0_EMIOS_0_CH_5_Z_INOUT |
        SIUL2_0_PORT159_EMIOS_0_EMIOS_0_CH_6_Z_INOUT */
        (uint16)( SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 160 - 175
        SIUL2_0_PORT160_LPUART1_LPUART1_TX_INOUT |
        SIUL2_0_PORT161_EMIOS_0_EMIOS_0_CH_16_Z_INOUT |
        SIUL2_0_PORT162_LPUART2_LPUART2_TX_INOUT |
        SIUL2_0_PORT163_EMIOS_0_EMIOS_0_CH_0_Z_INOUT |
        SIUL2_0_PORT164_EMIOS_0_EMIOS_0_CH_1_Z_INOUT |
        SIUL2_0_PORT165_EMIOS_0_EMIOS_0_CH_2_Z_INOUT |
        SIUL2_0_PORT166_LPI2C1_LPI2C1_SDA_INOUT |
        SIUL2_0_PORT169_EMIOS_0_EMIOS_0_CH_5_Z_INOUT |
        SIUL2_0_PORT170_EMIOS_0_EMIOS_0_CH_18_Z_INOUT |
        SIUL2_0_PORT171_EMIOS_0_EMIOS_0_CH_19_Z_INOUT |
        SIUL2_0_PORT172_LPUART2_LPUART2_TX_INOUT |
        SIUL2_0_PORT175_ETPU_A_ETPU_A_CH_30_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 176 - 191
        SIUL2_0_PORT176_ETPU_A_ETPU_A_CH_31_INOUT |
        SIUL2_0_PORT178_LPUART3_LPUART3_TX_INOUT |
        SIUL2_0_PORT179_EMIOS_0_EMIOS_0_CH_5_Z_INOUT |
        SIUL2_0_PORT180_LPUART0_LPUART0_TX_INOUT |
        SIUL2_0_PORT181_ETPU_B_ETPU_B_CH_24_INOUT |
        SIUL2_0_PORT183_LPUART1_LPUART1_TX_INOUT |
        SIUL2_0_PORT184_EMIOS_0_EMIOS_0_CH_8_Z_INOUT |
        SIUL2_0_PORT186_EMIOS_0_EMIOS_0_CH_10_Z_INOUT |
        SIUL2_0_PORT189_EMIOS_0_EMIOS_0_CH_13_Z_INOUT |
        SIUL2_0_PORT190_EMIOS_0_EMIOS_0_CH_14_Z_INOUT |
        SIUL2_0_PORT191_EMIOS_0_EMIOS_0_CH_15_Z_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 192 - 207
        SIUL2_0_PORT192_EMIOS_0_EMIOS_0_CH_6_Z_INOUT |
        SIUL2_0_PORT193_EMIOS_0_EMIOS_0_CH_17_Z_INOUT |
        SIUL2_0_PORT194_ETPU_B_ETPU_B_CH_30_INOUT |
        SIUL2_0_PORT195_EMIOS_0_EMIOS_0_CH_19_Z_INOUT |
        SIUL2_0_PORT196_ETPU_A_ETPU_A_CH_26_INOUT |
        SIUL2_0_PORT197_ETPU_A_ETPU_A_CH_27_INOUT |
        SIUL2_0_PORT199_EMIOS_0_EMIOS_0_CH_23_Z_INOUT |
        SIUL2_0_PORT201_EMIOS_0_EMIOS_0_CH_23_Z_INOUT |
        SIUL2_0_PORT202_EMIOS_0_EMIOS_0_CH_7_Z_INOUT |
        SIUL2_0_PORT203_EMIOS_0_EMIOS_0_CH_16_Z_INOUT |
        SIUL2_0_PORT204_EMIOS_0_EMIOS_0_CH_18_Z_INOUT |
        SIUL2_0_PORT206_ETPU_A_ETPU_A_CH_25_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239
        SIUL2_0_PORT232_LPUART2_LPUART2_TX_INOUT |
        SIUL2_0_PORT234_LPUART3_LPUART3_TX_INOUT */
        (uint16)( SHL_PAD_U32(8U) |
                  SHL_PAD_U32(10U)
                )
    }
    ,
    /*  Mode PORT_INOUT9_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT8_ETPU_A_ETPU_A_CH_5_INOUT |
        SIUL2_0_PORT9_LPSPI1_LPSPI1_PCS2_INOUT |
        SIUL2_0_PORT14_ETPU_B_ETPU_B_CH_9_INOUT */
        (uint16)( SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT17_ETPU_A_ETPU_A_CH_8_INOUT |
        SIUL2_0_PORT18_ETPU_B_ETPU_B_CH_1_INOUT |
        SIUL2_0_PORT20_ETPU_B_ETPU_B_CH_4_INOUT |
        SIUL2_0_PORT21_ETPU_B_ETPU_B_CH_11_INOUT |
        SIUL2_0_PORT23_LPI2C0_LPI2C0_SCLS_INOUT |
        SIUL2_0_PORT25_ETPU_B_ETPU_B_CH_9_INOUT |
        SIUL2_0_PORT29_EMAC_EMAC_MII_RMII_MDIO_INOUT |
        SIUL2_0_PORT31_ETPU_B_ETPU_B_CH_28_INOUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT43_EMIOS_0_EMIOS_0_CH_9_Z_INOUT |
        SIUL2_0_PORT44_ETPU_B_ETPU_B_CH_2_INOUT |
        SIUL2_0_PORT45_ETPU_B_ETPU_B_CH_4_INOUT |
        SIUL2_0_PORT47_LPUART3_LPUART3_TX_INOUT */
        (uint16)( SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT49_ETPU_B_ETPU_B_CH_16_INOUT |
        SIUL2_0_PORT50_EMIOS_0_EMIOS_0_CH_15_Z_INOUT |
        SIUL2_0_PORT52_ETPU_A_ETPU_A_CH_24_INOUT |
        SIUL2_0_PORT53_ETPU_A_ETPU_A_CH_25_INOUT |
        SIUL2_0_PORT55_ETPU_A_ETPU_A_CH_30_INOUT |
        SIUL2_0_PORT56_LPSPI2_LPSPI2_PCS2_INOUT |
        SIUL2_0_PORT57_ETPU_B_ETPU_B_CH_21_INOUT |
        SIUL2_0_PORT59_EMIOS_0_EMIOS_0_CH_23_Z_INOUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT64_ETPU_A_ETPU_A_CH_18_INOUT |
        SIUL2_0_PORT73_ETPU_A_ETPU_A_CH_13_INOUT |
        SIUL2_0_PORT74_LPUART3_LPUART3_TX_INOUT |
        SIUL2_0_PORT75_ETPU_B_ETPU_B_CH_6_INOUT |
        SIUL2_0_PORT77_LPSPI2_LPSPI2_PCS2_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT81_ETPU_A_ETPU_A_CH_29_INOUT |
        SIUL2_0_PORT82_LPSPI2_LPSPI2_PCS3_INOUT |
        SIUL2_0_PORT84_ETPU_B_ETPU_B_CH_30_INOUT |
        SIUL2_0_PORT85_ETPU_B_ETPU_B_CH_31_INOUT |
        SIUL2_0_PORT87_ETPU_A_ETPU_A_CH_15_INOUT |
        SIUL2_0_PORT88_ETPU_B_ETPU_B_CH_21_INOUT |
        SIUL2_0_PORT89_ETPU_B_ETPU_B_CH_8_INOUT |
        SIUL2_0_PORT94_ETPU_A_ETPU_A_CH_19_INOUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT100_FLEXPWM_0_PWM_0_A_3_INOUT |
        SIUL2_0_PORT101_ETPU_B_ETPU_B_CH_16_INOUT |
        SIUL2_0_PORT102_ETPU_B_ETPU_B_CH_15_INOUT |
        SIUL2_0_PORT104_ETPU_A_ETPU_A_CH_28_INOUT |
        SIUL2_0_PORT105_LPUART2_LPUART2_TX_INOUT |
        SIUL2_0_PORT106_ETPU_A_ETPU_A_CH_17_INOUT |
        SIUL2_0_PORT107_ETPU_A_ETPU_A_CH_14_INOUT */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT114_ETPU_B_ETPU_B_CH_25_INOUT |
        SIUL2_0_PORT115_ETPU_B_ETPU_B_CH_27_INOUT |
        SIUL2_0_PORT118_FLEXPWM_0_PWM_0_B_3_INOUT |
        SIUL2_0_PORT121_ETPU_A_ETPU_A_CH_15_INOUT |
        SIUL2_0_PORT126_ETPU_A_ETPU_A_CH_16_INOUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT128_ETPU_B_ETPU_B_CH_4_INOUT |
        SIUL2_0_PORT135_EMIOS_0_EMIOS_0_CH_11_Z_INOUT |
        SIUL2_0_PORT138_ETPU_B_ETPU_B_CH_23_INOUT |
        SIUL2_0_PORT143_ETPU_A_ETPU_A_CH_0_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT144_ETPU_B_ETPU_B_CH_8_INOUT |
        SIUL2_0_PORT148_ETPU_B_ETPU_B_CH_3_INOUT |
        SIUL2_0_PORT149_ETPU_B_ETPU_B_CH_6_INOUT |
        SIUL2_0_PORT154_LPSPI2_LPSPI2_PCS3_INOUT |
        SIUL2_0_PORT155_ETPU_A_ETPU_A_CH_20_INOUT |
        SIUL2_0_PORT156_ETPU_A_ETPU_A_CH_21_INOUT |
        SIUL2_0_PORT157_ETPU_B_ETPU_B_CH_7_INOUT |
        SIUL2_0_PORT158_ETPU_B_ETPU_B_CH_10_INOUT |
        SIUL2_0_PORT159_ETPU_A_ETPU_A_CH_31_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 160 - 175
        SIUL2_0_PORT160_EMIOS_0_EMIOS_0_CH_7_Z_INOUT |
        SIUL2_0_PORT161_ETPU_A_ETPU_A_CH_29_INOUT |
        SIUL2_0_PORT162_EMIOS_0_EMIOS_0_CH_23_Z_INOUT |
        SIUL2_0_PORT163_ETPU_A_ETPU_A_CH_28_INOUT |
        SIUL2_0_PORT164_ETPU_B_ETPU_B_CH_12_INOUT |
        SIUL2_0_PORT165_ETPU_A_ETPU_A_CH_27_INOUT |
        SIUL2_0_PORT167_ETPU_B_ETPU_B_CH_17_INOUT |
        SIUL2_0_PORT168_EMIOS_0_EMIOS_0_CH_4_Z_INOUT |
        SIUL2_0_PORT169_ETPU_B_ETPU_B_CH_23_INOUT |
        SIUL2_0_PORT170_ETPU_B_ETPU_B_CH_24_INOUT |
        SIUL2_0_PORT171_ETPU_B_ETPU_B_CH_25_INOUT |
        SIUL2_0_PORT173_EMIOS_0_EMIOS_0_CH_21_Z_INOUT |
        SIUL2_0_PORT174_ETPU_A_ETPU_A_CH_28_INOUT |
        SIUL2_0_PORT175_ETPU_B_ETPU_B_CH_1_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 176 - 191
        SIUL2_0_PORT176_ETPU_B_ETPU_B_CH_2_INOUT |
        SIUL2_0_PORT177_ETPU_B_ETPU_B_CH_22_INOUT |
        SIUL2_0_PORT178_ETPU_B_ETPU_B_CH_26_INOUT |
        SIUL2_0_PORT179_ETPU_B_ETPU_B_CH_23_INOUT |
        SIUL2_0_PORT180_ETPU_A_ETPU_A_CH_29_INOUT |
        SIUL2_0_PORT181_ETPU_A_ETPU_A_CH_14_INOUT |
        SIUL2_0_PORT185_EMIOS_0_EMIOS_0_CH_9_Z_INOUT |
        SIUL2_0_PORT186_ETPU_B_ETPU_B_CH_2_INOUT |
        SIUL2_0_PORT187_LPUART3_LPUART3_TX_INOUT |
        SIUL2_0_PORT190_ETPU_B_ETPU_B_CH_31_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 192 - 207
        SIUL2_0_PORT192_ETPU_A_ETPU_A_CH_8_INOUT |
        SIUL2_0_PORT193_ETPU_A_ETPU_A_CH_13_INOUT |
        SIUL2_0_PORT194_ETPU_A_ETPU_A_CH_1_INOUT |
        SIUL2_0_PORT196_ETPU_B_ETPU_B_CH_15_INOUT |
        SIUL2_0_PORT197_ETPU_B_ETPU_B_CH_16_INOUT |
        SIUL2_0_PORT200_LPI2C0_LPI2C0_SCL_INOUT |
        SIUL2_0_PORT201_ETPU_A_ETPU_A_CH_24_INOUT |
        SIUL2_0_PORT202_ETPU_A_ETPU_A_CH_15_INOUT |
        SIUL2_0_PORT203_ETPU_A_ETPU_A_CH_16_INOUT |
        SIUL2_0_PORT204_ETPU_A_ETPU_A_CH_26_INOUT |
        SIUL2_0_PORT205_LPI2C0_LPI2C0_SDA_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT10_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT2_FLEXPWM_0_PWM_0_B_0_INOUT |
        SIUL2_0_PORT6_FLEXPWM_1_PWM_1_B_0_INOUT |
        SIUL2_0_PORT7_ETPU_A_ETPU_A_CH_20_INOUT |
        SIUL2_0_PORT8_ETPU_B_ETPU_B_CH_0_INOUT |
        SIUL2_0_PORT9_ETPU_A_ETPU_A_CH_12_INOUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT17_EMIOS_0_EMIOS_0_CH_10_Z_INOUT |
        SIUL2_0_PORT18_ETPU_A_ETPU_A_CH_3_INOUT |
        SIUL2_0_PORT20_ETPU_A_ETPU_A_CH_5_INOUT |
        SIUL2_0_PORT21_ETPU_A_ETPU_A_CH_1_INOUT |
        SIUL2_0_PORT23_ETPU_A_ETPU_A_CH_24_INOUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U)
                ),
        /* Pads 32 - 47
        SIUL2_0_PORT32_FLEXPWM_1_PWM_1_X_0_INOUT |
        SIUL2_0_PORT33_ETPU_B_ETPU_B_CH_9_INOUT |
        SIUL2_0_PORT35_LPUART1_LPUART1_TX_INOUT |
        SIUL2_0_PORT47_ETPU_B_ETPU_B_CH_13_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT48_ETPU_B_ETPU_B_CH_14_INOUT |
        SIUL2_0_PORT49_ETPU_A_ETPU_A_CH_5_INOUT |
        SIUL2_0_PORT50_ETPU_B_ETPU_B_CH_29_INOUT |
        SIUL2_0_PORT52_ETPU_B_ETPU_B_CH_13_INOUT |
        SIUL2_0_PORT53_ETPU_B_ETPU_B_CH_14_INOUT |
        SIUL2_0_PORT55_ETPU_B_ETPU_B_CH_20_INOUT |
        SIUL2_0_PORT61_LPUART2_LPUART2_TX_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT72_FLEXPWM_1_PWM_1_B_2_INOUT |
        SIUL2_0_PORT73_FLEXPWM_1_PWM_1_A_3_INOUT |
        SIUL2_0_PORT74_ETPU_A_ETPU_A_CH_23_INOUT */
        (uint16)( SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT81_ETPU_B_ETPU_B_CH_19_INOUT |
        SIUL2_0_PORT83_LPUART3_LPUART3_TX_INOUT |
        SIUL2_0_PORT84_ETPU_A_ETPU_A_CH_22_INOUT |
        SIUL2_0_PORT85_ETPU_A_ETPU_A_CH_23_INOUT |
        SIUL2_0_PORT87_EMIOS_0_EMIOS_0_CH_12_Z_INOUT |
        SIUL2_0_PORT88_ETPU_A_ETPU_A_CH_12_INOUT |
        SIUL2_0_PORT90_EMIOS_0_EMIOS_0_CH_5_Z_INOUT |
        SIUL2_0_PORT91_FLEXPWM_1_PWM_1_X_2_INOUT |
        SIUL2_0_PORT92_FLEXPWM_1_PWM_1_B_3_INOUT |
        SIUL2_0_PORT93_FLEXPWM_1_PWM_1_A_2_INOUT |
        SIUL2_0_PORT95_FLEXPWM_1_PWM_1_A_0_INOUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT96_ETPU_A_ETPU_A_CH_7_INOUT |
        SIUL2_0_PORT97_ETPU_B_ETPU_B_CH_12_INOUT |
        SIUL2_0_PORT98_FLEXPWM_0_PWM_0_A_2_INOUT |
        SIUL2_0_PORT99_FLEXPWM_0_PWM_0_B_2_INOUT |
        SIUL2_0_PORT100_EMIOS_0_EMIOS_0_CH_23_Z_INOUT |
        SIUL2_0_PORT104_ETPU_B_ETPU_B_CH_18_INOUT |
        SIUL2_0_PORT105_ETPU_B_ETPU_B_CH_27_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT114_ETPU_A_ETPU_A_CH_17_INOUT |
        SIUL2_0_PORT115_ETPU_A_ETPU_A_CH_19_INOUT |
        SIUL2_0_PORT116_ETPU_B_ETPU_B_CH_3_INOUT |
        SIUL2_0_PORT119_FLEXPWM_0_PWM_0_B_1_INOUT |
        SIUL2_0_PORT121_ETPU_B_ETPU_B_CH_10_INOUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT129_ETPU_A_ETPU_A_CH_2_INOUT |
        SIUL2_0_PORT132_ETPU_B_ETPU_B_CH_6_INOUT |
        SIUL2_0_PORT133_LPSPI1_LPSPI1_PCS3_INOUT |
        SIUL2_0_PORT138_ETPU_A_ETPU_A_CH_10_INOUT |
        SIUL2_0_PORT139_LPSPI1_LPSPI1_PCS4_INOUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT144_ETPU_A_ETPU_A_CH_6_INOUT |
        SIUL2_0_PORT154_ETPU_A_ETPU_A_CH_0_INOUT |
        SIUL2_0_PORT155_EMIOS_0_EMIOS_0_CH_4_Z_INOUT |
        SIUL2_0_PORT159_ETPU_B_ETPU_B_CH_11_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 160 - 175
        SIUL2_0_PORT160_ETPU_A_ETPU_A_CH_30_INOUT |
        SIUL2_0_PORT161_ETPU_B_ETPU_B_CH_17_INOUT |
        SIUL2_0_PORT162_ETPU_B_ETPU_B_CH_11_INOUT |
        SIUL2_0_PORT168_ETPU_B_ETPU_B_CH_22_INOUT |
        SIUL2_0_PORT172_EMIOS_0_EMIOS_0_CH_20_Z_INOUT |
        SIUL2_0_PORT173_ETPU_B_ETPU_B_CH_27_INOUT |
        SIUL2_0_PORT174_ETPU_B_ETPU_B_CH_18_INOUT |
        SIUL2_0_PORT175_ETPU_B_ETPU_B_CH_20_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 176 - 191
        SIUL2_0_PORT176_ETPU_B_ETPU_B_CH_21_INOUT |
        SIUL2_0_PORT178_ETPU_A_ETPU_A_CH_18_INOUT |
        SIUL2_0_PORT180_ETPU_B_ETPU_B_CH_0_INOUT |
        SIUL2_0_PORT183_ETPU_B_ETPU_B_CH_7_INOUT |
        SIUL2_0_PORT189_LPI2C1_LPI2C1_SCL_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 192 - 207
        SIUL2_0_PORT194_ETPU_A_ETPU_A_CH_22_INOUT |
        SIUL2_0_PORT195_ETPU_B_ETPU_B_CH_31_INOUT |
        SIUL2_0_PORT200_ETPU_A_ETPU_A_CH_25_INOUT |
        SIUL2_0_PORT205_ETPU_B_ETPU_B_CH_28_INOUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT11_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT2_EMIOS_0_EMIOS_0_CH_19_Z_INOUT |
        SIUL2_0_PORT3_ETPU_A_ETPU_A_CH_3_INOUT |
        SIUL2_0_PORT6_EMIOS_0_EMIOS_0_CH_13_Z_INOUT |
        SIUL2_0_PORT9_ETPU_B_ETPU_B_CH_1_INOUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT19_ETPU_A_ETPU_A_CH_4_INOUT |
        SIUL2_0_PORT23_ETPU_B_ETPU_B_CH_13_INOUT */
        (uint16)( SHL_PAD_U32(3U) |
                  SHL_PAD_U32(7U)
                ),
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63
        SIUL2_0_PORT48_ETPU_B_ETPU_B_CH_1_INOUT |
        SIUL2_0_PORT49_ETPU_A_ETPU_A_CH_7_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT73_EMIOS_0_EMIOS_0_CH_8_Z_INOUT |
        SIUL2_0_PORT74_FLEXPWM_1_PWM_1_X_3_INOUT */
        (uint16)( SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U)
                ),
        /* Pads 80 - 95
        SIUL2_0_PORT87_LPSPI4_LPSPI4_PCS2_INOUT |
        SIUL2_0_PORT88_LPSPI4_LPSPI4_PCS3_INOUT |
        SIUL2_0_PORT93_EMIOS_0_EMIOS_0_CH_10_Z_INOUT |
        SIUL2_0_PORT94_FLEXPWM_1_PWM_1_A_1_INOUT |
        SIUL2_0_PORT95_EMIOS_0_EMIOS_0_CH_14_Z_INOUT */
        (uint16)( SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 96 - 111
        SIUL2_0_PORT97_ETPU_A_ETPU_A_CH_2_INOUT |
        SIUL2_0_PORT105_ETPU_A_ETPU_A_CH_19_INOUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 112 - 127
        SIUL2_0_PORT117_FLEXPWM_0_PWM_0_X_2_INOUT |
        SIUL2_0_PORT118_EMIOS_0_EMIOS_0_CH_19_Z_INOUT |
        SIUL2_0_PORT119_LPSPI0_LPSPI0_PCS4_INOUT |
        SIUL2_0_PORT120_FLEXPWM_0_PWM_0_A_0_INOUT */
        (uint16)( SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT129_ETPU_B_ETPU_B_CH_2_INOUT |
        SIUL2_0_PORT132_ETPU_A_ETPU_A_CH_12_INOUT |
        SIUL2_0_PORT133_ETPU_B_ETPU_B_CH_5_INOUT |
        SIUL2_0_PORT139_ETPU_B_ETPU_B_CH_22_INOUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 144 - 159
        SIUL2_0_PORT154_ETPU_B_ETPU_B_CH_3_INOUT |
        SIUL2_0_PORT156_LPI2C0_LPI2C0_SDAS_INOUT */
        (uint16)( SHL_PAD_U32(10U) |
                  SHL_PAD_U32(12U)
                ),
        /* Pads 160 - 175
        SIUL2_0_PORT160_ETPU_B_ETPU_B_CH_12_INOUT |
        SIUL2_0_PORT172_ETPU_B_ETPU_B_CH_26_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(12U)
                ),
        /* Pads 176 - 191
        SIUL2_0_PORT180_ETPU_B_ETPU_B_CH_19_INOUT |
        SIUL2_0_PORT181_EMIOS_0_EMIOS_0_CH_14_Z_INOUT |
        SIUL2_0_PORT183_ETPU_A_ETPU_A_CH_13_INOUT |
        SIUL2_0_PORT185_ETPU_B_ETPU_B_CH_0_INOUT |
        SIUL2_0_PORT187_EMIOS_0_EMIOS_0_CH_11_Z_INOUT |
        SIUL2_0_PORT189_ETPU_B_ETPU_B_CH_29_INOUT */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 192 - 207
        SIUL2_0_PORT195_ETPU_A_ETPU_A_CH_2_INOUT |
        SIUL2_0_PORT196_EMIOS_0_EMIOS_0_CH_20_Z_INOUT |
        SIUL2_0_PORT197_EMIOS_0_EMIOS_0_CH_21_Z_INOUT |
        SIUL2_0_PORT200_ETPU_B_ETPU_B_CH_14_INOUT |
        SIUL2_0_PORT205_ETPU_A_ETPU_A_CH_20_INOUT */
        (uint16)( SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT12_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT2_LPSPI1_LPSPI1_SIN_INOUT |
        SIUL2_0_PORT7_FLEXPWM_1_PWM_1_B_1_INOUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(7U)
                ),
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47
        SIUL2_0_PORT33_FLEXPWM_1_PWM_1_X_1_INOUT |
        SIUL2_0_PORT44_FLEXPWM_0_PWM_0_X_0_INOUT |
        SIUL2_0_PORT45_FLEXPWM_0_PWM_0_X_1_INOUT |
        SIUL2_0_PORT46_FLEXPWM_0_PWM_0_X_3_INOUT |
        SIUL2_0_PORT47_ETPU_A_ETPU_A_CH_4_INOUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79
        SIUL2_0_PORT72_EMIOS_0_EMIOS_0_CH_9_Z_INOUT |
        SIUL2_0_PORT74_FXIO_FXIO_D18_INOUT */
        (uint16)( SHL_PAD_U32(8U) |
                  SHL_PAD_U32(10U)
                ),
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127
        SIUL2_0_PORT116_ETPU_A_ETPU_A_CH_11_INOUT |
        SIUL2_0_PORT120_LPSPI0_LPSPI0_PCS5_INOUT */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(8U)
                ),
        /* Pads 128 - 143
        SIUL2_0_PORT133_ETPU_A_ETPU_A_CH_11_INOUT |
        SIUL2_0_PORT139_ETPU_A_ETPU_A_CH_9_INOUT */
        (uint16)( SHL_PAD_U32(5U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175
        SIUL2_0_PORT174_EMIOS_0_EMIOS_0_CH_17_Z_INOUT |
        SIUL2_0_PORT175_EMIOS_0_EMIOS_0_CH_22_Z_INOUT */
        (uint16)( SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 176 - 191
        SIUL2_0_PORT187_ETPU_B_ETPU_B_CH_30_INOUT |
        SIUL2_0_PORT189_ETPU_A_ETPU_A_CH_0_INOUT */
        (uint16)( SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 192 - 207
        SIUL2_0_PORT195_ETPU_A_ETPU_A_CH_23_INOUT */
        (uint16)( SHL_PAD_U32(3U)
                ),
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT13_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT7_EMIOS_0_EMIOS_0_CH_11_Z_INOUT */
        (uint16)( SHL_PAD_U32(7U)
                ),
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47
        SIUL2_0_PORT44_ETPU_A_ETPU_A_CH_0_INOUT */
        (uint16)( SHL_PAD_U32(12U)
                ),
        /* Pads 48 - 63
        SIUL2_0_PORT48_ETPU_A_ETPU_A_CH_10_INOUT */
        (uint16)( SHL_PAD_U32(0U)
                ),
        /* Pads 64 - 79
        SIUL2_0_PORT74_ETPU_B_ETPU_B_CH_5_INOUT */
        (uint16)( SHL_PAD_U32(10U)
                ),
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127
        SIUL2_0_PORT116_LPSPI0_LPSPI0_PCS6_INOUT |
        SIUL2_0_PORT117_ETPU_A_ETPU_A_CH_2_INOUT */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U)
                ),
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191
        SIUL2_0_PORT180_EMIOS_0_EMIOS_0_CH_13_Z_INOUT |
        SIUL2_0_PORT189_ETPU_A_ETPU_A_CH_21_INOUT */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 192 - 207
        SIUL2_0_PORT200_EMIOS_0_EMIOS_0_CH_22_Z_INOUT |
        SIUL2_0_PORT205_EMIOS_0_EMIOS_0_CH_19_Z_INOUT */
        (uint16)( SHL_PAD_U32(8U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT14_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT3_FLEXPWM_0_PWM_0_A_1_INOUT */
        (uint16)( SHL_PAD_U32(3U)
                ),
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47
        SIUL2_0_PORT45_ETPU_A_ETPU_A_CH_1_INOUT |
        SIUL2_0_PORT46_ETPU_A_ETPU_A_CH_3_INOUT */
        (uint16)( SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127
        SIUL2_0_PORT115_EMIOS_0_EMIOS_0_CH_0_Z_INOUT |
        SIUL2_0_PORT116_EMIOS_0_EMIOS_0_CH_17_Z_INOUT |
        SIUL2_0_PORT117_LPSPI0_LPSPI0_PCS7_INOUT */
        (uint16)( SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U)
                ),
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000
    }
};

/**
* @brief Array of elements storing information about IN functionalities on the SIUL2 instance
*/
static const Port_InMuxSettingType Port_SIUL2_0_aInMuxSettings[] =
{
    /* INMUX settings for pad not available: */
    { NO_INPUTMUX_U16, 0U, 0U},
    /* INMUX settings for pad PORT0:    {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_0_IN input func */
    {16U, 1U, 0U},
    /* EMIOS_0_EMIOS_0_CH_17_Z_IN input func */
    {65U, 2U, 0U},
    /* FXIO_FXIO_D2_IN input func */
    {154U, 2U, 0U},
    /* LPSPI0_LPSPI0_PCS7_IN input func */
    {228U, 1U, 0U},
    /* LPSPI4_LPSPI4_PCS2_IN input func */
    {257U, 1U, 0U},
    /* LPUART0_LPUART0_CTS_IN input func */
    {360U, 1U, 0U},
    /* INMUX settings for pad PORT1:    {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_1_IN input func */
    {17U, 1U, 0U},
    /* EMIOS_0_EMIOS_0_CH_9_Z_IN input func */
    {57U, 1U, 0U},
    /* FXIO_FXIO_D3_IN input func */
    {155U, 1U, 0U},
    /* LPSPI0_LPSPI0_PCS6_IN input func */
    {227U, 1U, 0U},
    /* LPSPI4_LPSPI4_PCS1_IN input func */
    {256U, 1U, 0U},
    /* INMUX settings for pad PORT2:    {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_2_IN input func */
    {18U, 1U, 0U},
    /* EMIOS_0_EMIOS_0_CH_19_Z_IN input func */
    {67U, 5U, 0U},
    /* FCCU_FCCU_ERR_IN0_IN input func */
    {148U, 1U, 0U},
    /* FXIO_FXIO_D4_IN input func */
    {156U, 3U, 0U},
    /* LPUART0_LPUART0_RX_IN input func */
    {187U, 1U, 0U},
    /* LPSPI1_LPSPI1_SIN_IN input func */
    {239U, 2U, 0U},
    /* LPSPI5_LPSPI5_SIN_IN input func */
    {267U, 2U, 0U},
    /* FLEXPWM_0_PWM_0_B_0_IN input func */
    {413U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_2_IN input func */
    {446U, 1U, 0U},
    /* INMUX settings for pad PORT3:    {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_3_IN input func */
    {19U, 1U, 0U},
    /* FCCU_FCCU_ERR_IN1_IN input func */
    {149U, 1U, 0U},
    /* FXIO_FXIO_D5_IN input func */
    {157U, 3U, 0U},
    /* LPSPI1_LPSPI1_SCK_IN input func */
    {238U, 1U, 0U},
    /* LPSPI5_LPSPI5_SCK_IN input func */
    {266U, 2U, 0U},
    /* LPUART0_LPUART0_TX_IN input func */
    {363U, 1U, 0U},
    /* FLEXPWM_0_PWM_0_A_1_IN input func */
    {411U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_3_IN input func */
    {445U, 1U, 0U},
    /* INMUX settings for pad PORT4:    {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_4_IN input func */
    {20U, 1U, 0U},
    /* FXIO_FXIO_D6_IN input func */
    {158U, 8U, 0U},
    /* JTAG_JTAG_TMS_SWD_DIO_IN input func */
    {186U, 0U, 0U},
    /* INMUX settings for pad PORT5:    {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_5_IN input func */
    {21U, 1U, 0U},
    /* INMUX settings for pad PORT6:    {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CAN0_CAN0_RX_IN input func */
    {0U, 2U, 0U},
    /* SIUL_EIRQ_6_IN input func */
    {22U, 1U, 0U},
    /* EMIOS_0_EMIOS_0_CH_13_Z_IN input func */
    {61U, 5U, 0U},
    /* FXIO_FXIO_D19_IN input func */
    {171U, 4U, 0U},
    /* LPUART3_LPUART3_RX_IN input func */
    {190U, 2U, 0U},
    /* LPSPI1_LPSPI1_PCS1_IN input func */
    {233U, 1U, 0U},
    /* LPSPI3_LPSPI3_PCS1_IN input func */
    {249U, 5U, 0U},
    /* LPUART1_LPUART1_CTS_IN input func */
    {361U, 2U, 0U},
    /* LPUART0_LPUART0_RIN_B_IN input func */
    {375U, 1U, 0U},
    /* FLEXPWM_1_PWM_1_B_0_IN input func */
    {427U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_18_IN input func */
    {467U, 1U, 0U},
    /* INMUX settings for pad PORT7:    {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_7_IN input func */
    {23U, 1U, 0U},
    /* EMIOS_0_EMIOS_0_CH_11_Z_IN input func */
    {59U, 6U, 0U},
    /* FXIO_FXIO_D9_IN input func */
    {161U, 3U, 0U},
    /* LPSPI0_LPSPI0_PCS1_IN input func */
    {222U, 3U, 0U},
    /* LPUART3_LPUART3_TX_IN input func */
    {366U, 1U, 0U},
    /* LPUART0_LPUART0_DCD_B_IN input func */
    {374U, 1U, 0U},
    /* FLEXPWM_1_PWM_1_B_1_IN input func */
    {426U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_20_IN input func */
    {466U, 1U, 0U},
    /* INMUX settings for pad PORT8:    {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_16_IN input func */
    {32U, 1U, 0U},
    /* FXIO_FXIO_D6_IN input func */
    {158U, 2U, 0U},
    /* LPUART2_LPUART2_RX_IN input func */
    {189U, 3U, 0U},
    /* LPSPI2_LPSPI2_SOUT_IN input func */
    {247U, 1U, 0U},
    /* ETPU_B_ETPU_B_TCRCLK_IN input func */
    {435U, 2U, 0U},
    /* ETPU_B_ETPU_B_CH_0_IN input func */
    {459U, 2U, 0U},
    /* ETPU_A_ETPU_A_CH_5_IN input func */
    {479U, 2U, 0U},
    /* INMUX settings for pad PORT9:    {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_17_IN input func */
    {33U, 1U, 0U},
    /* FXIO_FXIO_D7_IN input func */
    {159U, 2U, 0U},
    /* LPSPI1_LPSPI1_PCS2_IN input func */
    {234U, 3U, 0U},
    /* LPSPI2_LPSPI2_PCS0_IN input func */
    {241U, 1U, 0U},
    /* LPSPI3_LPSPI3_PCS0_IN input func */
    {248U, 3U, 0U},
    /* LPUART2_LPUART2_TX_IN input func */
    {365U, 1U, 0U},
    /* PG_PGOOD_IN input func */
    {440U, 2U, 0U},
    /* ETPU_B_ETPU_B_CH_1_IN input func */
    {480U, 2U, 0U},
    /* ETPU_A_ETPU_A_CH_12_IN input func */
    {481U, 2U, 0U},
    /* INMUX settings for pad PORT10:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_18_IN input func */
    {34U, 1U, 0U},
    /* EMIOS_0_EMIOS_0_CH_12_Z_IN input func */
    {60U, 2U, 0U},
    /* FXIO_FXIO_D0_IN input func */
    {152U, 2U, 0U},
    /* INMUX settings for pad PORT14:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_22_IN input func */
    {38U, 1U, 0U},
    /* FXIO_FXIO_D14_IN input func */
    {166U, 4U, 0U},
    /* LPSPI1_LPSPI1_PCS3_IN input func */
    {235U, 2U, 0U},
    /* LPSPI5_LPSPI5_PCS1_IN input func */
    {263U, 2U, 0U},
    /* ETPU_A_ETPU_A_CH_6_IN input func */
    {442U, 3U, 0U},
    /* ETPU_B_ETPU_B_CH_9_IN input func */
    {462U, 3U, 0U},
    /* INMUX settings for pad PORT15:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_23_IN input func */
    {39U, 1U, 0U},
    /* EMIOS_0_EMIOS_0_CH_10_Z_IN input func */
    {58U, 2U, 0U},
    /* FXIO_FXIO_D31_IN input func */
    {183U, 1U, 0U},
    /* LPUART2_LPUART2_RX_IN input func */
    {189U, 6U, 0U},
    /* LPSPI0_LPSPI0_PCS3_IN input func */
    {224U, 1U, 0U},
    /* LPSPI2_LPSPI2_PCS3_IN input func */
    {244U, 1U, 0U},
    /* LPSPI5_LPSPI5_PCS0_IN input func */
    {262U, 3U, 0U},
    /* INMUX settings for pad PORT16:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_4_IN input func */
    {20U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH_11_Z_IN input func */
    {59U, 2U, 0U},
    /* FXIO_FXIO_D30_IN input func */
    {182U, 1U, 0U},
    /* LPSPI0_LPSPI0_PCS4_IN input func */
    {225U, 1U, 0U},
    /* LPSPI1_LPSPI1_PCS2_IN input func */
    {234U, 2U, 0U},
    /* LPSPI4_LPSPI4_PCS3_IN input func */
    {258U, 1U, 0U},
    /* LPUART1_LPUART1_DSR_B_IN input func */
    {378U, 1U, 0U},
    /* INMUX settings for pad PORT17:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* EMIOS_0_EMIOS_0_CH_6_Z_IN input func */
    {54U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH_10_Z_IN input func */
    {58U, 4U, 0U},
    /* FXIO_FXIO_D19_IN input func */
    {171U, 1U, 0U},
    /* LPSPI3_LPSPI3_SOUT_IN input func */
    {254U, 2U, 0U},
    /* LPUART0_LPUART0_TX_IN input func */
    {363U, 6U, 0U},
    /* ETPU_A_ETPU_A_CH_8_IN input func */
    {450U, 1U, 0U},
    /* INMUX settings for pad PORT18:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_0_IN input func */
    {16U, 2U, 0U},
    /* LPSPI1_LPSPI1_SOUT_IN input func */
    {240U, 4U, 0U},
    /* LPUART1_LPUART1_TX_IN input func */
    {364U, 4U, 0U},
    /* TRACE_EVTI_0_IN input func */
    {388U, 2U, 0U},
    /* ETPU_A_ETPU_A_CH_3_IN input func */
    {445U, 3U, 0U},
    /* ETPU_B_ETPU_B_CH_1_IN input func */
    {480U, 3U, 0U},
    /* INMUX settings for pad PORT19:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_1_IN input func */
    {17U, 2U, 0U},
    /* LPUART1_LPUART1_RX_IN input func */
    {188U, 5U, 0U},
    /* LPSPI1_LPSPI1_SCK_IN input func */
    {238U, 3U, 0U},
    /* ETPU_A_ETPU_A_CH_4_IN input func */
    {448U, 3U, 0U},
    /* INMUX settings for pad PORT20:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_2_IN input func */
    {18U, 2U, 0U},
    /* LPSPI1_LPSPI1_SIN_IN input func */
    {239U, 3U, 0U},
    /* PG_PGOOD_IN input func */
    {440U, 1U, 0U},
    /* ETPU_B_ETPU_B_CH_4_IN input func */
    {455U, 2U, 0U},
    /* ETPU_A_ETPU_A_CH_5_IN input func */
    {479U, 3U, 0U},
    /* INMUX settings for pad PORT21:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_B_ETPU_B_CH_11_IN input func */
    {511U, 1U, 0U},
    /* SIUL_EIRQ_3_IN input func */
    {19U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH_4_Z_IN input func */
    {52U, 6U, 0U},
    /* FXIO_FXIO_D0_IN input func */
    {152U, 3U, 0U},
    /* LPSPI1_LPSPI1_PCS0_IN input func */
    {232U, 3U, 0U},
    /* LPSPI2_LPSPI2_PCS2_IN input func */
    {243U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_1_IN input func */
    {449U, 4U, 0U},
    /* INMUX settings for pad PORT22:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CAN1_CAN1_RX_IN input func */
    {1U, 3U, 0U},
    /* FXIO_FXIO_D1_IN input func */
    {153U, 3U, 0U},
    /* LPSPI1_LPSPI1_PCS1_IN input func */
    {233U, 3U, 0U},
    /* SYSTEM_SWG_EXT_REF_CLK_IN input func */
    {436U, 1U, 0U},
    /* INMUX settings for pad PORT23:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_A_ETPU_A_CH_24_IN input func */
    {504U, 2U, 0U},
    /* FXIO_FXIO_D2_IN input func */
    {154U, 3U, 0U},
    /* LPI2C0_LPI2C0_SCLS_IN input func */
    {213U, 2U, 0U},
    /* ETPU_B_ETPU_B_CH_13_IN input func */
    {453U, 3U, 0U},
    /* INMUX settings for pad PORT24:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FXIO_FXIO_D3_IN input func */
    {155U, 3U, 0U},
    /* ETPU_B_ETPU_B_CH_8_IN input func */
    {482U, 3U, 0U},
    /* INMUX settings for pad PORT25:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_5_IN input func */
    {21U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH_8_Z_IN input func */
    {56U, 4U, 0U},
    /* FXIO_FXIO_D2_IN input func */
    {154U, 6U, 0U},
    /* ETPU_B_ETPU_B_CH_9_IN input func */
    {462U, 2U, 0U},
    /* INMUX settings for pad PORT26:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* EMIOS_0_EMIOS_0_CH_9_Z_IN input func */
    {57U, 5U, 0U},
    /* EMAC_EMAC_PPS0_IN input func */
    {144U, 3U, 0U},
    /* FXIO_FXIO_D1_IN input func */
    {153U, 7U, 0U},
    /* LPSPI0_LPSPI0_PCS0_IN input func */
    {221U, 3U, 0U},
    /* LPSPI1_LPSPI1_PCS0_IN input func */
    {232U, 5U, 0U},
    /* PG_PGOOD_IN input func */
    {440U, 3U, 0U},
    /* INMUX settings for pad PORT28:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CAN0_CAN0_RX_IN input func */
    {0U, 4U, 0U},
    /* SIUL_EIRQ_6_IN input func */
    {22U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH_11_Z_IN input func */
    {59U, 5U, 0U},
    /* LPUART0_LPUART0_RX_IN input func */
    {187U, 4U, 0U},
    /* LPSPI1_LPSPI1_SCK_IN input func */
    {238U, 4U, 0U},
    /* INMUX settings for pad PORT29:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* EMAC_EMAC_PPS2_IN input func */
    {146U, 3U, 0U},
    /* LPSPI1_LPSPI1_SIN_IN input func */
    {239U, 4U, 0U},
    /* EMAC_EMAC_MII_RMII_MDIO_IN input func */
    {291U, 3U, 0U},
    /* LPUART2_LPUART2_TX_IN input func */
    {365U, 5U, 0U},
    /* ZIPWIRE0_LFAST_0_EXT_REF_IN input func */
    {441U, 1U, 0U},
    /* INMUX settings for pad PORT30:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_7_IN input func */
    {23U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH_13_Z_IN input func */
    {61U, 4U, 0U},
    /* LPUART2_LPUART2_RX_IN input func */
    {189U, 4U, 0U},
    /* LPSPI0_LPSPI0_SOUT_IN input func */
    {231U, 4U, 0U},
    /* LPSPI1_LPSPI1_SOUT_IN input func */
    {240U, 5U, 0U},
    /* INMUX settings for pad PORT31:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* EMIOS_0_EMIOS_0_CH_14_Z_IN input func */
    {62U, 4U, 0U},
    /* EMAC_EMAC_PPS0_IN input func */
    {144U, 5U, 0U},
    /* FXIO_FXIO_D0_IN input func */
    {152U, 6U, 0U},
    /* LPSPI0_LPSPI0_PCS1_IN input func */
    {222U, 2U, 0U},
    /* ETPU_B_ETPU_B_CH_28_IN input func */
    {384U, 3U, 0U},
    /* INMUX settings for pad PORT32:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CAN0_CAN0_RX_IN input func */
    {0U, 3U, 0U},
    /* SIUL_EIRQ_8_IN input func */
    {24U, 1U, 0U},
    /* EMIOS_0_EMIOS_0_CH_3_Z_IN input func */
    {51U, 4U, 0U},
    /* FXIO_FXIO_D14_IN input func */
    {166U, 3U, 0U},
    /* LPUART0_LPUART0_RX_IN input func */
    {187U, 2U, 0U},
    /* LPI2C0_LPI2C0_SDAS_IN input func */
    {215U, 1U, 0U},
    /* LPSPI0_LPSPI0_PCS0_IN input func */
    {221U, 1U, 0U},
    /* ETPU_B_ETPU_B_CH_7_IN input func */
    {463U, 1U, 0U},
    /* FLEXPWM_1_PWM_1_X_0_IN input func */
    {486U, 1U, 0U},
    /* INMUX settings for pad PORT33:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_9_IN input func */
    {25U, 1U, 0U},
    /* EMIOS_0_EMIOS_0_CH_7_Z_IN input func */
    {55U, 3U, 0U},
    /* LPI2C0_LPI2C0_SCLS_IN input func */
    {213U, 1U, 0U},
    /* LPSPI0_LPSPI0_SOUT_IN input func */
    {231U, 3U, 0U},
    /* HSE_HSE_TAMPER_EXTIN0_IN input func */
    {343U, 1U, 0U},
    /* LPUART0_LPUART0_TX_IN input func */
    {363U, 2U, 0U},
    /* ETPU_B_ETPU_B_CH_9_IN input func */
    {462U, 1U, 0U},
    /* FLEXPWM_1_PWM_1_X_1_IN input func */
    {485U, 1U, 0U},
    /* INMUX settings for pad PORT34:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CAN4_CAN4_RX_IN input func */
    {4U, 2U, 0U},
    /* SIUL_EIRQ_10_IN input func */
    {26U, 1U, 0U},
    /* EMIOS_0_EMIOS_0_CH_8_Z_IN input func */
    {56U, 1U, 0U},
    /* FXIO_FXIO_D18_IN input func */
    {170U, 1U, 0U},
    /* LPUART1_LPUART1_RX_IN input func */
    {188U, 6U, 0U},
    /* LPSPI2_LPSPI2_SIN_IN input func */
    {246U, 2U, 0U},
    /* TRGMUX_TRGMUX_IN3_IN input func */
    {347U, 1U, 0U},
    /* QUADSPI_QUADSPI_INTA_IN input func */
    {437U, 5U, 0U},
    /* MSC0_LPUART_MSC0_RX_IN input func */
    {438U, 1U, 0U},
    /* INMUX settings for pad PORT35:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_11_IN input func */
    {27U, 1U, 0U},
    /* EMIOS_0_EMIOS_0_CH_9_Z_IN input func */
    {57U, 2U, 0U},
    /* FXIO_FXIO_D17_IN input func */
    {169U, 1U, 0U},
    /* LPSPI2_LPSPI2_SOUT_IN input func */
    {247U, 2U, 0U},
    /* EMAC_EMAC_MII_RMII_TX_CLK_IN input func */
    {296U, 5U, 0U},
    /* TRGMUX_TRGMUX_IN2_IN input func */
    {346U, 1U, 0U},
    /* LPUART1_LPUART1_TX_IN input func */
    {364U, 6U, 0U},
    /* INMUX settings for pad PORT36:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_12_IN input func */
    {28U, 1U, 0U},
    /* EMIOS_0_EMIOS_0_CH_4_Z_IN input func */
    {52U, 1U, 0U},
    /* LPSPI0_LPSPI0_SOUT_IN input func */
    {231U, 2U, 0U},
    /* EMAC_EMAC_MII_RMII_MDIO_IN input func */
    {291U, 1U, 0U},
    /* TRGMUX_TRGMUX_IN1_IN input func */
    {345U, 1U, 0U},
    /* INMUX settings for pad PORT37:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_13_IN input func */
    {29U, 1U, 0U},
    /* EMIOS_0_EMIOS_0_CH_5_Z_IN input func */
    {53U, 1U, 0U},
    /* LPSPI0_LPSPI0_PCS0_IN input func */
    {221U, 2U, 0U},
    /* LPSPI0_LPSPI0_PCS1_IN input func */
    {222U, 1U, 0U},
    /* TRGMUX_TRGMUX_IN0_IN input func */
    {344U, 1U, 0U},
    /* INMUX settings for pad PORT40:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_14_IN input func */
    {30U, 1U, 0U},
    /* EMIOS_0_EMIOS_0_CH_15_Z_IN input func */
    {63U, 6U, 0U},
    /* FXIO_FXIO_D29_IN input func */
    {181U, 1U, 0U},
    /* LPSPI0_LPSPI0_PCS5_IN input func */
    {226U, 1U, 0U},
    /* LPSPI4_LPSPI4_PCS0_IN input func */
    {255U, 2U, 0U},
    /* LPUART1_LPUART1_DCD_B_IN input func */
    {377U, 1U, 0U},
    /* INMUX settings for pad PORT41:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_15_IN input func */
    {31U, 1U, 0U},
    /* FXIO_FXIO_D28_IN input func */
    {180U, 1U, 0U},
    /* LPUART1_LPUART1_RX_IN input func */
    {188U, 7U, 0U},
    /* LPSPI4_LPSPI4_SOUT_IN input func */
    {261U, 2U, 0U},
    /* LPUART1_LPUART1_RIN_B_IN input func */
    {376U, 1U, 0U},
    /* INMUX settings for pad PORT42:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_24_IN input func */
    {40U, 1U, 0U},
    /* FXIO_FXIO_D27_IN input func */
    {179U, 1U, 0U},
    /* LPSPI4_LPSPI4_SCK_IN input func */
    {259U, 2U, 0U},
    /* LPUART1_LPUART1_TX_IN input func */
    {364U, 7U, 0U},
    /* SYSTEM_SWG_EXT_REF_CLK_IN input func */
    {436U, 3U, 0U},
    /* INMUX settings for pad PORT43:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_25_IN input func */
    {41U, 1U, 0U},
    /* EMIOS_0_EMIOS_0_CH_9_Z_IN input func */
    {57U, 4U, 0U},
    /* FXIO_FXIO_D26_IN input func */
    {178U, 1U, 0U},
    /* LPI2C0_LPI2C0_HREQ_IN input func */
    {211U, 1U, 0U},
    /* LPSPI4_LPSPI4_SIN_IN input func */
    {260U, 2U, 0U},
    /* LPUART0_LPUART0_DSR_B_IN input func */
    {373U, 2U, 0U},
    /* ETPU_A_ETPU_A_TCRCLK_IN input func */
    {434U, 3U, 0U},
    /* ETPU_A_ETPU_A_CH_0_IN input func */
    {447U, 1U, 0U},
    /* INMUX settings for pad PORT44:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FLEXPWM_0_PWM_0_X_0_IN input func */
    {489U, 1U, 0U},
    /* SIUL_EIRQ_26_IN input func */
    {42U, 1U, 0U},
    /* EMIOS_0_EMIOS_0_CH_0_Z_IN input func */
    {48U, 1U, 0U},
    /* FXIO_FXIO_D25_IN input func */
    {177U, 1U, 0U},
    /* LPUART0_LPUART0_RX_IN input func */
    {187U, 6U, 0U},
    /* LPSPI3_LPSPI3_PCS3_IN input func */
    {251U, 1U, 0U},
    /* LPUART0_LPUART0_DCD_B_IN input func */
    {374U, 2U, 0U},
    /* ETPU_A_ETPU_A_TCRCLK_IN input func */
    {434U, 2U, 0U},
    /* ETPU_A_ETPU_A_CH_0_IN input func */
    {447U, 2U, 0U},
    /* ETPU_B_ETPU_B_CH_2_IN input func */
    {456U, 1U, 0U},
    /* INMUX settings for pad PORT45:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FLEXPWM_0_PWM_0_X_1_IN input func */
    {488U, 1U, 0U},
    /* SIUL_EIRQ_27_IN input func */
    {43U, 1U, 0U},
    /* EMIOS_0_EMIOS_0_CH_1_Z_IN input func */
    {49U, 2U, 0U},
    /* FXIO_FXIO_D8_IN input func */
    {160U, 3U, 0U},
    /* FXIO_FXIO_D24_IN input func */
    {176U, 1U, 0U},
    /* LPSPI3_LPSPI3_PCS2_IN input func */
    {250U, 1U, 0U},
    /* LPUART0_LPUART0_TX_IN input func */
    {363U, 7U, 0U},
    /* LPUART0_LPUART0_RIN_B_IN input func */
    {375U, 2U, 0U},
    /* MSC0_LPUART_MSC0_RX_IN input func */
    {438U, 4U, 0U},
    /* ETPU_A_ETPU_A_CH_1_IN input func */
    {449U, 2U, 0U},
    /* ETPU_B_ETPU_B_CH_4_IN input func */
    {455U, 1U, 0U},
    /* INMUX settings for pad PORT46:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_28_IN input func */
    {44U, 1U, 0U},
    /* EMIOS_0_EMIOS_0_CH_2_Z_IN input func */
    {50U, 3U, 0U},
    /* FXIO_FXIO_D23_IN input func */
    {175U, 1U, 0U},
    /* LPUART3_LPUART3_RX_IN input func */
    {190U, 5U, 0U},
    /* LPSPI1_LPSPI1_SCK_IN input func */
    {238U, 2U, 0U},
    /* ETPU_A_ETPU_A_CH_3_IN input func */
    {445U, 2U, 0U},
    /* ETPU_A_ETPU_A_CH_9_IN input func */
    {454U, 1U, 0U},
    /* FLEXPWM_0_PWM_0_X_3_IN input func */
    {487U, 1U, 0U},
    /* INMUX settings for pad PORT47:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FLEXPWM_0_PWM_0_FAULT_0_IN input func */
    {494U, 1U, 0U},
    /* SIUL_EIRQ_29_IN input func */
    {45U, 1U, 0U},
    /* EMIOS_0_EMIOS_0_CH_3_Z_IN input func */
    {51U, 1U, 0U},
    /* FXIO_FXIO_D22_IN input func */
    {174U, 1U, 0U},
    /* LPSPI1_LPSPI1_SIN_IN input func */
    {239U, 1U, 0U},
    /* TRGMUX_TRGMUX_IN0_IN input func */
    {344U, 2U, 0U},
    /* LPUART3_LPUART3_TX_IN input func */
    {366U, 5U, 0U},
    /* ETPU_A_ETPU_A_CH_4_IN input func */
    {448U, 2U, 0U},
    /* ETPU_B_ETPU_B_CH_13_IN input func */
    {453U, 1U, 0U},
    /* INMUX settings for pad PORT48:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FLEXPWM_0_PWM_0_FAULT_1_IN input func */
    {493U, 1U, 0U},
    /* SIUL_EIRQ_30_IN input func */
    {46U, 1U, 0U},
    /* EMIOS_0_EMIOS_0_CH_4_Z_IN input func */
    {52U, 2U, 0U},
    /* FXIO_FXIO_D21_IN input func */
    {173U, 1U, 0U},
    /* LPSPI1_LPSPI1_SOUT_IN input func */
    {240U, 2U, 0U},
    /* TRGMUX_TRGMUX_IN1_IN input func */
    {345U, 2U, 0U},
    /* LPUART0_LPUART0_TX_IN input func */
    {363U, 8U, 0U},
    /* ETPU_A_ETPU_A_CH_10_IN input func */
    {444U, 2U, 0U},
    /* ETPU_B_ETPU_B_CH_14_IN input func */
    {452U, 1U, 0U},
    /* ETPU_B_ETPU_B_CH_1_IN input func */
    {480U, 1U, 0U},
    /* INMUX settings for pad PORT49:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FLEXPWM_0_PWM_0_FAULT_3_IN input func */
    {492U, 1U, 0U},
    /* SIUL_EIRQ_31_IN input func */
    {47U, 1U, 0U},
    /* EMIOS_0_EMIOS_0_CH_5_Z_IN input func */
    {53U, 2U, 0U},
    /* FXIO_FXIO_D20_IN input func */
    {172U, 1U, 0U},
    /* LPUART0_LPUART0_RX_IN input func */
    {187U, 7U, 0U},
    /* LPSPI1_LPSPI1_PCS3_IN input func */
    {235U, 1U, 0U},
    /* LPSPI3_LPSPI3_PCS0_IN input func */
    {248U, 2U, 0U},
    /* TRGMUX_TRGMUX_IN3_IN input func */
    {347U, 2U, 0U},
    /* FLEXPWM_0_PWM_0_EXT_CLK_IN input func */
    {417U, 1U, 0U},
    /* ETPU_B_ETPU_B_CH_16_IN input func */
    {451U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_7_IN input func */
    {458U, 2U, 0U},
    /* ETPU_A_ETPU_A_CH_5_IN input func */
    {479U, 1U, 0U},
    /* INMUX settings for pad PORT50:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* EMIOS_0_EMIOS_0_CH_15_Z_IN input func */
    {63U, 4U, 0U},
    /* FXIO_FXIO_D1_IN input func */
    {153U, 6U, 0U},
    /* LPSPI1_LPSPI1_PCS1_IN input func */
    {233U, 2U, 0U},
    /* LPSPI5_LPSPI5_PCS2_IN input func */
    {264U, 2U, 0U},
    /* EMAC_EMAC_MII_RMII_RX_DV_RGMII_RXCTL_IN input func */
    {292U, 4U, 0U},
    /* ETPU_B_ETPU_B_CH_29_IN input func */
    {385U, 3U, 0U},
    /* INMUX settings for pad PORT51:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* EMIOS_0_EMIOS_0_CH_15_Z_IN input func */
    {63U, 5U, 0U},
    /* EMAC_EMAC_PPS0_IN input func */
    {144U, 4U, 0U},
    /* FXIO_FXIO_D2_IN input func */
    {154U, 5U, 0U},
    /* INMUX settings for pad PORT52:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_A_ETPU_A_CH_24_IN input func */
    {504U, 1U, 0U},
    /* FXIO_FXIO_D3_IN input func */
    {155U, 5U, 0U},
    /* LPSPI5_LPSPI5_PCS3_IN input func */
    {265U, 2U, 0U},
    /* QUADSPI_QUADSPI_INTA_IN input func */
    {437U, 1U, 0U},
    /* ETPU_B_ETPU_B_CH_13_IN input func */
    {453U, 2U, 0U},
    /* INMUX settings for pad PORT53:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_A_ETPU_A_CH_25_IN input func */
    {505U, 1U, 0U},
    /* SIUL_EIRQ_8_IN input func */
    {24U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH_17_Z_IN input func */
    {65U, 4U, 0U},
    /* FXIO_FXIO_D4_IN input func */
    {156U, 5U, 0U},
    /* ETPU_B_ETPU_B_CH_14_IN input func */
    {452U, 2U, 0U},
    /* INMUX settings for pad PORT54:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_9_IN input func */
    {25U, 2U, 0U},
    /* FXIO_FXIO_D15_IN input func */
    {167U, 5U, 0U},
    /* LPSPI3_LPSPI3_PCS1_IN input func */
    {249U, 4U, 0U},
    /* EMAC_EMAC_MII_CRS_IN input func */
    {290U, 1U, 0U},
    /* LPUART1_LPUART1_TX_IN input func */
    {364U, 5U, 0U},
    /* INMUX settings for pad PORT55:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_A_ETPU_A_CH_30_IN input func */
    {506U, 1U, 0U},
    /* CAN1_CAN1_RX_IN input func */
    {1U, 4U, 0U},
    /* SIUL_EIRQ_10_IN input func */
    {26U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH_19_Z_IN input func */
    {67U, 6U, 0U},
    /* FXIO_FXIO_D4_IN input func */
    {156U, 6U, 0U},
    /* LPUART1_LPUART1_RX_IN input func */
    {188U, 4U, 0U},
    /* EMAC_EMAC_MII_COL_IN input func */
    {289U, 1U, 0U},
    /* EMAC_EMAC_MII_RMII_RXD_0_IN input func */
    {294U, 5U, 0U},
    /* EMAC_EMAC_MII_RMII_RXD_1_IN input func */
    {295U, 5U, 0U},
    /* EMAC_EMAC_MII_RXD2_IN input func */
    {301U, 5U, 0U},
    /* ETPU_B_ETPU_B_CH_20_IN input func */
    {471U, 2U, 0U},
    /* INMUX settings for pad PORT56:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_11_IN input func */
    {27U, 2U, 0U},
    /* FXIO_FXIO_D5_IN input func */
    {157U, 6U, 0U},
    /* LPSPI2_LPSPI2_PCS2_IN input func */
    {243U, 5U, 0U},
    /* EMAC_EMAC_MII_RMII_RXD_1_IN input func */
    {295U, 4U, 0U},
    /* EMAC_EMAC_MII_RXD2_IN input func */
    {301U, 4U, 0U},
    /* EMAC_EMAC_MII_RXD3_IN input func */
    {302U, 3U, 0U},
    /* INMUX settings for pad PORT57:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_A_ETPU_A_CH_31_IN input func */
    {507U, 1U, 0U},
    /* SIUL_EIRQ_12_IN input func */
    {28U, 2U, 0U},
    /* FXIO_FXIO_D6_IN input func */
    {158U, 5U, 0U},
    /* LPSPI2_LPSPI2_PCS0_IN input func */
    {241U, 4U, 0U},
    /* EMAC_EMAC_MII_COL_IN input func */
    {289U, 3U, 0U},
    /* EMAC_EMAC_MII_RMII_RX_ER_IN input func */
    {293U, 3U, 0U},
    /* ETPU_B_ETPU_B_CH_21_IN input func */
    {470U, 2U, 0U},
    /* INMUX settings for pad PORT58:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_13_IN input func */
    {29U, 2U, 0U},
    /* FXIO_FXIO_D7_IN input func */
    {159U, 6U, 0U},
    /* LPSPI2_LPSPI2_PCS3_IN input func */
    {244U, 5U, 0U},
    /* EMAC_EMAC_MII_RX_CLK_IN input func */
    {300U, 5U, 0U},
    /* QUADSPI_QUADSPI_INTA_IN input func */
    {437U, 8U, 0U},
    /* INMUX settings for pad PORT59:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* EMIOS_0_EMIOS_0_CH_23_Z_IN input func */
    {71U, 3U, 0U},
    /* FXIO_FXIO_D8_IN input func */
    {160U, 2U, 0U},
    /* LPSPI2_LPSPI2_SOUT_IN input func */
    {247U, 3U, 0U},
    /* EMAC_EMAC_MII_COL_IN input func */
    {289U, 4U, 0U},
    /* EMAC_EMAC_MII_CRS_IN input func */
    {290U, 3U, 0U},
    /* LPUART1_LPUART1_TX_IN input func */
    {364U, 8U, 0U},
    /* QUADSPI_QUADSPI_INTA_IN input func */
    {437U, 2U, 0U},
    /* INMUX settings for pad PORT60:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_14_IN input func */
    {30U, 2U, 0U},
    /* EMAC_EMAC_PPS3_IN input func */
    {147U, 2U, 0U},
    /* FXIO_FXIO_D9_IN input func */
    {161U, 2U, 0U},
    /* LPUART1_LPUART1_RX_IN input func */
    {188U, 8U, 0U},
    /* LPSPI2_LPSPI2_SIN_IN input func */
    {246U, 3U, 0U},
    /* INMUX settings for pad PORT61:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CAN4_CAN4_RX_IN input func */
    {4U, 6U, 0U},
    /* FXIO_FXIO_D10_IN input func */
    {162U, 2U, 0U},
    /* LPSPI2_LPSPI2_SCK_IN input func */
    {245U, 3U, 0U},
    /* LPUART2_LPUART2_TX_IN input func */
    {365U, 7U, 0U},
    /* INMUX settings for pad PORT64:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_0_IN input func */
    {16U, 3U, 0U},
    /* EMIOS_0_EMIOS_0_CH_0_Z_IN input func */
    {48U, 3U, 0U},
    /* EMIOS_0_EMIOS_0_CH_14_Z_IN input func */
    {62U, 2U, 0U},
    /* EMAC_EMAC_MII_RMII_RXD_0_IN input func */
    {294U, 2U, 0U},
    /* EMAC_EMAC_MII_RMII_RXD_1_IN input func */
    {295U, 1U, 0U},
    /* EMAC_EMAC_MII_RMII_TX_CLK_IN input func */
    {296U, 4U, 0U},
    /* EMAC_EMAC_MII_RX_CLK_IN input func */
    {300U, 4U, 0U},
    /* ETPU_B_ETPU_B_CH_26_IN input func */
    {382U, 1U, 0U},
    /* QUADSPI_QUADSPI_IOFA4_IN input func */
    {419U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_18_IN input func */
    {467U, 2U, 0U},
    /* INMUX settings for pad PORT65:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CAN3_CAN3_RX_IN input func */
    {3U, 2U, 0U},
    /* SIUL_EIRQ_1_IN input func */
    {17U, 3U, 0U},
    /* EMIOS_0_EMIOS_0_CH_1_Z_IN input func */
    {49U, 1U, 0U},
    /* EMIOS_0_EMIOS_0_CH_15_Z_IN input func */
    {63U, 1U, 0U},
    /* FXIO_FXIO_D5_IN input func */
    {157U, 7U, 0U},
    /* EMAC_EMAC_MII_RMII_RXD_0_IN input func */
    {294U, 1U, 0U},
    /* EMAC_EMAC_MII_RMII_RXD_1_IN input func */
    {295U, 2U, 0U},
    /* EMAC_EMAC_MII_RX_CLK_IN input func */
    {300U, 3U, 0U},
    /* QUADSPI_QUADSPI_DQSFA_IN input func */
    {423U, 1U, 0U},
    /* INMUX settings for pad PORT66:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CAN0_CAN0_RX_IN input func */
    {0U, 1U, 0U},
    /* SIUL_EIRQ_2_IN input func */
    {18U, 3U, 0U},
    /* EMIOS_0_EMIOS_0_CH_2_Z_IN input func */
    {50U, 2U, 0U},
    /* LPUART0_LPUART0_RX_IN input func */
    {187U, 3U, 0U},
    /* LPSPI0_LPSPI0_PCS2_IN input func */
    {223U, 2U, 0U},
    /* LPSPI3_LPSPI3_PCS2_IN input func */
    {250U, 4U, 0U},
    /* QUADSPI_QUADSPI_IOFA3_IN input func */
    {308U, 1U, 0U},
    /* INMUX settings for pad PORT67:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_3_IN input func */
    {19U, 3U, 0U},
    /* EMIOS_0_EMIOS_0_CH_3_Z_IN input func */
    {51U, 3U, 0U},
    /* LPUART0_LPUART0_TX_IN input func */
    {363U, 3U, 0U},
    /* INMUX settings for pad PORT68:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_4_IN input func */
    {20U, 3U, 0U},
    /* EMIOS_0_EMIOS_0_CH_8_Z_IN input func */
    {56U, 2U, 0U},
    /* FXIO_FXIO_D5_IN input func */
    {157U, 8U, 0U},
    /* JTAG_JTAG_TCK_SWD_CLK_IN input func */
    {184U, 0U, 0U},
    /* INMUX settings for pad PORT69:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_5_IN input func */
    {21U, 3U, 0U},
    /* EMIOS_0_EMIOS_0_CH_16_Z_IN input func */
    {64U, 2U, 0U},
    /* FXIO_FXIO_D4_IN input func */
    {156U, 7U, 0U},
    /* JTAG_JTAG_TDI_IN input func */
    {185U, 0U, 0U},
    /* LPI2C1_LPI2C1_HREQ_IN input func */
    {216U, 2U, 0U},
    /* INMUX settings for pad PORT70:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CAN2_CAN2_RX_IN input func */
    {2U, 6U, 0U},
    /* SIUL_EIRQ_6_IN input func */
    {22U, 3U, 0U},
    /* FXIO_FXIO_D11_IN input func */
    {163U, 3U, 0U},
    /* LPUART1_LPUART1_RX_IN input func */
    {188U, 1U, 0U},
    /* LPSPI0_LPSPI0_PCS1_IN input func */
    {222U, 4U, 0U},
    /* LPSPI1_LPSPI1_PCS1_IN input func */
    {233U, 4U, 0U},
    /* INMUX settings for pad PORT71:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_7_IN input func */
    {23U, 3U, 0U},
    /* FXIO_FXIO_D10_IN input func */
    {162U, 3U, 0U},
    /* LPI2C0_LPI2C0_HREQ_IN input func */
    {211U, 2U, 0U},
    /* LPI2C1_LPI2C1_SCL_IN input func */
    {217U, 1U, 0U},
    /* LPSPI0_LPSPI0_PCS0_IN input func */
    {221U, 6U, 0U},
    /* INMUX settings for pad PORT72:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_16_IN input func */
    {32U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH_9_Z_IN input func */
    {57U, 7U, 0U},
    /* FXIO_FXIO_D12_IN input func */
    {164U, 3U, 0U},
    /* LPUART1_LPUART1_RX_IN input func */
    {188U, 2U, 0U},
    /* LPI2C0_LPI2C0_SCL_IN input func */
    {212U, 1U, 0U},
    /* LPSPI0_LPSPI0_SCK_IN input func */
    {229U, 1U, 0U},
    /* LPUART0_LPUART0_CTS_IN input func */
    {360U, 2U, 0U},
    /* FLEXPWM_1_PWM_1_B_2_IN input func */
    {425U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_22_IN input func */
    {465U, 1U, 0U},
    /* INMUX settings for pad PORT73:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CAN1_CAN1_RX_IN input func */
    {1U, 1U, 0U},
    /* SIUL_EIRQ_17_IN input func */
    {33U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH_8_Z_IN input func */
    {56U, 5U, 0U},
    /* FXIO_FXIO_D13_IN input func */
    {165U, 3U, 0U},
    /* LPI2C0_LPI2C0_SDA_IN input func */
    {214U, 1U, 0U},
    /* LPSPI0_LPSPI0_SIN_IN input func */
    {230U, 2U, 0U},
    /* LPUART1_LPUART1_TX_IN input func */
    {364U, 2U, 0U},
    /* FLEXPWM_1_PWM_1_A_3_IN input func */
    {424U, 1U, 0U},
    /* MSC0_LPUART_MSC0_RX_IN input func */
    {438U, 3U, 0U},
    /* ETPU_A_ETPU_A_CH_13_IN input func */
    {464U, 1U, 0U},
    /* INMUX settings for pad PORT74:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_18_IN input func */
    {34U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH_6_Z_IN input func */
    {54U, 4U, 0U},
    /* FXIO_FXIO_D18_IN input func */
    {170U, 5U, 0U},
    /* LPSPI2_LPSPI2_PCS1_IN input func */
    {242U, 3U, 0U},
    /* LPSPI4_LPSPI4_PCS0_IN input func */
    {255U, 1U, 0U},
    /* LPUART3_LPUART3_TX_IN input func */
    {366U, 6U, 0U},
    /* LPUART0_LPUART0_DSR_B_IN input func */
    {373U, 1U, 0U},
    /* MSC0_DSPI_MSC0_SIN_IN input func */
    {403U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_23_IN input func */
    {461U, 1U, 0U},
    /* ETPU_B_ETPU_B_CH_5_IN input func */
    {474U, 2U, 0U},
    /* FLEXPWM_1_PWM_1_X_3_IN input func */
    {484U, 1U, 0U},
    /* INMUX settings for pad PORT75:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FLEXPWM_1_PWM_1_FAULT_1_IN input func */
    {496U, 1U, 0U},
    /* CAN5_CAN5_RX_IN input func */
    {5U, 2U, 0U},
    /* SIUL_EIRQ_19_IN input func */
    {35U, 2U, 0U},
    /* FXIO_FXIO_D15_IN input func */
    {167U, 3U, 0U},
    /* FXIO_FXIO_D19_IN input func */
    {171U, 3U, 0U},
    /* LPUART3_LPUART3_RX_IN input func */
    {190U, 6U, 0U},
    /* LPSPI4_LPSPI4_SOUT_IN input func */
    {261U, 1U, 0U},
    /* TRGMUX_TRGMUX_IN5_IN input func */
    {349U, 2U, 0U},
    /* ETPU_B_ETPU_B_CH_19_IN input func */
    {460U, 1U, 0U},
    /* ETPU_B_ETPU_B_CH_6_IN input func */
    {478U, 1U, 0U},
    /* INMUX settings for pad PORT76:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_20_IN input func */
    {36U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH_22_Z_IN input func */
    {70U, 2U, 0U},
    /* FXIO_FXIO_D19_IN input func */
    {171U, 5U, 0U},
    /* LPUART2_LPUART2_RX_IN input func */
    {189U, 7U, 0U},
    /* LPSPI2_LPSPI2_PCS1_IN input func */
    {242U, 4U, 0U},
    /* EMAC_EMAC_MII_CRS_IN input func */
    {290U, 4U, 0U},
    /* EMAC_EMAC_MII_RMII_RX_ER_IN input func */
    {293U, 4U, 0U},
    /* INMUX settings for pad PORT77:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_21_IN input func */
    {37U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH_23_Z_IN input func */
    {71U, 1U, 0U},
    /* FXIO_FXIO_D16_IN input func */
    {168U, 3U, 0U},
    /* LPSPI2_LPSPI2_PCS2_IN input func */
    {243U, 4U, 0U},
    /* EMAC_EMAC_MII_COL_IN input func */
    {289U, 5U, 0U},
    /* EMAC_EMAC_MII_RMII_RX_DV_RGMII_RXCTL_IN input func */
    {292U, 5U, 0U},
    /* LPUART2_LPUART2_TX_IN input func */
    {365U, 8U, 0U},
    /* QUADSPI_QUADSPI_INTA_IN input func */
    {437U, 3U, 0U},
    /* INMUX settings for pad PORT78:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CAN2_CAN2_RX_IN input func */
    {2U, 2U, 0U},
    /* SIUL_EIRQ_22_IN input func */
    {38U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH_10_Z_IN input func */
    {58U, 1U, 0U},
    /* FXIO_FXIO_D16_IN input func */
    {168U, 1U, 0U},
    /* LPSPI2_LPSPI2_PCS0_IN input func */
    {241U, 2U, 0U},
    /* EMAC_EMAC_MII_COL_IN input func */
    {289U, 2U, 0U},
    /* EMAC_EMAC_MII_RMII_RX_ER_IN input func */
    {293U, 2U, 0U},
    /* EMAC_EMAC_MII_RMII_RXD_0_IN input func */
    {294U, 4U, 0U},
    /* EMAC_EMAC_MII_RXD2_IN input func */
    {301U, 3U, 0U},
    /* EMAC_EMAC_MII_RXD3_IN input func */
    {302U, 2U, 0U},
    /* INMUX settings for pad PORT79:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_23_IN input func */
    {39U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH_11_Z_IN input func */
    {59U, 1U, 0U},
    /* FXIO_FXIO_D18_IN input func */
    {170U, 6U, 0U},
    /* LPI2C1_LPI2C1_SCL_IN input func */
    {217U, 6U, 0U},
    /* LPSPI2_LPSPI2_SCK_IN input func */
    {245U, 2U, 0U},
    /* EMAC_EMAC_MII_CRS_IN input func */
    {290U, 2U, 0U},
    /* EMAC_EMAC_MII_RMII_RX_DV_RGMII_RXCTL_IN input func */
    {292U, 2U, 0U},
    /* EMAC_EMAC_MII_RMII_RXD_0_IN input func */
    {294U, 6U, 0U},
    /* EMAC_EMAC_MII_RMII_RXD_1_IN input func */
    {295U, 6U, 0U},
    /* EMAC_EMAC_MII_RXD2_IN input func */
    {301U, 2U, 0U},
    /* EMAC_EMAC_MII_RXD3_IN input func */
    {302U, 4U, 0U},
    /* LPUART2_LPUART2_TX_IN input func */
    {365U, 2U, 0U},
    /* INMUX settings for pad PORT80:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CAN2_CAN2_RX_IN input func */
    {2U, 1U, 0U},
    /* EMIOS_0_EMIOS_0_CH_9_Z_IN input func */
    {57U, 6U, 0U},
    /* FXIO_FXIO_D15_IN input func */
    {167U, 1U, 0U},
    /* LPUART2_LPUART2_RX_IN input func */
    {189U, 5U, 0U},
    /* LPI2C1_LPI2C1_SDA_IN input func */
    {219U, 5U, 0U},
    /* LPI2C1_LPI2C1_SDAS_IN input func */
    {220U, 1U, 0U},
    /* LPSPI3_LPSPI3_SIN_IN input func */
    {253U, 3U, 0U},
    /* EMAC_EMAC_MII_RMII_RX_ER_IN input func */
    {293U, 1U, 0U},
    /* EMAC_EMAC_MII_RX_CLK_IN input func */
    {300U, 6U, 0U},
    /* INMUX settings for pad PORT81:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_A_ETPU_A_CH_29_IN input func */
    {503U, 1U, 0U},
    /* FXIO_FXIO_D2_IN input func */
    {154U, 10U, 0U},
    /* FXIO_FXIO_D14_IN input func */
    {166U, 1U, 0U},
    /* LPI2C1_LPI2C1_SCLS_IN input func */
    {218U, 2U, 0U},
    /* LPSPI3_LPSPI3_SCK_IN input func */
    {252U, 3U, 0U},
    /* EMAC_EMAC_MII_RMII_RX_DV_RGMII_RXCTL_IN input func */
    {292U, 1U, 0U},
    /* QUADSPI_QUADSPI_IOFA7_IN input func */
    {422U, 1U, 0U},
    /* ETPU_B_ETPU_B_CH_19_IN input func */
    {460U, 2U, 0U},
    /* INMUX settings for pad PORT82:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FXIO_FXIO_D6_IN input func */
    {158U, 9U, 0U},
    /* FXIO_FXIO_D12_IN input func */
    {164U, 2U, 0U},
    /* LPUART2_LPUART2_RX_IN input func */
    {189U, 8U, 0U},
    /* LPSPI2_LPSPI2_PCS3_IN input func */
    {244U, 4U, 0U},
    /* INMUX settings for pad PORT83:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FXIO_FXIO_D13_IN input func */
    {165U, 2U, 0U},
    /* LPSPI2_LPSPI2_PCS1_IN input func */
    {242U, 2U, 0U},
    /* EMAC_EMAC_MII_RMII_TX_CLK_IN input func */
    {296U, 6U, 0U},
    /* LPUART3_LPUART3_TX_IN input func */
    {366U, 7U, 0U},
    /* INMUX settings for pad PORT84:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_16_IN input func */
    {32U, 3U, 0U},
    /* EMAC_EMAC_PPS0_IN input func */
    {144U, 6U, 0U},
    /* FXIO_FXIO_D14_IN input func */
    {166U, 2U, 0U},
    /* LPUART3_LPUART3_RX_IN input func */
    {190U, 7U, 0U},
    /* ETPU_B_ETPU_B_CH_30_IN input func */
    {386U, 1U, 0U},
    /* TRACE_EVTI_1_IN input func */
    {389U, 2U, 0U},
    /* QUADSPI_QUADSPI_INTA_IN input func */
    {437U, 6U, 0U},
    /* ETPU_A_ETPU_A_CH_22_IN input func */
    {465U, 2U, 0U},
    /* INMUX settings for pad PORT85:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_17_IN input func */
    {33U, 3U, 0U},
    /* EMAC_EMAC_PPS1_IN input func */
    {145U, 4U, 0U},
    /* FXIO_FXIO_D15_IN input func */
    {167U, 2U, 0U},
    /* ETPU_B_ETPU_B_CH_31_IN input func */
    {387U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_23_IN input func */
    {461U, 2U, 0U},
    /* INMUX settings for pad PORT87:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CAN0_CAN0_RX_IN input func */
    {0U, 6U, 0U},
    /* SIUL_EIRQ_18_IN input func */
    {34U, 3U, 0U},
    /* EMIOS_0_EMIOS_0_CH_12_Z_IN input func */
    {60U, 4U, 0U},
    /* FXIO_FXIO_D16_IN input func */
    {168U, 2U, 0U},
    /* LPSPI4_LPSPI4_PCS2_IN input func */
    {257U, 4U, 0U},
    /* QUADSPI_QUADSPI_INTA_IN input func */
    {437U, 7U, 0U},
    /* ETPU_A_ETPU_A_CH_15_IN input func */
    {469U, 1U, 0U},
    /* INMUX settings for pad PORT88:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FLEXPWM_1_PWM_1_FAULT_3_IN input func */
    {497U, 1U, 0U},
    /* SIUL_EIRQ_19_IN input func */
    {35U, 3U, 0U},
    /* FXIO_FXIO_D17_IN input func */
    {169U, 2U, 0U},
    /* LPSPI4_LPSPI4_PCS3_IN input func */
    {258U, 4U, 0U},
    /* TRGMUX_TRGMUX_IN7_IN input func */
    {351U, 2U, 0U},
    /* FLEXPWM_1_PWM_1_EXT_CLK_IN input func */
    {432U, 1U, 0U},
    /* ETPU_B_ETPU_B_CH_21_IN input func */
    {470U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_12_IN input func */
    {481U, 1U, 0U},
    /* INMUX settings for pad PORT89:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FLEXPWM_1_PWM_1_FAULT_2_IN input func */
    {498U, 1U, 0U},
    /* CAN1_CAN1_RX_IN input func */
    {1U, 6U, 0U},
    /* SIUL_EIRQ_20_IN input func */
    {36U, 3U, 0U},
    /* FXIO_FXIO_D18_IN input func */
    {170U, 2U, 0U},
    /* LPSPI4_LPSPI4_PCS1_IN input func */
    {256U, 4U, 0U},
    /* TRGMUX_TRGMUX_IN6_IN input func */
    {350U, 2U, 0U},
    /* FLEXPWM_1_PWM_1_EXT_FORCE_IN input func */
    {433U, 1U, 0U},
    /* ETPU_B_ETPU_B_CH_20_IN input func */
    {471U, 1U, 0U},
    /* ETPU_B_ETPU_B_CH_8_IN input func */
    {482U, 1U, 0U},
    /* INMUX settings for pad PORT90:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FLEXPWM_1_PWM_1_FAULT_0_IN input func */
    {499U, 1U, 0U},
    /* CAN5_CAN5_RX_IN input func */
    {5U, 5U, 0U},
    /* SIUL_EIRQ_21_IN input func */
    {37U, 3U, 0U},
    /* EMIOS_0_EMIOS_0_CH_5_Z_IN input func */
    {53U, 6U, 0U},
    /* FXIO_FXIO_D19_IN input func */
    {171U, 2U, 0U},
    /* LPSPI4_LPSPI4_SIN_IN input func */
    {260U, 1U, 0U},
    /* TRGMUX_TRGMUX_IN4_IN input func */
    {348U, 2U, 0U},
    /* ETPU_B_ETPU_B_CH_18_IN input func */
    {472U, 1U, 0U},
    /* INMUX settings for pad PORT91:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FLEXPWM_1_PWM_1_X_2_IN input func */
    {490U, 1U, 0U},
    /* SIUL_EIRQ_22_IN input func */
    {38U, 3U, 0U},
    /* FXIO_FXIO_D20_IN input func */
    {172U, 2U, 0U},
    /* LPI2C0_LPI2C0_HREQ_IN input func */
    {211U, 3U, 0U},
    /* LPSPI4_LPSPI4_SCK_IN input func */
    {259U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_14_IN input func */
    {473U, 1U, 0U},
    /* INMUX settings for pad PORT92:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FXIO_FXIO_D2_IN input func */
    {154U, 7U, 0U},
    /* FXIO_FXIO_D21_IN input func */
    {173U, 2U, 0U},
    /* LPI2C1_LPI2C1_SCL_IN input func */
    {217U, 4U, 0U},
    /* LPUART1_LPUART1_RIN_B_IN input func */
    {376U, 2U, 0U},
    /* FLEXPWM_1_PWM_1_B_3_IN input func */
    {428U, 1U, 0U},
    /* ETPU_B_ETPU_B_CH_5_IN input func */
    {474U, 1U, 0U},
    /* INMUX settings for pad PORT93:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CAN3_CAN3_RX_IN input func */
    {3U, 3U, 0U},
    /* SIUL_EIRQ_23_IN input func */
    {39U, 3U, 0U},
    /* EMIOS_0_EMIOS_0_CH_10_Z_IN input func */
    {58U, 5U, 0U},
    /* FXIO_FXIO_D3_IN input func */
    {155U, 6U, 0U},
    /* FXIO_FXIO_D22_IN input func */
    {174U, 2U, 0U},
    /* LPI2C1_LPI2C1_SDA_IN input func */
    {219U, 3U, 0U},
    /* LPUART1_LPUART1_DCD_B_IN input func */
    {377U, 2U, 0U},
    /* FLEXPWM_1_PWM_1_A_2_IN input func */
    {429U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_21_IN input func */
    {475U, 1U, 0U},
    /* INMUX settings for pad PORT94:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FXIO_FXIO_D0_IN input func */
    {152U, 4U, 0U},
    /* FXIO_FXIO_D23_IN input func */
    {175U, 2U, 0U},
    /* LPUART1_LPUART1_DSR_B_IN input func */
    {378U, 2U, 0U},
    /* FLEXPWM_1_PWM_1_A_1_IN input func */
    {430U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_19_IN input func */
    {476U, 1U, 0U},
    /* INMUX settings for pad PORT95:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CAN4_CAN4_RX_IN input func */
    {4U, 3U, 0U},
    /* EMIOS_0_EMIOS_0_CH_14_Z_IN input func */
    {62U, 5U, 0U},
    /* FXIO_FXIO_D1_IN input func */
    {153U, 4U, 0U},
    /* FXIO_FXIO_D24_IN input func */
    {176U, 2U, 0U},
    /* FLEXPWM_1_PWM_1_A_0_IN input func */
    {431U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_17_IN input func */
    {477U, 1U, 0U},
    /* INMUX settings for pad PORT96:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_B_ETPU_B_CH_17_IN input func */
    {510U, 1U, 0U},
    /* SIUL_EIRQ_8_IN input func */
    {24U, 3U, 0U},
    /* EMIOS_0_EMIOS_0_CH_2_Z_IN input func */
    {50U, 1U, 0U},
    /* EMIOS_0_EMIOS_0_CH_16_Z_IN input func */
    {64U, 1U, 0U},
    /* FXIO_FXIO_D0_IN input func */
    {152U, 1U, 0U},
    /* LPUART1_LPUART1_RX_IN input func */
    {188U, 9U, 0U},
    /* LPSPI3_LPSPI3_SOUT_IN input func */
    {254U, 1U, 0U},
    /* LPUART0_LPUART0_CTS_IN input func */
    {360U, 3U, 0U},
    /* ETPU_A_ETPU_A_CH_7_IN input func */
    {458U, 3U, 0U},
    /* INMUX settings for pad PORT97:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_B_ETPU_B_CH_12_IN input func */
    {509U, 1U, 0U},
    /* SIUL_EIRQ_9_IN input func */
    {25U, 3U, 0U},
    /* EMIOS_0_EMIOS_0_CH_3_Z_IN input func */
    {51U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH_17_Z_IN input func */
    {65U, 1U, 0U},
    /* FXIO_FXIO_D1_IN input func */
    {153U, 1U, 0U},
    /* LPSPI3_LPSPI3_SCK_IN input func */
    {252U, 1U, 0U},
    /* LPUART1_LPUART1_TX_IN input func */
    {364U, 9U, 0U},
    /* ETPU_A_ETPU_A_CH_2_IN input func */
    {446U, 4U, 0U},
    /* INMUX settings for pad PORT98:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_10_IN input func */
    {26U, 3U, 0U},
    /* FXIO_FXIO_D4_IN input func */
    {156U, 1U, 0U},
    /* FXIO_FXIO_D6_IN input func */
    {158U, 3U, 0U},
    /* LPSPI1_LPSPI1_SOUT_IN input func */
    {240U, 1U, 0U},
    /* LPSPI5_LPSPI5_SOUT_IN input func */
    {268U, 2U, 0U},
    /* TRGMUX_TRGMUX_IN5_IN input func */
    {349U, 1U, 0U},
    /* LPUART3_LPUART3_TX_IN input func */
    {366U, 2U, 0U},
    /* FLEXPWM_0_PWM_0_A_2_IN input func */
    {410U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_10_IN input func */
    {444U, 1U, 0U},
    /* INMUX settings for pad PORT99:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_11_IN input func */
    {27U, 3U, 0U},
    /* FXIO_FXIO_D5_IN input func */
    {157U, 2U, 0U},
    /* FXIO_FXIO_D7_IN input func */
    {159U, 3U, 0U},
    /* LPUART3_LPUART3_RX_IN input func */
    {190U, 3U, 0U},
    /* LPSPI1_LPSPI1_PCS0_IN input func */
    {232U, 1U, 0U},
    /* TRGMUX_TRGMUX_IN4_IN input func */
    {348U, 1U, 0U},
    /* FLEXPWM_0_PWM_0_B_2_IN input func */
    {409U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_11_IN input func */
    {443U, 1U, 0U},
    /* INMUX settings for pad PORT100:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_12_IN input func */
    {28U, 3U, 0U},
    /* EMIOS_0_EMIOS_0_CH_23_Z_IN input func */
    {71U, 5U, 0U},
    /* LPSPI1_LPSPI1_PCS1_IN input func */
    {233U, 6U, 0U},
    /* LPSPI5_LPSPI5_PCS0_IN input func */
    {262U, 2U, 0U},
    /* FLEXPWM_0_PWM_0_A_3_IN input func */
    {408U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_6_IN input func */
    {442U, 1U, 0U},
    /* INMUX settings for pad PORT101:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_A_ETPU_A_CH_27_IN input func */
    {501U, 1U, 0U},
    /* SIUL_EIRQ_13_IN input func */
    {29U, 3U, 0U},
    /* EMIOS_0_EMIOS_0_CH_2_Z_IN input func */
    {50U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_19_Z_IN input func */
    {67U, 2U, 0U},
    /* FXIO_FXIO_D15_IN input func */
    {167U, 4U, 0U},
    /* LPSPI0_LPSPI0_PCS1_IN input func */
    {222U, 5U, 0U},
    /* EMAC_EMAC_MII_RX_CLK_IN input func */
    {300U, 2U, 0U},
    /* TRGMUX_TRGMUX_IN7_IN input func */
    {351U, 1U, 0U},
    /* ETPU_B_ETPU_B_CH_16_IN input func */
    {451U, 2U, 0U},
    /* INMUX settings for pad PORT102:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_A_ETPU_A_CH_26_IN input func */
    {500U, 1U, 0U},
    /* SIUL_EIRQ_14_IN input func */
    {30U, 3U, 0U},
    /* FXIO_FXIO_D3_IN input func */
    {155U, 9U, 0U},
    /* FXIO_FXIO_D13_IN input func */
    {165U, 1U, 0U},
    /* LPUART2_LPUART2_RX_IN input func */
    {189U, 1U, 0U},
    /* LPSPI0_LPSPI0_PCS0_IN input func */
    {221U, 7U, 0U},
    /* EMAC_EMAC_MII_RMII_TX_CLK_IN input func */
    {296U, 2U, 0U},
    /* ETPU_B_ETPU_B_CH_15_IN input func */
    {457U, 2U, 0U},
    /* INMUX settings for pad PORT103:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_15_IN input func */
    {31U, 3U, 0U},
    /* LPSPI0_LPSPI0_PCS3_IN input func */
    {224U, 2U, 0U},
    /* LPSPI3_LPSPI3_PCS3_IN input func */
    {251U, 5U, 0U},
    /* QUADSPI_QUADSPI_IOFA1_IN input func */
    {306U, 1U, 0U},
    /* LPUART2_LPUART2_TX_IN input func */
    {365U, 3U, 0U},
    /* INMUX settings for pad PORT104:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_A_ETPU_A_CH_28_IN input func */
    {502U, 1U, 0U},
    /* SIUL_EIRQ_24_IN input func */
    {40U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH_12_Z_IN input func */
    {60U, 1U, 0U},
    /* FXIO_FXIO_D1_IN input func */
    {153U, 5U, 0U},
    /* FXIO_FXIO_D11_IN input func */
    {163U, 5U, 0U},
    /* LPUART2_LPUART2_RX_IN input func */
    {189U, 9U, 0U},
    /* LPI2C1_LPI2C1_SDA_IN input func */
    {219U, 1U, 0U},
    /* LPSPI3_LPSPI3_SOUT_IN input func */
    {254U, 3U, 0U},
    /* EMAC_EMAC_MII_RMII_RXD_1_IN input func */
    {295U, 3U, 0U},
    /* EMAC_EMAC_MII_RXD3_IN input func */
    {302U, 1U, 0U},
    /* QUADSPI_QUADSPI_IOFA6_IN input func */
    {421U, 1U, 0U},
    /* ETPU_B_ETPU_B_CH_18_IN input func */
    {472U, 2U, 0U},
    /* INMUX settings for pad PORT105:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_25_IN input func */
    {41U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH_13_Z_IN input func */
    {61U, 2U, 0U},
    /* FXIO_FXIO_D0_IN input func */
    {152U, 5U, 0U},
    /* FXIO_FXIO_D10_IN input func */
    {162U, 4U, 0U},
    /* LPI2C1_LPI2C1_SCL_IN input func */
    {217U, 2U, 0U},
    /* EMAC_EMAC_MII_RMII_RXD_0_IN input func */
    {294U, 3U, 0U},
    /* EMAC_EMAC_MII_RXD2_IN input func */
    {301U, 1U, 0U},
    /* LPUART2_LPUART2_TX_IN input func */
    {365U, 9U, 0U},
    /* ETPU_B_ETPU_B_CH_27_IN input func */
    {383U, 1U, 0U},
    /* QUADSPI_QUADSPI_IOFA5_IN input func */
    {420U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_19_IN input func */
    {476U, 2U, 0U},
    /* INMUX settings for pad PORT106:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_26_IN input func */
    {42U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH_16_Z_IN input func */
    {64U, 3U, 0U},
    /* LPSPI0_LPSPI0_SIN_IN input func */
    {230U, 4U, 0U},
    /* EMAC_EMAC_MII_RX_CLK_IN input func */
    {300U, 1U, 0U},
    /* QUADSPI_QUADSPI_SCKFA_IN input func */
    {309U, 1U, 0U},
    /* ETPU_B_ETPU_B_CH_25_IN input func */
    {381U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_17_IN input func */
    {477U, 2U, 0U},
    /* INMUX settings for pad PORT107:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_27_IN input func */
    {43U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH_17_Z_IN input func */
    {65U, 3U, 0U},
    /* LPSPI0_LPSPI0_SCK_IN input func */
    {229U, 5U, 0U},
    /* EMAC_EMAC_MII_RMII_TX_CLK_IN input func */
    {296U, 1U, 0U},
    /* QUADSPI_QUADSPI_IOFA0_IN input func */
    {305U, 1U, 0U},
    /* LPUART2_LPUART2_CTS_IN input func */
    {362U, 1U, 0U},
    /* ETPU_B_ETPU_B_CH_24_IN input func */
    {380U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_14_IN input func */
    {473U, 2U, 0U},
    /* INMUX settings for pad PORT108:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_28_IN input func */
    {44U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH_18_Z_IN input func */
    {66U, 1U, 0U},
    /* LPI2C1_LPI2C1_HREQ_IN input func */
    {216U, 1U, 0U},
    /* LPSPI0_LPSPI0_SOUT_IN input func */
    {231U, 5U, 0U},
    /* EMAC_EMAC_MII_RMII_TX_CLK_IN input func */
    {296U, 3U, 0U},
    /* QUADSPI_QUADSPI_IOFA2_IN input func */
    {307U, 1U, 0U},
    /* INMUX settings for pad PORT109:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_29_IN input func */
    {45U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH_20_Z_IN input func */
    {68U, 1U, 0U},
    /* EMAC_EMAC_PPS1_IN input func */
    {145U, 2U, 0U},
    /* FXIO_FXIO_D7_IN input func */
    {159U, 7U, 0U},
    /* LPUART1_LPUART1_RX_IN input func */
    {188U, 3U, 0U},
    /* LPI2C0_LPI2C0_SDA_IN input func */
    {214U, 2U, 0U},
    /* LPSPI5_LPSPI5_SIN_IN input func */
    {267U, 1U, 0U},
    /* INMUX settings for pad PORT110:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_30_IN input func */
    {46U, 3U, 0U},
    /* EMIOS_0_EMIOS_0_CH_21_Z_IN input func */
    {69U, 1U, 0U},
    /* EMAC_EMAC_PPS0_IN input func */
    {144U, 2U, 0U},
    /* LPI2C0_LPI2C0_SCL_IN input func */
    {212U, 2U, 0U},
    /* LPSPI5_LPSPI5_SCK_IN input func */
    {266U, 1U, 0U},
    /* EMAC_EMAC_MII_RMII_RX_DV_RGMII_RXCTL_IN input func */
    {292U, 3U, 0U},
    /* LPUART1_LPUART1_TX_IN input func */
    {364U, 3U, 0U},
    /* QUADSPI_QUADSPI_INTA_IN input func */
    {437U, 9U, 0U},
    /* INMUX settings for pad PORT111:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CAN3_CAN3_RX_IN input func */
    {3U, 1U, 0U},
    /* SIUL_EIRQ_31_IN input func */
    {47U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH_0_Z_IN input func */
    {48U, 2U, 0U},
    /* EMAC_EMAC_PPS2_IN input func */
    {146U, 2U, 0U},
    /* FXIO_FXIO_D6_IN input func */
    {158U, 7U, 0U},
    /* FXIO_FXIO_D10_IN input func */
    {162U, 1U, 0U},
    /* LPUART0_LPUART0_RX_IN input func */
    {187U, 8U, 0U},
    /* LPSPI0_LPSPI0_SCK_IN input func */
    {229U, 3U, 0U},
    /* LPUART2_LPUART2_CTS_IN input func */
    {362U, 2U, 0U},
    /* INMUX settings for pad PORT112:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* EMIOS_0_EMIOS_0_CH_1_Z_IN input func */
    {49U, 3U, 0U},
    /* LPSPI0_LPSPI0_SIN_IN input func */
    {230U, 3U, 0U},
    /* EMAC_EMAC_MII_RMII_MDIO_IN input func */
    {291U, 2U, 0U},
    /* LPUART0_LPUART0_TX_IN input func */
    {363U, 9U, 0U},
    /* INMUX settings for pad PORT113:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CAN5_CAN5_RX_IN input func */
    {5U, 1U, 0U},
    /* SIUL_EIRQ_24_IN input func */
    {40U, 3U, 0U},
    /* EMIOS_0_EMIOS_0_CH_18_Z_IN input func */
    {66U, 3U, 0U},
    /* EMAC_EMAC_PPS2_IN input func */
    {146U, 1U, 0U},
    /* FXIO_FXIO_D9_IN input func */
    {161U, 1U, 0U},
    /* LPUART2_LPUART2_RX_IN input func */
    {189U, 2U, 0U},
    /* LPSPI3_LPSPI3_PCS0_IN input func */
    {248U, 1U, 0U},
    /* LPSPI5_LPSPI5_PCS0_IN input func */
    {262U, 1U, 0U},
    /* INMUX settings for pad PORT114:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* EMIOS_0_EMIOS_0_CH_15_Z_IN input func */
    {63U, 7U, 0U},
    /* FXIO_FXIO_D2_IN input func */
    {154U, 4U, 0U},
    /* ETPU_B_ETPU_B_CH_25_IN input func */
    {381U, 2U, 0U},
    /* SDADC_3_EXT_CLKIN3_IN input func */
    {402U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_17_IN input func */
    {477U, 3U, 0U},
    /* INMUX settings for pad PORT115:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CAN2_CAN2_RX_IN input func */
    {2U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_0_Z_IN input func */
    {48U, 4U, 0U},
    /* FXIO_FXIO_D3_IN input func */
    {155U, 4U, 0U},
    /* ETPU_B_ETPU_B_CH_27_IN input func */
    {383U, 2U, 0U},
    /* SDADC_3_EXT_DATA3_IN input func */
    {401U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_19_IN input func */
    {476U, 3U, 0U},
    /* INMUX settings for pad PORT116:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FLEXPWM_0_PWM_0_FAULT_2_IN input func */
    {495U, 1U, 0U},
    /* SIUL_EIRQ_25_IN input func */
    {41U, 3U, 0U},
    /* EMIOS_0_EMIOS_0_CH_17_Z_IN input func */
    {65U, 5U, 0U},
    /* FXIO_FXIO_D25_IN input func */
    {177U, 2U, 0U},
    /* LPSPI0_LPSPI0_PCS6_IN input func */
    {227U, 2U, 0U},
    /* LPSPI1_LPSPI1_PCS2_IN input func */
    {234U, 1U, 0U},
    /* LPSPI3_LPSPI3_SIN_IN input func */
    {253U, 2U, 0U},
    /* TRGMUX_TRGMUX_IN2_IN input func */
    {346U, 2U, 0U},
    /* FLEXPWM_0_PWM_0_EXT_FORCE_IN input func */
    {418U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_11_IN input func */
    {443U, 2U, 0U},
    /* ETPU_B_ETPU_B_CH_15_IN input func */
    {457U, 1U, 0U},
    /* ETPU_B_ETPU_B_CH_3_IN input func */
    {483U, 1U, 0U},
    /* INMUX settings for pad PORT117:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FLEXPWM_0_PWM_0_X_2_IN input func */
    {491U, 1U, 0U},
    /* SIUL_EIRQ_26_IN input func */
    {42U, 3U, 0U},
    /* FXIO_FXIO_D26_IN input func */
    {178U, 2U, 0U},
    /* LPSPI0_LPSPI0_PCS7_IN input func */
    {228U, 2U, 0U},
    /* ETPU_A_ETPU_A_CH_2_IN input func */
    {446U, 2U, 0U},
    /* ETPU_A_ETPU_A_CH_7_IN input func */
    {458U, 1U, 0U},
    /* INMUX settings for pad PORT118:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_27_IN input func */
    {43U, 3U, 0U},
    /* EMIOS_0_EMIOS_0_CH_19_Z_IN input func */
    {67U, 7U, 0U},
    /* FXIO_FXIO_D27_IN input func */
    {179U, 2U, 0U},
    /* FLEXPWM_0_PWM_0_B_3_IN input func */
    {414U, 1U, 0U},
    /* ETPU_B_ETPU_B_TCRCLK_IN input func */
    {435U, 1U, 0U},
    /* ETPU_B_ETPU_B_CH_0_IN input func */
    {459U, 1U, 0U},
    /* INMUX settings for pad PORT119:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_28_IN input func */
    {44U, 3U, 0U},
    /* FXIO_FXIO_D28_IN input func */
    {180U, 2U, 0U},
    /* LPSPI0_LPSPI0_PCS4_IN input func */
    {225U, 2U, 0U},
    /* FLEXPWM_0_PWM_0_B_1_IN input func */
    {415U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_4_IN input func */
    {448U, 1U, 0U},
    /* INMUX settings for pad PORT120:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_29_IN input func */
    {45U, 3U, 0U},
    /* FXIO_FXIO_D29_IN input func */
    {181U, 2U, 0U},
    /* LPSPI0_LPSPI0_PCS5_IN input func */
    {226U, 2U, 0U},
    /* HSE_HSE_TAMPER_EXTIN0_IN input func */
    {343U, 2U, 0U},
    /* FLEXPWM_0_PWM_0_A_0_IN input func */
    {416U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_1_IN input func */
    {449U, 1U, 0U},
    /* INMUX settings for pad PORT121:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_B_ETPU_B_CH_10_IN input func */
    {508U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH_1_Z_IN input func */
    {49U, 6U, 0U},
    /* TRACE_EVTI_1_IN input func */
    {389U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_15_IN input func */
    {469U, 2U, 0U},
    /* INMUX settings for pad PORT122:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* EMIOS_0_EMIOS_0_CH_23_Z_IN input func */
    {71U, 4U, 0U},
    /* FXIO_FXIO_D7_IN input func */
    {159U, 4U, 0U},
    /* FXIO_FXIO_D30_IN input func */
    {182U, 2U, 0U},
    /* LPSPI5_LPSPI5_SCK_IN input func */
    {266U, 3U, 0U},
    /* INMUX settings for pad PORT123:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_30_IN input func */
    {46U, 2U, 0U},
    /* FXIO_FXIO_D31_IN input func */
    {183U, 2U, 0U},
    /* LPSPI5_LPSPI5_SOUT_IN input func */
    {268U, 3U, 0U},
    /* INMUX settings for pad PORT124:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_31_IN input func */
    {47U, 3U, 0U},
    /* LPSPI5_LPSPI5_SIN_IN input func */
    {267U, 3U, 0U},
    /* INMUX settings for pad PORT125:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CAN0_CAN0_RX_IN input func */
    {0U, 7U, 0U},
    /* LPSPI5_LPSPI5_PCS2_IN input func */
    {264U, 1U, 0U},
    /* INMUX settings for pad PORT126:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* LPSPI5_LPSPI5_PCS3_IN input func */
    {265U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_16_IN input func */
    {468U, 2U, 0U},
    /* INMUX settings for pad PORT127:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CAN1_CAN1_RX_IN input func */
    {1U, 7U, 0U},
    /* FXIO_FXIO_D6_IN input func */
    {158U, 4U, 0U},
    /* ETPU_A_ETPU_A_CH_8_IN input func */
    {450U, 2U, 0U},
    /* INMUX settings for pad PORT128:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_0_IN input func */
    {16U, 4U, 0U},
    /* FXIO_FXIO_D3_IN input func */
    {155U, 7U, 0U},
    /* LPUART3_LPUART3_RX_IN input func */
    {190U, 8U, 0U},
    /* LPSPI0_LPSPI0_SIN_IN input func */
    {230U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_1_IN input func */
    {449U, 3U, 0U},
    /* ETPU_B_ETPU_B_CH_4_IN input func */
    {455U, 3U, 0U},
    /* INMUX settings for pad PORT129:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_1_IN input func */
    {17U, 4U, 0U},
    /* FXIO_FXIO_D2_IN input func */
    {154U, 8U, 0U},
    /* LPSPI0_LPSPI0_SCK_IN input func */
    {229U, 2U, 0U},
    /* LPUART3_LPUART3_TX_IN input func */
    {366U, 8U, 0U},
    /* ETPU_A_ETPU_A_CH_2_IN input func */
    {446U, 3U, 0U},
    /* ETPU_B_ETPU_B_CH_2_IN input func */
    {456U, 2U, 0U},
    /* INMUX settings for pad PORT130:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_2_IN input func */
    {18U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_3_Z_IN input func */
    {51U, 5U, 0U},
    /* FXIO_FXIO_D13_IN input func */
    {165U, 4U, 0U},
    /* LPSPI0_LPSPI0_SOUT_IN input func */
    {231U, 1U, 0U},
    /* LPUART1_LPUART1_CTS_IN input func */
    {361U, 1U, 0U},
    /* INMUX settings for pad PORT132:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_4_IN input func */
    {20U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_18_Z_IN input func */
    {66U, 2U, 0U},
    /* FXIO_FXIO_D6_IN input func */
    {158U, 1U, 0U},
    /* LPSPI0_LPSPI0_PCS0_IN input func */
    {221U, 5U, 0U},
    /* LPSPI1_LPSPI1_PCS1_IN input func */
    {233U, 5U, 0U},
    /* ETPU_B_ETPU_B_CH_6_IN input func */
    {478U, 2U, 0U},
    /* ETPU_A_ETPU_A_CH_12_IN input func */
    {481U, 3U, 0U},
    /* INMUX settings for pad PORT133:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_5_IN input func */
    {21U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_19_Z_IN input func */
    {67U, 1U, 0U},
    /* FXIO_FXIO_D7_IN input func */
    {159U, 1U, 0U},
    /* LPSPI1_LPSPI1_PCS3_IN input func */
    {235U, 3U, 0U},
    /* ETPU_A_ETPU_A_CH_11_IN input func */
    {443U, 3U, 0U},
    /* ETPU_B_ETPU_B_CH_5_IN input func */
    {474U, 3U, 0U},
    /* INMUX settings for pad PORT134:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_6_IN input func */
    {22U, 4U, 0U},
    /* FXIO_FXIO_D12_IN input func */
    {164U, 4U, 0U},
    /* LPSPI0_LPSPI0_PCS2_IN input func */
    {223U, 1U, 0U},
    /* INMUX settings for pad PORT135:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* EMIOS_0_EMIOS_0_CH_7_Z_IN input func */
    {55U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH_11_Z_IN input func */
    {59U, 4U, 0U},
    /* FXIO_FXIO_D11_IN input func */
    {163U, 4U, 0U},
    /* LPUART0_LPUART0_RX_IN input func */
    {187U, 9U, 0U},
    /* LPSPI3_LPSPI3_SCK_IN input func */
    {252U, 2U, 0U},
    /* ETPU_A_ETPU_A_CH_16_IN input func */
    {468U, 1U, 0U},
    /* INMUX settings for pad PORT136:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_7_IN input func */
    {23U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_6_Z_IN input func */
    {54U, 1U, 0U},
    /* FXIO_FXIO_D8_IN input func */
    {160U, 5U, 0U},
    /* FXIO_FXIO_D12_IN input func */
    {164U, 1U, 0U},
    /* LPSPI3_LPSPI3_PCS1_IN input func */
    {249U, 1U, 0U},
    /* LPSPI5_LPSPI5_PCS1_IN input func */
    {263U, 1U, 0U},
    /* INMUX settings for pad PORT137:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_8_IN input func */
    {24U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_7_Z_IN input func */
    {55U, 1U, 0U},
    /* EMAC_EMAC_PPS3_IN input func */
    {147U, 1U, 0U},
    /* FXIO_FXIO_D11_IN input func */
    {163U, 1U, 0U},
    /* LPSPI5_LPSPI5_SOUT_IN input func */
    {268U, 1U, 0U},
    /* LPUART2_LPUART2_CTS_IN input func */
    {362U, 3U, 0U},
    /* SYSTEM_SWG_EXT_REF_CLK_IN input func */
    {436U, 2U, 0U},
    /* INMUX settings for pad PORT138:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_9_IN input func */
    {25U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_20_Z_IN input func */
    {68U, 2U, 0U},
    /* FXIO_FXIO_D4_IN input func */
    {156U, 2U, 0U},
    /* LPUART0_LPUART0_RX_IN input func */
    {187U, 10U, 0U},
    /* LPSPI2_LPSPI2_PCS1_IN input func */
    {242U, 1U, 0U},
    /* LPSPI3_LPSPI3_SIN_IN input func */
    {253U, 1U, 0U},
    /* ETPU_B_ETPU_B_CH_23_IN input func */
    {379U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_10_IN input func */
    {444U, 3U, 0U},
    /* INMUX settings for pad PORT139:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_10_IN input func */
    {26U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_1_Z_IN input func */
    {49U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_21_Z_IN input func */
    {69U, 2U, 0U},
    /* FXIO_FXIO_D5_IN input func */
    {157U, 1U, 0U},
    /* LPSPI1_LPSPI1_PCS4_IN input func */
    {236U, 2U, 0U},
    /* LPSPI2_LPSPI2_PCS0_IN input func */
    {241U, 3U, 0U},
    /* LPUART0_LPUART0_TX_IN input func */
    {363U, 10U, 0U},
    /* ETPU_B_ETPU_B_CH_22_IN input func */
    {407U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_9_IN input func */
    {454U, 2U, 0U},
    /* INMUX settings for pad PORT140:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_11_IN input func */
    {27U, 4U, 0U},
    /* EMAC_EMAC_PPS3_IN input func */
    {147U, 3U, 0U},
    /* FXIO_FXIO_D7_IN input func */
    {159U, 9U, 0U},
    /* FXIO_FXIO_D8_IN input func */
    {160U, 1U, 0U},
    /* LPUART2_LPUART2_TX_IN input func */
    {365U, 4U, 0U},
    /* QUADSPI_QUADSPI_INTA_IN input func */
    {437U, 4U, 0U},
    /* INMUX settings for pad PORT142:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CAN4_CAN4_RX_IN input func */
    {4U, 1U, 0U},
    /* SIUL_EIRQ_13_IN input func */
    {29U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_19_Z_IN input func */
    {67U, 3U, 0U},
    /* EMAC_EMAC_PPS1_IN input func */
    {145U, 1U, 0U},
    /* FXIO_FXIO_D7_IN input func */
    {159U, 5U, 0U},
    /* LPUART1_LPUART1_TX_IN input func */
    {364U, 10U, 0U},
    /* INMUX settings for pad PORT143:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_B_ETPU_B_CH_10_IN input func */
    {508U, 1U, 0U},
    /* SIUL_EIRQ_14_IN input func */
    {30U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_22_Z_IN input func */
    {70U, 1U, 0U},
    /* FCCU_FCCU_ERR_IN0_IN input func */
    {148U, 2U, 0U},
    /* FXIO_FXIO_D2_IN input func */
    {154U, 1U, 0U},
    /* LPUART3_LPUART3_RX_IN input func */
    {190U, 1U, 0U},
    /* LPSPI2_LPSPI2_SCK_IN input func */
    {245U, 1U, 0U},
    /* LPUART1_LPUART1_CTS_IN input func */
    {361U, 3U, 0U},
    /* ETPU_A_ETPU_A_TCRCLK_IN input func */
    {434U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_0_IN input func */
    {447U, 4U, 0U},
    /* INMUX settings for pad PORT144:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_15_IN input func */
    {31U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_23_Z_IN input func */
    {71U, 2U, 0U},
    /* FCCU_FCCU_ERR_IN1_IN input func */
    {149U, 2U, 0U},
    /* FXIO_FXIO_D3_IN input func */
    {155U, 2U, 0U},
    /* LPSPI2_LPSPI2_SIN_IN input func */
    {246U, 1U, 0U},
    /* LPUART3_LPUART3_TX_IN input func */
    {366U, 3U, 0U},
    /* ETPU_A_ETPU_A_CH_6_IN input func */
    {442U, 2U, 0U},
    /* ETPU_B_ETPU_B_CH_8_IN input func */
    {482U, 2U, 0U},
    /* INMUX settings for pad PORT145:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FXIO_FXIO_D5_IN input func */
    {157U, 4U, 0U},
    /* INMUX settings for pad PORT146:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FXIO_FXIO_D4_IN input func */
    {156U, 4U, 0U},
    /* INMUX settings for pad PORT147:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* EMIOS_0_EMIOS_0_CH_22_Z_IN input func */
    {70U, 3U, 0U},
    /* ETPU_A_ETPU_A_CH_9_IN input func */
    {454U, 3U, 0U},
    /* INMUX settings for pad PORT148:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* EMIOS_0_EMIOS_0_CH_2_Z_IN input func */
    {50U, 6U, 0U},
    /* ETPU_B_ETPU_B_CH_3_IN input func */
    {483U, 3U, 0U},
    /* INMUX settings for pad PORT149:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* LPSPI4_LPSPI4_SIN_IN input func */
    {260U, 3U, 0U},
    /* ETPU_B_ETPU_B_CH_6_IN input func */
    {478U, 3U, 0U},
    /* INMUX settings for pad PORT151:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* EMIOS_0_EMIOS_0_CH_4_Z_IN input func */
    {52U, 7U, 0U},
    /* LPSPI4_LPSPI4_PCS0_IN input func */
    {255U, 4U, 0U},
    /* SYSTEM_SWG_EXT_REF_CLK_IN input func */
    {436U, 4U, 0U},
    /* INMUX settings for pad PORT154:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* LPSPI1_LPSPI1_PCS5_IN input func */
    {237U, 2U, 0U},
    /* LPSPI2_LPSPI2_PCS3_IN input func */
    {244U, 3U, 0U},
    /* ETPU_A_ETPU_A_TCRCLK_IN input func */
    {434U, 4U, 0U},
    /* ETPU_A_ETPU_A_CH_0_IN input func */
    {447U, 3U, 0U},
    /* ETPU_B_ETPU_B_CH_3_IN input func */
    {483U, 2U, 0U},
    /* INMUX settings for pad PORT155:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* EMIOS_0_EMIOS_0_CH_4_Z_IN input func */
    {52U, 4U, 0U},
    /* ETPU_B_ETPU_B_CH_28_IN input func */
    {384U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_20_IN input func */
    {466U, 2U, 0U},
    /* INMUX settings for pad PORT156:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* LPI2C0_LPI2C0_SDAS_IN input func */
    {215U, 2U, 0U},
    /* ETPU_B_ETPU_B_CH_29_IN input func */
    {385U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_21_IN input func */
    {475U, 2U, 0U},
    /* INMUX settings for pad PORT157:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CAN3_CAN3_RX_IN input func */
    {3U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_5_Z_IN input func */
    {53U, 4U, 0U},
    /* ETPU_B_ETPU_B_CH_7_IN input func */
    {463U, 3U, 0U},
    /* INMUX settings for pad PORT158:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_B_ETPU_B_CH_10_IN input func */
    {508U, 3U, 0U},
    /* INMUX settings for pad PORT159:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_A_ETPU_A_CH_31_IN input func */
    {507U, 3U, 0U},
    /* ETPU_B_ETPU_B_CH_11_IN input func */
    {511U, 2U, 0U},
    /* CAN4_CAN4_RX_IN input func */
    {4U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_6_Z_IN input func */
    {54U, 5U, 0U},
    /* INMUX settings for pad PORT160:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_A_ETPU_A_CH_30_IN input func */
    {506U, 3U, 0U},
    /* ETPU_B_ETPU_B_CH_12_IN input func */
    {509U, 2U, 0U},
    /* SIUL_EIRQ_0_IN input func */
    {16U, 5U, 0U},
    /* EMIOS_0_EMIOS_0_CH_7_Z_IN input func */
    {55U, 5U, 0U},
    /* LPSPI2_LPSPI2_SCK_IN input func */
    {245U, 4U, 0U},
    /* LPUART1_LPUART1_TX_IN input func */
    {364U, 11U, 0U},
    /* SYSTEM_SWG_EXT_REF_CLK_IN input func */
    {436U, 5U, 0U},
    /* INMUX settings for pad PORT161:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_A_ETPU_A_CH_29_IN input func */
    {503U, 3U, 0U},
    /* ETPU_B_ETPU_B_CH_17_IN input func */
    {510U, 2U, 0U},
    /* SIUL_EIRQ_1_IN input func */
    {17U, 5U, 0U},
    /* EMIOS_0_EMIOS_0_CH_16_Z_IN input func */
    {64U, 4U, 0U},
    /* LPUART1_LPUART1_RX_IN input func */
    {188U, 11U, 0U},
    /* LPSPI2_LPSPI2_SIN_IN input func */
    {246U, 4U, 0U},
    /* INMUX settings for pad PORT162:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_B_ETPU_B_CH_11_IN input func */
    {511U, 3U, 0U},
    /* SIUL_EIRQ_2_IN input func */
    {18U, 5U, 0U},
    /* EMIOS_0_EMIOS_0_CH_23_Z_IN input func */
    {71U, 7U, 0U},
    /* LPSPI2_LPSPI2_SOUT_IN input func */
    {247U, 4U, 0U},
    /* LPUART2_LPUART2_TX_IN input func */
    {365U, 11U, 0U},
    /* INMUX settings for pad PORT163:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_A_ETPU_A_CH_28_IN input func */
    {502U, 3U, 0U},
    /* SIUL_EIRQ_3_IN input func */
    {19U, 5U, 0U},
    /* EMIOS_0_EMIOS_0_CH_0_Z_IN input func */
    {48U, 5U, 0U},
    /* LPUART2_LPUART2_RX_IN input func */
    {189U, 10U, 0U},
    /* LPSPI2_LPSPI2_PCS0_IN input func */
    {241U, 6U, 0U},
    /* INMUX settings for pad PORT164:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_B_ETPU_B_CH_12_IN input func */
    {509U, 3U, 0U},
    /* SIUL_EIRQ_4_IN input func */
    {20U, 5U, 0U},
    /* EMIOS_0_EMIOS_0_CH_1_Z_IN input func */
    {49U, 7U, 0U},
    /* FXIO_FXIO_D0_IN input func */
    {152U, 7U, 0U},
    /* INMUX settings for pad PORT165:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_A_ETPU_A_CH_27_IN input func */
    {501U, 3U, 0U},
    /* CAN5_CAN5_RX_IN input func */
    {5U, 3U, 0U},
    /* SIUL_EIRQ_5_IN input func */
    {21U, 5U, 0U},
    /* EMIOS_0_EMIOS_0_CH_2_Z_IN input func */
    {50U, 7U, 0U},
    /* INMUX settings for pad PORT166:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_6_IN input func */
    {22U, 5U, 0U},
    /* LPI2C1_LPI2C1_SDA_IN input func */
    {219U, 6U, 0U},
    /* TRACE_EVTI_1_IN input func */
    {389U, 3U, 0U},
    /* INMUX settings for pad PORT167:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_B_ETPU_B_CH_17_IN input func */
    {510U, 3U, 0U},
    /* SIUL_EIRQ_7_IN input func */
    {23U, 5U, 0U},
    /* FXIO_FXIO_D1_IN input func */
    {153U, 8U, 0U},
    /* LPI2C1_LPI2C1_SCL_IN input func */
    {217U, 5U, 0U},
    /* INMUX settings for pad PORT168:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_16_IN input func */
    {32U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_4_Z_IN input func */
    {52U, 5U, 0U},
    /* FXIO_FXIO_D2_IN input func */
    {154U, 9U, 0U},
    /* LPI2C1_LPI2C1_SDA_IN input func */
    {219U, 4U, 0U},
    /* ETPU_B_ETPU_B_CH_22_IN input func */
    {407U, 3U, 0U},
    /* INMUX settings for pad PORT169:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_17_IN input func */
    {33U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_5_Z_IN input func */
    {53U, 5U, 0U},
    /* ETPU_B_ETPU_B_CH_23_IN input func */
    {379U, 3U, 0U},
    /* INMUX settings for pad PORT170:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_18_IN input func */
    {34U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_18_Z_IN input func */
    {66U, 4U, 0U},
    /* ETPU_B_ETPU_B_CH_24_IN input func */
    {380U, 3U, 0U},
    /* INMUX settings for pad PORT171:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_19_IN input func */
    {35U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_19_Z_IN input func */
    {67U, 9U, 0U},
    /* HSE_HSE_TAMPER_EXTIN0_IN input func */
    {343U, 4U, 0U},
    /* ETPU_B_ETPU_B_CH_25_IN input func */
    {381U, 3U, 0U},
    /* INMUX settings for pad PORT172:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_20_IN input func */
    {36U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_20_Z_IN input func */
    {68U, 3U, 0U},
    /* LPSPI3_LPSPI3_SIN_IN input func */
    {253U, 4U, 0U},
    /* LPUART2_LPUART2_TX_IN input func */
    {365U, 12U, 0U},
    /* ETPU_B_ETPU_B_CH_26_IN input func */
    {382U, 3U, 0U},
    /* INMUX settings for pad PORT173:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_21_IN input func */
    {37U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_21_Z_IN input func */
    {69U, 3U, 0U},
    /* LPUART2_LPUART2_RX_IN input func */
    {189U, 11U, 0U},
    /* LPSPI3_LPSPI3_SCK_IN input func */
    {252U, 4U, 0U},
    /* ETPU_B_ETPU_B_CH_27_IN input func */
    {383U, 3U, 0U},
    /* INMUX settings for pad PORT174:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_A_ETPU_A_CH_28_IN input func */
    {502U, 2U, 0U},
    /* SIUL_EIRQ_22_IN input func */
    {38U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_17_Z_IN input func */
    {65U, 7U, 0U},
    /* FCCU_FCCU_ERR_IN0_IN input func */
    {148U, 3U, 0U},
    /* FXIO_FXIO_D3_IN input func */
    {155U, 8U, 0U},
    /* SDADC_0_EXT_CLKIN0_IN input func */
    {396U, 1U, 0U},
    /* ETPU_B_ETPU_B_CH_18_IN input func */
    {472U, 3U, 0U},
    /* INMUX settings for pad PORT175:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_A_ETPU_A_CH_30_IN input func */
    {506U, 2U, 0U},
    /* CAN1_CAN1_RX_IN input func */
    {1U, 5U, 0U},
    /* SIUL_EIRQ_23_IN input func */
    {39U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_22_Z_IN input func */
    {70U, 4U, 0U},
    /* FCCU_FCCU_ERR_IN1_IN input func */
    {149U, 3U, 0U},
    /* LPSPI3_LPSPI3_SOUT_IN input func */
    {254U, 4U, 0U},
    /* ETPU_B_ETPU_B_CH_20_IN input func */
    {471U, 3U, 0U},
    /* ETPU_B_ETPU_B_CH_1_IN input func */
    {480U, 4U, 0U},
    /* INMUX settings for pad PORT176:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_A_ETPU_A_CH_31_IN input func */
    {507U, 2U, 0U},
    /* LPSPI3_LPSPI3_PCS0_IN input func */
    {248U, 4U, 0U},
    /* SDADC_0_EXT_DATA0_IN input func */
    {395U, 1U, 0U},
    /* ETPU_B_ETPU_B_CH_2_IN input func */
    {456U, 3U, 0U},
    /* ETPU_B_ETPU_B_CH_21_IN input func */
    {470U, 3U, 0U},
    /* INMUX settings for pad PORT177:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SDADC_1_EXT_DATA1_IN input func */
    {397U, 1U, 0U},
    /* ETPU_B_ETPU_B_CH_22_IN input func */
    {407U, 2U, 0U},
    /* INMUX settings for pad PORT178:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* LPSPI3_LPSPI3_PCS1_IN input func */
    {249U, 2U, 0U},
    /* LPUART3_LPUART3_TX_IN input func */
    {366U, 9U, 0U},
    /* ETPU_B_ETPU_B_CH_26_IN input func */
    {382U, 2U, 0U},
    /* SDADC_2_EXT_DATA2_IN input func */
    {399U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_18_IN input func */
    {467U, 3U, 0U},
    /* INMUX settings for pad PORT179:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* EMIOS_0_EMIOS_0_CH_5_Z_IN input func */
    {53U, 7U, 0U},
    /* LPUART3_LPUART3_RX_IN input func */
    {190U, 9U, 0U},
    /* LPSPI3_LPSPI3_PCS2_IN input func */
    {250U, 2U, 0U},
    /* ETPU_B_ETPU_B_CH_23_IN input func */
    {379U, 2U, 0U},
    /* INMUX settings for pad PORT180:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_A_ETPU_A_CH_29_IN input func */
    {503U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH_13_Z_IN input func */
    {61U, 7U, 0U},
    /* FXIO_FXIO_D4_IN input func */
    {156U, 8U, 0U},
    /* LPI2C0_LPI2C0_SCL_IN input func */
    {212U, 3U, 0U},
    /* LPSPI3_LPSPI3_PCS3_IN input func */
    {251U, 2U, 0U},
    /* LPUART0_LPUART0_TX_IN input func */
    {363U, 11U, 0U},
    /* SDADC_1_EXT_CLKIN1_IN input func */
    {398U, 1U, 0U},
    /* MSC0_DSPI_MSC0_SIN_IN input func */
    {403U, 2U, 0U},
    /* ETPU_B_ETPU_B_TCRCLK_IN input func */
    {435U, 3U, 0U},
    /* ETPU_B_ETPU_B_CH_0_IN input func */
    {459U, 3U, 0U},
    /* ETPU_B_ETPU_B_CH_19_IN input func */
    {460U, 3U, 0U},
    /* INMUX settings for pad PORT181:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CAN0_CAN0_RX_IN input func */
    {0U, 5U, 0U},
    /* EMIOS_0_EMIOS_0_CH_14_Z_IN input func */
    {62U, 7U, 0U},
    /* FXIO_FXIO_D5_IN input func */
    {157U, 11U, 0U},
    /* LPUART0_LPUART0_RX_IN input func */
    {187U, 11U, 0U},
    /* LPI2C0_LPI2C0_SDA_IN input func */
    {214U, 3U, 0U},
    /* LPSPI1_LPSPI1_PCS0_IN input func */
    {232U, 4U, 0U},
    /* ETPU_B_ETPU_B_CH_24_IN input func */
    {380U, 2U, 0U},
    /* SDADC_2_EXT_CLKIN2_IN input func */
    {400U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_14_IN input func */
    {473U, 3U, 0U},
    /* INMUX settings for pad PORT183:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* LPSPI3_LPSPI3_PCS3_IN input func */
    {251U, 3U, 0U},
    /* LPUART1_LPUART1_TX_IN input func */
    {364U, 12U, 0U},
    /* TRACE_EVTI_0_IN input func */
    {388U, 4U, 0U},
    /* ETPU_B_ETPU_B_CH_7_IN input func */
    {463U, 2U, 0U},
    /* ETPU_A_ETPU_A_CH_13_IN input func */
    {464U, 2U, 0U},
    /* INMUX settings for pad PORT184:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* EMIOS_0_EMIOS_0_CH_8_Z_IN input func */
    {56U, 6U, 0U},
    /* LPUART1_LPUART1_RX_IN input func */
    {188U, 12U, 0U},
    /* TRACE_EVTI_0_IN input func */
    {388U, 3U, 0U},
    /* INMUX settings for pad PORT185:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* EMIOS_0_EMIOS_0_CH_9_Z_IN input func */
    {57U, 8U, 0U},
    /* FXIO_FXIO_D6_IN input func */
    {158U, 10U, 0U},
    /* LPSPI2_LPSPI2_PCS2_IN input func */
    {243U, 3U, 0U},
    /* LPSPI4_LPSPI4_PCS0_IN input func */
    {255U, 3U, 0U},
    /* ETPU_B_ETPU_B_TCRCLK_IN input func */
    {435U, 4U, 0U},
    /* ETPU_B_ETPU_B_CH_0_IN input func */
    {459U, 4U, 0U},
    /* INMUX settings for pad PORT186:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CAN2_CAN2_RX_IN input func */
    {2U, 5U, 0U},
    /* EMIOS_0_EMIOS_0_CH_10_Z_IN input func */
    {58U, 6U, 0U},
    /* LPSPI2_LPSPI2_PCS3_IN input func */
    {244U, 2U, 0U},
    /* LPSPI4_LPSPI4_PCS1_IN input func */
    {256U, 2U, 0U},
    /* MSC0_LPUART_MSC0_RX_IN input func */
    {438U, 2U, 0U},
    /* ETPU_B_ETPU_B_CH_2_IN input func */
    {456U, 4U, 0U},
    /* INMUX settings for pad PORT187:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* EMIOS_0_EMIOS_0_CH_11_Z_IN input func */
    {59U, 7U, 0U},
    /* LPSPI4_LPSPI4_PCS2_IN input func */
    {257U, 3U, 0U},
    /* LPUART3_LPUART3_TX_IN input func */
    {366U, 10U, 0U},
    /* ETPU_B_ETPU_B_CH_30_IN input func */
    {386U, 3U, 0U},
    /* INMUX settings for pad PORT188:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FXIO_FXIO_D7_IN input func */
    {159U, 8U, 0U},
    /* LPUART3_LPUART3_RX_IN input func */
    {190U, 10U, 0U},
    /* LPSPI0_LPSPI0_PCS0_IN input func */
    {221U, 4U, 0U},
    /* LPSPI4_LPSPI4_PCS3_IN input func */
    {258U, 2U, 0U},
    /* INMUX settings for pad PORT189:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* EMIOS_0_EMIOS_0_CH_13_Z_IN input func */
    {61U, 6U, 0U},
    /* FXIO_FXIO_D8_IN input func */
    {160U, 6U, 0U},
    /* LPI2C0_LPI2C0_HREQ_IN input func */
    {211U, 4U, 0U},
    /* LPI2C1_LPI2C1_SCL_IN input func */
    {217U, 7U, 0U},
    /* LPSPI3_LPSPI3_PCS1_IN input func */
    {249U, 3U, 0U},
    /* ETPU_B_ETPU_B_CH_29_IN input func */
    {385U, 2U, 0U},
    /* ETPU_A_ETPU_A_TCRCLK_IN input func */
    {434U, 5U, 0U},
    /* ETPU_A_ETPU_A_CH_0_IN input func */
    {447U, 5U, 0U},
    /* ETPU_A_ETPU_A_CH_21_IN input func */
    {475U, 3U, 0U},
    /* INMUX settings for pad PORT190:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CAN3_CAN3_RX_IN input func */
    {3U, 5U, 0U},
    /* EMIOS_0_EMIOS_0_CH_14_Z_IN input func */
    {62U, 6U, 0U},
    /* ETPU_B_ETPU_B_CH_31_IN input func */
    {387U, 3U, 0U},
    /* INMUX settings for pad PORT191:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* EMIOS_0_EMIOS_0_CH_15_Z_IN input func */
    {63U, 8U, 0U},
    /* FXIO_FXIO_D9_IN input func */
    {161U, 5U, 0U},
    /* TRGMUX_TRGMUX_IN6_IN input func */
    {350U, 3U, 0U},
    /* INMUX settings for pad PORT192:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_8_IN input func */
    {24U, 5U, 0U},
    /* EMIOS_0_EMIOS_0_CH_6_Z_IN input func */
    {54U, 6U, 0U},
    /* ETPU_A_ETPU_A_CH_8_IN input func */
    {450U, 3U, 0U},
    /* INMUX settings for pad PORT193:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_9_IN input func */
    {25U, 5U, 0U},
    /* EMIOS_0_EMIOS_0_CH_17_Z_IN input func */
    {65U, 6U, 0U},
    /* ETPU_A_ETPU_A_CH_13_IN input func */
    {464U, 3U, 0U},
    /* INMUX settings for pad PORT194:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_10_IN input func */
    {26U, 5U, 0U},
    /* ETPU_B_ETPU_B_CH_30_IN input func */
    {386U, 2U, 0U},
    /* TRACE_EVTI_0_IN input func */
    {388U, 1U, 0U},
    /* ETPU_A_ETPU_A_CH_1_IN input func */
    {449U, 5U, 0U},
    /* ETPU_A_ETPU_A_CH_22_IN input func */
    {465U, 3U, 0U},
    /* INMUX settings for pad PORT195:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_11_IN input func */
    {27U, 5U, 0U},
    /* EMIOS_0_EMIOS_0_CH_19_Z_IN input func */
    {67U, 8U, 0U},
    /* ETPU_B_ETPU_B_CH_31_IN input func */
    {387U, 2U, 0U},
    /* ETPU_A_ETPU_A_CH_2_IN input func */
    {446U, 5U, 0U},
    /* ETPU_A_ETPU_A_CH_23_IN input func */
    {461U, 3U, 0U},
    /* INMUX settings for pad PORT196:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_A_ETPU_A_CH_26_IN input func */
    {500U, 2U, 0U},
    /* SIUL_EIRQ_12_IN input func */
    {28U, 5U, 0U},
    /* EMIOS_0_EMIOS_0_CH_20_Z_IN input func */
    {68U, 4U, 0U},
    /* ETPU_B_ETPU_B_CH_15_IN input func */
    {457U, 3U, 0U},
    /* INMUX settings for pad PORT197:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_A_ETPU_A_CH_27_IN input func */
    {501U, 2U, 0U},
    /* SIUL_EIRQ_13_IN input func */
    {29U, 5U, 0U},
    /* EMIOS_0_EMIOS_0_CH_21_Z_IN input func */
    {69U, 4U, 0U},
    /* ETPU_B_ETPU_B_CH_16_IN input func */
    {451U, 3U, 0U},
    /* INMUX settings for pad PORT198:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_14_IN input func */
    {30U, 5U, 0U},
    /* FXIO_FXIO_D10_IN input func */
    {162U, 5U, 0U},
    /* INMUX settings for pad PORT199:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_15_IN input func */
    {31U, 5U, 0U},
    /* EMIOS_0_EMIOS_0_CH_23_Z_IN input func */
    {71U, 6U, 0U},
    /* FXIO_FXIO_D11_IN input func */
    {163U, 7U, 0U},
    /* INMUX settings for pad PORT200:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_A_ETPU_A_CH_25_IN input func */
    {505U, 2U, 0U},
    /* SIUL_EIRQ_24_IN input func */
    {40U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_22_Z_IN input func */
    {70U, 5U, 0U},
    /* FXIO_FXIO_D12_IN input func */
    {164U, 5U, 0U},
    /* LPI2C0_LPI2C0_SCL_IN input func */
    {212U, 4U, 0U},
    /* ETPU_B_ETPU_B_CH_14_IN input func */
    {452U, 3U, 0U},
    /* INMUX settings for pad PORT201:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_A_ETPU_A_CH_24_IN input func */
    {504U, 3U, 0U},
    /* CAN4_CAN4_RX_IN input func */
    {4U, 5U, 0U},
    /* SIUL_EIRQ_25_IN input func */
    {41U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_23_Z_IN input func */
    {71U, 8U, 0U},
    /* INMUX settings for pad PORT202:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_26_IN input func */
    {42U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_7_Z_IN input func */
    {55U, 6U, 0U},
    /* ETPU_A_ETPU_A_CH_15_IN input func */
    {469U, 3U, 0U},
    /* INMUX settings for pad PORT203:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_27_IN input func */
    {43U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_16_Z_IN input func */
    {64U, 5U, 0U},
    /* ETPU_A_ETPU_A_CH_16_IN input func */
    {468U, 3U, 0U},
    /* INMUX settings for pad PORT204:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_A_ETPU_A_CH_26_IN input func */
    {500U, 3U, 0U},
    /* SIUL_EIRQ_28_IN input func */
    {44U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_18_Z_IN input func */
    {66U, 5U, 0U},
    /* LPSPI4_LPSPI4_PCS3_IN input func */
    {258U, 3U, 0U},
    /* INMUX settings for pad PORT205:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_29_IN input func */
    {45U, 4U, 0U},
    /* EMIOS_0_EMIOS_0_CH_19_Z_IN input func */
    {67U, 10U, 0U},
    /* FXIO_FXIO_D13_IN input func */
    {165U, 5U, 0U},
    /* LPI2C0_LPI2C0_SDA_IN input func */
    {214U, 4U, 0U},
    /* ETPU_B_ETPU_B_CH_28_IN input func */
    {384U, 2U, 0U},
    /* ETPU_A_ETPU_A_CH_20_IN input func */
    {466U, 3U, 0U},
    /* INMUX settings for pad PORT206:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETPU_A_ETPU_A_CH_25_IN input func */
    {505U, 3U, 0U},
    /* CAN5_CAN5_RX_IN input func */
    {5U, 4U, 0U},
    /* SIUL_EIRQ_30_IN input func */
    {46U, 4U, 0U},
    /* INMUX settings for pad PORT207:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_31_IN input func */
    {47U, 4U, 0U},
    /* FXIO_FXIO_D14_IN input func */
    {166U, 5U, 0U},
    /* INMUX settings for pad PORT208:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FXIO_FXIO_D15_IN input func */
    {167U, 6U, 0U},
    /* INMUX settings for pad PORT209:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FXIO_FXIO_D16_IN input func */
    {168U, 4U, 0U},
    /* INMUX settings for pad PORT210:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FXIO_FXIO_D17_IN input func */
    {169U, 3U, 0U},
    /* INMUX settings for pad PORT211:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FXIO_FXIO_D18_IN input func */
    {170U, 3U, 0U},
    /* INMUX settings for pad PORT212:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FXIO_FXIO_D19_IN input func */
    {171U, 6U, 0U},
    /* INMUX settings for pad PORT213:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CAN0_CAN0_RX_IN input func */
    {0U, 8U, 0U},
    /* FXIO_FXIO_D20_IN input func */
    {172U, 3U, 0U},
    /* INMUX settings for pad PORT214:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FXIO_FXIO_D21_IN input func */
    {173U, 3U, 0U},
    /* INMUX settings for pad PORT215:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FXIO_FXIO_D22_IN input func */
    {174U, 3U, 0U},
    /* INMUX settings for pad PORT216:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FXIO_FXIO_D23_IN input func */
    {175U, 3U, 0U},
    /* INMUX settings for pad PORT217:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FXIO_FXIO_D24_IN input func */
    {176U, 3U, 0U},
    /* INMUX settings for pad PORT218:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FXIO_FXIO_D25_IN input func */
    {177U, 3U, 0U},
    /* INMUX settings for pad PORT219:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CAN1_CAN1_RX_IN input func */
    {1U, 8U, 0U},
    /* FXIO_FXIO_D26_IN input func */
    {178U, 3U, 0U},
    /* INMUX settings for pad PORT231:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_23_IN input func */
    {39U, 5U, 0U},
    /* FXIO_FXIO_D23_IN input func */
    {175U, 4U, 0U},
    /* LPUART0_LPUART0_RX_IN input func */
    {187U, 13U, 0U},
    /* INMUX settings for pad PORT232:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_24_IN input func */
    {40U, 5U, 0U},
    /* FXIO_FXIO_D24_IN input func */
    {176U, 4U, 0U},
    /* LPUART2_LPUART2_TX_IN input func */
    {365U, 13U, 0U},
    /* INMUX settings for pad PORT233:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_25_IN input func */
    {41U, 5U, 0U},
    /* FXIO_FXIO_D25_IN input func */
    {177U, 4U, 0U},
    /* LPUART2_LPUART2_RX_IN input func */
    {189U, 12U, 0U},
    /* INMUX settings for pad PORT234:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_26_IN input func */
    {42U, 5U, 0U},
    /* FXIO_FXIO_D26_IN input func */
    {178U, 4U, 0U},
    /* LPUART3_LPUART3_TX_IN input func */
    {366U, 11U, 0U},
    /* INMUX settings for pad PORT235:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_27_IN input func */
    {43U, 5U, 0U},
    /* FXIO_FXIO_D27_IN input func */
    {179U, 3U, 0U},
    /* LPUART3_LPUART3_RX_IN input func */
    {190U, 11U, 0U},
    /* INMUX settings for pad PORT236:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL_EIRQ_28_IN input func */
    {44U, 5U, 0U},
    /* FXIO_FXIO_D28_IN input func */
    {180U, 3U, 0U}
};

/**
* @brief Array of elements storing information about INOUT functionalities on the SIUL2 instance
*/
static const Port_InoutSettingType Port_SIUL2_0_aInoutMuxSettings[PORT_SIUL2_0_INOUT_TABLE_NUM_ENTRIES_U16] =
{
    /* Inout settings for pad PORT2 :   {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D4_INOUT inout functionality */
    {2U, 38U, 156U, 3U, 0U}, 
    /* LPSPI5_LPSPI5_SIN_INOUT inout functionality */
    {2U, 40U, 267U, 2U, 0U}, 
    /* ETPU_A_ETPU_A_CH_2_INOUT inout functionality */
    {2U, 41U, 446U, 1U, 0U}, 
    /* FLEXPWM_0_PWM_0_B_0_INOUT inout functionality */
    {2U, 43U, 413U, 1U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_19_Z_INOUT inout functionality */
    {2U, 44U, 67U, 5U, 0U}, 
    /* LPSPI1_LPSPI1_SIN_INOUT inout functionality */
    {2U, 45U, 239U, 2U, 0U}, 
    /* Inout settings for pad PORT3 :   {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI1_LPSPI1_SCK_INOUT inout functionality */
    {3U, 36U, 238U, 1U, 0U}, 
    /* FXIO_FXIO_D5_INOUT inout functionality */
    {3U, 38U, 157U, 3U, 0U}, 
    /* LPUART0_LPUART0_TX_INOUT inout functionality */
    {3U, 39U, 363U, 1U, 0U}, 
    /* LPSPI5_LPSPI5_SCK_INOUT inout functionality */
    {3U, 40U, 266U, 2U, 0U}, 
    /* ETPU_A_ETPU_A_CH_3_INOUT inout functionality */
    {3U, 44U, 445U, 1U, 0U}, 
    /* Inout settings for pad PORT4 :   {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D6_INOUT inout functionality */
    {4U, 36U, 158U, 8U, 0U}, 
    /* JTAG_JTAG_TMS_SWD_DIO_INOUT inout functionality */
    {4U, 40U, 186U, 0U, 0U}, 
    /* Inout settings for pad PORT5 :   {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* SYSTEM_RESET_B_INOUT inout functionality */
    {5U, 40U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT6 :   {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI1_LPSPI1_PCS1_INOUT inout functionality */
    {6U, 36U, 233U, 1U, 0U}, 
    /* FXIO_FXIO_D19_INOUT inout functionality */
    {6U, 38U, 171U, 4U, 0U}, 
    /* LPSPI3_LPSPI3_PCS1_INOUT inout functionality */
    {6U, 39U, 249U, 5U, 0U}, 
    /* ETPU_A_ETPU_A_CH_18_INOUT inout functionality */
    {6U, 41U, 467U, 1U, 0U}, 
    /* FLEXPWM_1_PWM_1_B_0_INOUT inout functionality */
    {6U, 43U, 427U, 1U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_13_Z_INOUT inout functionality */
    {6U, 44U, 61U, 5U, 0U}, 
    /* Inout settings for pad PORT7 :   {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPUART3_LPUART3_TX_INOUT inout functionality */
    {7U, 34U, 366U, 1U, 0U}, 
    /* LPSPI0_LPSPI0_PCS1_INOUT inout functionality */
    {7U, 35U, 222U, 3U, 0U}, 
    /* FXIO_FXIO_D9_INOUT inout functionality */
    {7U, 39U, 161U, 3U, 0U}, 
    /* ETPU_A_ETPU_A_CH_20_INOUT inout functionality */
    {7U, 43U, 466U, 1U, 0U}, 
    /* FLEXPWM_1_PWM_1_B_1_INOUT inout functionality */
    {7U, 45U, 426U, 1U, 0U}, 
    /* Inout settings for pad PORT8 :   {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI2_LPSPI2_SOUT_INOUT inout functionality */
    {8U, 36U, 247U, 1U, 0U}, 
    /* FXIO_FXIO_D6_INOUT inout functionality */
    {8U, 37U, 158U, 2U, 0U}, 
    /* ETPU_A_ETPU_A_CH_5_INOUT inout functionality */
    {8U, 42U, 479U, 2U, 0U}, 
    /* ETPU_B_ETPU_B_CH_0_INOUT inout functionality */
    {8U, 43U, 459U, 2U, 0U}, 
    /* Inout settings for pad PORT9 :   {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPUART2_LPUART2_TX_INOUT inout functionality */
    {9U, 35U, 365U, 1U, 0U}, 
    /* LPSPI2_LPSPI2_PCS0_INOUT inout functionality */
    {9U, 36U, 241U, 1U, 0U}, 
    /* FXIO_FXIO_D7_INOUT inout functionality */
    {9U, 37U, 159U, 2U, 0U}, 
    /* LPSPI3_LPSPI3_PCS0_INOUT inout functionality */
    {9U, 39U, 248U, 3U, 0U}, 
    /* LPSPI1_LPSPI1_PCS2_INOUT inout functionality */
    {9U, 42U, 234U, 3U, 0U}, 
    /* ETPU_A_ETPU_A_CH_12_INOUT inout functionality */
    {9U, 43U, 481U, 2U, 0U}, 
    /* ETPU_B_ETPU_B_CH_1_INOUT inout functionality */
    {9U, 44U, 480U, 2U, 0U}, 
    /* Inout settings for pad PORT10 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_12_Z_INOUT inout functionality */
    {10U, 35U, 60U, 2U, 0U}, 
    /* FXIO_FXIO_D0_INOUT inout functionality */
    {10U, 37U, 152U, 2U, 0U}, 
    /* Inout settings for pad PORT14 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI1_LPSPI1_PCS3_INOUT inout functionality */
    {14U, 36U, 235U, 2U, 0U}, 
    /* FXIO_FXIO_D14_INOUT inout functionality */
    {14U, 39U, 166U, 4U, 0U}, 
    /* LPSPI5_LPSPI5_PCS1_INOUT inout functionality */
    {14U, 40U, 263U, 2U, 0U}, 
    /* ETPU_A_ETPU_A_CH_6_INOUT inout functionality */
    {14U, 41U, 442U, 3U, 0U}, 
    /* ETPU_B_ETPU_B_CH_9_INOUT inout functionality */
    {14U, 42U, 462U, 3U, 0U}, 
    /* Inout settings for pad PORT17 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_6_Z_INOUT inout functionality */
    {17U, 35U, 54U, 2U, 0U}, 
    /* LPSPI3_LPSPI3_SOUT_INOUT inout functionality */
    {17U, 39U, 254U, 2U, 0U}, 
    /* FXIO_FXIO_D19_INOUT inout functionality */
    {17U, 40U, 171U, 1U, 0U}, 
    /* LPUART0_LPUART0_TX_INOUT inout functionality */
    {17U, 41U, 363U, 6U, 0U}, 
    /* ETPU_A_ETPU_A_CH_8_INOUT inout functionality */
    {17U, 42U, 450U, 1U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_10_Z_INOUT inout functionality */
    {17U, 43U, 58U, 4U, 0U}, 
    /* Inout settings for pad PORT18 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPUART1_LPUART1_TX_INOUT inout functionality */
    {18U, 36U, 364U, 4U, 0U}, 
    /* LPSPI1_LPSPI1_SOUT_INOUT inout functionality */
    {18U, 37U, 240U, 4U, 0U}, 
    /* ETPU_B_ETPU_B_CH_1_INOUT inout functionality */
    {18U, 42U, 480U, 3U, 0U}, 
    /* ETPU_A_ETPU_A_CH_3_INOUT inout functionality */
    {18U, 43U, 445U, 3U, 0U}, 
    /* Inout settings for pad PORT19 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI1_LPSPI1_SCK_INOUT inout functionality */
    {19U, 37U, 238U, 3U, 0U}, 
    /* ETPU_A_ETPU_A_CH_4_INOUT inout functionality */
    {19U, 44U, 448U, 3U, 0U}, 
    /* Inout settings for pad PORT20 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI1_LPSPI1_SIN_INOUT inout functionality */
    {20U, 37U, 239U, 3U, 0U}, 
    /* ETPU_B_ETPU_B_CH_4_INOUT inout functionality */
    {20U, 42U, 455U, 2U, 0U}, 
    /* ETPU_A_ETPU_A_CH_5_INOUT inout functionality */
    {20U, 43U, 479U, 3U, 0U}, 
    /* Inout settings for pad PORT21 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI2_LPSPI2_PCS2_INOUT inout functionality */
    {21U, 34U, 243U, 1U, 0U}, 
    /* FXIO_FXIO_D0_INOUT inout functionality */
    {21U, 36U, 152U, 3U, 0U}, 
    /* LPSPI1_LPSPI1_PCS0_INOUT inout functionality */
    {21U, 37U, 232U, 3U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_4_Z_INOUT inout functionality */
    {21U, 41U, 52U, 6U, 0U}, 
    /* ETPU_B_ETPU_B_CH_11_INOUT inout functionality */
    {21U, 42U, 511U, 1U, 0U}, 
    /* ETPU_A_ETPU_A_CH_1_INOUT inout functionality */
    {21U, 43U, 449U, 4U, 0U}, 
    /* Inout settings for pad PORT22 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D1_INOUT inout functionality */
    {22U, 36U, 153U, 3U, 0U}, 
    /* LPSPI1_LPSPI1_PCS1_INOUT inout functionality */
    {22U, 37U, 233U, 3U, 0U}, 
    /* Inout settings for pad PORT23 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D2_INOUT inout functionality */
    {23U, 36U, 154U, 3U, 0U}, 
    /* LPI2C0_LPI2C0_SCLS_INOUT inout functionality */
    {23U, 42U, 213U, 2U, 0U}, 
    /* ETPU_A_ETPU_A_CH_24_INOUT inout functionality */
    {23U, 43U, 504U, 2U, 0U}, 
    /* ETPU_B_ETPU_B_CH_13_INOUT inout functionality */
    {23U, 44U, 453U, 3U, 0U}, 
    /* Inout settings for pad PORT24 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D3_INOUT inout functionality */
    {24U, 35U, 155U, 3U, 0U}, 
    /* ETPU_B_ETPU_B_CH_8_INOUT inout functionality */
    {24U, 41U, 482U, 3U, 0U}, 
    /* Inout settings for pad PORT25 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D2_INOUT inout functionality */
    {25U, 36U, 154U, 6U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_8_Z_INOUT inout functionality */
    {25U, 41U, 56U, 4U, 0U}, 
    /* ETPU_B_ETPU_B_CH_9_INOUT inout functionality */
    {25U, 42U, 462U, 2U, 0U}, 
    /* Inout settings for pad PORT26 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI1_LPSPI1_PCS0_INOUT inout functionality */
    {26U, 36U, 232U, 5U, 0U}, 
    /* LPSPI0_LPSPI0_PCS0_INOUT inout functionality */
    {26U, 37U, 221U, 3U, 0U}, 
    /* FXIO_FXIO_D1_INOUT inout functionality */
    {26U, 38U, 153U, 7U, 0U}, 
    /* EMAC_EMAC_PPS0_INOUT inout functionality */
    {26U, 40U, 144U, 3U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_9_Z_INOUT inout functionality */
    {26U, 41U, 57U, 5U, 0U}, 
    /* Inout settings for pad PORT28 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI1_LPSPI1_SCK_INOUT inout functionality */
    {28U, 36U, 238U, 4U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_11_Z_INOUT inout functionality */
    {28U, 41U, 59U, 5U, 0U}, 
    /* Inout settings for pad PORT29 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMAC_EMAC_PPS2_INOUT inout functionality */
    {29U, 36U, 146U, 3U, 0U}, 
    /* LPUART2_LPUART2_TX_INOUT inout functionality */
    {29U, 37U, 365U, 5U, 0U}, 
    /* LPSPI1_LPSPI1_SIN_INOUT inout functionality */
    {29U, 38U, 239U, 4U, 0U}, 
    /* ZIPWIRE0_LFAST_0_EXT_REF_INOUT inout functionality */
    {29U, 41U, 441U, 1U, 0U}, 
    /* EMAC_EMAC_MII_RMII_MDIO_INOUT inout functionality */
    {29U, 42U, 291U, 3U, 0U}, 
    /* Inout settings for pad PORT30 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI1_LPSPI1_SOUT_INOUT inout functionality */
    {30U, 36U, 240U, 5U, 0U}, 
    /* LPSPI0_LPSPI0_SOUT_INOUT inout functionality */
    {30U, 37U, 231U, 4U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_13_Z_INOUT inout functionality */
    {30U, 41U, 61U, 4U, 0U}, 
    /* Inout settings for pad PORT31 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMAC_EMAC_PPS0_INOUT inout functionality */
    {31U, 34U, 144U, 5U, 0U}, 
    /* FXIO_FXIO_D0_INOUT inout functionality */
    {31U, 36U, 152U, 6U, 0U}, 
    /* LPSPI0_LPSPI0_PCS1_INOUT inout functionality */
    {31U, 37U, 222U, 2U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_14_Z_INOUT inout functionality */
    {31U, 41U, 62U, 4U, 0U}, 
    /* ETPU_B_ETPU_B_CH_28_INOUT inout functionality */
    {31U, 42U, 384U, 3U, 0U}, 
    /* Inout settings for pad PORT32 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPI2C0_LPI2C0_SDAS_INOUT inout functionality */
    {32U, 34U, 215U, 1U, 0U}, 
    /* FXIO_FXIO_D14_INOUT inout functionality */
    {32U, 35U, 166U, 3U, 0U}, 
    /* LPSPI0_LPSPI0_PCS0_INOUT inout functionality */
    {32U, 36U, 221U, 1U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_3_Z_INOUT inout functionality */
    {32U, 37U, 51U, 4U, 0U}, 
    /* ETPU_B_ETPU_B_CH_7_INOUT inout functionality */
    {32U, 41U, 463U, 1U, 0U}, 
    /* FLEXPWM_1_PWM_1_X_0_INOUT inout functionality */
    {32U, 43U, 486U, 1U, 0U}, 
    /* Inout settings for pad PORT33 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPI2C0_LPI2C0_SCLS_INOUT inout functionality */
    {33U, 34U, 213U, 1U, 0U}, 
    /* LPUART0_LPUART0_TX_INOUT inout functionality */
    {33U, 35U, 363U, 2U, 0U}, 
    /* LPSPI0_LPSPI0_SOUT_INOUT inout functionality */
    {33U, 36U, 231U, 3U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_7_Z_INOUT inout functionality */
    {33U, 37U, 55U, 3U, 0U}, 
    /* ETPU_B_ETPU_B_CH_9_INOUT inout functionality */
    {33U, 43U, 462U, 1U, 0U}, 
    /* FLEXPWM_1_PWM_1_X_1_INOUT inout functionality */
    {33U, 45U, 485U, 1U, 0U}, 
    /* Inout settings for pad PORT34 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_8_Z_INOUT inout functionality */
    {34U, 35U, 56U, 1U, 0U}, 
    /* LPSPI2_LPSPI2_SIN_INOUT inout functionality */
    {34U, 36U, 246U, 2U, 0U}, 
    /* FXIO_FXIO_D18_INOUT inout functionality */
    {34U, 40U, 170U, 1U, 0U}, 
    /* Inout settings for pad PORT35 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_9_Z_INOUT inout functionality */
    {35U, 35U, 57U, 2U, 0U}, 
    /* LPSPI2_LPSPI2_SOUT_INOUT inout functionality */
    {35U, 36U, 247U, 2U, 0U}, 
    /* FXIO_FXIO_D17_INOUT inout functionality */
    {35U, 40U, 169U, 1U, 0U}, 
    /* LPUART1_LPUART1_TX_INOUT inout functionality */
    {35U, 43U, 364U, 6U, 0U}, 
    /* Inout settings for pad PORT36 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_4_Z_INOUT inout functionality */
    {36U, 35U, 52U, 1U, 0U}, 
    /* LPSPI0_LPSPI0_SOUT_INOUT inout functionality */
    {36U, 36U, 231U, 2U, 0U}, 
    /* EMAC_EMAC_MII_RMII_MDIO_INOUT inout functionality */
    {36U, 38U, 291U, 1U, 0U}, 
    /* Inout settings for pad PORT37 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_5_Z_INOUT inout functionality */
    {37U, 35U, 53U, 1U, 0U}, 
    /* LPSPI0_LPSPI0_PCS1_INOUT inout functionality */
    {37U, 36U, 222U, 1U, 0U}, 
    /* LPSPI0_LPSPI0_PCS0_INOUT inout functionality */
    {37U, 37U, 221U, 2U, 0U}, 
    /* Inout settings for pad PORT42 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI4_LPSPI4_SCK_INOUT inout functionality */
    {42U, 34U, 259U, 2U, 0U}, 
    /* FXIO_FXIO_D27_INOUT inout functionality */
    {42U, 40U, 179U, 1U, 0U}, 
    /* LPUART1_LPUART1_TX_INOUT inout functionality */
    {42U, 41U, 364U, 7U, 0U}, 
    /* Inout settings for pad PORT43 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI4_LPSPI4_SIN_INOUT inout functionality */
    {43U, 34U, 260U, 2U, 0U}, 
    /* FXIO_FXIO_D26_INOUT inout functionality */
    {43U, 40U, 178U, 1U, 0U}, 
    /* ETPU_A_ETPU_A_CH_0_INOUT inout functionality */
    {43U, 41U, 447U, 1U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_9_Z_INOUT inout functionality */
    {43U, 42U, 57U, 4U, 0U}, 
    /* Inout settings for pad PORT44 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI3_LPSPI3_PCS3_INOUT inout functionality */
    {44U, 34U, 251U, 1U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_0_Z_INOUT inout functionality */
    {44U, 35U, 48U, 1U, 0U}, 
    /* FXIO_FXIO_D25_INOUT inout functionality */
    {44U, 40U, 177U, 1U, 0U}, 
    /* ETPU_B_ETPU_B_CH_2_INOUT inout functionality */
    {44U, 42U, 456U, 1U, 0U}, 
    /* FLEXPWM_0_PWM_0_X_0_INOUT inout functionality */
    {44U, 45U, 489U, 1U, 0U}, 
    /* Inout settings for pad PORT45 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI3_LPSPI3_PCS2_INOUT inout functionality */
    {45U, 34U, 250U, 1U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_1_Z_INOUT inout functionality */
    {45U, 35U, 49U, 2U, 0U}, 
    /* FXIO_FXIO_D8_INOUT inout functionality */
    {45U, 36U, 160U, 3U, 0U}, 
    /* FXIO_FXIO_D24_INOUT inout functionality */
    {45U, 40U, 176U, 1U, 0U}, 
    /* LPUART0_LPUART0_TX_INOUT inout functionality */
    {45U, 41U, 363U, 7U, 0U}, 
    /* ETPU_B_ETPU_B_CH_4_INOUT inout functionality */
    {45U, 42U, 455U, 1U, 0U}, 
    /* FLEXPWM_0_PWM_0_X_1_INOUT inout functionality */
    {45U, 45U, 488U, 1U, 0U}, 
    /* Inout settings for pad PORT46 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_2_Z_INOUT inout functionality */
    {46U, 35U, 50U, 3U, 0U}, 
    /* LPSPI1_LPSPI1_SCK_INOUT inout functionality */
    {46U, 36U, 238U, 2U, 0U}, 
    /* FXIO_FXIO_D23_INOUT inout functionality */
    {46U, 40U, 175U, 1U, 0U}, 
    /* ETPU_A_ETPU_A_CH_9_INOUT inout functionality */
    {46U, 41U, 454U, 1U, 0U}, 
    /* FLEXPWM_0_PWM_0_X_3_INOUT inout functionality */
    {46U, 45U, 487U, 1U, 0U}, 
    /* Inout settings for pad PORT47 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_3_Z_INOUT inout functionality */
    {47U, 35U, 51U, 1U, 0U}, 
    /* LPSPI1_LPSPI1_SIN_INOUT inout functionality */
    {47U, 36U, 239U, 1U, 0U}, 
    /* FXIO_FXIO_D22_INOUT inout functionality */
    {47U, 40U, 174U, 1U, 0U}, 
    /* LPUART3_LPUART3_TX_INOUT inout functionality */
    {47U, 42U, 366U, 5U, 0U}, 
    /* ETPU_B_ETPU_B_CH_13_INOUT inout functionality */
    {47U, 43U, 453U, 1U, 0U}, 
    /* ETPU_A_ETPU_A_CH_4_INOUT inout functionality */
    {47U, 45U, 448U, 2U, 0U}, 
    /* Inout settings for pad PORT48 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_4_Z_INOUT inout functionality */
    {48U, 35U, 52U, 2U, 0U}, 
    /* LPSPI1_LPSPI1_SOUT_INOUT inout functionality */
    {48U, 36U, 240U, 2U, 0U}, 
    /* FXIO_FXIO_D21_INOUT inout functionality */
    {48U, 40U, 173U, 1U, 0U}, 
    /* LPUART0_LPUART0_TX_INOUT inout functionality */
    {48U, 41U, 363U, 8U, 0U}, 
    /* ETPU_B_ETPU_B_CH_14_INOUT inout functionality */
    {48U, 43U, 452U, 1U, 0U}, 
    /* ETPU_B_ETPU_B_CH_1_INOUT inout functionality */
    {48U, 44U, 480U, 1U, 0U}, 
    /* Inout settings for pad PORT49 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_5_Z_INOUT inout functionality */
    {49U, 35U, 53U, 2U, 0U}, 
    /* LPSPI1_LPSPI1_PCS3_INOUT inout functionality */
    {49U, 36U, 235U, 1U, 0U}, 
    /* LPSPI3_LPSPI3_PCS0_INOUT inout functionality */
    {49U, 39U, 248U, 2U, 0U}, 
    /* FXIO_FXIO_D20_INOUT inout functionality */
    {49U, 40U, 172U, 1U, 0U}, 
    /* ETPU_B_ETPU_B_CH_16_INOUT inout functionality */
    {49U, 42U, 451U, 1U, 0U}, 
    /* ETPU_A_ETPU_A_CH_5_INOUT inout functionality */
    {49U, 43U, 479U, 1U, 0U}, 
    /* ETPU_A_ETPU_A_CH_7_INOUT inout functionality */
    {49U, 44U, 458U, 2U, 0U}, 
    /* Inout settings for pad PORT50 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D1_INOUT inout functionality */
    {50U, 36U, 153U, 6U, 0U}, 
    /* LPSPI1_LPSPI1_PCS1_INOUT inout functionality */
    {50U, 37U, 233U, 2U, 0U}, 
    /* LPSPI5_LPSPI5_PCS2_INOUT inout functionality */
    {50U, 41U, 264U, 2U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_15_Z_INOUT inout functionality */
    {50U, 42U, 63U, 4U, 0U}, 
    /* ETPU_B_ETPU_B_CH_29_INOUT inout functionality */
    {50U, 43U, 385U, 3U, 0U}, 
    /* Inout settings for pad PORT51 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMAC_EMAC_PPS0_INOUT inout functionality */
    {51U, 34U, 144U, 4U, 0U}, 
    /* FXIO_FXIO_D2_INOUT inout functionality */
    {51U, 36U, 154U, 5U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_15_Z_INOUT inout functionality */
    {51U, 41U, 63U, 5U, 0U}, 
    /* Inout settings for pad PORT52 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D3_INOUT inout functionality */
    {52U, 36U, 155U, 5U, 0U}, 
    /* LPSPI5_LPSPI5_PCS3_INOUT inout functionality */
    {52U, 41U, 265U, 2U, 0U}, 
    /* ETPU_A_ETPU_A_CH_24_INOUT inout functionality */
    {52U, 42U, 504U, 1U, 0U}, 
    /* ETPU_B_ETPU_B_CH_13_INOUT inout functionality */
    {52U, 43U, 453U, 2U, 0U}, 
    /* Inout settings for pad PORT53 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D4_INOUT inout functionality */
    {53U, 36U, 156U, 5U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_17_Z_INOUT inout functionality */
    {53U, 41U, 65U, 4U, 0U}, 
    /* ETPU_A_ETPU_A_CH_25_INOUT inout functionality */
    {53U, 42U, 505U, 1U, 0U}, 
    /* ETPU_B_ETPU_B_CH_14_INOUT inout functionality */
    {53U, 43U, 452U, 2U, 0U}, 
    /* Inout settings for pad PORT54 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI3_LPSPI3_PCS1_INOUT inout functionality */
    {54U, 36U, 249U, 4U, 0U}, 
    /* LPUART1_LPUART1_TX_INOUT inout functionality */
    {54U, 38U, 364U, 5U, 0U}, 
    /* FXIO_FXIO_D15_INOUT inout functionality */
    {54U, 39U, 167U, 5U, 0U}, 
    /* Inout settings for pad PORT55 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D4_INOUT inout functionality */
    {55U, 36U, 156U, 6U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_19_Z_INOUT inout functionality */
    {55U, 41U, 67U, 6U, 0U}, 
    /* ETPU_A_ETPU_A_CH_30_INOUT inout functionality */
    {55U, 42U, 506U, 1U, 0U}, 
    /* ETPU_B_ETPU_B_CH_20_INOUT inout functionality */
    {55U, 43U, 471U, 2U, 0U}, 
    /* Inout settings for pad PORT56 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D5_INOUT inout functionality */
    {56U, 36U, 157U, 6U, 0U}, 
    /* LPSPI2_LPSPI2_PCS2_INOUT inout functionality */
    {56U, 42U, 243U, 5U, 0U}, 
    /* Inout settings for pad PORT57 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D6_INOUT inout functionality */
    {57U, 36U, 158U, 5U, 0U}, 
    /* LPSPI2_LPSPI2_PCS0_INOUT inout functionality */
    {57U, 38U, 241U, 4U, 0U}, 
    /* ETPU_A_ETPU_A_CH_31_INOUT inout functionality */
    {57U, 41U, 507U, 1U, 0U}, 
    /* ETPU_B_ETPU_B_CH_21_INOUT inout functionality */
    {57U, 42U, 470U, 2U, 0U}, 
    /* Inout settings for pad PORT58 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D7_INOUT inout functionality */
    {58U, 36U, 159U, 6U, 0U}, 
    /* LPSPI2_LPSPI2_PCS3_INOUT inout functionality */
    {58U, 41U, 244U, 5U, 0U}, 
    /* Inout settings for pad PORT59 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D8_INOUT inout functionality */
    {59U, 36U, 160U, 2U, 0U}, 
    /* LPSPI2_LPSPI2_SOUT_INOUT inout functionality */
    {59U, 38U, 247U, 3U, 0U}, 
    /* LPUART1_LPUART1_TX_INOUT inout functionality */
    {59U, 41U, 364U, 8U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_23_Z_INOUT inout functionality */
    {59U, 42U, 71U, 3U, 0U}, 
    /* Inout settings for pad PORT60 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D9_INOUT inout functionality */
    {60U, 36U, 161U, 2U, 0U}, 
    /* LPSPI2_LPSPI2_SIN_INOUT inout functionality */
    {60U, 38U, 246U, 3U, 0U}, 
    /* EMAC_EMAC_PPS3_INOUT inout functionality */
    {60U, 40U, 147U, 2U, 0U}, 
    /* Inout settings for pad PORT61 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D10_INOUT inout functionality */
    {61U, 36U, 162U, 2U, 0U}, 
    /* LPSPI2_LPSPI2_SCK_INOUT inout functionality */
    {61U, 38U, 245U, 3U, 0U}, 
    /* LPUART2_LPUART2_TX_INOUT inout functionality */
    {61U, 43U, 365U, 7U, 0U}, 
    /* Inout settings for pad PORT64 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_0_Z_INOUT inout functionality */
    {64U, 35U, 48U, 3U, 0U}, 
    /* QUADSPI_QUADSPI_IOFA4_INOUT inout functionality */
    {64U, 37U, 419U, 1U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_14_Z_INOUT inout functionality */
    {64U, 39U, 62U, 2U, 0U}, 
    /* EMAC_EMAC_MII_RMII_TX_CLK_INOUT inout functionality */
    {64U, 40U, 296U, 4U, 0U}, 
    /* ETPU_B_ETPU_B_CH_26_INOUT inout functionality */
    {64U, 41U, 382U, 1U, 0U}, 
    /* ETPU_A_ETPU_A_CH_18_INOUT inout functionality */
    {64U, 42U, 467U, 2U, 0U}, 
    /* Inout settings for pad PORT65 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_1_Z_INOUT inout functionality */
    {65U, 35U, 49U, 1U, 0U}, 
    /* QUADSPI_QUADSPI_DQSFA_INOUT inout functionality */
    {65U, 36U, 423U, 1U, 0U}, 
    /* FXIO_FXIO_D5_INOUT inout functionality */
    {65U, 37U, 157U, 7U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_15_Z_INOUT inout functionality */
    {65U, 39U, 63U, 1U, 0U}, 
    /* Inout settings for pad PORT66 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_2_Z_INOUT inout functionality */
    {66U, 35U, 50U, 2U, 0U}, 
    /* LPSPI3_LPSPI3_PCS2_INOUT inout functionality */
    {66U, 36U, 250U, 4U, 0U}, 
    /* LPSPI0_LPSPI0_PCS2_INOUT inout functionality */
    {66U, 37U, 223U, 2U, 0U}, 
    /* QUADSPI_QUADSPI_IOFA3_INOUT inout functionality */
    {66U, 40U, 308U, 1U, 0U}, 
    /* Inout settings for pad PORT67 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_3_Z_INOUT inout functionality */
    {67U, 35U, 51U, 3U, 0U}, 
    /* LPUART0_LPUART0_TX_INOUT inout functionality */
    {67U, 37U, 363U, 3U, 0U}, 
    /* Inout settings for pad PORT68 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_8_Z_INOUT inout functionality */
    {68U, 35U, 56U, 2U, 0U}, 
    /* FXIO_FXIO_D5_INOUT inout functionality */
    {68U, 37U, 157U, 8U, 0U}, 
    /* Inout settings for pad PORT69 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_16_Z_INOUT inout functionality */
    {69U, 35U, 64U, 2U, 0U}, 
    /* FXIO_FXIO_D4_INOUT inout functionality */
    {69U, 37U, 156U, 7U, 0U}, 
    /* Inout settings for pad PORT72 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPI2C0_LPI2C0_SCL_INOUT inout functionality */
    {72U, 34U, 212U, 1U, 0U}, 
    /* LPSPI0_LPSPI0_SCK_INOUT inout functionality */
    {72U, 39U, 229U, 1U, 0U}, 
    /* FXIO_FXIO_D12_INOUT inout functionality */
    {72U, 40U, 164U, 3U, 0U}, 
    /* ETPU_A_ETPU_A_CH_22_INOUT inout functionality */
    {72U, 41U, 465U, 1U, 0U}, 
    /* FLEXPWM_1_PWM_1_B_2_INOUT inout functionality */
    {72U, 43U, 425U, 1U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_9_Z_INOUT inout functionality */
    {72U, 45U, 57U, 7U, 0U}, 
    /* Inout settings for pad PORT73 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPI2C0_LPI2C0_SDA_INOUT inout functionality */
    {73U, 34U, 214U, 1U, 0U}, 
    /* LPUART1_LPUART1_TX_INOUT inout functionality */
    {73U, 35U, 364U, 2U, 0U}, 
    /* LPSPI0_LPSPI0_SIN_INOUT inout functionality */
    {73U, 39U, 230U, 2U, 0U}, 
    /* FXIO_FXIO_D13_INOUT inout functionality */
    {73U, 40U, 165U, 3U, 0U}, 
    /* ETPU_A_ETPU_A_CH_13_INOUT inout functionality */
    {73U, 42U, 464U, 1U, 0U}, 
    /* FLEXPWM_1_PWM_1_A_3_INOUT inout functionality */
    {73U, 43U, 424U, 1U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_8_Z_INOUT inout functionality */
    {73U, 44U, 56U, 5U, 0U}, 
    /* Inout settings for pad PORT74 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_6_Z_INOUT inout functionality */
    {74U, 34U, 54U, 4U, 0U}, 
    /* LPSPI2_LPSPI2_PCS1_INOUT inout functionality */
    {74U, 37U, 242U, 3U, 0U}, 
    /* LPSPI4_LPSPI4_PCS0_INOUT inout functionality */
    {74U, 38U, 255U, 1U, 0U}, 
    /* LPUART3_LPUART3_TX_INOUT inout functionality */
    {74U, 42U, 366U, 6U, 0U}, 
    /* ETPU_A_ETPU_A_CH_23_INOUT inout functionality */
    {74U, 43U, 461U, 1U, 0U}, 
    /* FLEXPWM_1_PWM_1_X_3_INOUT inout functionality */
    {74U, 44U, 484U, 1U, 0U}, 
    /* FXIO_FXIO_D18_INOUT inout functionality */
    {74U, 45U, 170U, 5U, 0U}, 
    /* Inout settings for pad PORT75 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D15_INOUT inout functionality */
    {75U, 37U, 167U, 3U, 0U}, 
    /* LPSPI4_LPSPI4_SOUT_INOUT inout functionality */
    {75U, 38U, 261U, 1U, 0U}, 
    /* FXIO_FXIO_D19_INOUT inout functionality */
    {75U, 39U, 171U, 3U, 0U}, 
    /* ETPU_B_ETPU_B_CH_19_INOUT inout functionality */
    {75U, 41U, 460U, 1U, 0U}, 
    /* ETPU_B_ETPU_B_CH_6_INOUT inout functionality */
    {75U, 42U, 478U, 1U, 0U}, 
    /* Inout settings for pad PORT76 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_22_Z_INOUT inout functionality */
    {76U, 36U, 70U, 2U, 0U}, 
    /* LPSPI2_LPSPI2_PCS1_INOUT inout functionality */
    {76U, 37U, 242U, 4U, 0U}, 
    /* FXIO_FXIO_D19_INOUT inout functionality */
    {76U, 38U, 171U, 5U, 0U}, 
    /* Inout settings for pad PORT77 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_23_Z_INOUT inout functionality */
    {77U, 36U, 71U, 1U, 0U}, 
    /* FXIO_FXIO_D16_INOUT inout functionality */
    {77U, 38U, 168U, 3U, 0U}, 
    /* LPUART2_LPUART2_TX_INOUT inout functionality */
    {77U, 41U, 365U, 8U, 0U}, 
    /* LPSPI2_LPSPI2_PCS2_INOUT inout functionality */
    {77U, 42U, 243U, 4U, 0U}, 
    /* Inout settings for pad PORT78 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_10_Z_INOUT inout functionality */
    {78U, 35U, 58U, 1U, 0U}, 
    /* LPSPI2_LPSPI2_PCS0_INOUT inout functionality */
    {78U, 36U, 241U, 2U, 0U}, 
    /* FXIO_FXIO_D16_INOUT inout functionality */
    {78U, 40U, 168U, 1U, 0U}, 
    /* Inout settings for pad PORT79 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_11_Z_INOUT inout functionality */
    {79U, 35U, 59U, 1U, 0U}, 
    /* LPSPI2_LPSPI2_SCK_INOUT inout functionality */
    {79U, 36U, 245U, 2U, 0U}, 
    /* LPUART2_LPUART2_TX_INOUT inout functionality */
    {79U, 38U, 365U, 2U, 0U}, 
    /* LPI2C1_LPI2C1_SCL_INOUT inout functionality */
    {79U, 40U, 217U, 6U, 0U}, 
    /* FXIO_FXIO_D18_INOUT inout functionality */
    {79U, 41U, 170U, 6U, 0U}, 
    /* Inout settings for pad PORT80 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI3_LPSPI3_SIN_INOUT inout functionality */
    {80U, 34U, 253U, 3U, 0U}, 
    /* LPI2C1_LPI2C1_SDAS_INOUT inout functionality */
    {80U, 37U, 220U, 1U, 0U}, 
    /* FXIO_FXIO_D15_INOUT inout functionality */
    {80U, 39U, 167U, 1U, 0U}, 
    /* LPI2C1_LPI2C1_SDA_INOUT inout functionality */
    {80U, 40U, 219U, 5U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_9_Z_INOUT inout functionality */
    {80U, 41U, 57U, 6U, 0U}, 
    /* Inout settings for pad PORT81 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI3_LPSPI3_SCK_INOUT inout functionality */
    {81U, 34U, 252U, 3U, 0U}, 
    /* LPI2C1_LPI2C1_SCLS_INOUT inout functionality */
    {81U, 37U, 218U, 2U, 0U}, 
    /* EMAC_EMAC_MII_RMII_RX_DV_RGMII_RXCTL_INOUT inout functionality */
    {81U, 38U, 292U, 1U, 0U}, 
    /* FXIO_FXIO_D14_INOUT inout functionality */
    {81U, 39U, 166U, 1U, 0U}, 
    /* FXIO_FXIO_D2_INOUT inout functionality */
    {81U, 40U, 154U, 10U, 0U}, 
    /* QUADSPI_QUADSPI_IOFA7_INOUT inout functionality */
    {81U, 41U, 422U, 1U, 0U}, 
    /* ETPU_A_ETPU_A_CH_29_INOUT inout functionality */
    {81U, 42U, 503U, 1U, 0U}, 
    /* ETPU_B_ETPU_B_CH_19_INOUT inout functionality */
    {81U, 43U, 460U, 2U, 0U}, 
    /* Inout settings for pad PORT82 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D6_INOUT inout functionality */
    {82U, 35U, 158U, 9U, 0U}, 
    /* FXIO_FXIO_D12_INOUT inout functionality */
    {82U, 36U, 164U, 2U, 0U}, 
    /* LPSPI2_LPSPI2_PCS3_INOUT inout functionality */
    {82U, 42U, 244U, 4U, 0U}, 
    /* Inout settings for pad PORT83 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D13_INOUT inout functionality */
    {83U, 36U, 165U, 2U, 0U}, 
    /* LPSPI2_LPSPI2_PCS1_INOUT inout functionality */
    {83U, 38U, 242U, 2U, 0U}, 
    /* LPUART3_LPUART3_TX_INOUT inout functionality */
    {83U, 43U, 366U, 7U, 0U}, 
    /* Inout settings for pad PORT84 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D14_INOUT inout functionality */
    {84U, 36U, 166U, 2U, 0U}, 
    /* EMAC_EMAC_PPS0_INOUT inout functionality */
    {84U, 40U, 144U, 6U, 0U}, 
    /* ETPU_B_ETPU_B_CH_30_INOUT inout functionality */
    {84U, 42U, 386U, 1U, 0U}, 
    /* ETPU_A_ETPU_A_CH_22_INOUT inout functionality */
    {84U, 43U, 465U, 2U, 0U}, 
    /* Inout settings for pad PORT85 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMAC_EMAC_PPS1_INOUT inout functionality */
    {85U, 34U, 145U, 4U, 0U}, 
    /* FXIO_FXIO_D15_INOUT inout functionality */
    {85U, 36U, 167U, 2U, 0U}, 
    /* ETPU_B_ETPU_B_CH_31_INOUT inout functionality */
    {85U, 42U, 387U, 1U, 0U}, 
    /* ETPU_A_ETPU_A_CH_23_INOUT inout functionality */
    {85U, 43U, 461U, 2U, 0U}, 
    /* Inout settings for pad PORT87 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D16_INOUT inout functionality */
    {87U, 36U, 168U, 2U, 0U}, 
    /* ETPU_A_ETPU_A_CH_15_INOUT inout functionality */
    {87U, 42U, 469U, 1U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_12_Z_INOUT inout functionality */
    {87U, 43U, 60U, 4U, 0U}, 
    /* LPSPI4_LPSPI4_PCS2_INOUT inout functionality */
    {87U, 44U, 257U, 4U, 0U}, 
    /* Inout settings for pad PORT88 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D17_INOUT inout functionality */
    {88U, 36U, 169U, 2U, 0U}, 
    /* ETPU_B_ETPU_B_CH_21_INOUT inout functionality */
    {88U, 42U, 470U, 1U, 0U}, 
    /* ETPU_A_ETPU_A_CH_12_INOUT inout functionality */
    {88U, 43U, 481U, 1U, 0U}, 
    /* LPSPI4_LPSPI4_PCS3_INOUT inout functionality */
    {88U, 44U, 258U, 4U, 0U}, 
    /* Inout settings for pad PORT89 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D18_INOUT inout functionality */
    {89U, 36U, 170U, 2U, 0U}, 
    /* LPSPI4_LPSPI4_PCS1_INOUT inout functionality */
    {89U, 38U, 256U, 4U, 0U}, 
    /* ETPU_B_ETPU_B_CH_20_INOUT inout functionality */
    {89U, 41U, 471U, 1U, 0U}, 
    /* ETPU_B_ETPU_B_CH_8_INOUT inout functionality */
    {89U, 42U, 482U, 1U, 0U}, 
    /* Inout settings for pad PORT90 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D19_INOUT inout functionality */
    {90U, 36U, 171U, 2U, 0U}, 
    /* LPSPI4_LPSPI4_SIN_INOUT inout functionality */
    {90U, 40U, 260U, 1U, 0U}, 
    /* ETPU_B_ETPU_B_CH_18_INOUT inout functionality */
    {90U, 41U, 472U, 1U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_5_Z_INOUT inout functionality */
    {90U, 43U, 53U, 6U, 0U}, 
    /* Inout settings for pad PORT91 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D20_INOUT inout functionality */
    {91U, 36U, 172U, 2U, 0U}, 
    /* LPSPI4_LPSPI4_SCK_INOUT inout functionality */
    {91U, 40U, 259U, 1U, 0U}, 
    /* ETPU_A_ETPU_A_CH_14_INOUT inout functionality */
    {91U, 41U, 473U, 1U, 0U}, 
    /* FLEXPWM_1_PWM_1_X_2_INOUT inout functionality */
    {91U, 43U, 490U, 1U, 0U}, 
    /* Inout settings for pad PORT92 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D21_INOUT inout functionality */
    {92U, 36U, 173U, 2U, 0U}, 
    /* FXIO_FXIO_D2_INOUT inout functionality */
    {92U, 37U, 154U, 7U, 0U}, 
    /* LPI2C1_LPI2C1_SCL_INOUT inout functionality */
    {92U, 38U, 217U, 4U, 0U}, 
    /* ETPU_B_ETPU_B_CH_5_INOUT inout functionality */
    {92U, 41U, 474U, 1U, 0U}, 
    /* FLEXPWM_1_PWM_1_B_3_INOUT inout functionality */
    {92U, 43U, 428U, 1U, 0U}, 
    /* Inout settings for pad PORT93 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D22_INOUT inout functionality */
    {93U, 36U, 174U, 2U, 0U}, 
    /* LPI2C1_LPI2C1_SDA_INOUT inout functionality */
    {93U, 38U, 219U, 3U, 0U}, 
    /* FXIO_FXIO_D3_INOUT inout functionality */
    {93U, 40U, 155U, 6U, 0U}, 
    /* ETPU_A_ETPU_A_CH_21_INOUT inout functionality */
    {93U, 41U, 475U, 1U, 0U}, 
    /* FLEXPWM_1_PWM_1_A_2_INOUT inout functionality */
    {93U, 43U, 429U, 1U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_10_Z_INOUT inout functionality */
    {93U, 44U, 58U, 5U, 0U}, 
    /* Inout settings for pad PORT94 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D0_INOUT inout functionality */
    {94U, 36U, 152U, 4U, 0U}, 
    /* FXIO_FXIO_D23_INOUT inout functionality */
    {94U, 40U, 175U, 2U, 0U}, 
    /* ETPU_A_ETPU_A_CH_19_INOUT inout functionality */
    {94U, 42U, 476U, 1U, 0U}, 
    /* FLEXPWM_1_PWM_1_A_1_INOUT inout functionality */
    {94U, 44U, 430U, 1U, 0U}, 
    /* Inout settings for pad PORT95 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D1_INOUT inout functionality */
    {95U, 36U, 153U, 4U, 0U}, 
    /* FXIO_FXIO_D24_INOUT inout functionality */
    {95U, 40U, 176U, 2U, 0U}, 
    /* ETPU_A_ETPU_A_CH_17_INOUT inout functionality */
    {95U, 41U, 477U, 1U, 0U}, 
    /* FLEXPWM_1_PWM_1_A_0_INOUT inout functionality */
    {95U, 43U, 431U, 1U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_14_Z_INOUT inout functionality */
    {95U, 44U, 62U, 5U, 0U}, 
    /* Inout settings for pad PORT96 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_2_Z_INOUT inout functionality */
    {96U, 35U, 50U, 1U, 0U}, 
    /* LPSPI3_LPSPI3_SOUT_INOUT inout functionality */
    {96U, 36U, 254U, 1U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_16_Z_INOUT inout functionality */
    {96U, 37U, 64U, 1U, 0U}, 
    /* FXIO_FXIO_D0_INOUT inout functionality */
    {96U, 39U, 152U, 1U, 0U}, 
    /* ETPU_B_ETPU_B_CH_17_INOUT inout functionality */
    {96U, 41U, 510U, 1U, 0U}, 
    /* ETPU_A_ETPU_A_CH_7_INOUT inout functionality */
    {96U, 43U, 458U, 3U, 0U}, 
    /* Inout settings for pad PORT97 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_3_Z_INOUT inout functionality */
    {97U, 35U, 51U, 2U, 0U}, 
    /* LPSPI3_LPSPI3_SCK_INOUT inout functionality */
    {97U, 36U, 252U, 1U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_17_Z_INOUT inout functionality */
    {97U, 37U, 65U, 1U, 0U}, 
    /* FXIO_FXIO_D1_INOUT inout functionality */
    {97U, 39U, 153U, 1U, 0U}, 
    /* LPUART1_LPUART1_TX_INOUT inout functionality */
    {97U, 41U, 364U, 9U, 0U}, 
    /* ETPU_B_ETPU_B_CH_12_INOUT inout functionality */
    {97U, 43U, 509U, 1U, 0U}, 
    /* ETPU_A_ETPU_A_CH_2_INOUT inout functionality */
    {97U, 44U, 446U, 4U, 0U}, 
    /* Inout settings for pad PORT98 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI1_LPSPI1_SOUT_INOUT inout functionality */
    {98U, 36U, 240U, 1U, 0U}, 
    /* FXIO_FXIO_D4_INOUT inout functionality */
    {98U, 37U, 156U, 1U, 0U}, 
    /* FXIO_FXIO_D6_INOUT inout functionality */
    {98U, 38U, 158U, 3U, 0U}, 
    /* LPUART3_LPUART3_TX_INOUT inout functionality */
    {98U, 39U, 366U, 2U, 0U}, 
    /* LPSPI5_LPSPI5_SOUT_INOUT inout functionality */
    {98U, 40U, 268U, 2U, 0U}, 
    /* ETPU_A_ETPU_A_CH_10_INOUT inout functionality */
    {98U, 41U, 444U, 1U, 0U}, 
    /* FLEXPWM_0_PWM_0_A_2_INOUT inout functionality */
    {98U, 43U, 410U, 1U, 0U}, 
    /* Inout settings for pad PORT99 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI1_LPSPI1_PCS0_INOUT inout functionality */
    {99U, 36U, 232U, 1U, 0U}, 
    /* FXIO_FXIO_D5_INOUT inout functionality */
    {99U, 37U, 157U, 2U, 0U}, 
    /* FXIO_FXIO_D7_INOUT inout functionality */
    {99U, 38U, 159U, 3U, 0U}, 
    /* ETPU_A_ETPU_A_CH_11_INOUT inout functionality */
    {99U, 41U, 443U, 1U, 0U}, 
    /* FLEXPWM_0_PWM_0_B_2_INOUT inout functionality */
    {99U, 43U, 409U, 1U, 0U}, 
    /* Inout settings for pad PORT100 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI1_LPSPI1_PCS1_INOUT inout functionality */
    {100U, 36U, 233U, 6U, 0U}, 
    /* LPSPI5_LPSPI5_PCS0_INOUT inout functionality */
    {100U, 40U, 262U, 2U, 0U}, 
    /* ETPU_A_ETPU_A_CH_6_INOUT inout functionality */
    {100U, 41U, 442U, 1U, 0U}, 
    /* FLEXPWM_0_PWM_0_A_3_INOUT inout functionality */
    {100U, 42U, 408U, 1U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_23_Z_INOUT inout functionality */
    {100U, 43U, 71U, 5U, 0U}, 
    /* Inout settings for pad PORT101 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_19_Z_INOUT inout functionality */
    {101U, 35U, 67U, 2U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_2_Z_INOUT inout functionality */
    {101U, 36U, 50U, 4U, 0U}, 
    /* FXIO_FXIO_D15_INOUT inout functionality */
    {101U, 39U, 167U, 4U, 0U}, 
    /* LPSPI0_LPSPI0_PCS1_INOUT inout functionality */
    {101U, 40U, 222U, 5U, 0U}, 
    /* ETPU_A_ETPU_A_CH_27_INOUT inout functionality */
    {101U, 41U, 501U, 1U, 0U}, 
    /* ETPU_B_ETPU_B_CH_16_INOUT inout functionality */
    {101U, 42U, 451U, 2U, 0U}, 
    /* Inout settings for pad PORT102 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D3_INOUT inout functionality */
    {102U, 35U, 155U, 9U, 0U}, 
    /* EMAC_EMAC_MII_RMII_TX_CLK_INOUT inout functionality */
    {102U, 37U, 296U, 2U, 0U}, 
    /* FXIO_FXIO_D13_INOUT inout functionality */
    {102U, 39U, 165U, 1U, 0U}, 
    /* LPSPI0_LPSPI0_PCS0_INOUT inout functionality */
    {102U, 40U, 221U, 7U, 0U}, 
    /* ETPU_A_ETPU_A_CH_26_INOUT inout functionality */
    {102U, 41U, 500U, 1U, 0U}, 
    /* ETPU_B_ETPU_B_CH_15_INOUT inout functionality */
    {102U, 42U, 457U, 2U, 0U}, 
    /* Inout settings for pad PORT103 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPUART2_LPUART2_TX_INOUT inout functionality */
    {103U, 35U, 365U, 3U, 0U}, 
    /* LPSPI3_LPSPI3_PCS3_INOUT inout functionality */
    {103U, 36U, 251U, 5U, 0U}, 
    /* LPSPI0_LPSPI0_PCS3_INOUT inout functionality */
    {103U, 37U, 224U, 2U, 0U}, 
    /* QUADSPI_QUADSPI_IOFA1_INOUT inout functionality */
    {103U, 40U, 306U, 1U, 0U}, 
    /* Inout settings for pad PORT104 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI3_LPSPI3_SOUT_INOUT inout functionality */
    {104U, 34U, 254U, 3U, 0U}, 
    /* LPI2C1_LPI2C1_SDA_INOUT inout functionality */
    {104U, 35U, 219U, 1U, 0U}, 
    /* FXIO_FXIO_D1_INOUT inout functionality */
    {104U, 38U, 153U, 5U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_12_Z_INOUT inout functionality */
    {104U, 39U, 60U, 1U, 0U}, 
    /* FXIO_FXIO_D11_INOUT inout functionality */
    {104U, 40U, 163U, 5U, 0U}, 
    /* QUADSPI_QUADSPI_IOFA6_INOUT inout functionality */
    {104U, 41U, 421U, 1U, 0U}, 
    /* ETPU_A_ETPU_A_CH_28_INOUT inout functionality */
    {104U, 42U, 502U, 1U, 0U}, 
    /* ETPU_B_ETPU_B_CH_18_INOUT inout functionality */
    {104U, 43U, 472U, 2U, 0U}, 
    /* Inout settings for pad PORT105 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPI2C1_LPI2C1_SCL_INOUT inout functionality */
    {105U, 35U, 217U, 2U, 0U}, 
    /* FXIO_FXIO_D0_INOUT inout functionality */
    {105U, 36U, 152U, 5U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_13_Z_INOUT inout functionality */
    {105U, 39U, 61U, 2U, 0U}, 
    /* FXIO_FXIO_D10_INOUT inout functionality */
    {105U, 40U, 162U, 4U, 0U}, 
    /* QUADSPI_QUADSPI_IOFA5_INOUT inout functionality */
    {105U, 41U, 420U, 1U, 0U}, 
    /* LPUART2_LPUART2_TX_INOUT inout functionality */
    {105U, 42U, 365U, 9U, 0U}, 
    /* ETPU_B_ETPU_B_CH_27_INOUT inout functionality */
    {105U, 43U, 383U, 1U, 0U}, 
    /* ETPU_A_ETPU_A_CH_19_INOUT inout functionality */
    {105U, 44U, 476U, 2U, 0U}, 
    /* Inout settings for pad PORT106 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_16_Z_INOUT inout functionality */
    {106U, 35U, 64U, 3U, 0U}, 
    /* LPSPI0_LPSPI0_SIN_INOUT inout functionality */
    {106U, 38U, 230U, 4U, 0U}, 
    /* QUADSPI_QUADSPI_SCKFA_INOUT inout functionality */
    {106U, 40U, 309U, 1U, 0U}, 
    /* ETPU_B_ETPU_B_CH_25_INOUT inout functionality */
    {106U, 41U, 381U, 1U, 0U}, 
    /* ETPU_A_ETPU_A_CH_17_INOUT inout functionality */
    {106U, 42U, 477U, 2U, 0U}, 
    /* Inout settings for pad PORT107 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_17_Z_INOUT inout functionality */
    {107U, 35U, 65U, 3U, 0U}, 
    /* EMAC_EMAC_MII_RMII_TX_CLK_INOUT inout functionality */
    {107U, 38U, 296U, 1U, 0U}, 
    /* LPSPI0_LPSPI0_SCK_INOUT inout functionality */
    {107U, 39U, 229U, 5U, 0U}, 
    /* QUADSPI_QUADSPI_IOFA0_INOUT inout functionality */
    {107U, 40U, 305U, 1U, 0U}, 
    /* ETPU_B_ETPU_B_CH_24_INOUT inout functionality */
    {107U, 41U, 380U, 1U, 0U}, 
    /* ETPU_A_ETPU_A_CH_14_INOUT inout functionality */
    {107U, 42U, 473U, 2U, 0U}, 
    /* Inout settings for pad PORT108 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMAC_EMAC_MII_RMII_TX_CLK_INOUT inout functionality */
    {108U, 34U, 296U, 3U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_18_Z_INOUT inout functionality */
    {108U, 35U, 66U, 1U, 0U}, 
    /* LPSPI0_LPSPI0_SOUT_INOUT inout functionality */
    {108U, 39U, 231U, 5U, 0U}, 
    /* QUADSPI_QUADSPI_IOFA2_INOUT inout functionality */
    {108U, 40U, 307U, 1U, 0U}, 
    /* Inout settings for pad PORT109 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI5_LPSPI5_SIN_INOUT inout functionality */
    {109U, 34U, 267U, 1U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_20_Z_INOUT inout functionality */
    {109U, 35U, 68U, 1U, 0U}, 
    /* FXIO_FXIO_D7_INOUT inout functionality */
    {109U, 36U, 159U, 7U, 0U}, 
    /* LPI2C0_LPI2C0_SDA_INOUT inout functionality */
    {109U, 37U, 214U, 2U, 0U}, 
    /* EMAC_EMAC_PPS1_INOUT inout functionality */
    {109U, 38U, 145U, 2U, 0U}, 
    /* Inout settings for pad PORT110 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI5_LPSPI5_SCK_INOUT inout functionality */
    {110U, 34U, 266U, 1U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_21_Z_INOUT inout functionality */
    {110U, 35U, 69U, 1U, 0U}, 
    /* LPUART1_LPUART1_TX_INOUT inout functionality */
    {110U, 36U, 364U, 3U, 0U}, 
    /* LPI2C0_LPI2C0_SCL_INOUT inout functionality */
    {110U, 37U, 212U, 2U, 0U}, 
    /* EMAC_EMAC_PPS0_INOUT inout functionality */
    {110U, 38U, 144U, 2U, 0U}, 
    /* Inout settings for pad PORT111 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D6_INOUT inout functionality */
    {111U, 34U, 158U, 7U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_0_Z_INOUT inout functionality */
    {111U, 35U, 48U, 2U, 0U}, 
    /* LPSPI0_LPSPI0_SCK_INOUT inout functionality */
    {111U, 37U, 229U, 3U, 0U}, 
    /* EMAC_EMAC_PPS2_INOUT inout functionality */
    {111U, 38U, 146U, 2U, 0U}, 
    /* FXIO_FXIO_D10_INOUT inout functionality */
    {111U, 40U, 162U, 1U, 0U}, 
    /* Inout settings for pad PORT112 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_1_Z_INOUT inout functionality */
    {112U, 35U, 49U, 3U, 0U}, 
    /* EMAC_EMAC_MII_RMII_MDIO_INOUT inout functionality */
    {112U, 36U, 291U, 2U, 0U}, 
    /* LPSPI0_LPSPI0_SIN_INOUT inout functionality */
    {112U, 37U, 230U, 3U, 0U}, 
    /* LPUART0_LPUART0_TX_INOUT inout functionality */
    {112U, 41U, 363U, 9U, 0U}, 
    /* Inout settings for pad PORT113 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI5_LPSPI5_PCS0_INOUT inout functionality */
    {113U, 34U, 262U, 1U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_18_Z_INOUT inout functionality */
    {113U, 35U, 66U, 3U, 0U}, 
    /* LPSPI3_LPSPI3_PCS0_INOUT inout functionality */
    {113U, 38U, 248U, 1U, 0U}, 
    /* FXIO_FXIO_D9_INOUT inout functionality */
    {113U, 39U, 161U, 1U, 0U}, 
    /* EMAC_EMAC_PPS2_INOUT inout functionality */
    {113U, 40U, 146U, 1U, 0U}, 
    /* Inout settings for pad PORT114 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D2_INOUT inout functionality */
    {114U, 36U, 154U, 4U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_15_Z_INOUT inout functionality */
    {114U, 41U, 63U, 7U, 0U}, 
    /* ETPU_B_ETPU_B_CH_25_INOUT inout functionality */
    {114U, 42U, 381U, 2U, 0U}, 
    /* ETPU_A_ETPU_A_CH_17_INOUT inout functionality */
    {114U, 43U, 477U, 3U, 0U}, 
    /* Inout settings for pad PORT115 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D3_INOUT inout functionality */
    {115U, 36U, 155U, 4U, 0U}, 
    /* ETPU_B_ETPU_B_CH_27_INOUT inout functionality */
    {115U, 42U, 383U, 2U, 0U}, 
    /* ETPU_A_ETPU_A_CH_19_INOUT inout functionality */
    {115U, 43U, 476U, 3U, 0U}, 
    /* Inout settings for pad PORT116 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D25_INOUT inout functionality */
    {116U, 36U, 177U, 2U, 0U}, 
    /* LPSPI1_LPSPI1_PCS2_INOUT inout functionality */
    {116U, 38U, 234U, 1U, 0U}, 
    /* LPSPI3_LPSPI3_SIN_INOUT inout functionality */
    {116U, 39U, 253U, 2U, 0U}, 
    /* ETPU_B_ETPU_B_CH_15_INOUT inout functionality */
    {116U, 41U, 457U, 1U, 0U}, 
    /* ETPU_B_ETPU_B_CH_3_INOUT inout functionality */
    {116U, 43U, 483U, 1U, 0U}, 
    /* ETPU_A_ETPU_A_CH_11_INOUT inout functionality */
    {116U, 45U, 443U, 2U, 0U}, 
    /* Inout settings for pad PORT117 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D26_INOUT inout functionality */
    {117U, 36U, 178U, 2U, 0U}, 
    /* ETPU_A_ETPU_A_CH_7_INOUT inout functionality */
    {117U, 41U, 458U, 1U, 0U}, 
    /* FLEXPWM_0_PWM_0_X_2_INOUT inout functionality */
    {117U, 44U, 491U, 1U, 0U}, 
    /* Inout settings for pad PORT118 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D27_INOUT inout functionality */
    {118U, 36U, 179U, 2U, 0U}, 
    /* ETPU_B_ETPU_B_CH_0_INOUT inout functionality */
    {118U, 41U, 459U, 1U, 0U}, 
    /* FLEXPWM_0_PWM_0_B_3_INOUT inout functionality */
    {118U, 42U, 414U, 1U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_19_Z_INOUT inout functionality */
    {118U, 44U, 67U, 7U, 0U}, 
    /* Inout settings for pad PORT119 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D28_INOUT inout functionality */
    {119U, 36U, 180U, 2U, 0U}, 
    /* ETPU_A_ETPU_A_CH_4_INOUT inout functionality */
    {119U, 41U, 448U, 1U, 0U}, 
    /* FLEXPWM_0_PWM_0_B_1_INOUT inout functionality */
    {119U, 43U, 415U, 1U, 0U}, 
    /* LPSPI0_LPSPI0_PCS4_INOUT inout functionality */
    {119U, 44U, 225U, 2U, 0U}, 
    /* Inout settings for pad PORT120 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D29_INOUT inout functionality */
    {120U, 36U, 181U, 2U, 0U}, 
    /* ETPU_A_ETPU_A_CH_1_INOUT inout functionality */
    {120U, 41U, 449U, 1U, 0U}, 
    /* FLEXPWM_0_PWM_0_A_0_INOUT inout functionality */
    {120U, 44U, 416U, 1U, 0U}, 
    /* LPSPI0_LPSPI0_PCS5_INOUT inout functionality */
    {120U, 45U, 226U, 2U, 0U}, 
    /* Inout settings for pad PORT121 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_1_Z_INOUT inout functionality */
    {121U, 41U, 49U, 6U, 0U}, 
    /* ETPU_A_ETPU_A_CH_15_INOUT inout functionality */
    {121U, 42U, 469U, 2U, 0U}, 
    /* ETPU_B_ETPU_B_CH_10_INOUT inout functionality */
    {121U, 43U, 508U, 2U, 0U}, 
    /* Inout settings for pad PORT126 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI5_LPSPI5_PCS3_INOUT inout functionality */
    {126U, 39U, 265U, 1U, 0U}, 
    /* ETPU_A_ETPU_A_CH_16_INOUT inout functionality */
    {126U, 42U, 468U, 2U, 0U}, 
    /* Inout settings for pad PORT127 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D6_INOUT inout functionality */
    {127U, 36U, 158U, 4U, 0U}, 
    /* ETPU_A_ETPU_A_CH_8_INOUT inout functionality */
    {127U, 39U, 450U, 2U, 0U}, 
    /* Inout settings for pad PORT128 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI0_LPSPI0_SIN_INOUT inout functionality */
    {128U, 35U, 230U, 1U, 0U}, 
    /* FXIO_FXIO_D3_INOUT inout functionality */
    {128U, 36U, 155U, 7U, 0U}, 
    /* ETPU_A_ETPU_A_CH_1_INOUT inout functionality */
    {128U, 41U, 449U, 3U, 0U}, 
    /* ETPU_B_ETPU_B_CH_4_INOUT inout functionality */
    {128U, 42U, 455U, 3U, 0U}, 
    /* Inout settings for pad PORT129 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI0_LPSPI0_SCK_INOUT inout functionality */
    {129U, 35U, 229U, 2U, 0U}, 
    /* FXIO_FXIO_D2_INOUT inout functionality */
    {129U, 36U, 154U, 8U, 0U}, 
    /* LPUART3_LPUART3_TX_INOUT inout functionality */
    {129U, 41U, 366U, 8U, 0U}, 
    /* ETPU_A_ETPU_A_CH_2_INOUT inout functionality */
    {129U, 43U, 446U, 3U, 0U}, 
    /* ETPU_B_ETPU_B_CH_2_INOUT inout functionality */
    {129U, 44U, 456U, 2U, 0U}, 
    /* Inout settings for pad PORT132 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI0_LPSPI0_PCS0_INOUT inout functionality */
    {132U, 34U, 221U, 5U, 0U}, 
    /* LPSPI1_LPSPI1_PCS1_INOUT inout functionality */
    {132U, 35U, 233U, 5U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_18_Z_INOUT inout functionality */
    {132U, 37U, 66U, 2U, 0U}, 
    /* FXIO_FXIO_D6_INOUT inout functionality */
    {132U, 39U, 158U, 1U, 0U}, 
    /* ETPU_B_ETPU_B_CH_6_INOUT inout functionality */
    {132U, 43U, 478U, 2U, 0U}, 
    /* ETPU_A_ETPU_A_CH_12_INOUT inout functionality */
    {132U, 44U, 481U, 3U, 0U}, 
    /* Inout settings for pad PORT133 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_19_Z_INOUT inout functionality */
    {133U, 37U, 67U, 1U, 0U}, 
    /* FXIO_FXIO_D7_INOUT inout functionality */
    {133U, 39U, 159U, 1U, 0U}, 
    /* LPSPI1_LPSPI1_PCS3_INOUT inout functionality */
    {133U, 43U, 235U, 3U, 0U}, 
    /* ETPU_B_ETPU_B_CH_5_INOUT inout functionality */
    {133U, 44U, 474U, 3U, 0U}, 
    /* ETPU_A_ETPU_A_CH_11_INOUT inout functionality */
    {133U, 45U, 443U, 3U, 0U}, 
    /* Inout settings for pad PORT135 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_7_Z_INOUT inout functionality */
    {135U, 35U, 55U, 2U, 0U}, 
    /* LPSPI3_LPSPI3_SCK_INOUT inout functionality */
    {135U, 39U, 252U, 2U, 0U}, 
    /* FXIO_FXIO_D11_INOUT inout functionality */
    {135U, 40U, 163U, 4U, 0U}, 
    /* ETPU_A_ETPU_A_CH_16_INOUT inout functionality */
    {135U, 41U, 468U, 1U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_11_Z_INOUT inout functionality */
    {135U, 42U, 59U, 4U, 0U}, 
    /* Inout settings for pad PORT136 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI3_LPSPI3_PCS1_INOUT inout functionality */
    {136U, 34U, 249U, 1U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_6_Z_INOUT inout functionality */
    {136U, 35U, 54U, 1U, 0U}, 
    /* LPSPI5_LPSPI5_PCS1_INOUT inout functionality */
    {136U, 36U, 263U, 1U, 0U}, 
    /* FXIO_FXIO_D12_INOUT inout functionality */
    {136U, 37U, 164U, 1U, 0U}, 
    /* FXIO_FXIO_D8_INOUT inout functionality */
    {136U, 40U, 160U, 5U, 0U}, 
    /* Inout settings for pad PORT137 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI5_LPSPI5_SOUT_INOUT inout functionality */
    {137U, 34U, 268U, 1U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_7_Z_INOUT inout functionality */
    {137U, 35U, 55U, 1U, 0U}, 
    /* EMAC_EMAC_PPS3_INOUT inout functionality */
    {137U, 38U, 147U, 1U, 0U}, 
    /* FXIO_FXIO_D11_INOUT inout functionality */
    {137U, 40U, 163U, 1U, 0U}, 
    /* Inout settings for pad PORT138 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI3_LPSPI3_SIN_INOUT inout functionality */
    {138U, 35U, 253U, 1U, 0U}, 
    /* LPSPI2_LPSPI2_PCS1_INOUT inout functionality */
    {138U, 36U, 242U, 1U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_20_Z_INOUT inout functionality */
    {138U, 37U, 68U, 2U, 0U}, 
    /* FXIO_FXIO_D4_INOUT inout functionality */
    {138U, 39U, 156U, 2U, 0U}, 
    /* ETPU_B_ETPU_B_CH_23_INOUT inout functionality */
    {138U, 42U, 379U, 1U, 0U}, 
    /* ETPU_A_ETPU_A_CH_10_INOUT inout functionality */
    {138U, 43U, 444U, 3U, 0U}, 
    /* Inout settings for pad PORT139 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI2_LPSPI2_PCS0_INOUT inout functionality */
    {139U, 35U, 241U, 3U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_1_Z_INOUT inout functionality */
    {139U, 36U, 49U, 4U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_21_Z_INOUT inout functionality */
    {139U, 37U, 69U, 2U, 0U}, 
    /* FXIO_FXIO_D5_INOUT inout functionality */
    {139U, 39U, 157U, 1U, 0U}, 
    /* LPUART0_LPUART0_TX_INOUT inout functionality */
    {139U, 41U, 363U, 10U, 0U}, 
    /* LPSPI1_LPSPI1_PCS4_INOUT inout functionality */
    {139U, 43U, 236U, 2U, 0U}, 
    /* ETPU_B_ETPU_B_CH_22_INOUT inout functionality */
    {139U, 44U, 407U, 1U, 0U}, 
    /* ETPU_A_ETPU_A_CH_9_INOUT inout functionality */
    {139U, 45U, 454U, 2U, 0U}, 
    /* Inout settings for pad PORT140 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPUART2_LPUART2_TX_INOUT inout functionality */
    {140U, 36U, 365U, 4U, 0U}, 
    /* EMAC_EMAC_PPS3_INOUT inout functionality */
    {140U, 38U, 147U, 3U, 0U}, 
    /* FXIO_FXIO_D8_INOUT inout functionality */
    {140U, 39U, 160U, 1U, 0U}, 
    /* FXIO_FXIO_D7_INOUT inout functionality */
    {140U, 40U, 159U, 9U, 0U}, 
    /* Inout settings for pad PORT142 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_19_Z_INOUT inout functionality */
    {142U, 34U, 67U, 3U, 0U}, 
    /* FXIO_FXIO_D7_INOUT inout functionality */
    {142U, 39U, 159U, 5U, 0U}, 
    /* EMAC_EMAC_PPS1_INOUT inout functionality */
    {142U, 40U, 145U, 1U, 0U}, 
    /* LPUART1_LPUART1_TX_INOUT inout functionality */
    {142U, 41U, 364U, 10U, 0U}, 
    /* Inout settings for pad PORT143 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI2_LPSPI2_SCK_INOUT inout functionality */
    {143U, 36U, 245U, 1U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_22_Z_INOUT inout functionality */
    {143U, 37U, 70U, 1U, 0U}, 
    /* FXIO_FXIO_D2_INOUT inout functionality */
    {143U, 39U, 154U, 1U, 0U}, 
    /* ETPU_B_ETPU_B_CH_10_INOUT inout functionality */
    {143U, 41U, 508U, 1U, 0U}, 
    /* ETPU_A_ETPU_A_CH_0_INOUT inout functionality */
    {143U, 42U, 447U, 4U, 0U}, 
    /* Inout settings for pad PORT144 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPUART3_LPUART3_TX_INOUT inout functionality */
    {144U, 35U, 366U, 3U, 0U}, 
    /* LPSPI2_LPSPI2_SIN_INOUT inout functionality */
    {144U, 36U, 246U, 1U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_23_Z_INOUT inout functionality */
    {144U, 37U, 71U, 2U, 0U}, 
    /* FXIO_FXIO_D3_INOUT inout functionality */
    {144U, 39U, 155U, 2U, 0U}, 
    /* ETPU_B_ETPU_B_CH_8_INOUT inout functionality */
    {144U, 42U, 482U, 2U, 0U}, 
    /* ETPU_A_ETPU_A_CH_6_INOUT inout functionality */
    {144U, 43U, 442U, 2U, 0U}, 
    /* Inout settings for pad PORT147 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_22_Z_INOUT inout functionality */
    {147U, 35U, 70U, 3U, 0U}, 
    /* ETPU_A_ETPU_A_CH_9_INOUT inout functionality */
    {147U, 41U, 454U, 3U, 0U}, 
    /* Inout settings for pad PORT148 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_2_Z_INOUT inout functionality */
    {148U, 41U, 50U, 6U, 0U}, 
    /* ETPU_B_ETPU_B_CH_3_INOUT inout functionality */
    {148U, 42U, 483U, 3U, 0U}, 
    /* Inout settings for pad PORT149 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI4_LPSPI4_SIN_INOUT inout functionality */
    {149U, 39U, 260U, 3U, 0U}, 
    /* ETPU_B_ETPU_B_CH_6_INOUT inout functionality */
    {149U, 42U, 478U, 3U, 0U}, 
    /* Inout settings for pad PORT151 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI4_LPSPI4_PCS0_INOUT inout functionality */
    {151U, 39U, 255U, 4U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_4_Z_INOUT inout functionality */
    {151U, 41U, 52U, 7U, 0U}, 
    /* Inout settings for pad PORT154 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI1_LPSPI1_PCS5_INOUT inout functionality */
    {154U, 41U, 237U, 2U, 0U}, 
    /* LPSPI2_LPSPI2_PCS3_INOUT inout functionality */
    {154U, 42U, 244U, 3U, 0U}, 
    /* ETPU_A_ETPU_A_CH_0_INOUT inout functionality */
    {154U, 43U, 447U, 3U, 0U}, 
    /* ETPU_B_ETPU_B_CH_3_INOUT inout functionality */
    {154U, 44U, 483U, 2U, 0U}, 
    /* Inout settings for pad PORT155 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* ETPU_B_ETPU_B_CH_28_INOUT inout functionality */
    {155U, 41U, 384U, 1U, 0U}, 
    /* ETPU_A_ETPU_A_CH_20_INOUT inout functionality */
    {155U, 42U, 466U, 2U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_4_Z_INOUT inout functionality */
    {155U, 43U, 52U, 4U, 0U}, 
    /* Inout settings for pad PORT156 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* ETPU_B_ETPU_B_CH_29_INOUT inout functionality */
    {156U, 41U, 385U, 1U, 0U}, 
    /* ETPU_A_ETPU_A_CH_21_INOUT inout functionality */
    {156U, 42U, 475U, 2U, 0U}, 
    /* LPI2C0_LPI2C0_SDAS_INOUT inout functionality */
    {156U, 44U, 215U, 2U, 0U}, 
    /* Inout settings for pad PORT157 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_5_Z_INOUT inout functionality */
    {157U, 41U, 53U, 4U, 0U}, 
    /* ETPU_B_ETPU_B_CH_7_INOUT inout functionality */
    {157U, 42U, 463U, 3U, 0U}, 
    /* Inout settings for pad PORT158 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* ETPU_B_ETPU_B_CH_10_INOUT inout functionality */
    {158U, 42U, 508U, 3U, 0U}, 
    /* Inout settings for pad PORT159 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_6_Z_INOUT inout functionality */
    {159U, 41U, 54U, 5U, 0U}, 
    /* ETPU_A_ETPU_A_CH_31_INOUT inout functionality */
    {159U, 42U, 507U, 3U, 0U}, 
    /* ETPU_B_ETPU_B_CH_11_INOUT inout functionality */
    {159U, 43U, 511U, 2U, 0U}, 
    /* Inout settings for pad PORT160 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI2_LPSPI2_SCK_INOUT inout functionality */
    {160U, 36U, 245U, 4U, 0U}, 
    /* LPUART1_LPUART1_TX_INOUT inout functionality */
    {160U, 41U, 364U, 11U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_7_Z_INOUT inout functionality */
    {160U, 42U, 55U, 5U, 0U}, 
    /* ETPU_A_ETPU_A_CH_30_INOUT inout functionality */
    {160U, 43U, 506U, 3U, 0U}, 
    /* ETPU_B_ETPU_B_CH_12_INOUT inout functionality */
    {160U, 44U, 509U, 2U, 0U}, 
    /* Inout settings for pad PORT161 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI2_LPSPI2_SIN_INOUT inout functionality */
    {161U, 36U, 246U, 4U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_16_Z_INOUT inout functionality */
    {161U, 41U, 64U, 4U, 0U}, 
    /* ETPU_A_ETPU_A_CH_29_INOUT inout functionality */
    {161U, 42U, 503U, 3U, 0U}, 
    /* ETPU_B_ETPU_B_CH_17_INOUT inout functionality */
    {161U, 43U, 510U, 2U, 0U}, 
    /* Inout settings for pad PORT162 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI2_LPSPI2_SOUT_INOUT inout functionality */
    {162U, 36U, 247U, 4U, 0U}, 
    /* LPUART2_LPUART2_TX_INOUT inout functionality */
    {162U, 41U, 365U, 11U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_23_Z_INOUT inout functionality */
    {162U, 42U, 71U, 7U, 0U}, 
    /* ETPU_B_ETPU_B_CH_11_INOUT inout functionality */
    {162U, 43U, 511U, 3U, 0U}, 
    /* Inout settings for pad PORT163 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI2_LPSPI2_PCS0_INOUT inout functionality */
    {163U, 36U, 241U, 6U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_0_Z_INOUT inout functionality */
    {163U, 41U, 48U, 5U, 0U}, 
    /* ETPU_A_ETPU_A_CH_28_INOUT inout functionality */
    {163U, 42U, 502U, 3U, 0U}, 
    /* Inout settings for pad PORT164 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D0_INOUT inout functionality */
    {164U, 37U, 152U, 7U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_1_Z_INOUT inout functionality */
    {164U, 41U, 49U, 7U, 0U}, 
    /* ETPU_B_ETPU_B_CH_12_INOUT inout functionality */
    {164U, 42U, 509U, 3U, 0U}, 
    /* Inout settings for pad PORT165 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_2_Z_INOUT inout functionality */
    {165U, 41U, 50U, 7U, 0U}, 
    /* ETPU_A_ETPU_A_CH_27_INOUT inout functionality */
    {165U, 42U, 501U, 3U, 0U}, 
    /* Inout settings for pad PORT166 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPI2C1_LPI2C1_SDA_INOUT inout functionality */
    {166U, 41U, 219U, 6U, 0U}, 
    /* Inout settings for pad PORT167 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPI2C1_LPI2C1_SCL_INOUT inout functionality */
    {167U, 36U, 217U, 5U, 0U}, 
    /* FXIO_FXIO_D1_INOUT inout functionality */
    {167U, 37U, 153U, 8U, 0U}, 
    /* ETPU_B_ETPU_B_CH_17_INOUT inout functionality */
    {167U, 42U, 510U, 3U, 0U}, 
    /* Inout settings for pad PORT168 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPI2C1_LPI2C1_SDA_INOUT inout functionality */
    {168U, 36U, 219U, 4U, 0U}, 
    /* FXIO_FXIO_D2_INOUT inout functionality */
    {168U, 37U, 154U, 9U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_4_Z_INOUT inout functionality */
    {168U, 42U, 52U, 5U, 0U}, 
    /* ETPU_B_ETPU_B_CH_22_INOUT inout functionality */
    {168U, 43U, 407U, 3U, 0U}, 
    /* Inout settings for pad PORT169 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_5_Z_INOUT inout functionality */
    {169U, 41U, 53U, 5U, 0U}, 
    /* ETPU_B_ETPU_B_CH_23_INOUT inout functionality */
    {169U, 42U, 379U, 3U, 0U}, 
    /* Inout settings for pad PORT170 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_18_Z_INOUT inout functionality */
    {170U, 41U, 66U, 4U, 0U}, 
    /* ETPU_B_ETPU_B_CH_24_INOUT inout functionality */
    {170U, 42U, 380U, 3U, 0U}, 
    /* Inout settings for pad PORT171 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_19_Z_INOUT inout functionality */
    {171U, 41U, 67U, 9U, 0U}, 
    /* ETPU_B_ETPU_B_CH_25_INOUT inout functionality */
    {171U, 42U, 381U, 3U, 0U}, 
    /* Inout settings for pad PORT172 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI3_LPSPI3_SIN_INOUT inout functionality */
    {172U, 37U, 253U, 4U, 0U}, 
    /* LPUART2_LPUART2_TX_INOUT inout functionality */
    {172U, 41U, 365U, 12U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_20_Z_INOUT inout functionality */
    {172U, 43U, 68U, 3U, 0U}, 
    /* ETPU_B_ETPU_B_CH_26_INOUT inout functionality */
    {172U, 44U, 382U, 3U, 0U}, 
    /* Inout settings for pad PORT173 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI3_LPSPI3_SCK_INOUT inout functionality */
    {173U, 37U, 252U, 4U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_21_Z_INOUT inout functionality */
    {173U, 42U, 69U, 3U, 0U}, 
    /* ETPU_B_ETPU_B_CH_27_INOUT inout functionality */
    {173U, 43U, 383U, 3U, 0U}, 
    /* Inout settings for pad PORT174 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D3_INOUT inout functionality */
    {174U, 38U, 155U, 8U, 0U}, 
    /* ETPU_A_ETPU_A_CH_28_INOUT inout functionality */
    {174U, 42U, 502U, 2U, 0U}, 
    /* ETPU_B_ETPU_B_CH_18_INOUT inout functionality */
    {174U, 43U, 472U, 3U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_17_Z_INOUT inout functionality */
    {174U, 45U, 65U, 7U, 0U}, 
    /* Inout settings for pad PORT175 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI3_LPSPI3_SOUT_INOUT inout functionality */
    {175U, 37U, 254U, 4U, 0U}, 
    /* ETPU_A_ETPU_A_CH_30_INOUT inout functionality */
    {175U, 41U, 506U, 2U, 0U}, 
    /* ETPU_B_ETPU_B_CH_1_INOUT inout functionality */
    {175U, 42U, 480U, 4U, 0U}, 
    /* ETPU_B_ETPU_B_CH_20_INOUT inout functionality */
    {175U, 43U, 471U, 3U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_22_Z_INOUT inout functionality */
    {175U, 45U, 70U, 4U, 0U}, 
    /* Inout settings for pad PORT176 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI3_LPSPI3_PCS0_INOUT inout functionality */
    {176U, 38U, 248U, 4U, 0U}, 
    /* ETPU_A_ETPU_A_CH_31_INOUT inout functionality */
    {176U, 41U, 507U, 2U, 0U}, 
    /* ETPU_B_ETPU_B_CH_2_INOUT inout functionality */
    {176U, 42U, 456U, 3U, 0U}, 
    /* ETPU_B_ETPU_B_CH_21_INOUT inout functionality */
    {176U, 43U, 470U, 3U, 0U}, 
    /* Inout settings for pad PORT177 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* ETPU_B_ETPU_B_CH_22_INOUT inout functionality */
    {177U, 42U, 407U, 2U, 0U}, 
    /* Inout settings for pad PORT178 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI3_LPSPI3_PCS1_INOUT inout functionality */
    {178U, 38U, 249U, 2U, 0U}, 
    /* LPUART3_LPUART3_TX_INOUT inout functionality */
    {178U, 41U, 366U, 9U, 0U}, 
    /* ETPU_B_ETPU_B_CH_26_INOUT inout functionality */
    {178U, 42U, 382U, 2U, 0U}, 
    /* ETPU_A_ETPU_A_CH_18_INOUT inout functionality */
    {178U, 43U, 467U, 3U, 0U}, 
    /* Inout settings for pad PORT179 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI3_LPSPI3_PCS2_INOUT inout functionality */
    {179U, 38U, 250U, 2U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_5_Z_INOUT inout functionality */
    {179U, 41U, 53U, 7U, 0U}, 
    /* ETPU_B_ETPU_B_CH_23_INOUT inout functionality */
    {179U, 42U, 379U, 2U, 0U}, 
    /* Inout settings for pad PORT180 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPI2C0_LPI2C0_SCL_INOUT inout functionality */
    {180U, 37U, 212U, 3U, 0U}, 
    /* LPSPI3_LPSPI3_PCS3_INOUT inout functionality */
    {180U, 38U, 251U, 2U, 0U}, 
    /* FXIO_FXIO_D4_INOUT inout functionality */
    {180U, 40U, 156U, 8U, 0U}, 
    /* LPUART0_LPUART0_TX_INOUT inout functionality */
    {180U, 41U, 363U, 11U, 0U}, 
    /* ETPU_A_ETPU_A_CH_29_INOUT inout functionality */
    {180U, 42U, 503U, 2U, 0U}, 
    /* ETPU_B_ETPU_B_CH_0_INOUT inout functionality */
    {180U, 43U, 459U, 3U, 0U}, 
    /* ETPU_B_ETPU_B_CH_19_INOUT inout functionality */
    {180U, 44U, 460U, 3U, 0U}, 
    /* Inout settings for pad PORT181 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPI2C0_LPI2C0_SDA_INOUT inout functionality */
    {181U, 37U, 214U, 3U, 0U}, 
    /* LPSPI1_LPSPI1_PCS0_INOUT inout functionality */
    {181U, 38U, 232U, 4U, 0U}, 
    /* FXIO_FXIO_D5_INOUT inout functionality */
    {181U, 40U, 157U, 11U, 0U}, 
    /* ETPU_B_ETPU_B_CH_24_INOUT inout functionality */
    {181U, 41U, 380U, 2U, 0U}, 
    /* ETPU_A_ETPU_A_CH_14_INOUT inout functionality */
    {181U, 42U, 473U, 3U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_14_Z_INOUT inout functionality */
    {181U, 44U, 62U, 7U, 0U}, 
    /* Inout settings for pad PORT183 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI3_LPSPI3_PCS3_INOUT inout functionality */
    {183U, 38U, 251U, 3U, 0U}, 
    /* LPUART1_LPUART1_TX_INOUT inout functionality */
    {183U, 41U, 364U, 12U, 0U}, 
    /* ETPU_B_ETPU_B_CH_7_INOUT inout functionality */
    {183U, 43U, 463U, 2U, 0U}, 
    /* ETPU_A_ETPU_A_CH_13_INOUT inout functionality */
    {183U, 44U, 464U, 2U, 0U}, 
    /* Inout settings for pad PORT184 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_8_Z_INOUT inout functionality */
    {184U, 41U, 56U, 6U, 0U}, 
    /* Inout settings for pad PORT185 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI2_LPSPI2_PCS2_INOUT inout functionality */
    {185U, 38U, 243U, 3U, 0U}, 
    /* LPSPI4_LPSPI4_PCS0_INOUT inout functionality */
    {185U, 39U, 255U, 3U, 0U}, 
    /* FXIO_FXIO_D6_INOUT inout functionality */
    {185U, 40U, 158U, 10U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_9_Z_INOUT inout functionality */
    {185U, 42U, 57U, 8U, 0U}, 
    /* ETPU_B_ETPU_B_CH_0_INOUT inout functionality */
    {185U, 44U, 459U, 4U, 0U}, 
    /* Inout settings for pad PORT186 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI2_LPSPI2_PCS3_INOUT inout functionality */
    {186U, 38U, 244U, 2U, 0U}, 
    /* LPSPI4_LPSPI4_PCS1_INOUT inout functionality */
    {186U, 39U, 256U, 2U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_10_Z_INOUT inout functionality */
    {186U, 41U, 58U, 6U, 0U}, 
    /* ETPU_B_ETPU_B_CH_2_INOUT inout functionality */
    {186U, 42U, 456U, 4U, 0U}, 
    /* Inout settings for pad PORT187 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI4_LPSPI4_PCS2_INOUT inout functionality */
    {187U, 39U, 257U, 3U, 0U}, 
    /* LPUART3_LPUART3_TX_INOUT inout functionality */
    {187U, 42U, 366U, 10U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_11_Z_INOUT inout functionality */
    {187U, 44U, 59U, 7U, 0U}, 
    /* ETPU_B_ETPU_B_CH_30_INOUT inout functionality */
    {187U, 45U, 386U, 3U, 0U}, 
    /* Inout settings for pad PORT188 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D7_INOUT inout functionality */
    {188U, 37U, 159U, 8U, 0U}, 
    /* LPSPI0_LPSPI0_PCS0_INOUT inout functionality */
    {188U, 38U, 221U, 4U, 0U}, 
    /* LPSPI4_LPSPI4_PCS3_INOUT inout functionality */
    {188U, 39U, 258U, 2U, 0U}, 
    /* Inout settings for pad PORT189 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI3_LPSPI3_PCS1_INOUT inout functionality */
    {189U, 38U, 249U, 3U, 0U}, 
    /* FXIO_FXIO_D8_INOUT inout functionality */
    {189U, 40U, 160U, 6U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_13_Z_INOUT inout functionality */
    {189U, 41U, 61U, 6U, 0U}, 
    /* LPI2C1_LPI2C1_SCL_INOUT inout functionality */
    {189U, 43U, 217U, 7U, 0U}, 
    /* ETPU_B_ETPU_B_CH_29_INOUT inout functionality */
    {189U, 44U, 385U, 2U, 0U}, 
    /* ETPU_A_ETPU_A_CH_0_INOUT inout functionality */
    {189U, 45U, 447U, 5U, 0U}, 
    /* Inout settings for pad PORT190 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_14_Z_INOUT inout functionality */
    {190U, 41U, 62U, 6U, 0U}, 
    /* ETPU_B_ETPU_B_CH_31_INOUT inout functionality */
    {190U, 42U, 387U, 3U, 0U}, 
    /* Inout settings for pad PORT191 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D9_INOUT inout functionality */
    {191U, 39U, 161U, 5U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_15_Z_INOUT inout functionality */
    {191U, 41U, 63U, 8U, 0U}, 
    /* Inout settings for pad PORT192 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_6_Z_INOUT inout functionality */
    {192U, 41U, 54U, 6U, 0U}, 
    /* ETPU_A_ETPU_A_CH_8_INOUT inout functionality */
    {192U, 42U, 450U, 3U, 0U}, 
    /* Inout settings for pad PORT193 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_17_Z_INOUT inout functionality */
    {193U, 41U, 65U, 6U, 0U}, 
    /* ETPU_A_ETPU_A_CH_13_INOUT inout functionality */
    {193U, 42U, 464U, 3U, 0U}, 
    /* Inout settings for pad PORT194 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* ETPU_B_ETPU_B_CH_30_INOUT inout functionality */
    {194U, 41U, 386U, 2U, 0U}, 
    /* ETPU_A_ETPU_A_CH_1_INOUT inout functionality */
    {194U, 42U, 449U, 5U, 0U}, 
    /* ETPU_A_ETPU_A_CH_22_INOUT inout functionality */
    {194U, 43U, 465U, 3U, 0U}, 
    /* Inout settings for pad PORT195 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_19_Z_INOUT inout functionality */
    {195U, 41U, 67U, 8U, 0U}, 
    /* ETPU_B_ETPU_B_CH_31_INOUT inout functionality */
    {195U, 43U, 387U, 2U, 0U}, 
    /* ETPU_A_ETPU_A_CH_2_INOUT inout functionality */
    {195U, 44U, 446U, 5U, 0U}, 
    /* ETPU_A_ETPU_A_CH_23_INOUT inout functionality */
    {195U, 45U, 461U, 3U, 0U}, 
    /* Inout settings for pad PORT196 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* ETPU_A_ETPU_A_CH_26_INOUT inout functionality */
    {196U, 41U, 500U, 2U, 0U}, 
    /* ETPU_B_ETPU_B_CH_15_INOUT inout functionality */
    {196U, 42U, 457U, 3U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_20_Z_INOUT inout functionality */
    {196U, 44U, 68U, 4U, 0U}, 
    /* Inout settings for pad PORT197 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* ETPU_A_ETPU_A_CH_27_INOUT inout functionality */
    {197U, 41U, 501U, 2U, 0U}, 
    /* ETPU_B_ETPU_B_CH_16_INOUT inout functionality */
    {197U, 42U, 451U, 3U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_21_Z_INOUT inout functionality */
    {197U, 44U, 69U, 4U, 0U}, 
    /* Inout settings for pad PORT198 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D10_INOUT inout functionality */
    {198U, 35U, 162U, 5U, 0U}, 
    /* Inout settings for pad PORT199 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D11_INOUT inout functionality */
    {199U, 35U, 163U, 7U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_23_Z_INOUT inout functionality */
    {199U, 41U, 71U, 6U, 0U}, 
    /* Inout settings for pad PORT200 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D12_INOUT inout functionality */
    {200U, 35U, 164U, 5U, 0U}, 
    /* LPI2C0_LPI2C0_SCL_INOUT inout functionality */
    {200U, 42U, 212U, 4U, 0U}, 
    /* ETPU_A_ETPU_A_CH_25_INOUT inout functionality */
    {200U, 43U, 505U, 2U, 0U}, 
    /* ETPU_B_ETPU_B_CH_14_INOUT inout functionality */
    {200U, 44U, 452U, 3U, 0U}, 
    /* Inout settings for pad PORT201 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_23_Z_INOUT inout functionality */
    {201U, 41U, 71U, 8U, 0U}, 
    /* ETPU_A_ETPU_A_CH_24_INOUT inout functionality */
    {201U, 42U, 504U, 3U, 0U}, 
    /* Inout settings for pad PORT202 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_7_Z_INOUT inout functionality */
    {202U, 41U, 55U, 6U, 0U}, 
    /* ETPU_A_ETPU_A_CH_15_INOUT inout functionality */
    {202U, 42U, 469U, 3U, 0U}, 
    /* Inout settings for pad PORT203 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* EMIOS_0_EMIOS_0_CH_16_Z_INOUT inout functionality */
    {203U, 41U, 64U, 5U, 0U}, 
    /* ETPU_A_ETPU_A_CH_16_INOUT inout functionality */
    {203U, 42U, 468U, 3U, 0U}, 
    /* Inout settings for pad PORT204 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* LPSPI4_LPSPI4_PCS3_INOUT inout functionality */
    {204U, 39U, 258U, 3U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH_18_Z_INOUT inout functionality */
    {204U, 41U, 66U, 5U, 0U}, 
    /* ETPU_A_ETPU_A_CH_26_INOUT inout functionality */
    {204U, 42U, 500U, 3U, 0U}, 
    /* Inout settings for pad PORT205 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D13_INOUT inout functionality */
    {205U, 35U, 165U, 5U, 0U}, 
    /* LPI2C0_LPI2C0_SDA_INOUT inout functionality */
    {205U, 42U, 214U, 4U, 0U}, 
    /* ETPU_B_ETPU_B_CH_28_INOUT inout functionality */
    {205U, 43U, 384U, 2U, 0U}, 
    /* ETPU_A_ETPU_A_CH_20_INOUT inout functionality */
    {205U, 44U, 466U, 3U, 0U}, 
    /* Inout settings for pad PORT206 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* ETPU_A_ETPU_A_CH_25_INOUT inout functionality */
    {206U, 41U, 505U, 3U, 0U}, 
    /* Inout settings for pad PORT207 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D14_INOUT inout functionality */
    {207U, 35U, 166U, 5U, 0U}, 
    /* Inout settings for pad PORT208 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D15_INOUT inout functionality */
    {208U, 36U, 167U, 6U, 0U}, 
    /* Inout settings for pad PORT209 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D16_INOUT inout functionality */
    {209U, 36U, 168U, 4U, 0U}, 
    /* Inout settings for pad PORT210 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D17_INOUT inout functionality */
    {210U, 36U, 169U, 3U, 0U}, 
    /* Inout settings for pad PORT211 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D18_INOUT inout functionality */
    {211U, 36U, 170U, 3U, 0U}, 
    /* Inout settings for pad PORT212 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D19_INOUT inout functionality */
    {212U, 36U, 171U, 6U, 0U}, 
    /* Inout settings for pad PORT213 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D20_INOUT inout functionality */
    {213U, 36U, 172U, 3U, 0U}, 
    /* Inout settings for pad PORT214 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D21_INOUT inout functionality */
    {214U, 36U, 173U, 3U, 0U}, 
    /* Inout settings for pad PORT215 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D22_INOUT inout functionality */
    {215U, 36U, 174U, 3U, 0U}, 
    /* Inout settings for pad PORT216 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D23_INOUT inout functionality */
    {216U, 36U, 175U, 3U, 0U}, 
    /* Inout settings for pad PORT217 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D24_INOUT inout functionality */
    {217U, 36U, 176U, 3U, 0U}, 
    /* Inout settings for pad PORT218 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D25_INOUT inout functionality */
    {218U, 36U, 177U, 3U, 0U}, 
    /* Inout settings for pad PORT219 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D26_INOUT inout functionality */
    {219U, 36U, 178U, 3U, 0U}, 
    /* Inout settings for pad PORT231 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D23_INOUT inout functionality */
    {231U, 36U, 175U, 4U, 0U}, 
    /* Inout settings for pad PORT232 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D24_INOUT inout functionality */
    {232U, 36U, 176U, 4U, 0U}, 
    /* LPUART2_LPUART2_TX_INOUT inout functionality */
    {232U, 41U, 365U, 13U, 0U}, 
    /* Inout settings for pad PORT233 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D25_INOUT inout functionality */
    {233U, 36U, 177U, 4U, 0U}, 
    /* Inout settings for pad PORT234 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D26_INOUT inout functionality */
    {234U, 36U, 178U, 4U, 0U}, 
    /* LPUART3_LPUART3_TX_INOUT inout functionality */
    {234U, 41U, 366U, 11U, 0U}, 
    /* Inout settings for pad PORT235 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D27_INOUT inout functionality */
    {235U, 36U, 179U, 3U, 0U}, 
    /* Inout settings for pad PORT236 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FXIO_FXIO_D28_INOUT inout functionality */
    {236U, 36U, 180U, 3U, 0U}
};

#define PORT_STOP_SEC_CONST_UNSPECIFIED
#include "Port_MemMap.h"

#endif /* (STD_ON == PORT_SET_PIN_MODE_API) && (STD_OFF == PORT_CODE_SIZE_OPTIMIZATION) */
#endif /* PORT_CODE_SIZE_OPTIMIZATION */

/*=================================================================================================
*                                      LOCAL VARIABLES
=================================================================================================*/


/*=================================================================================================
*                                      GLOBAL CONSTANTS
=================================================================================================*/
#ifdef PORT_CODE_SIZE_OPTIMIZATION
#if (STD_ON == PORT_SET_PIN_MODE_API) && (STD_OFF == PORT_CODE_SIZE_OPTIMIZATION)

#define PORT_START_SEC_CONST_16
#include "Port_MemMap.h"

/**
* @brief Array of values storing the length of tables with INOUT functionality information on each of the SIUL2 instance on the platform
*/
const uint16 Port_au16NumInoutMuxSettings[PORT_NUM_SIUL2_INSTANCES_U8] =
{
    PORT_SIUL2_0_INOUT_TABLE_NUM_ENTRIES_U16
};

#define PORT_STOP_SEC_CONST_16
#include "Port_MemMap.h"

#define PORT_START_SEC_CONST_UNSPECIFIED
#include "Port_MemMap.h"

/**
* @brief Array of pointers to the tables storing information about pin availability on each of the SIUL2 instance on the platform
*/
const Port_PinModeAvailabilityArrayType * const Port_apSiul2InstancePinModeAvailability[PORT_NUM_SIUL2_INSTANCES_U8] =
{
    &Port_SIUL2_0_au16PinModeAvailability
};

/**
* @brief Array of pointers to the tables storing information about IN functionality on each of the SIUL2 instance on the platform
*/
const Port_InMuxSettingType * const Port_apInMuxSettings[PORT_NUM_SIUL2_INSTANCES_U8] =
{
    Port_SIUL2_0_aInMuxSettings
};

#define PORT_STOP_SEC_CONST_UNSPECIFIED
#include "Port_MemMap.h"

#define PORT_START_SEC_CONST_16
#include "Port_MemMap.h"

/**
* @brief Array of pointers to the tables storing information about indexes in the IN functionality tables on each of the SIUL2 instance on the platform
*/
const uint16 *const Port_apInMuxSettingsIndex[PORT_NUM_SIUL2_INSTANCES_U8] =
{
    Port_SIUL2_0_au16InMuxSettingsIndex
};

#define PORT_STOP_SEC_CONST_16
#include "Port_MemMap.h"

#define PORT_START_SEC_CONST_UNSPECIFIED
#include "Port_MemMap.h"

/**
* @brief Array of pointers to the tables storing information about INOUT functionality on each of the SIUL2 instance on the platform
*/
const Port_InoutSettingType * const Port_apInoutMuxSettings[PORT_NUM_SIUL2_INSTANCES_U8] =
{
    Port_SIUL2_0_aInoutMuxSettings
};

#define PORT_STOP_SEC_CONST_UNSPECIFIED
#include "Port_MemMap.h"

#endif /* (STD_ON == PORT_SET_PIN_MODE_API) && (STD_OFF == PORT_CODE_SIZE_OPTIMIZATION) */
#endif /* PORT_CODE_SIZE_OPTIMIZATION */

/*=================================================================================================
*                                      GLOBAL VARIABLES
=================================================================================================*/


/*=================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
=================================================================================================*/


/*=================================================================================================
*                                       LOCAL FUNCTIONS
=================================================================================================*/


/*=================================================================================================
*                                       GLOBAL FUNCTIONS
=================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

/* End of File */
