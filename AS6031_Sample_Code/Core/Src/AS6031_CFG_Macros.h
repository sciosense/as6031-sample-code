/*
 * AS6031_CFG_Macros.h
 *
 *  Created on: 14.11.2023
 *      Author: Matthias Hainz
 */

#ifndef INC_AS6031_CFG_MACROS_H_
#define INC_AS6031_CFG_MACROS_H_

/* Exported macros -----------------------------------------------------------*/
/** @defgroup _Exported_Macros  Exported Macros"
  * @{
  */

/** @defgroup AS6031_C0 register
* @{
*/
#define AS6031_C0_WS_DIS_SET(__Val__)                	(((__Val__) << AS6031_C0_WS_DIS_Pos) & AS6031_C0_WS_DIS_Msk)		/*!< Default = 0x48DBA399 */
/**
* @}
*/

/** @defgroup AS6031_C1 register
* @{
*/
#define AS6031_C1_PI_TPW_SET(__Val__)                	(((__Val__) << AS6031_C1_PI_TPW_Pos) & AS6031_C1_PI_TPW_Msk)		/*!< Default = 0x0 */
#define AS6031_C1_PI_EN_SET(__Val__)                 	(((__Val__) << AS6031_C1_PI_EN_Pos) & AS6031_C1_PI_EN_Msk)		/*!< Default = 0x0 */
#define AS6031_C1_PI_OUT_MODE_SET(__Val__)           	(((__Val__) << AS6031_C1_PI_OUT_MODE_Pos) & AS6031_C1_PI_OUT_MODE_Msk)		/*!< Default = 0x0 */
#define AS6031_C1_PI_UPD_MODE_SET(__Val__)           	(((__Val__) << AS6031_C1_PI_UPD_MODE_Pos) & AS6031_C1_PI_UPD_MODE_Msk)		/*!< Default = 0x0 */
#define AS6031_C1_HIDDEN_11_11_SET(__Val__)          	(((__Val__) << AS6031_C1_HIDDEN_11_11_Pos) & AS6031_C1_HIDDEN_11_11_Msk)		/*!< Default = 0x0 */
#define AS6031_C1_I2C_MODE_SET(__Val__)              	(((__Val__) << AS6031_C1_I2C_MODE_Pos) & AS6031_C1_I2C_MODE_Msk)		/*!< Default = 0x0 */
#define AS6031_C1_I2C_ADR_SET(__Val__)               	(((__Val__) << AS6031_C1_I2C_ADR_Pos) & AS6031_C1_I2C_ADR_Msk)		/*!< Default = 0x0 */
#define AS6031_C1_HIDDEN_21_21_SET(__Val__)          	(((__Val__) << AS6031_C1_HIDDEN_21_21_Pos) & AS6031_C1_HIDDEN_21_21_Msk)		/*!< Default = 0x0 */
#define AS6031_C1_SPI_INPORT_CFG_SET(__Val__)        	(((__Val__) << AS6031_C1_SPI_INPORT_CFG_Pos) & AS6031_C1_SPI_INPORT_CFG_Msk)		/*!< Default = 0x3 */
#define AS6031_C1_NOT_USED_31_24_SET(__Val__)        	(((__Val__) << AS6031_C1_NOT_USED_31_24_Pos) & AS6031_C1_NOT_USED_31_24_Msk)		/*!< Default = 0x0 */
/**
* @}
*/

