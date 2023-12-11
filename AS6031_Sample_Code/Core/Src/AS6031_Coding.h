/*
 * AS6031_Coding.h
 *
 *  Created on: 20.11.2023
 *      Author: Matthias Hainz
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef INC_AS6031_CODING_H_
#define INC_AS6031_CODING_H_

/* Includes ------------------------------------------------------------------*/
#include "AS6031_Bit_Definition.h"
#include "AS6031_CFG_Macros.h"

/* Exported types ------------------------------------------------------------*/
/** @defgroup AS6031_Exported_Types AS6031 Exported Types
  * @{
  */

/* Private defines -----------------------------------------------------------*/
/** @defgroup AS6031_Private_Constants AS6031 Private Constants
  * @{
  */
#define __AS6031_CFG_Declaration	uint32_t
#define __AS6031_CFG_Array_Size		20		/* Addresses from CR[0] up to CR[19] */
/**
* @}
*/
/**
  * @brief  AS6031 Opcode definition
  */
typedef enum _AS6031_OpcodeTypeDef
{
	/* Opcode = Hex / Description */
	RC_SYS_RST       = 0x99U,    /*!< Resets main part of digital core including register part and triggers bootloading process                  */
	RC_SYS_INIT      = 0x9AU,    /*!< Resets main part of digital core without register part and triggers bootloading process                    */
	RC_SV_INIT       = 0x9CU,    /*!< Resets Supervisor, Frontend Processing and CPU in main part of digital core but without a bootload trigger */
	RC_RAA_WR        = 0x5AU,    /*!< Write to RAM or register area                                                                              */
	RC_RAA_WR_NVRAM  = 0x5BU,    /*!< Write to FW data area (NVRAM)                                                                              */
	RC_RAA_WRS       = 0x5EU,    /*!< Write to RAM or register area with read system status before write                                         */
	RC_RAA_WRS_NVRAM = 0x5FU,    /*!< Write to FW data area (NVRAM) with read system status before write                                         */
	RC_RAA_RD        = 0x7AU,    /*!< Read from RAM or register area                                                                             */
	RC_RAA_RD_NVRAM  = 0x7BU,    /*!< Read from FW data area (NVRAM)                                                                             */
	RC_RAA_RDS       = 0x7EU,    /*!< Read from RAM or register area with read system status before read                                         */
	RC_RAA_RDS_NVRAM = 0x7FU,    /*!< Read from FW data area (NVRAM) with read system status before read                                         */
	RC_FWC_WR        = 0x5CU,    /*!< Write to FW code area (NVRAM)                                                                              */
	RC_RD_STATUS     = 0x8FU,    /*!< Read system status only                                                                                    */
	RC_MT_REQ        = 0xDAU,    /*!< Measure Task Request                                                                                       */
	RC_TSC_CLR       = 0x86U,    /*!< Time stamp counter clear                                                                                   */
	RC_BM_RLS        = 0x87U,    /*!< Bus Master Release                                                                                         */
	RC_BM_REQ        = 0x88U,    /*!< Bus Master Request                                                                                         */
	RC_RF_CLR        = 0x89U,    /*!< Reset flag clear (RST_FLAG in SYS_STATUS)                                                                  */
	RC_MCT_OFF       = 0x8AU,    /*!< Measure Cycle Timer Off                                                                                    */
	RC_MCT_ON        = 0x8BU,    /*!< Measure Cycle Timer On                                                                                     */
	RC_GPR_REQ       = 0x8CU,    /*!< General Purpose Request                                                                                    */
	RC_IF_CLR        = 0x8DU,    /*!< Interrupt Flags Clear                                                                                      */
	RC_COM_REQ       = 0x8EU,    /*!< Communication Request                                                                                      */
	RC_FW_CHKSUM     = 0xB8U     /*!< Builds checksum of all FW memories                                                                         */
} AS6031_OpcodeTypeDef;

/**
  * @brief  AS6031 State structure definition
  */
typedef enum _AS6031_StateTypeDef
{
	AS6031_STATE_RESET      = 0x00U,    /*!< Device not Initialized                           */
	AS6031_STATE_READY      = 0x01U,    /*!< Device Configured, Initialized and ready for use */
	AS6031_STATE_BUSY       = 0x02U,    /*!< an internal process is ongoing                   */
	AS6031_STATE_INTN       = 0x03U,    /*!< Device interrupt state                           */
	AS6031_STATE_ERROR      = 0x04U     /*!< Device error state                               */
} AS6031_StateTypeDef;

/* Exported types ------------------------------------------------------------*/
/** @defgroup AS6031_Exported_Types AS6031 Exported Types
  * @{
  */
/**
  * @brief  Configuration CR[0] Structure definition
  */
typedef struct {
	uint32_t WS_DIS;            	/*!< Code to disable Watchdog */
} AS6031_CR0TypeDef;

/**
  * @brief  Configuration CR[1] Structure definition
  */
typedef struct {
	uint8_t PI_TPW;            	/*!< Pulse Interface, Pulse Width */
	uint8_t PI_EN;             	/*!< Pulse Interface Enable */
	uint8_t PI_OUT_MODE;       	/*!< Pulse Interface Output Mode */
	uint8_t PI_UPD_MODE;       	/*!< Pulse Interface Update Mode */
	uint8_t HIDDEN_11_11;      	/*!< Mandatory setting: b0 */
	uint8_t I2C_MODE;          	/*!< 2-wire master interface mode */
	uint8_t I2C_ADR;           	/*!< 2-wire master interface slave address */
	uint8_t HIDDEN_21_21;      	/*!< Mandatory setting: b0 */
	uint8_t SPI_INPORT_CFG;    	/*!< Configuration of SPI input ports */
	uint8_t NOT_USED_31_24;    	/*!< Not used */
} AS6031_CR1TypeDef;

/**
  * @brief  Configuration CR[2] Structure definition
  */
typedef struct {
	uint8_t GP0_DIR;           	/*!< Direction of General Purpose Port 0 */
	uint8_t GP0_SEL;           	/*!< Output Select of General Purpose Port 0 */
	uint8_t GP1_DIR;           	/*!< Direction of General Purpose Port 1 */
	uint8_t GP1_SEL;           	/*!< Output Select of General Purpose Port 1 */
	uint8_t GP2_DIR;           	/*!< Direction of General Purpose Port 2 */
	uint8_t GP2_SEL;           	/*!< Output Select of General Purpose Port 2 */
	uint8_t GP3_DIR;           	/*!< Direction of General Purpose Port 3 */
	uint8_t GP3_SEL;           	/*!< Output Select of General Purpose Port 3 */
	uint8_t GP4_DIR;           	/*!< Direction of General Purpose Port 4 */
	uint8_t GP4_SEL;           	/*!< Output Select of General Purpose Port 4 */
	uint8_t GP5_DIR;           	/*!< Direction of General Purpose Port 5 */
	uint8_t GP5_SEL;           	/*!< Output Select of General Purpose Port 5 */
	uint8_t NOT_USED_31_24;    	/*!< Not used */
} AS6031_CR2TypeDef;

/**
  * @brief  Configuration CR[3] Structure definition
  */
typedef struct {
	uint8_t USM_OPT;           	/*!< Mandatory setting: b00001 */
	uint32_t NOT_USED_31_5;     	/*!< Not used */
} AS6031_CR3TypeDef;

/**
  * @brief  Configuration CR[4] Structure definition
  */
typedef struct {
	uint8_t EF_EN_TDC_TMO;     	/*!< Error Flag Enable, TDC Timeout */
	uint8_t EF_EN_TOF_TMO;     	/*!< Error Flag Enable, TOF Timeout */
	uint8_t EF_EN_AM_TMO;      	/*!< Error Flag Enable, Amplitude Measurement Timeout */
	uint8_t EF_EN_TM_OC;       	/*!< Error Flag Enable, Temperature Measurement Open Circuit */
	uint8_t EF_EN_TM_SC;       	/*!< Error Flag Enable, Temperature Measurement Short Circuit */
	uint8_t EF_EN_ZCC_ERR;     	/*!< Error Flag Enable, Zero Cross Calibration Error */
	uint8_t EF_EN_LBD_ERR;     	/*!< Error Flag Enable, Low Battery Detect Error */
	uint8_t EF_EN_USM_SQC_TMO; 	/*!< Error Flag Enable, Ultrasonic Sequence Timeout */
	uint8_t EF_EN_TM_SQC_TMO;  	/*!< Error Flag Enable, Temperature Sequence Timeout */
	uint8_t EF_EN_TSQ_TMO;     	/*!< Error Flag Enable, Task Sequencer Timeout */
	uint8_t EF_EN_I2C_ACK_ERR; 	/*!< Error Flag Enable, EEPROM Acknowledge Error */
	uint8_t HIDDEN_11_11;      	/*!< Mandatory setting: b0 */
	uint8_t EF_EN_NVM_FWCU_ERR;	/*!< Error Flag Enable, NVM FWCU Error */
	uint8_t EF_EN_NVM_FWDU_ERR;	/*!< Error Flag Enable, NVM FWDU Error */
	uint8_t EF_EN_NVM_FWA_ERR; 	/*!< Error Flag Enable, NVM Applied Firmware Error */
	uint8_t EF_EN_CPU_ERR;     	/*!< Error Flag Enable, CPU Error */
	uint8_t IRQ_EN_TSQ_FNS;    	/*!< Interrupt Request Enable, Task Sequencer finished */
	uint8_t IRQ_EN_TRANS_FNS;  	/*!< Interrupt Request Enable, FW Transaction finished */
	uint8_t IRQ_EN_BLD_FNS;    	/*!< Interrupt Request Enable, Bootload finished */
	uint8_t IRQ_EN_CHKSUM_FNS; 	/*!< Interrupt Request Enable, Checksum generation finished */
	uint8_t IRQ_EN_FW_S;       	/*!< Interrupt Request Enable, Firmware, synchronized with task sequencer */
	uint8_t IRQ_EN_TSQ_TO;     	/*!< Interrupt Request Enable, Firmware */
	uint8_t HIDDEN_22_22;      	/*!< Mandatory setting: b0 */
	uint8_t IRQ_EN_ERR_FLAG;   	/*!< Interrupt Request Enable, Error Flag */
	uint8_t HIDDEN_26_24;      	/*!< Mandatory setting: b000 */
	uint8_t CPU_REQ_EN_GPH;    	/*!< CPU Request Enable, General Purpose Handling */
	uint8_t TS_GPT_RATE;       	/*!< General Purpose Timer Rate */
} AS6031_CR4TypeDef;