/** @defgroup AS6031_C2 register
* @{
*/
#define AS6031_C2_GP0_DIR_SET(__Val__)               	(((__Val__) << AS6031_C2_GP0_DIR_Pos) & AS6031_C2_GP0_DIR_Msk)		/*!< Default = 0x0 */
#define AS6031_C2_GP0_SEL_SET(__Val__)               	(((__Val__) << AS6031_C2_GP0_SEL_Pos) & AS6031_C2_GP0_SEL_Msk)		/*!< Default = 0x0 */
#define AS6031_C2_GP1_DIR_SET(__Val__)               	(((__Val__) << AS6031_C2_GP1_DIR_Pos) & AS6031_C2_GP1_DIR_Msk)		/*!< Default = 0x0 */
#define AS6031_C2_GP1_SEL_SET(__Val__)               	(((__Val__) << AS6031_C2_GP1_SEL_Pos) & AS6031_C2_GP1_SEL_Msk)		/*!< Default = 0x0 */
#define AS6031_C2_GP2_DIR_SET(__Val__)               	(((__Val__) << AS6031_C2_GP2_DIR_Pos) & AS6031_C2_GP2_DIR_Msk)		/*!< Default = 0x0 */
#define AS6031_C2_GP2_SEL_SET(__Val__)               	(((__Val__) << AS6031_C2_GP2_SEL_Pos) & AS6031_C2_GP2_SEL_Msk)		/*!< Default = 0x0 */
#define AS6031_C2_GP3_DIR_SET(__Val__)               	(((__Val__) << AS6031_C2_GP3_DIR_Pos) & AS6031_C2_GP3_DIR_Msk)		/*!< Default = 0x0 */
#define AS6031_C2_GP3_SEL_SET(__Val__)               	(((__Val__) << AS6031_C2_GP3_SEL_Pos) & AS6031_C2_GP3_SEL_Msk)		/*!< Default = 0x0 */
#define AS6031_C2_GP4_DIR_SET(__Val__)               	(((__Val__) << AS6031_C2_GP4_DIR_Pos) & AS6031_C2_GP4_DIR_Msk)		/*!< Default = 0x0 */
#define AS6031_C2_GP4_SEL_SET(__Val__)               	(((__Val__) << AS6031_C2_GP4_SEL_Pos) & AS6031_C2_GP4_SEL_Msk)		/*!< Default = 0x0 */
#define AS6031_C2_GP5_DIR_SET(__Val__)               	(((__Val__) << AS6031_C2_GP5_DIR_Pos) & AS6031_C2_GP5_DIR_Msk)		/*!< Default = 0x0 */
#define AS6031_C2_GP5_SEL_SET(__Val__)               	(((__Val__) << AS6031_C2_GP5_SEL_Pos) & AS6031_C2_GP5_SEL_Msk)		/*!< Default = 0x0 */
#define AS6031_C2_NOT_USED_31_24_SET(__Val__)        	(((__Val__) << AS6031_C2_NOT_USED_31_24_Pos) & AS6031_C2_NOT_USED_31_24_Msk)		/*!< Default = 0x0 */
/**
* @}
*/

/** @defgroup AS6031_C3 register
* @{
*/
#define AS6031_C3_USM_OPT_SET(__Val__)               	(((__Val__) << AS6031_C3_USM_OPT_Pos) & AS6031_C3_USM_OPT_Msk)		/*!< Default = 0x01 */
#define AS6031_C3_NOT_USED_31_5_SET(__Val__)         	(((__Val__) << AS6031_C3_NOT_USED_31_5_Pos) & AS6031_C3_NOT_USED_31_5_Msk)		/*!< Default = 0x0 */
/**
* @}
*/

/** @defgroup AS6031_C4 register
* @{
*/
#define AS6031_C4_EF_EN_TDC_TMO_SET(__Val__)         	(((__Val__) << AS6031_C4_EF_EN_TDC_TMO_Pos) & AS6031_C4_EF_EN_TDC_TMO_Msk)		/*!< Default = 0x0 */
#define AS6031_C4_EF_EN_TOF_TMO_SET(__Val__)         	(((__Val__) << AS6031_C4_EF_EN_TOF_TMO_Pos) & AS6031_C4_EF_EN_TOF_TMO_Msk)		/*!< Default = 0x0 */
#define AS6031_C4_EF_EN_AM_TMO_SET(__Val__)          	(((__Val__) << AS6031_C4_EF_EN_AM_TMO_Pos) & AS6031_C4_EF_EN_AM_TMO_Msk)		/*!< Default = 0x0 */
#define AS6031_C4_EF_EN_TM_OC_SET(__Val__)           	(((__Val__) << AS6031_C4_EF_EN_TM_OC_Pos) & AS6031_C4_EF_EN_TM_OC_Msk)		/*!< Default = 0x0 */
#define AS6031_C4_EF_EN_TM_SC_SET(__Val__)           	(((__Val__) << AS6031_C4_EF_EN_TM_SC_Pos) & AS6031_C4_EF_EN_TM_SC_Msk)		/*!< Default = 0x0 */
#define AS6031_C4_EF_EN_ZCC_ERR_SET(__Val__)         	(((__Val__) << AS6031_C4_EF_EN_ZCC_ERR_Pos) & AS6031_C4_EF_EN_ZCC_ERR_Msk)		/*!< Default = 0x0 */
#define AS6031_C4_EF_EN_LBD_ERR_SET(__Val__)         	(((__Val__) << AS6031_C4_EF_EN_LBD_ERR_Pos) & AS6031_C4_EF_EN_LBD_ERR_Msk)		/*!< Default = 0x0 */
#define AS6031_C4_EF_EN_USM_SQC_TMO_SET(__Val__)     	(((__Val__) << AS6031_C4_EF_EN_USM_SQC_TMO_Pos) & AS6031_C4_EF_EN_USM_SQC_TMO_Msk)		/*!< Default = 0x0 */
#define AS6031_C4_EF_EN_TM_SQC_TMO_SET(__Val__)      	(((__Val__) << AS6031_C4_EF_EN_TM_SQC_TMO_Pos) & AS6031_C4_EF_EN_TM_SQC_TMO_Msk)		/*!< Default = 0x0 */
#define AS6031_C4_EF_EN_TSQ_TMO_SET(__Val__)         	(((__Val__) << AS6031_C4_EF_EN_TSQ_TMO_Pos) & AS6031_C4_EF_EN_TSQ_TMO_Msk)		/*!< Default = 0x0 */
#define AS6031_C4_EF_EN_I2C_ACK_ERR_SET(__Val__)     	(((__Val__) << AS6031_C4_EF_EN_I2C_ACK_ERR_Pos) & AS6031_C4_EF_EN_I2C_ACK_ERR_Msk)		/*!< Default = 0x0 */
#define AS6031_C4_HIDDEN_11_11_SET(__Val__)          	(((__Val__) << AS6031_C4_HIDDEN_11_11_Pos) & AS6031_C4_HIDDEN_11_11_Msk)		/*!< Default = 0x0 */
#define AS6031_C4_EF_EN_NVM_FWCU_ERR_SET(__Val__)    	(((__Val__) << AS6031_C4_EF_EN_NVM_FWCU_ERR_Pos) & AS6031_C4_EF_EN_NVM_FWCU_ERR_Msk)		/*!< Default = 0x0 */
#define AS6031_C4_EF_EN_NVM_FWDU_ERR_SET(__Val__)    	(((__Val__) << AS6031_C4_EF_EN_NVM_FWDU_ERR_Pos) & AS6031_C4_EF_EN_NVM_FWDU_ERR_Msk)		/*!< Default = 0x0 */
#define AS6031_C4_EF_EN_NVM_FWA_ERR_SET(__Val__)     	(((__Val__) << AS6031_C4_EF_EN_NVM_FWA_ERR_Pos) & AS6031_C4_EF_EN_NVM_FWA_ERR_Msk)		/*!< Default = 0x0 */
#define AS6031_C4_EF_EN_CPU_ERR_SET(__Val__)         	(((__Val__) << AS6031_C4_EF_EN_CPU_ERR_Pos) & AS6031_C4_EF_EN_CPU_ERR_Msk)		/*!< Default = 0x0 */
#define AS6031_C4_IRQ_EN_TSQ_FNS_SET(__Val__)        	(((__Val__) << AS6031_C4_IRQ_EN_TSQ_FNS_Pos) & AS6031_C4_IRQ_EN_TSQ_FNS_Msk)		/*!< Default = 0x0 */
#define AS6031_C4_IRQ_EN_TRANS_FNS_SET(__Val__)      	(((__Val__) << AS6031_C4_IRQ_EN_TRANS_FNS_Pos) & AS6031_C4_IRQ_EN_TRANS_FNS_Msk)		/*!< Default = 0x0 */
#define AS6031_C4_IRQ_EN_BLD_FNS_SET(__Val__)        	(((__Val__) << AS6031_C4_IRQ_EN_BLD_FNS_Pos) & AS6031_C4_IRQ_EN_BLD_FNS_Msk)		/*!< Default = 0x0 */
#define AS6031_C4_IRQ_EN_CHKSUM_FNS_SET(__Val__)     	(((__Val__) << AS6031_C4_IRQ_EN_CHKSUM_FNS_Pos) & AS6031_C4_IRQ_EN_CHKSUM_FNS_Msk)		/*!< Default = 0x0 */
#define AS6031_C4_IRQ_EN_FW_S_SET(__Val__)           	(((__Val__) << AS6031_C4_IRQ_EN_FW_S_Pos) & AS6031_C4_IRQ_EN_FW_S_Msk)		/*!< Default = 0x0 */
#define AS6031_C4_IRQ_EN_TSQ_TO_SET(__Val__)         	(((__Val__) << AS6031_C4_IRQ_EN_TSQ_TO_Pos) & AS6031_C4_IRQ_EN_TSQ_TO_Msk)		/*!< Default = 0x0 */
#define AS6031_C4_HIDDEN_22_22_SET(__Val__)          	(((__Val__) << AS6031_C4_HIDDEN_22_22_Pos) & AS6031_C4_HIDDEN_22_22_Msk)		/*!< Default = 0x0 */
#define AS6031_C4_IRQ_EN_ERR_FLAG_SET(__Val__)       	(((__Val__) << AS6031_C4_IRQ_EN_ERR_FLAG_Pos) & AS6031_C4_IRQ_EN_ERR_FLAG_Msk)		/*!< Default = 0x0 */
#define AS6031_C4_HIDDEN_26_24_SET(__Val__)          	(((__Val__) << AS6031_C4_HIDDEN_26_24_Pos) & AS6031_C4_HIDDEN_26_24_Msk)		/*!< Default = 0x0 */
#define AS6031_C4_CPU_REQ_EN_GPH_SET(__Val__)        	(((__Val__) << AS6031_C4_CPU_REQ_EN_GPH_Pos) & AS6031_C4_CPU_REQ_EN_GPH_Msk)		/*!< Default = 0x0 */
#define AS6031_C4_TS_GPT_RATE_SET(__Val__)           	(((__Val__) << AS6031_C4_TS_GPT_RATE_Pos) & AS6031_C4_TS_GPT_RATE_Msk)		/*!< Default = 0x0 */
/**
* @}
*/