/**
  * @brief  Configuration CR[5] Structure definition
  */
typedef struct {
	uint8_t HSC_DIV_MODE;      	/*!< High Speed Clock Divider Mode */
	uint8_t NOT_USED_1_1;      	/*!< Mandatory setting: b0 */
	uint8_t HSC_CLK_ST;        	/*!< High-Speed Clock Settling Time */
	uint8_t HIDDEN_7_5;        	/*!< Recommended setting: b001 */
	uint8_t HSC_DIV;           	/*!< High-Speed Clock Divider */
	uint8_t HSC_RATE;          	/*!< High-Speed Clock Calibration Rate */
	uint8_t HSC_MODE_CPU;      	/*!< High-Speed Clock Mode CPU */
	uint8_t VM_RATE;           	/*!< VCC Voltage measurement rate */
	uint8_t LBD_TH;            	/*!< Low battery detection threshold */
	uint8_t TSV_UPD_MODE;      	/*!< Time stamp update mode */
	uint8_t BF_SEL;            	/*!< Base Frequency Select */
	uint8_t HIDDEN_27_24;      	/*!< Mandatory setting: b0000 */
	uint8_t HIDDEN_28_28;      	/*!< Mandatory setting: b0 */
	uint8_t TI_PATH_SEL;       	/*!< Transducer Fire Buffer Impedance */
	uint8_t HIDDEN_31_31;      	/*!< Mandatory setting: b0 */
} AS6031_CR5TypeDef;

/**
  * @brief  Configuration CR[6] Structure definition
  */
typedef struct {
	uint32_t MR_CT;             	/*!< Measure rate cycle time */
	uint8_t TS_MCM;            	/*!< Task Sequencer Measure Cycle Mode */
	uint8_t TS_PP_T_EN;        	/*!< Enables final post processing T */
	uint8_t TS_PP_F_EN;        	/*!< Enables post processing F */
	uint8_t TS_PP_MODE;        	/*!< Post processing mode */
	uint8_t TS_CST_RATE;       	/*!< Firmware Check(sum) Timer Rate */
	uint8_t TS_NVR_RATE;       	/*!< Recall Timer Rate */
	uint8_t HIDDEN_25_24;      	/*!< Mandatory setting: b01 */
	uint8_t HIDDEN_30_26;      	/*!< Mandatory setting: b00000 */
	uint8_t TS_CST_MODE;       	/*!< Checksum Handling Mode */
} AS6031_CR6TypeDef;

/**
  * @brief  Configuration CR[7] Structure definition
  */
typedef struct {
	uint32_t TM_RATE;           	/*!< Temperature Measurement Rate */
	uint8_t TPM_PAUSE;         	/*!< Pause time between 2 temperature measurements */
	uint8_t TM_MODE;           	/*!< Temperature Measurement Mode */
	uint8_t HIDDEN_16_16;      	/*!< Mandatory setting: b0 */
	uint8_t TPM_PORT_MODE;     	/*!< Temperature Measurement Port Mode */
	uint8_t TM_PORT_ORDER;     	/*!< Temperature Measurement Port Order */
	uint8_t TPM_CLOAD_TRIM;    	/*!< Temperature Measurement Load Trim */
	uint8_t TPM_CYCLE_SEL;     	/*!< Temperature Measurement Cycle Select */
	uint8_t TPM_FAKE_NO;       	/*!< Number of Fake measurements */
	uint8_t HIDDEN_31_24;      	/*!< Mandatory setting: h00 */
} AS6031_CR7TypeDef;

/**
  * @brief  Configuration CR[8] Structure definition
  */
typedef struct {
	uint8_t USM_PAUSE;         	/*!< Pause time between two ultrasonic measurements */
	uint8_t HIDDEN_3_3;        	/*!< Mandatory setting: b0 */
	uint8_t USM_DIR_MODE;      	/*!< Ultrasonic Measurement Direction Mode */
	uint32_t USM_NOISE_MASK_WIN;	/*!< Noise Mask Window */
	uint8_t USM_TO;            	/*!< Timeout */
	uint8_t HIDDEN_18_18;      	/*!< Mandatory setting: b0 */
	uint8_t USM_RLS_MODE;      	/*!< Select mode for multihit start release */
	uint8_t ZCC_RATE;          	/*!< Zero Cross Calibration Rate */
	uint32_t HIDDEN_31_24;      	/*!< Mandatory setting: b000000000 */
} AS6031_CR8TypeDef;

/**
  * @brief  Configuration CR[9] Structure definition
  */
typedef struct {
	uint8_t FBG_CLK_DIV;       	/*!< Clock divider for fire burst generator */
	uint8_t FBG_MODE;          	/*!< Fire Burst Generator Mode */
	uint8_t FBG_PHASE_INS;     	/*!< Fire Burst Generator, Phase Insertion */
	uint8_t FBG_BURST_PRE;     	/*!< Fire Burst Generator, pre-burst */
	uint8_t FBG_BURST_POST;    	/*!< Fire Burst Generator, post-burst */
	uint8_t HIDDEN_28_28;      	/*!< Mandatory setting: b0 */
	uint8_t HIDDEN_29_29;      	/*!< Mandatory setting: b1 */
	uint8_t TOF_HIT_MODE;      	/*!< TOF data in FDB according to Multi-Hit Mode */
	uint8_t HIDDEN_31_31;      	/*!< Mandatory setting: b0 */
} AS6031_CR9TypeDef;

/**
  * @brief  Configuration CR[10] Structure definition
  */
typedef struct {
	uint8_t HIDDEN_0_0;        	/*!< Mandatory setting: b0 */
	uint8_t TOF_HIT_START;     	/*!< Defines number of detected hits (including first hit) */
	uint8_t TOF_HIT_IGN;       	/*!< Number of multi hits ignored between two hits taken for TDC measurement */
	uint8_t TOF_HIT_SUM_NO;    	/*!< Number of hits taken for sum value of TOF measurement */
	uint8_t TOF_HIT_END;       	/*!< TOF Hits stored to frontend data buffer */
	uint8_t HIDDEN_21_20;      	/*!< Mandatory setting: b00 */
	uint8_t TOF_EDGE_MODE;     	/*!< Time of Flight, edge mode */
	uint8_t TOF_RATE_INIT;     	/*!< FWD copy of initial value for TOF rate */
	uint8_t NOT_USED_31_30;    	/*!< Not Used */
} AS6031_CR10TypeDef;

/**
  * @brief  Configuration CR[11] Structure definition
  */
typedef struct {
	uint8_t AM_RATE;           	/*!< Amplitude measurement rate */
	uint8_t HIDEN_3_3;         	/*!< Default setting: b0 */
	uint8_t AM_PD_END;         	/*!< Amplitude measurement, end of peak detection */
	uint8_t HIDDEN_11_9;       	/*!< Mandatory setting: b111 */
	uint8_t AMC_RATE;          	/*!< Amplitude measurement calibration rate */
	uint8_t PWD_EN;            	/*!< Enables pulse width detection */
	uint8_t PGA_TRIM;          	/*!< DC gain of the PGA */
	uint8_t HIDDEN_19_19;      	/*!< Default setting: b0 */
	uint8_t PGA_EN_MODE;       	/*!< PGA enable mode */
	uint8_t PGA_MODE;          	/*!< Ultrasonic measurement PGA Mode */
	uint8_t HIDDEN_22_22;      	/*!< Mandatory setting: b0 */
	uint8_t AM_PD_START_MODE;  	/*!< Peak Detection Start Mode */
	uint8_t ZCD_FHL_INIT;      	/*!< FWD copy of initial value for first hit levels */
} AS6031_CR11TypeDef;

/**
  * @brief  Configuration CR[12] Structure definition
  */
typedef struct {
	uint32_t TRIM1;             	/*!< Default setting: 0x95A0C06C */
} AS6031_CR12TypeDef;

/**
  * @brief  Configuration CR[13] Structure definition
  */
typedef struct {
	uint32_t TRIM2;             	/*!< Default setting: 0x40110000 */
} AS6031_CR13TypeDef;

/**
  * @brief  Configuration CR[14] Structure definition
  */
typedef struct {
	uint32_t TRIM3;             	/*!< Default setting: 0x4027000F */
} AS6031_CR14TypeDef;

/**
  * @brief  Configuration CR[15] Structure definition
  */
typedef struct {
	uint8_t TOF_RATE;          	/*!< TOF Rate */
	uint32_t NOT_USED_31_6;     	/*!< Not used */
} AS6031_CR15TypeDef;

/**
  * @brief  Configuration CR[16] Structure definition
  */
typedef struct {
	uint32_t USM_RLS_DLY_U;     	/*!< Delay window in up direction, releasing ultrasonic measurement */
	uint32_t NOT_USED_31_19;    	/*!< Not used */
} AS6031_CR16TypeDef;

/**
  * @brief  Configuration CR[17] Structure definition
  */
typedef struct {
	uint32_t USM_RLS_DLY_D;     	/*!< Delay window in down direction, releasing ultrasonic measurement */
	uint32_t NOT_USED_31_19;    	/*!< Not used */
} AS6031_CR17TypeDef;

/**
  * @brief  Configuration CR[18] Structure definition
  */
typedef struct {
	uint8_t ZCD_FHL_U;         	/*!< First Hit Level Up */
	uint32_t NOT_USED_31_8;     	/*!< Not used */
} AS6031_CR18TypeDef;

/**
  * @brief  Configuration CR[19] Structure definition
  */
typedef struct {
	uint8_t ZCD_FHL_D;         	/*!< First Hit Level Down */
	uint32_t NOT_USED_31_8;     	/*!< Not used */
} AS6031_CR19TypeDef;


/**
  * @brief  Configuration Structure definition
  */
typedef struct {
	AS6031_CR0TypeDef CR0;	/*!< Configuration Register Address C0 */
	AS6031_CR1TypeDef CR1;	/*!< Configuration Register Address C1 */
	AS6031_CR2TypeDef CR2;	/*!< Configuration Register Address C2 */
	AS6031_CR3TypeDef CR3;	/*!< Configuration Register Address C3 */
	AS6031_CR4TypeDef CR4;	/*!< Configuration Register Address C4 */
	AS6031_CR5TypeDef CR5;	/*!< Configuration Register Address C5 */
	AS6031_CR6TypeDef CR6;	/*!< Configuration Register Address C6 */
	AS6031_CR7TypeDef CR7;	/*!< Configuration Register Address C7 */
	AS6031_CR8TypeDef CR8;	/*!< Configuration Register Address C8 */
	AS6031_CR9TypeDef CR9;	/*!< Configuration Register Address C9 */
	AS6031_CR10TypeDef CR10;	/*!< Configuration Register Address CA */
	AS6031_CR11TypeDef CR11;	/*!< Configuration Register Address CB */
	AS6031_CR12TypeDef CR12;	/*!< Configuration Register Address CC */
	AS6031_CR13TypeDef CR13;	/*!< Configuration Register Address CD */
	AS6031_CR14TypeDef CR14;	/*!< Configuration Register Address CE */
	AS6031_CR15TypeDef CR15;	/*!< Configuration Register Address D0 */
	AS6031_CR16TypeDef CR16;	/*!< Configuration Register Address D1 */
	AS6031_CR17TypeDef CR17;	/*!< Configuration Register Address D2 */
	AS6031_CR18TypeDef CR18;	/*!< Configuration Register Address DA */
	AS6031_CR19TypeDef CR19;	/*!< Configuration Register Address DB */

	/* additional parameter, more than one register long
	 * custom content */

	//uint32_t refclk_division;
} AS6031_ParamTypeDef;
/**
* @}
*/

/**
  * @brief  Initialization Structure definition
  */
typedef struct {
	__AS6031_CFG_Declaration CR[__AS6031_CFG_Array_Size];

	AS6031_ParamTypeDef Param;	/*!< Configuration Parameter */

	/* place for custom content
	 * e.g. further registers */

	AS6031_StateTypeDef State;	/*!< Status of AS6031 */

} AS6031_InitTypeDef;
/**
* @}
*/

/* Private function prototypes -----------------------------------------------*/
/** @defgroup AS6031_Private_Functions AS6031 Private Functions
  * @{
  */
/**
  * @brief  Handle parameter update.
  * @param  init pointer to a AS6031_InitTypeDef structure that contains
  *               the configuration information for the specified device.
  * @retval None
  */