/** @defgroup AS6031_C5 register
* @{
*/
#define AS6031_C5_HSC_DIV_MODE_SET(__Val__)          	(((__Val__) << AS6031_C5_HSC_DIV_MODE_Pos) & AS6031_C5_HSC_DIV_MODE_Msk)		/*!< Default = 0x0 */
#define AS6031_C5_NOT_USED_1_1_SET(__Val__)          	(((__Val__) << AS6031_C5_NOT_USED_1_1_Pos) & AS6031_C5_NOT_USED_1_1_Msk)		/*!< Default = 0x0 */
#define AS6031_C5_HSC_CLK_ST_SET(__Val__)            	(((__Val__) << AS6031_C5_HSC_CLK_ST_Pos) & AS6031_C5_HSC_CLK_ST_Msk)		/*!< Default = 0x1 */
#define AS6031_C5_HIDDEN_7_5_SET(__Val__)            	(((__Val__) << AS6031_C5_HIDDEN_7_5_Pos) & AS6031_C5_HIDDEN_7_5_Msk)		/*!< Default = 0x1 */
#define AS6031_C5_HSC_DIV_SET(__Val__)               	(((__Val__) << AS6031_C5_HSC_DIV_Pos) & AS6031_C5_HSC_DIV_Msk)		/*!< Default = 0x1 */
#define AS6031_C5_HSC_RATE_SET(__Val__)              	(((__Val__) << AS6031_C5_HSC_RATE_Pos) & AS6031_C5_HSC_RATE_Msk)		/*!< Default = 0x0 */
#define AS6031_C5_HSC_MODE_CPU_SET(__Val__)          	(((__Val__) << AS6031_C5_HSC_MODE_CPU_Pos) & AS6031_C5_HSC_MODE_CPU_Msk)		/*!< Default = 0x0 */
#define AS6031_C5_VM_RATE_SET(__Val__)               	(((__Val__) << AS6031_C5_VM_RATE_Pos) & AS6031_C5_VM_RATE_Msk)		/*!< Default = 0x0 */
#define AS6031_C5_LBD_TH_SET(__Val__)                	(((__Val__) << AS6031_C5_LBD_TH_Pos) & AS6031_C5_LBD_TH_Msk)		/*!< Default = 0x0 */
#define AS6031_C5_TSV_UPD_MODE_SET(__Val__)          	(((__Val__) << AS6031_C5_TSV_UPD_MODE_Pos) & AS6031_C5_TSV_UPD_MODE_Msk)		/*!< Default = 0x0 */
#define AS6031_C5_BF_SEL_SET(__Val__)                	(((__Val__) << AS6031_C5_BF_SEL_Pos) & AS6031_C5_BF_SEL_Msk)		/*!< Default = 0x0 */
#define AS6031_C5_HIDDEN_27_24_SET(__Val__)          	(((__Val__) << AS6031_C5_HIDDEN_27_24_Pos) & AS6031_C5_HIDDEN_27_24_Msk)		/*!< Default = 0x0 */
#define AS6031_C5_HIDDEN_28_28_SET(__Val__)          	(((__Val__) << AS6031_C5_HIDDEN_28_28_Pos) & AS6031_C5_HIDDEN_28_28_Msk)		/*!< Default = 0x0 */
#define AS6031_C5_TI_PATH_SEL_SET(__Val__)           	(((__Val__) << AS6031_C5_TI_PATH_SEL_Pos) & AS6031_C5_TI_PATH_SEL_Msk)		/*!< Default = 0x0 */
#define AS6031_C5_HIDDEN_31_31_SET(__Val__)          	(((__Val__) << AS6031_C5_HIDDEN_31_31_Pos) & AS6031_C5_HIDDEN_31_31_Msk)		/*!< Default = 0x0 */
/**
* @}
*/