void AS6031_Update_Param(AS6031_InitTypeDef* init)  {
	/* Read all content from CR[] and write into every parameter
	 * Update for each parameter */
	/* Parameter of CR[0] */
	init->Param.CR0.WS_DIS = ( (init->CR[0]) & AS6031_C0_WS_DIS_Msk ) >> AS6031_C0_WS_DIS_Pos;
	/* Parameter of CR[1] */
	init->Param.CR1.PI_TPW = ( (init->CR[1]) & AS6031_C1_PI_TPW_Msk ) >> AS6031_C1_PI_TPW_Pos;
	init->Param.CR1.PI_EN = ( (init->CR[1]) & AS6031_C1_PI_EN_Msk ) >> AS6031_C1_PI_EN_Pos;
	init->Param.CR1.PI_OUT_MODE = ( (init->CR[1]) & AS6031_C1_PI_OUT_MODE_Msk ) >> AS6031_C1_PI_OUT_MODE_Pos;
	init->Param.CR1.PI_UPD_MODE = ( (init->CR[1]) & AS6031_C1_PI_UPD_MODE_Msk ) >> AS6031_C1_PI_UPD_MODE_Pos;
	init->Param.CR1.HIDDEN_11_11 = ( (init->CR[1]) & AS6031_C1_HIDDEN_11_11_Msk ) >> AS6031_C1_HIDDEN_11_11_Pos;
	init->Param.CR1.I2C_MODE = ( (init->CR[1]) & AS6031_C1_I2C_MODE_Msk ) >> AS6031_C1_I2C_MODE_Pos;
	init->Param.CR1.I2C_ADR = ( (init->CR[1]) & AS6031_C1_I2C_ADR_Msk ) >> AS6031_C1_I2C_ADR_Pos;
	init->Param.CR1.HIDDEN_21_21 = ( (init->CR[1]) & AS6031_C1_HIDDEN_21_21_Msk ) >> AS6031_C1_HIDDEN_21_21_Pos;
	init->Param.CR1.SPI_INPORT_CFG = ( (init->CR[1]) & AS6031_C1_SPI_INPORT_CFG_Msk ) >> AS6031_C1_SPI_INPORT_CFG_Pos;
	init->Param.CR1.NOT_USED_31_24 = ( (init->CR[1]) & AS6031_C1_NOT_USED_31_24_Msk ) >> AS6031_C1_NOT_USED_31_24_Pos;
	/* Parameter of CR[2] */
	init->Param.CR2.GP0_DIR = ( (init->CR[2]) & AS6031_C2_GP0_DIR_Msk ) >> AS6031_C2_GP0_DIR_Pos;
	init->Param.CR2.GP0_SEL = ( (init->CR[2]) & AS6031_C2_GP0_SEL_Msk ) >> AS6031_C2_GP0_SEL_Pos;
	init->Param.CR2.GP1_DIR = ( (init->CR[2]) & AS6031_C2_GP1_DIR_Msk ) >> AS6031_C2_GP1_DIR_Pos;
	init->Param.CR2.GP1_SEL = ( (init->CR[2]) & AS6031_C2_GP1_SEL_Msk ) >> AS6031_C2_GP1_SEL_Pos;
	init->Param.CR2.GP2_DIR = ( (init->CR[2]) & AS6031_C2_GP2_DIR_Msk ) >> AS6031_C2_GP2_DIR_Pos;
	init->Param.CR2.GP2_SEL = ( (init->CR[2]) & AS6031_C2_GP2_SEL_Msk ) >> AS6031_C2_GP2_SEL_Pos;
	init->Param.CR2.GP3_DIR = ( (init->CR[2]) & AS6031_C2_GP3_DIR_Msk ) >> AS6031_C2_GP3_DIR_Pos;
	init->Param.CR2.GP3_SEL = ( (init->CR[2]) & AS6031_C2_GP3_SEL_Msk ) >> AS6031_C2_GP3_SEL_Pos;
	init->Param.CR2.GP4_DIR = ( (init->CR[2]) & AS6031_C2_GP4_DIR_Msk ) >> AS6031_C2_GP4_DIR_Pos;
	init->Param.CR2.GP4_SEL = ( (init->CR[2]) & AS6031_C2_GP4_SEL_Msk ) >> AS6031_C2_GP4_SEL_Pos;
	init->Param.CR2.GP5_DIR = ( (init->CR[2]) & AS6031_C2_GP5_DIR_Msk ) >> AS6031_C2_GP5_DIR_Pos;
	init->Param.CR2.GP5_SEL = ( (init->CR[2]) & AS6031_C2_GP5_SEL_Msk ) >> AS6031_C2_GP5_SEL_Pos;
	init->Param.CR2.NOT_USED_31_24 = ( (init->CR[2]) & AS6031_C2_NOT_USED_31_24_Msk ) >> AS6031_C2_NOT_USED_31_24_Pos;
	/* Parameter of CR[3] */
	init->Param.CR3.USM_OPT = ( (init->CR[3]) & AS6031_C3_USM_OPT_Msk ) >> AS6031_C3_USM_OPT_Pos;
	init->Param.CR3.NOT_USED_31_5 = ( (init->CR[3]) & AS6031_C3_NOT_USED_31_5_Msk ) >> AS6031_C3_NOT_USED_31_5_Pos;
	/* Parameter of CR[4] */
	init->Param.CR4.EF_EN_TDC_TMO = ( (init->CR[4]) & AS6031_C4_EF_EN_TDC_TMO_Msk ) >> AS6031_C4_EF_EN_TDC_TMO_Pos;
	init->Param.CR4.EF_EN_TOF_TMO = ( (init->CR[4]) & AS6031_C4_EF_EN_TOF_TMO_Msk ) >> AS6031_C4_EF_EN_TOF_TMO_Pos;
	init->Param.CR4.EF_EN_AM_TMO = ( (init->CR[4]) & AS6031_C4_EF_EN_AM_TMO_Msk ) >> AS6031_C4_EF_EN_AM_TMO_Pos;
	init->Param.CR4.EF_EN_TM_OC = ( (init->CR[4]) & AS6031_C4_EF_EN_TM_OC_Msk ) >> AS6031_C4_EF_EN_TM_OC_Pos;
	init->Param.CR4.EF_EN_TM_SC = ( (init->CR[4]) & AS6031_C4_EF_EN_TM_SC_Msk ) >> AS6031_C4_EF_EN_TM_SC_Pos;
	init->Param.CR4.EF_EN_ZCC_ERR = ( (init->CR[4]) & AS6031_C4_EF_EN_ZCC_ERR_Msk ) >> AS6031_C4_EF_EN_ZCC_ERR_Pos;
	init->Param.CR4.EF_EN_LBD_ERR = ( (init->CR[4]) & AS6031_C4_EF_EN_LBD_ERR_Msk ) >> AS6031_C4_EF_EN_LBD_ERR_Pos;
	init->Param.CR4.EF_EN_USM_SQC_TMO = ( (init->CR[4]) & AS6031_C4_EF_EN_USM_SQC_TMO_Msk ) >> AS6031_C4_EF_EN_USM_SQC_TMO_Pos;
	init->Param.CR4.EF_EN_TM_SQC_TMO = ( (init->CR[4]) & AS6031_C4_EF_EN_TM_SQC_TMO_Msk ) >> AS6031_C4_EF_EN_TM_SQC_TMO_Pos;
	init->Param.CR4.EF_EN_TSQ_TMO = ( (init->CR[4]) & AS6031_C4_EF_EN_TSQ_TMO_Msk ) >> AS6031_C4_EF_EN_TSQ_TMO_Pos;
	init->Param.CR4.EF_EN_I2C_ACK_ERR = ( (init->CR[4]) & AS6031_C4_EF_EN_I2C_ACK_ERR_Msk ) >> AS6031_C4_EF_EN_I2C_ACK_ERR_Pos;
	init->Param.CR4.HIDDEN_11_11 = ( (init->CR[4]) & AS6031_C4_HIDDEN_11_11_Msk ) >> AS6031_C4_HIDDEN_11_11_Pos;
	init->Param.CR4.EF_EN_NVM_FWCU_ERR = ( (init->CR[4]) & AS6031_C4_EF_EN_NVM_FWCU_ERR_Msk ) >> AS6031_C4_EF_EN_NVM_FWCU_ERR_Pos;
	init->Param.CR4.EF_EN_NVM_FWDU_ERR = ( (init->CR[4]) & AS6031_C4_EF_EN_NVM_FWDU_ERR_Msk ) >> AS6031_C4_EF_EN_NVM_FWDU_ERR_Pos;
	init->Param.CR4.EF_EN_NVM_FWA_ERR = ( (init->CR[4]) & AS6031_C4_EF_EN_NVM_FWA_ERR_Msk ) >> AS6031_C4_EF_EN_NVM_FWA_ERR_Pos;
	init->Param.CR4.EF_EN_CPU_ERR = ( (init->CR[4]) & AS6031_C4_EF_EN_CPU_ERR_Msk ) >> AS6031_C4_EF_EN_CPU_ERR_Pos;
	init->Param.CR4.IRQ_EN_TSQ_FNS = ( (init->CR[4]) & AS6031_C4_IRQ_EN_TSQ_FNS_Msk ) >> AS6031_C4_IRQ_EN_TSQ_FNS_Pos;
	init->Param.CR4.IRQ_EN_TRANS_FNS = ( (init->CR[4]) & AS6031_C4_IRQ_EN_TRANS_FNS_Msk ) >> AS6031_C4_IRQ_EN_TRANS_FNS_Pos;
	init->Param.CR4.IRQ_EN_BLD_FNS = ( (init->CR[4]) & AS6031_C4_IRQ_EN_BLD_FNS_Msk ) >> AS6031_C4_IRQ_EN_BLD_FNS_Pos;
	init->Param.CR4.IRQ_EN_CHKSUM_FNS = ( (init->CR[4]) & AS6031_C4_IRQ_EN_CHKSUM_FNS_Msk ) >> AS6031_C4_IRQ_EN_CHKSUM_FNS_Pos;
	init->Param.CR4.IRQ_EN_FW_S = ( (init->CR[4]) & AS6031_C4_IRQ_EN_FW_S_Msk ) >> AS6031_C4_IRQ_EN_FW_S_Pos;
	init->Param.CR4.IRQ_EN_TSQ_TO = ( (init->CR[4]) & AS6031_C4_IRQ_EN_TSQ_TO_Msk ) >> AS6031_C4_IRQ_EN_TSQ_TO_Pos;
	init->Param.CR4.HIDDEN_22_22 = ( (init->CR[4]) & AS6031_C4_HIDDEN_22_22_Msk ) >> AS6031_C4_HIDDEN_22_22_Pos;
	init->Param.CR4.IRQ_EN_ERR_FLAG = ( (init->CR[4]) & AS6031_C4_IRQ_EN_ERR_FLAG_Msk ) >> AS6031_C4_IRQ_EN_ERR_FLAG_Pos;
	init->Param.CR4.HIDDEN_26_24 = ( (init->CR[4]) & AS6031_C4_HIDDEN_26_24_Msk ) >> AS6031_C4_HIDDEN_26_24_Pos;
	init->Param.CR4.CPU_REQ_EN_GPH = ( (init->CR[4]) & AS6031_C4_CPU_REQ_EN_GPH_Msk ) >> AS6031_C4_CPU_REQ_EN_GPH_Pos;
	init->Param.CR4.TS_GPT_RATE = ( (init->CR[4]) & AS6031_C4_TS_GPT_RATE_Msk ) >> AS6031_C4_TS_GPT_RATE_Pos;
	/* Parameter of CR[5] */
	init->Param.CR5.HSC_DIV_MODE = ( (init->CR[5]) & AS6031_C5_HSC_DIV_MODE_Msk ) >> AS6031_C5_HSC_DIV_MODE_Pos;
	init->Param.CR5.NOT_USED_1_1 = ( (init->CR[5]) & AS6031_C5_NOT_USED_1_1_Msk ) >> AS6031_C5_NOT_USED_1_1_Pos;
	init->Param.CR5.HSC_CLK_ST = ( (init->CR[5]) & AS6031_C5_HSC_CLK_ST_Msk ) >> AS6031_C5_HSC_CLK_ST_Pos;
	init->Param.CR5.HIDDEN_7_5 = ( (init->CR[5]) & AS6031_C5_HIDDEN_7_5_Msk ) >> AS6031_C5_HIDDEN_7_5_Pos;
	init->Param.CR5.HSC_DIV = ( (init->CR[5]) & AS6031_C5_HSC_DIV_Msk ) >> AS6031_C5_HSC_DIV_Pos;
	init->Param.CR5.HSC_RATE = ( (init->CR[5]) & AS6031_C5_HSC_RATE_Msk ) >> AS6031_C5_HSC_RATE_Pos;
	init->Param.CR5.HSC_MODE_CPU = ( (init->CR[5]) & AS6031_C5_HSC_MODE_CPU_Msk ) >> AS6031_C5_HSC_MODE_CPU_Pos;
	init->Param.CR5.VM_RATE = ( (init->CR[5]) & AS6031_C5_VM_RATE_Msk ) >> AS6031_C5_VM_RATE_Pos;
	init->Param.CR5.LBD_TH = ( (init->CR[5]) & AS6031_C5_LBD_TH_Msk ) >> AS6031_C5_LBD_TH_Pos;
	init->Param.CR5.TSV_UPD_MODE = ( (init->CR[5]) & AS6031_C5_TSV_UPD_MODE_Msk ) >> AS6031_C5_TSV_UPD_MODE_Pos;
	init->Param.CR5.BF_SEL = ( (init->CR[5]) & AS6031_C5_BF_SEL_Msk ) >> AS6031_C5_BF_SEL_Pos;
	init->Param.CR5.HIDDEN_27_24 = ( (init->CR[5]) & AS6031_C5_HIDDEN_27_24_Msk ) >> AS6031_C5_HIDDEN_27_24_Pos;
	init->Param.CR5.HIDDEN_28_28 = ( (init->CR[5]) & AS6031_C5_HIDDEN_28_28_Msk ) >> AS6031_C5_HIDDEN_28_28_Pos;
	init->Param.CR5.TI_PATH_SEL = ( (init->CR[5]) & AS6031_C5_TI_PATH_SEL_Msk ) >> AS6031_C5_TI_PATH_SEL_Pos;
	init->Param.CR5.HIDDEN_31_31 = ( (init->CR[5]) & AS6031_C5_HIDDEN_31_31_Msk ) >> AS6031_C5_HIDDEN_31_31_Pos;
	/* Parameter of CR[6] */
	init->Param.CR6.MR_CT = ( (init->CR[6]) & AS6031_C6_MR_CT_Msk ) >> AS6031_C6_MR_CT_Pos;
	init->Param.CR6.TS_MCM = ( (init->CR[6]) & AS6031_C6_TS_MCM_Msk ) >> AS6031_C6_TS_MCM_Pos;
	init->Param.CR6.TS_PP_T_EN = ( (init->CR[6]) & AS6031_C6_TS_PP_T_EN_Msk ) >> AS6031_C6_TS_PP_T_EN_Pos;
	init->Param.CR6.TS_PP_F_EN = ( (init->CR[6]) & AS6031_C6_TS_PP_F_EN_Msk ) >> AS6031_C6_TS_PP_F_EN_Pos;
	init->Param.CR6.TS_PP_MODE = ( (init->CR[6]) & AS6031_C6_TS_PP_MODE_Msk ) >> AS6031_C6_TS_PP_MODE_Pos;
	init->Param.CR6.TS_CST_RATE = ( (init->CR[6]) & AS6031_C6_TS_CST_RATE_Msk ) >> AS6031_C6_TS_CST_RATE_Pos;
	init->Param.CR6.TS_NVR_RATE = ( (init->CR[6]) & AS6031_C6_TS_NVR_RATE_Msk ) >> AS6031_C6_TS_NVR_RATE_Pos;
	init->Param.CR6.HIDDEN_25_24 = ( (init->CR[6]) & AS6031_C6_HIDDEN_25_24_Msk ) >> AS6031_C6_HIDDEN_25_24_Pos;
	init->Param.CR6.HIDDEN_30_26 = ( (init->CR[6]) & AS6031_C6_HIDDEN_30_26_Msk ) >> AS6031_C6_HIDDEN_30_26_Pos;
	init->Param.CR6.TS_CST_MODE = ( (init->CR[6]) & AS6031_C6_TS_CST_MODE_Msk ) >> AS6031_C6_TS_CST_MODE_Pos;
	/* Parameter of CR[7] */
	init->Param.CR7.TM_RATE = ( (init->CR[7]) & AS6031_C7_TM_RATE_Msk ) >> AS6031_C7_TM_RATE_Pos;
	init->Param.CR7.TPM_PAUSE = ( (init->CR[7]) & AS6031_C7_TPM_PAUSE_Msk ) >> AS6031_C7_TPM_PAUSE_Pos;
	init->Param.CR7.TM_MODE = ( (init->CR[7]) & AS6031_C7_TM_MODE_Msk ) >> AS6031_C7_TM_MODE_Pos;
	init->Param.CR7.HIDDEN_16_16 = ( (init->CR[7]) & AS6031_C7_HIDDEN_16_16_Msk ) >> AS6031_C7_HIDDEN_16_16_Pos;
	init->Param.CR7.TPM_PORT_MODE = ( (init->CR[7]) & AS6031_C7_TPM_PORT_MODE_Msk ) >> AS6031_C7_TPM_PORT_MODE_Pos;
	init->Param.CR7.TM_PORT_ORDER = ( (init->CR[7]) & AS6031_C7_TM_PORT_ORDER_Msk ) >> AS6031_C7_TM_PORT_ORDER_Pos;
	init->Param.CR7.TPM_CLOAD_TRIM = ( (init->CR[7]) & AS6031_C7_TPM_CLOAD_TRIM_Msk ) >> AS6031_C7_TPM_CLOAD_TRIM_Pos;
	init->Param.CR7.TPM_CYCLE_SEL = ( (init->CR[7]) & AS6031_C7_TPM_CYCLE_SEL_Msk ) >> AS6031_C7_TPM_CYCLE_SEL_Pos;
	init->Param.CR7.TPM_FAKE_NO = ( (init->CR[7]) & AS6031_C7_TPM_FAKE_NO_Msk ) >> AS6031_C7_TPM_FAKE_NO_Pos;
	init->Param.CR7.HIDDEN_31_24 = ( (init->CR[7]) & AS6031_C7_HIDDEN_31_24_Msk ) >> AS6031_C7_HIDDEN_31_24_Pos;
	/* Parameter of CR[8] */
	init->Param.CR8.USM_PAUSE = ( (init->CR[8]) & AS6031_C8_USM_PAUSE_Msk ) >> AS6031_C8_USM_PAUSE_Pos;
	init->Param.CR8.HIDDEN_3_3 = ( (init->CR[8]) & AS6031_C8_HIDDEN_3_3_Msk ) >> AS6031_C8_HIDDEN_3_3_Pos;
	init->Param.CR8.USM_DIR_MODE = ( (init->CR[8]) & AS6031_C8_USM_DIR_MODE_Msk ) >> AS6031_C8_USM_DIR_MODE_Pos;
	init->Param.CR8.USM_NOISE_MASK_WIN = ( (init->CR[8]) & AS6031_C8_USM_NOISE_MASK_WIN_Msk ) >> AS6031_C8_USM_NOISE_MASK_WIN_Pos;
	init->Param.CR8.USM_TO = ( (init->CR[8]) & AS6031_C8_USM_TO_Msk ) >> AS6031_C8_USM_TO_Pos;
	init->Param.CR8.HIDDEN_18_18 = ( (init->CR[8]) & AS6031_C8_HIDDEN_18_18_Msk ) >> AS6031_C8_HIDDEN_18_18_Pos;
	init->Param.CR8.USM_RLS_MODE = ( (init->CR[8]) & AS6031_C8_USM_RLS_MODE_Msk ) >> AS6031_C8_USM_RLS_MODE_Pos;
	init->Param.CR8.ZCC_RATE = ( (init->CR[8]) & AS6031_C8_ZCC_RATE_Msk ) >> AS6031_C8_ZCC_RATE_Pos;
	init->Param.CR8.HIDDEN_31_24 = ( (init->CR[8]) & AS6031_C8_HIDDEN_31_24_Msk ) >> AS6031_C8_HIDDEN_31_24_Pos;
	/* Parameter of CR[9] */
	init->Param.CR9.FBG_CLK_DIV = ( (init->CR[9]) & AS6031_C9_FBG_CLK_DIV_Msk ) >> AS6031_C9_FBG_CLK_DIV_Pos;
	init->Param.CR9.FBG_MODE = ( (init->CR[9]) & AS6031_C9_FBG_MODE_Msk ) >> AS6031_C9_FBG_MODE_Pos;
	init->Param.CR9.FBG_PHASE_INS = ( (init->CR[9]) & AS6031_C9_FBG_PHASE_INS_Msk ) >> AS6031_C9_FBG_PHASE_INS_Pos;
	init->Param.CR9.FBG_BURST_PRE = ( (init->CR[9]) & AS6031_C9_FBG_BURST_PRE_Msk ) >> AS6031_C9_FBG_BURST_PRE_Pos;
	init->Param.CR9.FBG_BURST_POST = ( (init->CR[9]) & AS6031_C9_FBG_BURST_POST_Msk ) >> AS6031_C9_FBG_BURST_POST_Pos;
	init->Param.CR9.HIDDEN_28_28 = ( (init->CR[9]) & AS6031_C9_HIDDEN_28_28_Msk ) >> AS6031_C9_HIDDEN_28_28_Pos;
	init->Param.CR9.HIDDEN_29_29 = ( (init->CR[9]) & AS6031_C9_HIDDEN_29_29_Msk ) >> AS6031_C9_HIDDEN_29_29_Pos;
	init->Param.CR9.TOF_HIT_MODE = ( (init->CR[9]) & AS6031_C9_TOF_HIT_MODE_Msk ) >> AS6031_C9_TOF_HIT_MODE_Pos;
	init->Param.CR9.HIDDEN_31_31 = ( (init->CR[9]) & AS6031_C9_HIDDEN_31_31_Msk ) >> AS6031_C9_HIDDEN_31_31_Pos;
	/* Parameter of CR[10] */
	init->Param.CR10.HIDDEN_0_0 = ( (init->CR[10]) & AS6031_CA_HIDDEN_0_0_Msk ) >> AS6031_CA_HIDDEN_0_0_Pos;
	init->Param.CR10.TOF_HIT_START = ( (init->CR[10]) & AS6031_CA_TOF_HIT_START_Msk ) >> AS6031_CA_TOF_HIT_START_Pos;
	init->Param.CR10.TOF_HIT_IGN = ( (init->CR[10]) & AS6031_CA_TOF_HIT_IGN_Msk ) >> AS6031_CA_TOF_HIT_IGN_Pos;
	init->Param.CR10.TOF_HIT_SUM_NO = ( (init->CR[10]) & AS6031_CA_TOF_HIT_SUM_NO_Msk ) >> AS6031_CA_TOF_HIT_SUM_NO_Pos;
	init->Param.CR10.TOF_HIT_END = ( (init->CR[10]) & AS6031_CA_TOF_HIT_END_Msk ) >> AS6031_CA_TOF_HIT_END_Pos;
	init->Param.CR10.HIDDEN_21_20 = ( (init->CR[10]) & AS6031_CA_HIDDEN_21_20_Msk ) >> AS6031_CA_HIDDEN_21_20_Pos;
	init->Param.CR10.TOF_EDGE_MODE = ( (init->CR[10]) & AS6031_CA_TOF_EDGE_MODE_Msk ) >> AS6031_CA_TOF_EDGE_MODE_Pos;
	init->Param.CR10.TOF_RATE_INIT = ( (init->CR[10]) & AS6031_CA_TOF_RATE_INIT_Msk ) >> AS6031_CA_TOF_RATE_INIT_Pos;
	init->Param.CR10.NOT_USED_31_30 = ( (init->CR[10]) & AS6031_CA_NOT_USED_31_30_Msk ) >> AS6031_CA_NOT_USED_31_30_Pos;
	/* Parameter of CR[11] */
	init->Param.CR11.AM_RATE = ( (init->CR[11]) & AS6031_CB_AM_RATE_Msk ) >> AS6031_CB_AM_RATE_Pos;
	init->Param.CR11.HIDEN_3_3 = ( (init->CR[11]) & AS6031_CB_HIDEN_3_3_Msk ) >> AS6031_CB_HIDEN_3_3_Pos;
	init->Param.CR11.AM_PD_END = ( (init->CR[11]) & AS6031_CB_AM_PD_END_Msk ) >> AS6031_CB_AM_PD_END_Pos;
	init->Param.CR11.HIDDEN_11_9 = ( (init->CR[11]) & AS6031_CB_HIDDEN_11_9_Msk ) >> AS6031_CB_HIDDEN_11_9_Pos;
	init->Param.CR11.AMC_RATE = ( (init->CR[11]) & AS6031_CB_AMC_RATE_Msk ) >> AS6031_CB_AMC_RATE_Pos;
	init->Param.CR11.PWD_EN = ( (init->CR[11]) & AS6031_CB_PWD_EN_Msk ) >> AS6031_CB_PWD_EN_Pos;
	init->Param.CR11.PGA_TRIM = ( (init->CR[11]) & AS6031_CB_PGA_TRIM_Msk ) >> AS6031_CB_PGA_TRIM_Pos;
	init->Param.CR11.HIDDEN_19_19 = ( (init->CR[11]) & AS6031_CB_HIDDEN_19_19_Msk ) >> AS6031_CB_HIDDEN_19_19_Pos;
	init->Param.CR11.PGA_EN_MODE = ( (init->CR[11]) & AS6031_CB_PGA_EN_MODE_Msk ) >> AS6031_CB_PGA_EN_MODE_Pos;
	init->Param.CR11.PGA_MODE = ( (init->CR[11]) & AS6031_CB_PGA_MODE_Msk ) >> AS6031_CB_PGA_MODE_Pos;
	init->Param.CR11.HIDDEN_22_22 = ( (init->CR[11]) & AS6031_CB_HIDDEN_22_22_Msk ) >> AS6031_CB_HIDDEN_22_22_Pos;
	init->Param.CR11.AM_PD_START_MODE = ( (init->CR[11]) & AS6031_CB_AM_PD_START_MODE_Msk ) >> AS6031_CB_AM_PD_START_MODE_Pos;
	init->Param.CR11.ZCD_FHL_INIT = ( (init->CR[11]) & AS6031_CB_ZCD_FHL_INIT_Msk ) >> AS6031_CB_ZCD_FHL_INIT_Pos;
	/* Parameter of CR[12] */
	init->Param.CR12.TRIM1 = ( (init->CR[12]) & AS6031_CC_TRIM1_Msk ) >> AS6031_CC_TRIM1_Pos;
	/* Parameter of CR[13] */
	init->Param.CR13.TRIM2 = ( (init->CR[13]) & AS6031_CD_TRIM2_Msk ) >> AS6031_CD_TRIM2_Pos;
	/* Parameter of CR[14] */
	init->Param.CR14.TRIM3 = ( (init->CR[14]) & AS6031_CE_TRIM3_Msk ) >> AS6031_CE_TRIM3_Pos;
	/* Parameter of CR[15] */
	init->Param.CR15.TOF_RATE = ( (init->CR[15]) & AS6031_D0_TOF_RATE_Msk ) >> AS6031_D0_TOF_RATE_Pos;
	init->Param.CR15.NOT_USED_31_6 = ( (init->CR[15]) & AS6031_D0_NOT_USED_31_6_Msk ) >> AS6031_D0_NOT_USED_31_6_Pos;
	/* Parameter of CR[16] */
	init->Param.CR16.USM_RLS_DLY_U = ( (init->CR[16]) & AS6031_D1_USM_RLS_DLY_U_Msk ) >> AS6031_D1_USM_RLS_DLY_U_Pos;
	init->Param.CR16.NOT_USED_31_19 = ( (init->CR[16]) & AS6031_D1_NOT_USED_31_19_Msk ) >> AS6031_D1_NOT_USED_31_19_Pos;
	/* Parameter of CR[17] */
	init->Param.CR17.USM_RLS_DLY_D = ( (init->CR[17]) & AS6031_D2_USM_RLS_DLY_D_Msk ) >> AS6031_D2_USM_RLS_DLY_D_Pos;
	init->Param.CR17.NOT_USED_31_19 = ( (init->CR[17]) & AS6031_D2_NOT_USED_31_19_Msk ) >> AS6031_D2_NOT_USED_31_19_Pos;
	/* Parameter of CR[18] */
	init->Param.CR18.ZCD_FHL_U = ( (init->CR[18]) & AS6031_DA_ZCD_FHL_U_Msk ) >> AS6031_DA_ZCD_FHL_U_Pos;
	init->Param.CR18.NOT_USED_31_8 = ( (init->CR[18]) & AS6031_DA_NOT_USED_31_8_Msk ) >> AS6031_DA_NOT_USED_31_8_Pos;
	/* Parameter of CR[19] */
	init->Param.CR19.ZCD_FHL_D = ( (init->CR[19]) & AS6031_DB_ZCD_FHL_D_Msk ) >> AS6031_DB_ZCD_FHL_D_Pos;
	init->Param.CR19.NOT_USED_31_8 = ( (init->CR[19]) & AS6031_DB_NOT_USED_31_8_Msk ) >> AS6031_DB_NOT_USED_31_8_Pos;
}
/**
* @}
*/