/** @defgroup AS6031_C6 register
* @{
*/
#define AS6031_C6_MR_CT_SET(__Val__)                 	(((__Val__) << AS6031_C6_MR_CT_Pos) & AS6031_C6_MR_CT_Msk)		/*!< Default = 0x0 */
#define AS6031_C6_TS_MCM_SET(__Val__)                	(((__Val__) << AS6031_C6_TS_MCM_Pos) & AS6031_C6_TS_MCM_Msk)		/*!< Default = 0x0 */
#define AS6031_C6_TS_PP_T_EN_SET(__Val__)            	(((__Val__) << AS6031_C6_TS_PP_T_EN_Pos) & AS6031_C6_TS_PP_T_EN_Msk)		/*!< Default = 0x0 */
#define AS6031_C6_TS_PP_F_EN_SET(__Val__)            	(((__Val__) << AS6031_C6_TS_PP_F_EN_Pos) & AS6031_C6_TS_PP_F_EN_Msk)		/*!< Default = 0x0 */
#define AS6031_C6_TS_PP_MODE_SET(__Val__)            	(((__Val__) << AS6031_C6_TS_PP_MODE_Pos) & AS6031_C6_TS_PP_MODE_Msk)		/*!< Default = 0x0 */
#define AS6031_C6_TS_CST_RATE_SET(__Val__)           	(((__Val__) << AS6031_C6_TS_CST_RATE_Pos) & AS6031_C6_TS_CST_RATE_Msk)		/*!< Default = 0x0 */
#define AS6031_C6_TS_NVR_RATE_SET(__Val__)           	(((__Val__) << AS6031_C6_TS_NVR_RATE_Pos) & AS6031_C6_TS_NVR_RATE_Msk)		/*!< Default = 0x0 */
#define AS6031_C6_HIDDEN_25_24_SET(__Val__)          	(((__Val__) << AS6031_C6_HIDDEN_25_24_Pos) & AS6031_C6_HIDDEN_25_24_Msk)		/*!< Default = 0x1 */
#define AS6031_C6_HIDDEN_30_26_SET(__Val__)          	(((__Val__) << AS6031_C6_HIDDEN_30_26_Pos) & AS6031_C6_HIDDEN_30_26_Msk)		/*!< Default = 0x00 */
#define AS6031_C6_TS_CST_MODE_SET(__Val__)           	(((__Val__) << AS6031_C6_TS_CST_MODE_Pos) & AS6031_C6_TS_CST_MODE_Msk)		/*!< Default = 0x0 */
/**
* @}
*/

/** @defgroup AS6031_C7 register
* @{
*/
#define AS6031_C7_TM_RATE_SET(__Val__)               	(((__Val__) << AS6031_C7_TM_RATE_Pos) & AS6031_C7_TM_RATE_Msk)		/*!< Default = 0x0 */
#define AS6031_C7_TPM_PAUSE_SET(__Val__)             	(((__Val__) << AS6031_C7_TPM_PAUSE_Pos) & AS6031_C7_TPM_PAUSE_Msk)		/*!< Default = 0x0 */
#define AS6031_C7_TM_MODE_SET(__Val__)               	(((__Val__) << AS6031_C7_TM_MODE_Pos) & AS6031_C7_TM_MODE_Msk)		/*!< Default = 0x0 */
#define AS6031_C7_HIDDEN_16_16_SET(__Val__)          	(((__Val__) << AS6031_C7_HIDDEN_16_16_Pos) & AS6031_C7_HIDDEN_16_16_Msk)		/*!< Default = 0x0 */
#define AS6031_C7_TPM_PORT_MODE_SET(__Val__)         	(((__Val__) << AS6031_C7_TPM_PORT_MODE_Pos) & AS6031_C7_TPM_PORT_MODE_Msk)		/*!< Default = 0x0 */
#define AS6031_C7_TM_PORT_ORDER_SET(__Val__)         	(((__Val__) << AS6031_C7_TM_PORT_ORDER_Pos) & AS6031_C7_TM_PORT_ORDER_Msk)		/*!< Default = 0x2 */
#define AS6031_C7_TPM_CLOAD_TRIM_SET(__Val__)        	(((__Val__) << AS6031_C7_TPM_CLOAD_TRIM_Pos) & AS6031_C7_TPM_CLOAD_TRIM_Msk)		/*!< Default = 0x2 */
#define AS6031_C7_TPM_CYCLE_SEL_SET(__Val__)         	(((__Val__) << AS6031_C7_TPM_CYCLE_SEL_Pos) & AS6031_C7_TPM_CYCLE_SEL_Msk)		/*!< Default = 0x0 */
#define AS6031_C7_TPM_FAKE_NO_SET(__Val__)           	(((__Val__) << AS6031_C7_TPM_FAKE_NO_Pos) & AS6031_C7_TPM_FAKE_NO_Msk)		/*!< Default = 0x0 */
#define AS6031_C7_HIDDEN_31_24_SET(__Val__)          	(((__Val__) << AS6031_C7_HIDDEN_31_24_Pos) & AS6031_C7_HIDDEN_31_24_Msk)		/*!< Default = 0x00 */
/**
* @}
*/

/** @defgroup AS6031_C8 register
* @{
*/
#define AS6031_C8_USM_PAUSE_SET(__Val__)             	(((__Val__) << AS6031_C8_USM_PAUSE_Pos) & AS6031_C8_USM_PAUSE_Msk)		/*!< Default = 0x0 */
#define AS6031_C8_HIDDEN_3_3_SET(__Val__)            	(((__Val__) << AS6031_C8_HIDDEN_3_3_Pos) & AS6031_C8_HIDDEN_3_3_Msk)		/*!< Default = 0x0 */
#define AS6031_C8_USM_DIR_MODE_SET(__Val__)          	(((__Val__) << AS6031_C8_USM_DIR_MODE_Pos) & AS6031_C8_USM_DIR_MODE_Msk)		/*!< Default = 0x0 */
#define AS6031_C8_USM_NOISE_MASK_WIN_SET(__Val__)    	(((__Val__) << AS6031_C8_USM_NOISE_MASK_WIN_Pos) & AS6031_C8_USM_NOISE_MASK_WIN_Msk)		/*!< Default = 0x0 */
#define AS6031_C8_USM_TO_SET(__Val__)                	(((__Val__) << AS6031_C8_USM_TO_Pos) & AS6031_C8_USM_TO_Msk)		/*!< Default = 0x0 */
#define AS6031_C8_HIDDEN_18_18_SET(__Val__)          	(((__Val__) << AS6031_C8_HIDDEN_18_18_Pos) & AS6031_C8_HIDDEN_18_18_Msk)		/*!< Default = 0x0 */
#define AS6031_C8_USM_RLS_MODE_SET(__Val__)          	(((__Val__) << AS6031_C8_USM_RLS_MODE_Pos) & AS6031_C8_USM_RLS_MODE_Msk)		/*!< Default = 0x0 */
#define AS6031_C8_ZCC_RATE_SET(__Val__)              	(((__Val__) << AS6031_C8_ZCC_RATE_Pos) & AS6031_C8_ZCC_RATE_Msk)		/*!< Default = 0x0 */
#define AS6031_C8_HIDDEN_31_24_SET(__Val__)          	(((__Val__) << AS6031_C8_HIDDEN_31_24_Pos) & AS6031_C8_HIDDEN_31_24_Msk)		/*!< Default = 0x000 */
/**
* @}
*/

/** @defgroup AS6031_C9 register
* @{
*/
#define AS6031_C9_FBG_CLK_DIV_SET(__Val__)           	(((__Val__) << AS6031_C9_FBG_CLK_DIV_Pos) & AS6031_C9_FBG_CLK_DIV_Msk)		/*!< Default = 0x0 */
#define AS6031_C9_FBG_MODE_SET(__Val__)              	(((__Val__) << AS6031_C9_FBG_MODE_Pos) & AS6031_C9_FBG_MODE_Msk)		/*!< Default = 0x0 */
#define AS6031_C9_FBG_PHASE_INS_SET(__Val__)         	(((__Val__) << AS6031_C9_FBG_PHASE_INS_Pos) & AS6031_C9_FBG_PHASE_INS_Msk)		/*!< Default = 0x0 */
#define AS6031_C9_FBG_BURST_PRE_SET(__Val__)         	(((__Val__) << AS6031_C9_FBG_BURST_PRE_Pos) & AS6031_C9_FBG_BURST_PRE_Msk)		/*!< Default = 0x0 */
#define AS6031_C9_FBG_BURST_POST_SET(__Val__)        	(((__Val__) << AS6031_C9_FBG_BURST_POST_Pos) & AS6031_C9_FBG_BURST_POST_Msk)		/*!< Default = 0x0 */
#define AS6031_C9_HIDDEN_28_28_SET(__Val__)          	(((__Val__) << AS6031_C9_HIDDEN_28_28_Pos) & AS6031_C9_HIDDEN_28_28_Msk)		/*!< Default = 0x0 */
#define AS6031_C9_HIDDEN_29_29_SET(__Val__)          	(((__Val__) << AS6031_C9_HIDDEN_29_29_Pos) & AS6031_C9_HIDDEN_29_29_Msk)		/*!< Default = 0x1 */
#define AS6031_C9_TOF_HIT_MODE_SET(__Val__)          	(((__Val__) << AS6031_C9_TOF_HIT_MODE_Pos) & AS6031_C9_TOF_HIT_MODE_Msk)		/*!< Default = 0x0 */
#define AS6031_C9_HIDDEN_31_31_SET(__Val__)          	(((__Val__) << AS6031_C9_HIDDEN_31_31_Pos) & AS6031_C9_HIDDEN_31_31_Msk)		/*!< Default = 0x0 */
/**
* @}
*/