/**
  * @brief  Handle configuration registers update.
  * @param  init pointer to a AS6031_InitTypeDef structure that contains
  *               the parameter information for the specified device.
  * @retval None
  */
void AS6031_Update_CFG(AS6031_InitTypeDef* init)  {
	/* Writes all parameters into every configuration register */
	/* Parameter for CR[0] */
	init->CR[0]	= 0;// Clearing the register
	init->CR[0]	|= AS6031_C0_WS_DIS_SET(init->Param.CR0.WS_DIS);
	/* Parameter for CR[1] */
	init->CR[1]	= 0;// Clearing the register
	init->CR[1]	|= AS6031_C1_PI_TPW_SET(init->Param.CR1.PI_TPW);
	init->CR[1]	|= AS6031_C1_PI_EN_SET(init->Param.CR1.PI_EN);
	init->CR[1]	|= AS6031_C1_PI_OUT_MODE_SET(init->Param.CR1.PI_OUT_MODE);
	init->CR[1]	|= AS6031_C1_PI_UPD_MODE_SET(init->Param.CR1.PI_UPD_MODE);
	init->CR[1]	|= AS6031_C1_HIDDEN_11_11_SET(init->Param.CR1.HIDDEN_11_11);
	init->CR[1]	|= AS6031_C1_I2C_MODE_SET(init->Param.CR1.I2C_MODE);
	init->CR[1]	|= AS6031_C1_I2C_ADR_SET(init->Param.CR1.I2C_ADR);
	init->CR[1]	|= AS6031_C1_HIDDEN_21_21_SET(init->Param.CR1.HIDDEN_21_21);
	init->CR[1]	|= AS6031_C1_SPI_INPORT_CFG_SET(init->Param.CR1.SPI_INPORT_CFG);
	init->CR[1]	|= AS6031_C1_NOT_USED_31_24_SET(init->Param.CR1.NOT_USED_31_24);
	/* Parameter for CR[2] */
	init->CR[2]	= 0;// Clearing the register
	init->CR[2]	|= AS6031_C2_GP0_DIR_SET(init->Param.CR2.GP0_DIR);
	init->CR[2]	|= AS6031_C2_GP0_SEL_SET(init->Param.CR2.GP0_SEL);
	init->CR[2]	|= AS6031_C2_GP1_DIR_SET(init->Param.CR2.GP1_DIR);
	init->CR[2]	|= AS6031_C2_GP1_SEL_SET(init->Param.CR2.GP1_SEL);
	init->CR[2]	|= AS6031_C2_GP2_DIR_SET(init->Param.CR2.GP2_DIR);
	init->CR[2]	|= AS6031_C2_GP2_SEL_SET(init->Param.CR2.GP2_SEL);
	init->CR[2]	|= AS6031_C2_GP3_DIR_SET(init->Param.CR2.GP3_DIR);
	init->CR[2]	|= AS6031_C2_GP3_SEL_SET(init->Param.CR2.GP3_SEL);
	init->CR[2]	|= AS6031_C2_GP4_DIR_SET(init->Param.CR2.GP4_DIR);
	init->CR[2]	|= AS6031_C2_GP4_SEL_SET(init->Param.CR2.GP4_SEL);
	init->CR[2]	|= AS6031_C2_GP5_DIR_SET(init->Param.CR2.GP5_DIR);
	init->CR[2]	|= AS6031_C2_GP5_SEL_SET(init->Param.CR2.GP5_SEL);
	init->CR[2]	|= AS6031_C2_NOT_USED_31_24_SET(init->Param.CR2.NOT_USED_31_24);
	/* Parameter for CR[3] */
	init->CR[3]	= 0;// Clearing the register
	init->CR[3]	|= AS6031_C3_USM_OPT_SET(init->Param.CR3.USM_OPT);
	init->CR[3]	|= AS6031_C3_NOT_USED_31_5_SET(init->Param.CR3.NOT_USED_31_5);
	/* Parameter for CR[4] */
	init->CR[4]	= 0;// Clearing the register
	init->CR[4]	|= AS6031_C4_EF_EN_TDC_TMO_SET(init->Param.CR4.EF_EN_TDC_TMO);
	init->CR[4]	|= AS6031_C4_EF_EN_TOF_TMO_SET(init->Param.CR4.EF_EN_TOF_TMO);
	init->CR[4]	|= AS6031_C4_EF_EN_AM_TMO_SET(init->Param.CR4.EF_EN_AM_TMO);
	init->CR[4]	|= AS6031_C4_EF_EN_TM_OC_SET(init->Param.CR4.EF_EN_TM_OC);
	init->CR[4]	|= AS6031_C4_EF_EN_TM_SC_SET(init->Param.CR4.EF_EN_TM_SC);
	init->CR[4]	|= AS6031_C4_EF_EN_ZCC_ERR_SET(init->Param.CR4.EF_EN_ZCC_ERR);
	init->CR[4]	|= AS6031_C4_EF_EN_LBD_ERR_SET(init->Param.CR4.EF_EN_LBD_ERR);
	init->CR[4]	|= AS6031_C4_EF_EN_USM_SQC_TMO_SET(init->Param.CR4.EF_EN_USM_SQC_TMO);
	init->CR[4]	|= AS6031_C4_EF_EN_TM_SQC_TMO_SET(init->Param.CR4.EF_EN_TM_SQC_TMO);
	init->CR[4]	|= AS6031_C4_EF_EN_TSQ_TMO_SET(init->Param.CR4.EF_EN_TSQ_TMO);
	init->CR[4]	|= AS6031_C4_EF_EN_I2C_ACK_ERR_SET(init->Param.CR4.EF_EN_I2C_ACK_ERR);
	init->CR[4]	|= AS6031_C4_HIDDEN_11_11_SET(init->Param.CR4.HIDDEN_11_11);
	init->CR[4]	|= AS6031_C4_EF_EN_NVM_FWCU_ERR_SET(init->Param.CR4.EF_EN_NVM_FWCU_ERR);
	init->CR[4]	|= AS6031_C4_EF_EN_NVM_FWDU_ERR_SET(init->Param.CR4.EF_EN_NVM_FWDU_ERR);
	init->CR[4]	|= AS6031_C4_EF_EN_NVM_FWA_ERR_SET(init->Param.CR4.EF_EN_NVM_FWA_ERR);
	init->CR[4]	|= AS6031_C4_EF_EN_CPU_ERR_SET(init->Param.CR4.EF_EN_CPU_ERR);
	init->CR[4]	|= AS6031_C4_IRQ_EN_TSQ_FNS_SET(init->Param.CR4.IRQ_EN_TSQ_FNS);
	init->CR[4]	|= AS6031_C4_IRQ_EN_TRANS_FNS_SET(init->Param.CR4.IRQ_EN_TRANS_FNS);
	init->CR[4]	|= AS6031_C4_IRQ_EN_BLD_FNS_SET(init->Param.CR4.IRQ_EN_BLD_FNS);
	init->CR[4]	|= AS6031_C4_IRQ_EN_CHKSUM_FNS_SET(init->Param.CR4.IRQ_EN_CHKSUM_FNS);
	init->CR[4]	|= AS6031_C4_IRQ_EN_FW_S_SET(init->Param.CR4.IRQ_EN_FW_S);
	init->CR[4]	|= AS6031_C4_IRQ_EN_TSQ_TO_SET(init->Param.CR4.IRQ_EN_TSQ_TO);
	init->CR[4]	|= AS6031_C4_HIDDEN_22_22_SET(init->Param.CR4.HIDDEN_22_22);
	init->CR[4]	|= AS6031_C4_IRQ_EN_ERR_FLAG_SET(init->Param.CR4.IRQ_EN_ERR_FLAG);
	init->CR[4]	|= AS6031_C4_HIDDEN_26_24_SET(init->Param.CR4.HIDDEN_26_24);
	init->CR[4]	|= AS6031_C4_CPU_REQ_EN_GPH_SET(init->Param.CR4.CPU_REQ_EN_GPH);
	init->CR[4]	|= AS6031_C4_TS_GPT_RATE_SET(init->Param.CR4.TS_GPT_RATE);
	/* Parameter for CR[5] */
	init->CR[5]	= 0;// Clearing the register
	init->CR[5]	|= AS6031_C5_HSC_DIV_MODE_SET(init->Param.CR5.HSC_DIV_MODE);
	init->CR[5]	|= AS6031_C5_NOT_USED_1_1_SET(init->Param.CR5.NOT_USED_1_1);
	init->CR[5]	|= AS6031_C5_HSC_CLK_ST_SET(init->Param.CR5.HSC_CLK_ST);
	init->CR[5]	|= AS6031_C5_HIDDEN_7_5_SET(init->Param.CR5.HIDDEN_7_5);
	init->CR[5]	|= AS6031_C5_HSC_DIV_SET(init->Param.CR5.HSC_DIV);
	init->CR[5]	|= AS6031_C5_HSC_RATE_SET(init->Param.CR5.HSC_RATE);
	init->CR[5]	|= AS6031_C5_HSC_MODE_CPU_SET(init->Param.CR5.HSC_MODE_CPU);
	init->CR[5]	|= AS6031_C5_VM_RATE_SET(init->Param.CR5.VM_RATE);
	init->CR[5]	|= AS6031_C5_LBD_TH_SET(init->Param.CR5.LBD_TH);
	init->CR[5]	|= AS6031_C5_TSV_UPD_MODE_SET(init->Param.CR5.TSV_UPD_MODE);
	init->CR[5]	|= AS6031_C5_BF_SEL_SET(init->Param.CR5.BF_SEL);
	init->CR[5]	|= AS6031_C5_HIDDEN_27_24_SET(init->Param.CR5.HIDDEN_27_24);
	init->CR[5]	|= AS6031_C5_HIDDEN_28_28_SET(init->Param.CR5.HIDDEN_28_28);
	init->CR[5]	|= AS6031_C5_TI_PATH_SEL_SET(init->Param.CR5.TI_PATH_SEL);
	init->CR[5]	|= AS6031_C5_HIDDEN_31_31_SET(init->Param.CR5.HIDDEN_31_31);
	/* Parameter for CR[6] */
	init->CR[6]	= 0;// Clearing the register
	init->CR[6]	|= AS6031_C6_MR_CT_SET(init->Param.CR6.MR_CT);
	init->CR[6]	|= AS6031_C6_TS_MCM_SET(init->Param.CR6.TS_MCM);
	init->CR[6]	|= AS6031_C6_TS_PP_T_EN_SET(init->Param.CR6.TS_PP_T_EN);
	init->CR[6]	|= AS6031_C6_TS_PP_F_EN_SET(init->Param.CR6.TS_PP_F_EN);
	init->CR[6]	|= AS6031_C6_TS_PP_MODE_SET(init->Param.CR6.TS_PP_MODE);
	init->CR[6]	|= AS6031_C6_TS_CST_RATE_SET(init->Param.CR6.TS_CST_RATE);
	init->CR[6]	|= AS6031_C6_TS_NVR_RATE_SET(init->Param.CR6.TS_NVR_RATE);
	init->CR[6]	|= AS6031_C6_HIDDEN_25_24_SET(init->Param.CR6.HIDDEN_25_24);
	init->CR[6]	|= AS6031_C6_HIDDEN_30_26_SET(init->Param.CR6.HIDDEN_30_26);
	init->CR[6]	|= AS6031_C6_TS_CST_MODE_SET(init->Param.CR6.TS_CST_MODE);
	/* Parameter for CR[7] */
	init->CR[7]	= 0;// Clearing the register
	init->CR[7]	|= AS6031_C7_TM_RATE_SET(init->Param.CR7.TM_RATE);
	init->CR[7]	|= AS6031_C7_TPM_PAUSE_SET(init->Param.CR7.TPM_PAUSE);
	init->CR[7]	|= AS6031_C7_TM_MODE_SET(init->Param.CR7.TM_MODE);
	init->CR[7]	|= AS6031_C7_HIDDEN_16_16_SET(init->Param.CR7.HIDDEN_16_16);
	init->CR[7]	|= AS6031_C7_TPM_PORT_MODE_SET(init->Param.CR7.TPM_PORT_MODE);
	init->CR[7]	|= AS6031_C7_TM_PORT_ORDER_SET(init->Param.CR7.TM_PORT_ORDER);
	init->CR[7]	|= AS6031_C7_TPM_CLOAD_TRIM_SET(init->Param.CR7.TPM_CLOAD_TRIM);
	init->CR[7]	|= AS6031_C7_TPM_CYCLE_SEL_SET(init->Param.CR7.TPM_CYCLE_SEL);
	init->CR[7]	|= AS6031_C7_TPM_FAKE_NO_SET(init->Param.CR7.TPM_FAKE_NO);
	init->CR[7]	|= AS6031_C7_HIDDEN_31_24_SET(init->Param.CR7.HIDDEN_31_24);
	/* Parameter for CR[8] */
	init->CR[8]	= 0;// Clearing the register
	init->CR[8]	|= AS6031_C8_USM_PAUSE_SET(init->Param.CR8.USM_PAUSE);
	init->CR[8]	|= AS6031_C8_HIDDEN_3_3_SET(init->Param.CR8.HIDDEN_3_3);
	init->CR[8]	|= AS6031_C8_USM_DIR_MODE_SET(init->Param.CR8.USM_DIR_MODE);
	init->CR[8]	|= AS6031_C8_USM_NOISE_MASK_WIN_SET(init->Param.CR8.USM_NOISE_MASK_WIN);
	init->CR[8]	|= AS6031_C8_USM_TO_SET(init->Param.CR8.USM_TO);
	init->CR[8]	|= AS6031_C8_HIDDEN_18_18_SET(init->Param.CR8.HIDDEN_18_18);
	init->CR[8]	|= AS6031_C8_USM_RLS_MODE_SET(init->Param.CR8.USM_RLS_MODE);
	init->CR[8]	|= AS6031_C8_ZCC_RATE_SET(init->Param.CR8.ZCC_RATE);
	init->CR[8]	|= AS6031_C8_HIDDEN_31_24_SET(init->Param.CR8.HIDDEN_31_24);
	/* Parameter for CR[9] */
	init->CR[9]	= 0;// Clearing the register
	init->CR[9]	|= AS6031_C9_FBG_CLK_DIV_SET(init->Param.CR9.FBG_CLK_DIV);
	init->CR[9]	|= AS6031_C9_FBG_MODE_SET(init->Param.CR9.FBG_MODE);
	init->CR[9]	|= AS6031_C9_FBG_PHASE_INS_SET(init->Param.CR9.FBG_PHASE_INS);
	init->CR[9]	|= AS6031_C9_FBG_BURST_PRE_SET(init->Param.CR9.FBG_BURST_PRE);
	init->CR[9]	|= AS6031_C9_FBG_BURST_POST_SET(init->Param.CR9.FBG_BURST_POST);
	init->CR[9]	|= AS6031_C9_HIDDEN_28_28_SET(init->Param.CR9.HIDDEN_28_28);
	init->CR[9]	|= AS6031_C9_HIDDEN_29_29_SET(init->Param.CR9.HIDDEN_29_29);
	init->CR[9]	|= AS6031_C9_TOF_HIT_MODE_SET(init->Param.CR9.TOF_HIT_MODE);
	init->CR[9]	|= AS6031_C9_HIDDEN_31_31_SET(init->Param.CR9.HIDDEN_31_31);
	/* Parameter for CR[10] */
	init->CR[10]	= 0;// Clearing the register
	init->CR[10]	|= AS6031_CA_HIDDEN_0_0_SET(init->Param.CR10.HIDDEN_0_0);
	init->CR[10]	|= AS6031_CA_TOF_HIT_START_SET(init->Param.CR10.TOF_HIT_START);
	init->CR[10]	|= AS6031_CA_TOF_HIT_IGN_SET(init->Param.CR10.TOF_HIT_IGN);
	init->CR[10]	|= AS6031_CA_TOF_HIT_SUM_NO_SET(init->Param.CR10.TOF_HIT_SUM_NO);
	init->CR[10]	|= AS6031_CA_TOF_HIT_END_SET(init->Param.CR10.TOF_HIT_END);
	init->CR[10]	|= AS6031_CA_HIDDEN_21_20_SET(init->Param.CR10.HIDDEN_21_20);
	init->CR[10]	|= AS6031_CA_TOF_EDGE_MODE_SET(init->Param.CR10.TOF_EDGE_MODE);
	init->CR[10]	|= AS6031_CA_TOF_RATE_INIT_SET(init->Param.CR10.TOF_RATE_INIT);
	init->CR[10]	|= AS6031_CA_NOT_USED_31_30_SET(init->Param.CR10.NOT_USED_31_30);
	/* Parameter for CR[11] */
	init->CR[11]	= 0;// Clearing the register
	init->CR[11]	|= AS6031_CB_AM_RATE_SET(init->Param.CR11.AM_RATE);
	init->CR[11]	|= AS6031_CB_HIDEN_3_3_SET(init->Param.CR11.HIDEN_3_3);
	init->CR[11]	|= AS6031_CB_AM_PD_END_SET(init->Param.CR11.AM_PD_END);
	init->CR[11]	|= AS6031_CB_HIDDEN_11_9_SET(init->Param.CR11.HIDDEN_11_9);
	init->CR[11]	|= AS6031_CB_AMC_RATE_SET(init->Param.CR11.AMC_RATE);
	init->CR[11]	|= AS6031_CB_PWD_EN_SET(init->Param.CR11.PWD_EN);
	init->CR[11]	|= AS6031_CB_PGA_TRIM_SET(init->Param.CR11.PGA_TRIM);
	init->CR[11]	|= AS6031_CB_HIDDEN_19_19_SET(init->Param.CR11.HIDDEN_19_19);
	init->CR[11]	|= AS6031_CB_PGA_EN_MODE_SET(init->Param.CR11.PGA_EN_MODE);
	init->CR[11]	|= AS6031_CB_PGA_MODE_SET(init->Param.CR11.PGA_MODE);
	init->CR[11]	|= AS6031_CB_HIDDEN_22_22_SET(init->Param.CR11.HIDDEN_22_22);
	init->CR[11]	|= AS6031_CB_AM_PD_START_MODE_SET(init->Param.CR11.AM_PD_START_MODE);
	init->CR[11]	|= AS6031_CB_ZCD_FHL_INIT_SET(init->Param.CR11.ZCD_FHL_INIT);
	/* Parameter for CR[12] */
	init->CR[12]	= 0;// Clearing the register
	init->CR[12]	|= AS6031_CC_TRIM1_SET(init->Param.CR12.TRIM1);
	/* Parameter for CR[13] */
	init->CR[13]	= 0;// Clearing the register
	init->CR[13]	|= AS6031_CD_TRIM2_SET(init->Param.CR13.TRIM2);
	/* Parameter for CR[14] */
	init->CR[14]	= 0;// Clearing the register
	init->CR[14]	|= AS6031_CE_TRIM3_SET(init->Param.CR14.TRIM3);
	/* Parameter for CR[15] */
	init->CR[15]	= 0;// Clearing the register
	init->CR[15]	|= AS6031_D0_TOF_RATE_SET(init->Param.CR15.TOF_RATE);
	init->CR[15]	|= AS6031_D0_NOT_USED_31_6_SET(init->Param.CR15.NOT_USED_31_6);
	/* Parameter for CR[16] */
	init->CR[16]	= 0;// Clearing the register
	init->CR[16]	|= AS6031_D1_USM_RLS_DLY_U_SET(init->Param.CR16.USM_RLS_DLY_U);
	init->CR[16]	|= AS6031_D1_NOT_USED_31_19_SET(init->Param.CR16.NOT_USED_31_19);
	/* Parameter for CR[17] */
	init->CR[17]	= 0;// Clearing the register
	init->CR[17]	|= AS6031_D2_USM_RLS_DLY_D_SET(init->Param.CR17.USM_RLS_DLY_D);
	init->CR[17]	|= AS6031_D2_NOT_USED_31_19_SET(init->Param.CR17.NOT_USED_31_19);
	/* Parameter for CR[18] */
	init->CR[18]	= 0;// Clearing the register
	init->CR[18]	|= AS6031_DA_ZCD_FHL_U_SET(init->Param.CR18.ZCD_FHL_U);
	init->CR[18]	|= AS6031_DA_NOT_USED_31_8_SET(init->Param.CR18.NOT_USED_31_8);
	/* Parameter for CR[19] */
	init->CR[19]	= 0;// Clearing the register
	init->CR[19]	|= AS6031_DB_ZCD_FHL_D_SET(init->Param.CR19.ZCD_FHL_D);
	init->CR[19]	|= AS6031_DB_NOT_USED_31_8_SET(init->Param.CR19.NOT_USED_31_8);
}
/**
* @}
*/

/**
  * @brief  Handle initialization of configuration.
  * @param  init pointer to a AS6031_InitTypeDef structure that contains
  *               the configuration information for the specified device.
  * @param  array pointer to declarated configuration register for the specified device.
  * @retval None
  */
void AS6031_Init_CFG(AS6031_InitTypeDef* init, __AS6031_CFG_Declaration* array)  {
	uint8_t idx;
	/* Update content of CR for external usage */
	for (idx = 0; idx <= __AS6031_CFG_Array_Size; idx++) {
		init->CR[idx] = array[idx];
	}

	/* Update Parameter */
	AS6031_Update_Param(init);

}
/**
* @}
*/

/**
* @}
*/


#endif /* INC_AS6031_CODING_H_ */