/** @defgroup AS6031_CA register
* @{
*/
#define AS6031_CA_HIDDEN_0_0_SET(__Val__)            	(((__Val__) << AS6031_CA_HIDDEN_0_0_Pos) & AS6031_CA_HIDDEN_0_0_Msk)		/*!< Default = 0x0 */
#define AS6031_CA_TOF_HIT_START_SET(__Val__)         	(((__Val__) << AS6031_CA_TOF_HIT_START_Pos) & AS6031_CA_TOF_HIT_START_Msk)		/*!< Default = 0x0 */
#define AS6031_CA_TOF_HIT_IGN_SET(__Val__)           	(((__Val__) << AS6031_CA_TOF_HIT_IGN_Pos) & AS6031_CA_TOF_HIT_IGN_Msk)		/*!< Default = 0x0 */
#define AS6031_CA_TOF_HIT_SUM_NO_SET(__Val__)        	(((__Val__) << AS6031_CA_TOF_HIT_SUM_NO_Pos) & AS6031_CA_TOF_HIT_SUM_NO_Msk)		/*!< Default = 0x0 */
#define AS6031_CA_TOF_HIT_END_SET(__Val__)           	(((__Val__) << AS6031_CA_TOF_HIT_END_Pos) & AS6031_CA_TOF_HIT_END_Msk)		/*!< Default = 0x0 */
#define AS6031_CA_HIDDEN_21_20_SET(__Val__)          	(((__Val__) << AS6031_CA_HIDDEN_21_20_Pos) & AS6031_CA_HIDDEN_21_20_Msk)		/*!< Default = 0x0 */
#define AS6031_CA_TOF_EDGE_MODE_SET(__Val__)         	(((__Val__) << AS6031_CA_TOF_EDGE_MODE_Pos) & AS6031_CA_TOF_EDGE_MODE_Msk)		/*!< Default = 0x0 */
#define AS6031_CA_TOF_RATE_INIT_SET(__Val__)         	(((__Val__) << AS6031_CA_TOF_RATE_INIT_Pos) & AS6031_CA_TOF_RATE_INIT_Msk)		/*!< Default = 0x0 */
#define AS6031_CA_NOT_USED_31_30_SET(__Val__)        	(((__Val__) << AS6031_CA_NOT_USED_31_30_Pos) & AS6031_CA_NOT_USED_31_30_Msk)		/*!< Default = 0x0 */
/**
* @}
*/

/** @defgroup AS6031_CB register
* @{
*/
#define AS6031_CB_AM_RATE_SET(__Val__)               	(((__Val__) << AS6031_CB_AM_RATE_Pos) & AS6031_CB_AM_RATE_Msk)		/*!< Default = 0x0 */
#define AS6031_CB_HIDEN_3_3_SET(__Val__)             	(((__Val__) << AS6031_CB_HIDEN_3_3_Pos) & AS6031_CB_HIDEN_3_3_Msk)		/*!< Default = 0x0 */
#define AS6031_CB_AM_PD_END_SET(__Val__)             	(((__Val__) << AS6031_CB_AM_PD_END_Pos) & AS6031_CB_AM_PD_END_Msk)		/*!< Default = 0x0 */
#define AS6031_CB_HIDDEN_11_9_SET(__Val__)           	(((__Val__) << AS6031_CB_HIDDEN_11_9_Pos) & AS6031_CB_HIDDEN_11_9_Msk)		/*!< Default = 0x7 */
#define AS6031_CB_AMC_RATE_SET(__Val__)              	(((__Val__) << AS6031_CB_AMC_RATE_Pos) & AS6031_CB_AMC_RATE_Msk)		/*!< Default = 0x0 */
#define AS6031_CB_PWD_EN_SET(__Val__)                	(((__Val__) << AS6031_CB_PWD_EN_Pos) & AS6031_CB_PWD_EN_Msk)		/*!< Default = 0x0 */
#define AS6031_CB_PGA_TRIM_SET(__Val__)              	(((__Val__) << AS6031_CB_PGA_TRIM_Pos) & AS6031_CB_PGA_TRIM_Msk)		/*!< Default = 0x0 */
#define AS6031_CB_HIDDEN_19_19_SET(__Val__)          	(((__Val__) << AS6031_CB_HIDDEN_19_19_Pos) & AS6031_CB_HIDDEN_19_19_Msk)		/*!< Default = 0x0 */
#define AS6031_CB_PGA_EN_MODE_SET(__Val__)           	(((__Val__) << AS6031_CB_PGA_EN_MODE_Pos) & AS6031_CB_PGA_EN_MODE_Msk)		/*!< Default = 0x0 */
#define AS6031_CB_PGA_MODE_SET(__Val__)              	(((__Val__) << AS6031_CB_PGA_MODE_Pos) & AS6031_CB_PGA_MODE_Msk)		/*!< Default = 0x0 */
#define AS6031_CB_HIDDEN_22_22_SET(__Val__)          	(((__Val__) << AS6031_CB_HIDDEN_22_22_Pos) & AS6031_CB_HIDDEN_22_22_Msk)		/*!< Default = 0x0 */
#define AS6031_CB_AM_PD_START_MODE_SET(__Val__)      	(((__Val__) << AS6031_CB_AM_PD_START_MODE_Pos) & AS6031_CB_AM_PD_START_MODE_Msk)		/*!< Default = 0x0 */
#define AS6031_CB_ZCD_FHL_INIT_SET(__Val__)          	(((__Val__) << AS6031_CB_ZCD_FHL_INIT_Pos) & AS6031_CB_ZCD_FHL_INIT_Msk)		/*!< Default = 0x0 */
/**
* @}
*/

/** @defgroup AS6031_CC register
* @{
*/
#define AS6031_CC_TRIM1_SET(__Val__)                 	(((__Val__) << AS6031_CC_TRIM1_Pos) & AS6031_CC_TRIM1_Msk)		/*!< Default = 0x94A0C46C */
/**
* @}
*/

/** @defgroup AS6031_CD register
* @{
*/
#define AS6031_CD_TRIM2_SET(__Val__)                 	(((__Val__) << AS6031_CD_TRIM2_Pos) & AS6031_CD_TRIM2_Msk)		/*!< Default = 0x401100C4 */
/**
* @}
*/

/** @defgroup AS6031_CE register
* @{
*/
#define AS6031_CE_TRIM3_SET(__Val__)                 	(((__Val__) << AS6031_CE_TRIM3_Pos) & AS6031_CE_TRIM3_Msk)		/*!< Default = 0x00A7400F */
/**
* @}
*/

/** @defgroup AS6031_D0 register
* @{
*/
#define AS6031_D0_TOF_RATE_SET(__Val__)              	(((__Val__) << AS6031_D0_TOF_RATE_Pos) & AS6031_D0_TOF_RATE_Msk)		/*!< Default = 0x0 */
#define AS6031_D0_NOT_USED_31_6_SET(__Val__)         	(((__Val__) << AS6031_D0_NOT_USED_31_6_Pos) & AS6031_D0_NOT_USED_31_6_Msk)		/*!< Default = 0x0000000 */
/**
* @}
*/

/** @defgroup AS6031_D1 register
* @{
*/
#define AS6031_D1_USM_RLS_DLY_U_SET(__Val__)         	(((__Val__) << AS6031_D1_USM_RLS_DLY_U_Pos) & AS6031_D1_USM_RLS_DLY_U_Msk)		/*!< Default = 0x0 */
#define AS6031_D1_NOT_USED_31_19_SET(__Val__)        	(((__Val__) << AS6031_D1_NOT_USED_31_19_Pos) & AS6031_D1_NOT_USED_31_19_Msk)		/*!< Default = 0x0000 */
/**
* @}
*/

/** @defgroup AS6031_D2 register
* @{
*/
#define AS6031_D2_USM_RLS_DLY_D_SET(__Val__)         	(((__Val__) << AS6031_D2_USM_RLS_DLY_D_Pos) & AS6031_D2_USM_RLS_DLY_D_Msk)		/*!< Default = 0x0 */
#define AS6031_D2_NOT_USED_31_19_SET(__Val__)        	(((__Val__) << AS6031_D2_NOT_USED_31_19_Pos) & AS6031_D2_NOT_USED_31_19_Msk)		/*!< Default = 0x0000 */
/**
* @}
*/

/** @defgroup AS6031_DA register
* @{
*/
#define AS6031_DA_ZCD_FHL_U_SET(__Val__)             	(((__Val__) << AS6031_DA_ZCD_FHL_U_Pos) & AS6031_DA_ZCD_FHL_U_Msk)		/*!< Default = 0x0 */
#define AS6031_DA_NOT_USED_31_8_SET(__Val__)         	(((__Val__) << AS6031_DA_NOT_USED_31_8_Pos) & AS6031_DA_NOT_USED_31_8_Msk)		/*!< Default = 0x000000 */
/**
* @}
*/

/** @defgroup AS6031_DB register
* @{
*/
#define AS6031_DB_ZCD_FHL_D_SET(__Val__)             	(((__Val__) << AS6031_DB_ZCD_FHL_D_Pos) & AS6031_DB_ZCD_FHL_D_Msk)		/*!< Default = 0x0 */
#define AS6031_DB_NOT_USED_31_8_SET(__Val__)         	(((__Val__) << AS6031_DB_NOT_USED_31_8_Pos) & AS6031_DB_NOT_USED_31_8_Msk)		/*!< Default = 0x000000 */
/**
* @}
*/

/**
* @}
*/


#endif /* INC_AS6031_CFG_MACROS_H_ */
