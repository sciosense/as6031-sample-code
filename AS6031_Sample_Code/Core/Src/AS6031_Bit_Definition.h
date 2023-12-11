/*
 * AS6031_Bit_Definition.h
 *
 *  Created on: 14.11.2023
 *      Author: Matthias Hainz
 */

#ifndef INC_AS6031_BIT_DEFINITION_H_
#define INC_AS6031_BIT_DEFINITION_H_

/******************************************************************************/
/*                                                                            */
/*                        UFC AS6031                   */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for AS6031_C0 register  ********************/
#define AS6031_C0_WS_DIS_Pos                	(0U)
#define AS6031_C0_WS_DIS_Msk                	(0xFFFFFFFFUL << AS6031_C0_WS_DIS_Pos)		/*!< 0xFFFFFFFF */
#define AS6031_C0_WS_DIS                		AS6031_C0_WS_DIS_Msk					/*!< WS_DIS[31:0]Code to disable Watchdog */
#define AS6031_C0_WS_DIS_0                		(0x00000001 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_1                		(0x00000002 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_2                		(0x00000004 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_3                		(0x00000008 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_4                		(0x00000010 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_5                		(0x00000020 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_6                		(0x00000040 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_7                		(0x00000080 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_8                		(0x00000100 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_9                		(0x00000200 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_10                		(0x00000400 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_11                		(0x00000800 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_12                		(0x00001000 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_13                		(0x00002000 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_14                		(0x00004000 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_15                		(0x00008000 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_16                		(0x00010000 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_17                		(0x00020000 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_18                		(0x00040000 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_19                		(0x00080000 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_20                		(0x00100000 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_21                		(0x00200000 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_22                		(0x00400000 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_23                		(0x00800000 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_24                		(0x01000000 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_25                		(0x02000000 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_26                		(0x04000000 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_27                		(0x08000000 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_28                		(0x10000000 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_29                		(0x20000000 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_30                		(0x40000000 << AS6031_C0_WS_DIS_Pos)	
#define AS6031_C0_WS_DIS_31                		(0x80000000 << AS6031_C0_WS_DIS_Pos)	

/*******************  Bit definition for AS6031_C1 register  ********************/
#define AS6031_C1_PI_TPW_Pos                	(0U)
#define AS6031_C1_PI_TPW_Msk                	(0xFFUL << AS6031_C1_PI_TPW_Pos)		/*!< 0x000000FF */
#define AS6031_C1_PI_TPW                		AS6031_C1_PI_TPW_Msk					/*!< PI_TPW[7:0]Pulse Interface, Pulse Width */
#define AS6031_C1_PI_TPW_0                		(0x00000001 << AS6031_C1_PI_TPW_Pos)	
#define AS6031_C1_PI_TPW_1                		(0x00000002 << AS6031_C1_PI_TPW_Pos)	
#define AS6031_C1_PI_TPW_2                		(0x00000004 << AS6031_C1_PI_TPW_Pos)	
#define AS6031_C1_PI_TPW_3                		(0x00000008 << AS6031_C1_PI_TPW_Pos)	
#define AS6031_C1_PI_TPW_4                		(0x00000010 << AS6031_C1_PI_TPW_Pos)	
#define AS6031_C1_PI_TPW_5                		(0x00000020 << AS6031_C1_PI_TPW_Pos)	
#define AS6031_C1_PI_TPW_6                		(0x00000040 << AS6031_C1_PI_TPW_Pos)	
#define AS6031_C1_PI_TPW_7                		(0x00000080 << AS6031_C1_PI_TPW_Pos)	
#define AS6031_C1_PI_EN_Pos                 	(8U)
#define AS6031_C1_PI_EN_Msk                 	(0x1UL << AS6031_C1_PI_EN_Pos)		/*!< 0x00000100 */
#define AS6031_C1_PI_EN                 		AS6031_C1_PI_EN_Msk					/*!< Pulse Interface Enable */
#define AS6031_C1_PI_OUT_MODE_Pos           	(9U)
#define AS6031_C1_PI_OUT_MODE_Msk           	(0x1UL << AS6031_C1_PI_OUT_MODE_Pos)		/*!< 0x00000200 */
#define AS6031_C1_PI_OUT_MODE           		AS6031_C1_PI_OUT_MODE_Msk					/*!< Pulse Interface Output Mode */
#define AS6031_C1_PI_UPD_MODE_Pos           	(10U)
#define AS6031_C1_PI_UPD_MODE_Msk           	(0x1UL << AS6031_C1_PI_UPD_MODE_Pos)		/*!< 0x00000400 */
#define AS6031_C1_PI_UPD_MODE           		AS6031_C1_PI_UPD_MODE_Msk					/*!< Pulse Interface Update Mode */
#define AS6031_C1_HIDDEN_11_11_Pos          	(11U)
#define AS6031_C1_HIDDEN_11_11_Msk          	(0x1UL << AS6031_C1_HIDDEN_11_11_Pos)		/*!< 0x00000800 */
#define AS6031_C1_HIDDEN_11_11          		AS6031_C1_HIDDEN_11_11_Msk					/*!< Mandatory setting: b0 */
#define AS6031_C1_I2C_MODE_Pos              	(12U)
#define AS6031_C1_I2C_MODE_Msk              	(0x03UL << AS6031_C1_I2C_MODE_Pos)		/*!< 0x00003000 */
#define AS6031_C1_I2C_MODE              		AS6031_C1_I2C_MODE_Msk					/*!< I2C_MODE[13:12]2-wire master interface mode */
#define AS6031_C1_I2C_MODE_0              		(0x00000001 << AS6031_C1_I2C_MODE_Pos)	
#define AS6031_C1_I2C_MODE_1              		(0x00000002 << AS6031_C1_I2C_MODE_Pos)	
#define AS6031_C1_I2C_ADR_Pos               	(14U)
#define AS6031_C1_I2C_ADR_Msk               	(0x07FUL << AS6031_C1_I2C_ADR_Pos)		/*!< 0x001FC000 */
#define AS6031_C1_I2C_ADR               		AS6031_C1_I2C_ADR_Msk					/*!< I2C_ADR[20:14]2-wire master interface slave address */
#define AS6031_C1_I2C_ADR_0               		(0x00000001 << AS6031_C1_I2C_ADR_Pos)	
#define AS6031_C1_I2C_ADR_1               		(0x00000002 << AS6031_C1_I2C_ADR_Pos)	
#define AS6031_C1_I2C_ADR_2               		(0x00000004 << AS6031_C1_I2C_ADR_Pos)	
#define AS6031_C1_I2C_ADR_3               		(0x00000008 << AS6031_C1_I2C_ADR_Pos)	
#define AS6031_C1_I2C_ADR_4               		(0x00000010 << AS6031_C1_I2C_ADR_Pos)	
#define AS6031_C1_I2C_ADR_5               		(0x00000020 << AS6031_C1_I2C_ADR_Pos)	
#define AS6031_C1_I2C_ADR_6               		(0x00000040 << AS6031_C1_I2C_ADR_Pos)	
#define AS6031_C1_HIDDEN_21_21_Pos          	(21U)
#define AS6031_C1_HIDDEN_21_21_Msk          	(0x1UL << AS6031_C1_HIDDEN_21_21_Pos)		/*!< 0x00200000 */
#define AS6031_C1_HIDDEN_21_21          		AS6031_C1_HIDDEN_21_21_Msk					/*!< Mandatory setting: b0 */
#define AS6031_C1_SPI_INPORT_CFG_Pos        	(22U)
#define AS6031_C1_SPI_INPORT_CFG_Msk        	(0x03UL << AS6031_C1_SPI_INPORT_CFG_Pos)		/*!< 0x00C00000 */
#define AS6031_C1_SPI_INPORT_CFG        		AS6031_C1_SPI_INPORT_CFG_Msk					/*!< SPI_INPORT_CFG[23:22]Configuration of SPI input ports */
#define AS6031_C1_SPI_INPORT_CFG_0        		(0x00000001 << AS6031_C1_SPI_INPORT_CFG_Pos)	
#define AS6031_C1_SPI_INPORT_CFG_1        		(0x00000002 << AS6031_C1_SPI_INPORT_CFG_Pos)	
#define AS6031_C1_NOT_USED_31_24_Pos        	(24U)
#define AS6031_C1_NOT_USED_31_24_Msk        	(0xFFUL << AS6031_C1_NOT_USED_31_24_Pos)		/*!< 0xFF000000 */
#define AS6031_C1_NOT_USED_31_24        		AS6031_C1_NOT_USED_31_24_Msk					/*!< NOT_USED_31_24[31:24]Not used */
#define AS6031_C1_NOT_USED_31_24_0        		(0x00000001 << AS6031_C1_NOT_USED_31_24_Pos)	
#define AS6031_C1_NOT_USED_31_24_1        		(0x00000002 << AS6031_C1_NOT_USED_31_24_Pos)	
#define AS6031_C1_NOT_USED_31_24_2        		(0x00000004 << AS6031_C1_NOT_USED_31_24_Pos)	
#define AS6031_C1_NOT_USED_31_24_3        		(0x00000008 << AS6031_C1_NOT_USED_31_24_Pos)	
#define AS6031_C1_NOT_USED_31_24_4        		(0x00000010 << AS6031_C1_NOT_USED_31_24_Pos)	
#define AS6031_C1_NOT_USED_31_24_5        		(0x00000020 << AS6031_C1_NOT_USED_31_24_Pos)	
#define AS6031_C1_NOT_USED_31_24_6        		(0x00000040 << AS6031_C1_NOT_USED_31_24_Pos)	
#define AS6031_C1_NOT_USED_31_24_7        		(0x00000080 << AS6031_C1_NOT_USED_31_24_Pos)	

/*******************  Bit definition for AS6031_C2 register  ********************/
#define AS6031_C2_GP0_DIR_Pos               	(0U)
#define AS6031_C2_GP0_DIR_Msk               	(0x03UL << AS6031_C2_GP0_DIR_Pos)		/*!< 0x00000003 */
#define AS6031_C2_GP0_DIR               		AS6031_C2_GP0_DIR_Msk					/*!< GP0_DIR[1:0]Direction of General Purpose Port 0 */
#define AS6031_C2_GP0_DIR_0               		(0x00000001 << AS6031_C2_GP0_DIR_Pos)	
#define AS6031_C2_GP0_DIR_1               		(0x00000002 << AS6031_C2_GP0_DIR_Pos)	
#define AS6031_C2_GP0_SEL_Pos               	(2U)
#define AS6031_C2_GP0_SEL_Msk               	(0x03UL << AS6031_C2_GP0_SEL_Pos)		/*!< 0x0000000C */
#define AS6031_C2_GP0_SEL               		AS6031_C2_GP0_SEL_Msk					/*!< GP0_SEL[3:2]Output Select of General Purpose Port 0 */
#define AS6031_C2_GP0_SEL_0               		(0x00000001 << AS6031_C2_GP0_SEL_Pos)	
#define AS6031_C2_GP0_SEL_1               		(0x00000002 << AS6031_C2_GP0_SEL_Pos)	
#define AS6031_C2_GP1_DIR_Pos               	(4U)
#define AS6031_C2_GP1_DIR_Msk               	(0x03UL << AS6031_C2_GP1_DIR_Pos)		/*!< 0x00000030 */
#define AS6031_C2_GP1_DIR               		AS6031_C2_GP1_DIR_Msk					/*!< GP1_DIR[5:4]Direction of General Purpose Port 1 */
#define AS6031_C2_GP1_DIR_0               		(0x00000001 << AS6031_C2_GP1_DIR_Pos)	
#define AS6031_C2_GP1_DIR_1               		(0x00000002 << AS6031_C2_GP1_DIR_Pos)	
#define AS6031_C2_GP1_SEL_Pos               	(6U)
#define AS6031_C2_GP1_SEL_Msk               	(0x03UL << AS6031_C2_GP1_SEL_Pos)		/*!< 0x000000C0 */
#define AS6031_C2_GP1_SEL               		AS6031_C2_GP1_SEL_Msk					/*!< GP1_SEL[7:6]Output Select of General Purpose Port 1 */
#define AS6031_C2_GP1_SEL_0               		(0x00000001 << AS6031_C2_GP1_SEL_Pos)	
#define AS6031_C2_GP1_SEL_1               		(0x00000002 << AS6031_C2_GP1_SEL_Pos)	
#define AS6031_C2_GP2_DIR_Pos               	(8U)
#define AS6031_C2_GP2_DIR_Msk               	(0x03UL << AS6031_C2_GP2_DIR_Pos)		/*!< 0x00000300 */
#define AS6031_C2_GP2_DIR               		AS6031_C2_GP2_DIR_Msk					/*!< GP2_DIR[9:8]Direction of General Purpose Port 2 */
#define AS6031_C2_GP2_DIR_0               		(0x00000001 << AS6031_C2_GP2_DIR_Pos)	
#define AS6031_C2_GP2_DIR_1               		(0x00000002 << AS6031_C2_GP2_DIR_Pos)	
#define AS6031_C2_GP2_SEL_Pos               	(10U)
#define AS6031_C2_GP2_SEL_Msk               	(0x03UL << AS6031_C2_GP2_SEL_Pos)		/*!< 0x00000C00 */
#define AS6031_C2_GP2_SEL               		AS6031_C2_GP2_SEL_Msk					/*!< GP2_SEL[11:10]Output Select of General Purpose Port 2 */
#define AS6031_C2_GP2_SEL_0               		(0x00000001 << AS6031_C2_GP2_SEL_Pos)	
#define AS6031_C2_GP2_SEL_1               		(0x00000002 << AS6031_C2_GP2_SEL_Pos)	
#define AS6031_C2_GP3_DIR_Pos               	(12U)
#define AS6031_C2_GP3_DIR_Msk               	(0x03UL << AS6031_C2_GP3_DIR_Pos)		/*!< 0x00003000 */
#define AS6031_C2_GP3_DIR               		AS6031_C2_GP3_DIR_Msk					/*!< GP3_DIR[13:12]Direction of General Purpose Port 3 */
#define AS6031_C2_GP3_DIR_0               		(0x00000001 << AS6031_C2_GP3_DIR_Pos)	
#define AS6031_C2_GP3_DIR_1               		(0x00000002 << AS6031_C2_GP3_DIR_Pos)	
#define AS6031_C2_GP3_SEL_Pos               	(14U)
#define AS6031_C2_GP3_SEL_Msk               	(0x03UL << AS6031_C2_GP3_SEL_Pos)		/*!< 0x0000C000 */
#define AS6031_C2_GP3_SEL               		AS6031_C2_GP3_SEL_Msk					/*!< GP3_SEL[15:14]Output Select of General Purpose Port 3 */
#define AS6031_C2_GP3_SEL_0               		(0x00000001 << AS6031_C2_GP3_SEL_Pos)	
#define AS6031_C2_GP3_SEL_1               		(0x00000002 << AS6031_C2_GP3_SEL_Pos)	
#define AS6031_C2_GP4_DIR_Pos               	(16U)
#define AS6031_C2_GP4_DIR_Msk               	(0x03UL << AS6031_C2_GP4_DIR_Pos)		/*!< 0x00030000 */
#define AS6031_C2_GP4_DIR               		AS6031_C2_GP4_DIR_Msk					/*!< GP4_DIR[17:16]Direction of General Purpose Port 4 */
#define AS6031_C2_GP4_DIR_0               		(0x00000001 << AS6031_C2_GP4_DIR_Pos)	
#define AS6031_C2_GP4_DIR_1               		(0x00000002 << AS6031_C2_GP4_DIR_Pos)	
#define AS6031_C2_GP4_SEL_Pos               	(18U)
#define AS6031_C2_GP4_SEL_Msk               	(0x03UL << AS6031_C2_GP4_SEL_Pos)		/*!< 0x000C0000 */
#define AS6031_C2_GP4_SEL               		AS6031_C2_GP4_SEL_Msk					/*!< GP4_SEL[19:18]Output Select of General Purpose Port 4 */
#define AS6031_C2_GP4_SEL_0               		(0x00000001 << AS6031_C2_GP4_SEL_Pos)	
#define AS6031_C2_GP4_SEL_1               		(0x00000002 << AS6031_C2_GP4_SEL_Pos)	
#define AS6031_C2_GP5_DIR_Pos               	(20U)
#define AS6031_C2_GP5_DIR_Msk               	(0x03UL << AS6031_C2_GP5_DIR_Pos)		/*!< 0x00300000 */
#define AS6031_C2_GP5_DIR               		AS6031_C2_GP5_DIR_Msk					/*!< GP5_DIR[21:20]Direction of General Purpose Port 5 */
#define AS6031_C2_GP5_DIR_0               		(0x00000001 << AS6031_C2_GP5_DIR_Pos)	
#define AS6031_C2_GP5_DIR_1               		(0x00000002 << AS6031_C2_GP5_DIR_Pos)	
#define AS6031_C2_GP5_SEL_Pos               	(22U)
#define AS6031_C2_GP5_SEL_Msk               	(0x03UL << AS6031_C2_GP5_SEL_Pos)		/*!< 0x00C00000 */
#define AS6031_C2_GP5_SEL               		AS6031_C2_GP5_SEL_Msk					/*!< GP5_SEL[23:22]Output Select of General Purpose Port 5 */
#define AS6031_C2_GP5_SEL_0               		(0x00000001 << AS6031_C2_GP5_SEL_Pos)	
#define AS6031_C2_GP5_SEL_1               		(0x00000002 << AS6031_C2_GP5_SEL_Pos)	
#define AS6031_C2_NOT_USED_31_24_Pos        	(24U)
#define AS6031_C2_NOT_USED_31_24_Msk        	(0xFFUL << AS6031_C2_NOT_USED_31_24_Pos)		/*!< 0xFF000000 */
#define AS6031_C2_NOT_USED_31_24        		AS6031_C2_NOT_USED_31_24_Msk					/*!< NOT_USED_31_24[31:24]Not used */
#define AS6031_C2_NOT_USED_31_24_0        		(0x00000001 << AS6031_C2_NOT_USED_31_24_Pos)	
#define AS6031_C2_NOT_USED_31_24_1        		(0x00000002 << AS6031_C2_NOT_USED_31_24_Pos)	
#define AS6031_C2_NOT_USED_31_24_2        		(0x00000004 << AS6031_C2_NOT_USED_31_24_Pos)	
#define AS6031_C2_NOT_USED_31_24_3        		(0x00000008 << AS6031_C2_NOT_USED_31_24_Pos)	
#define AS6031_C2_NOT_USED_31_24_4        		(0x00000010 << AS6031_C2_NOT_USED_31_24_Pos)	
#define AS6031_C2_NOT_USED_31_24_5        		(0x00000020 << AS6031_C2_NOT_USED_31_24_Pos)	
#define AS6031_C2_NOT_USED_31_24_6        		(0x00000040 << AS6031_C2_NOT_USED_31_24_Pos)	
#define AS6031_C2_NOT_USED_31_24_7        		(0x00000080 << AS6031_C2_NOT_USED_31_24_Pos)	

/*******************  Bit definition for AS6031_C3 register  ********************/
#define AS6031_C3_USM_OPT_Pos               	(0U)
#define AS6031_C3_USM_OPT_Msk               	(0x1FUL << AS6031_C3_USM_OPT_Pos)		/*!< 0x0000001F */
#define AS6031_C3_USM_OPT               		AS6031_C3_USM_OPT_Msk					/*!< USM_OPT[4:0]Mandatory setting: b00001 */
#define AS6031_C3_USM_OPT_0               		(0x00000001 << AS6031_C3_USM_OPT_Pos)	
#define AS6031_C3_USM_OPT_1               		(0x00000002 << AS6031_C3_USM_OPT_Pos)	
#define AS6031_C3_USM_OPT_2               		(0x00000004 << AS6031_C3_USM_OPT_Pos)	
#define AS6031_C3_USM_OPT_3               		(0x00000008 << AS6031_C3_USM_OPT_Pos)	
#define AS6031_C3_USM_OPT_4               		(0x00000010 << AS6031_C3_USM_OPT_Pos)	
#define AS6031_C3_NOT_USED_31_5_Pos         	(5U)
#define AS6031_C3_NOT_USED_31_5_Msk         	(0x07FFFFFFUL << AS6031_C3_NOT_USED_31_5_Pos)		/*!< 0xFFFFFFE0 */
#define AS6031_C3_NOT_USED_31_5         		AS6031_C3_NOT_USED_31_5_Msk					/*!< NOT_USED_31_5[31:5]Not used */
#define AS6031_C3_NOT_USED_31_5_0         		(0x00000001 << AS6031_C3_NOT_USED_31_5_Pos)	
#define AS6031_C3_NOT_USED_31_5_1         		(0x00000002 << AS6031_C3_NOT_USED_31_5_Pos)	
#define AS6031_C3_NOT_USED_31_5_2         		(0x00000004 << AS6031_C3_NOT_USED_31_5_Pos)	
#define AS6031_C3_NOT_USED_31_5_3         		(0x00000008 << AS6031_C3_NOT_USED_31_5_Pos)	
#define AS6031_C3_NOT_USED_31_5_4         		(0x00000010 << AS6031_C3_NOT_USED_31_5_Pos)	
#define AS6031_C3_NOT_USED_31_5_5         		(0x00000020 << AS6031_C3_NOT_USED_31_5_Pos)	
#define AS6031_C3_NOT_USED_31_5_6         		(0x00000040 << AS6031_C3_NOT_USED_31_5_Pos)	
#define AS6031_C3_NOT_USED_31_5_7         		(0x00000080 << AS6031_C3_NOT_USED_31_5_Pos)	
#define AS6031_C3_NOT_USED_31_5_8         		(0x00000100 << AS6031_C3_NOT_USED_31_5_Pos)	
#define AS6031_C3_NOT_USED_31_5_9         		(0x00000200 << AS6031_C3_NOT_USED_31_5_Pos)	
#define AS6031_C3_NOT_USED_31_5_10         		(0x00000400 << AS6031_C3_NOT_USED_31_5_Pos)	
#define AS6031_C3_NOT_USED_31_5_11         		(0x00000800 << AS6031_C3_NOT_USED_31_5_Pos)	
#define AS6031_C3_NOT_USED_31_5_12         		(0x00001000 << AS6031_C3_NOT_USED_31_5_Pos)	
#define AS6031_C3_NOT_USED_31_5_13         		(0x00002000 << AS6031_C3_NOT_USED_31_5_Pos)	
#define AS6031_C3_NOT_USED_31_5_14         		(0x00004000 << AS6031_C3_NOT_USED_31_5_Pos)	
#define AS6031_C3_NOT_USED_31_5_15         		(0x00008000 << AS6031_C3_NOT_USED_31_5_Pos)	
#define AS6031_C3_NOT_USED_31_5_16         		(0x00010000 << AS6031_C3_NOT_USED_31_5_Pos)	
#define AS6031_C3_NOT_USED_31_5_17         		(0x00020000 << AS6031_C3_NOT_USED_31_5_Pos)	
#define AS6031_C3_NOT_USED_31_5_18         		(0x00040000 << AS6031_C3_NOT_USED_31_5_Pos)	
#define AS6031_C3_NOT_USED_31_5_19         		(0x00080000 << AS6031_C3_NOT_USED_31_5_Pos)	
#define AS6031_C3_NOT_USED_31_5_20         		(0x00100000 << AS6031_C3_NOT_USED_31_5_Pos)	
#define AS6031_C3_NOT_USED_31_5_21         		(0x00200000 << AS6031_C3_NOT_USED_31_5_Pos)	
#define AS6031_C3_NOT_USED_31_5_22         		(0x00400000 << AS6031_C3_NOT_USED_31_5_Pos)	
#define AS6031_C3_NOT_USED_31_5_23         		(0x00800000 << AS6031_C3_NOT_USED_31_5_Pos)	
#define AS6031_C3_NOT_USED_31_5_24         		(0x01000000 << AS6031_C3_NOT_USED_31_5_Pos)	
#define AS6031_C3_NOT_USED_31_5_25         		(0x02000000 << AS6031_C3_NOT_USED_31_5_Pos)	
#define AS6031_C3_NOT_USED_31_5_26         		(0x04000000 << AS6031_C3_NOT_USED_31_5_Pos)	

/*******************  Bit definition for AS6031_C4 register  ********************/
#define AS6031_C4_EF_EN_TDC_TMO_Pos         	(0U)
#define AS6031_C4_EF_EN_TDC_TMO_Msk         	(0x1UL << AS6031_C4_EF_EN_TDC_TMO_Pos)		/*!< 0x00000001 */
#define AS6031_C4_EF_EN_TDC_TMO         		AS6031_C4_EF_EN_TDC_TMO_Msk					/*!< Error Flag Enable, TDC Timeout */
#define AS6031_C4_EF_EN_TOF_TMO_Pos         	(1U)
#define AS6031_C4_EF_EN_TOF_TMO_Msk         	(0x1UL << AS6031_C4_EF_EN_TOF_TMO_Pos)		/*!< 0x00000002 */
#define AS6031_C4_EF_EN_TOF_TMO         		AS6031_C4_EF_EN_TOF_TMO_Msk					/*!< Error Flag Enable, TOF Timeout */
#define AS6031_C4_EF_EN_AM_TMO_Pos          	(2U)
#define AS6031_C4_EF_EN_AM_TMO_Msk          	(0x1UL << AS6031_C4_EF_EN_AM_TMO_Pos)		/*!< 0x00000004 */
#define AS6031_C4_EF_EN_AM_TMO          		AS6031_C4_EF_EN_AM_TMO_Msk					/*!< Error Flag Enable, Amplitude Measurement Timeout */
#define AS6031_C4_EF_EN_TM_OC_Pos           	(3U)
#define AS6031_C4_EF_EN_TM_OC_Msk           	(0x1UL << AS6031_C4_EF_EN_TM_OC_Pos)		/*!< 0x00000008 */
#define AS6031_C4_EF_EN_TM_OC           		AS6031_C4_EF_EN_TM_OC_Msk					/*!< Error Flag Enable, Temperature Measurement Open Circuit */
#define AS6031_C4_EF_EN_TM_SC_Pos           	(4U)
#define AS6031_C4_EF_EN_TM_SC_Msk           	(0x1UL << AS6031_C4_EF_EN_TM_SC_Pos)		/*!< 0x00000010 */
#define AS6031_C4_EF_EN_TM_SC           		AS6031_C4_EF_EN_TM_SC_Msk					/*!< Error Flag Enable, Temperature Measurement Short Circuit */
#define AS6031_C4_EF_EN_ZCC_ERR_Pos         	(5U)
#define AS6031_C4_EF_EN_ZCC_ERR_Msk         	(0x1UL << AS6031_C4_EF_EN_ZCC_ERR_Pos)		/*!< 0x00000020 */
#define AS6031_C4_EF_EN_ZCC_ERR         		AS6031_C4_EF_EN_ZCC_ERR_Msk					/*!< Error Flag Enable, Zero Cross Calibration Error */
#define AS6031_C4_EF_EN_LBD_ERR_Pos         	(6U)
#define AS6031_C4_EF_EN_LBD_ERR_Msk         	(0x1UL << AS6031_C4_EF_EN_LBD_ERR_Pos)		/*!< 0x00000040 */
#define AS6031_C4_EF_EN_LBD_ERR         		AS6031_C4_EF_EN_LBD_ERR_Msk					/*!< Error Flag Enable, Low Battery Detect Error */
#define AS6031_C4_EF_EN_USM_SQC_TMO_Pos     	(7U)
#define AS6031_C4_EF_EN_USM_SQC_TMO_Msk     	(0x1UL << AS6031_C4_EF_EN_USM_SQC_TMO_Pos)		/*!< 0x00000080 */
#define AS6031_C4_EF_EN_USM_SQC_TMO     		AS6031_C4_EF_EN_USM_SQC_TMO_Msk					/*!< Error Flag Enable, Ultrasonic Sequence Timeout */
#define AS6031_C4_EF_EN_TM_SQC_TMO_Pos      	(8U)
#define AS6031_C4_EF_EN_TM_SQC_TMO_Msk      	(0x1UL << AS6031_C4_EF_EN_TM_SQC_TMO_Pos)		/*!< 0x00000100 */
#define AS6031_C4_EF_EN_TM_SQC_TMO      		AS6031_C4_EF_EN_TM_SQC_TMO_Msk					/*!< Error Flag Enable, Temperature Sequence Timeout */
#define AS6031_C4_EF_EN_TSQ_TMO_Pos         	(9U)
#define AS6031_C4_EF_EN_TSQ_TMO_Msk         	(0x1UL << AS6031_C4_EF_EN_TSQ_TMO_Pos)		/*!< 0x00000200 */
#define AS6031_C4_EF_EN_TSQ_TMO         		AS6031_C4_EF_EN_TSQ_TMO_Msk					/*!< Error Flag Enable, Task Sequencer Timeout */
#define AS6031_C4_EF_EN_I2C_ACK_ERR_Pos     	(10U)
#define AS6031_C4_EF_EN_I2C_ACK_ERR_Msk     	(0x1UL << AS6031_C4_EF_EN_I2C_ACK_ERR_Pos)		/*!< 0x00000400 */
#define AS6031_C4_EF_EN_I2C_ACK_ERR     		AS6031_C4_EF_EN_I2C_ACK_ERR_Msk					/*!< Error Flag Enable, EEPROM Acknowledge Error */
#define AS6031_C4_HIDDEN_11_11_Pos          	(11U)
#define AS6031_C4_HIDDEN_11_11_Msk          	(0x1UL << AS6031_C4_HIDDEN_11_11_Pos)		/*!< 0x00000800 */
#define AS6031_C4_HIDDEN_11_11          		AS6031_C4_HIDDEN_11_11_Msk					/*!< Mandatory setting: b0 */
#define AS6031_C4_EF_EN_NVM_FWCU_ERR_Pos    	(12U)
#define AS6031_C4_EF_EN_NVM_FWCU_ERR_Msk    	(0x1UL << AS6031_C4_EF_EN_NVM_FWCU_ERR_Pos)		/*!< 0x00001000 */
#define AS6031_C4_EF_EN_NVM_FWCU_ERR    		AS6031_C4_EF_EN_NVM_FWCU_ERR_Msk					/*!< Error Flag Enable, NVM FWCU Error */
#define AS6031_C4_EF_EN_NVM_FWDU_ERR_Pos    	(13U)
#define AS6031_C4_EF_EN_NVM_FWDU_ERR_Msk    	(0x1UL << AS6031_C4_EF_EN_NVM_FWDU_ERR_Pos)		/*!< 0x00002000 */
#define AS6031_C4_EF_EN_NVM_FWDU_ERR    		AS6031_C4_EF_EN_NVM_FWDU_ERR_Msk					/*!< Error Flag Enable, NVM FWDU Error */
#define AS6031_C4_EF_EN_NVM_FWA_ERR_Pos     	(14U)
#define AS6031_C4_EF_EN_NVM_FWA_ERR_Msk     	(0x1UL << AS6031_C4_EF_EN_NVM_FWA_ERR_Pos)		/*!< 0x00004000 */
#define AS6031_C4_EF_EN_NVM_FWA_ERR     		AS6031_C4_EF_EN_NVM_FWA_ERR_Msk					/*!< Error Flag Enable, NVM Applied Firmware Error */
#define AS6031_C4_EF_EN_CPU_ERR_Pos         	(15U)
#define AS6031_C4_EF_EN_CPU_ERR_Msk         	(0x1UL << AS6031_C4_EF_EN_CPU_ERR_Pos)		/*!< 0x00008000 */
#define AS6031_C4_EF_EN_CPU_ERR         		AS6031_C4_EF_EN_CPU_ERR_Msk					/*!< Error Flag Enable, CPU Error */
#define AS6031_C4_IRQ_EN_TSQ_FNS_Pos        	(16U)
#define AS6031_C4_IRQ_EN_TSQ_FNS_Msk        	(0x1UL << AS6031_C4_IRQ_EN_TSQ_FNS_Pos)		/*!< 0x00010000 */
#define AS6031_C4_IRQ_EN_TSQ_FNS        		AS6031_C4_IRQ_EN_TSQ_FNS_Msk					/*!< Interrupt Request Enable, Task Sequencer finished */
#define AS6031_C4_IRQ_EN_TRANS_FNS_Pos      	(17U)
#define AS6031_C4_IRQ_EN_TRANS_FNS_Msk      	(0x1UL << AS6031_C4_IRQ_EN_TRANS_FNS_Pos)		/*!< 0x00020000 */
#define AS6031_C4_IRQ_EN_TRANS_FNS      		AS6031_C4_IRQ_EN_TRANS_FNS_Msk					/*!< Interrupt Request Enable, FW Transaction finished */
#define AS6031_C4_IRQ_EN_BLD_FNS_Pos        	(18U)
#define AS6031_C4_IRQ_EN_BLD_FNS_Msk        	(0x1UL << AS6031_C4_IRQ_EN_BLD_FNS_Pos)		/*!< 0x00040000 */
#define AS6031_C4_IRQ_EN_BLD_FNS        		AS6031_C4_IRQ_EN_BLD_FNS_Msk					/*!< Interrupt Request Enable, Bootload finished */
#define AS6031_C4_IRQ_EN_CHKSUM_FNS_Pos     	(19U)
#define AS6031_C4_IRQ_EN_CHKSUM_FNS_Msk     	(0x1UL << AS6031_C4_IRQ_EN_CHKSUM_FNS_Pos)		/*!< 0x00080000 */
#define AS6031_C4_IRQ_EN_CHKSUM_FNS     		AS6031_C4_IRQ_EN_CHKSUM_FNS_Msk					/*!< Interrupt Request Enable, Checksum generation finished */
#define AS6031_C4_IRQ_EN_FW_S_Pos           	(20U)
#define AS6031_C4_IRQ_EN_FW_S_Msk           	(0x1UL << AS6031_C4_IRQ_EN_FW_S_Pos)		/*!< 0x00100000 */
#define AS6031_C4_IRQ_EN_FW_S           		AS6031_C4_IRQ_EN_FW_S_Msk					/*!< Interrupt Request Enable, Firmware, synchronized with task sequencer */
#define AS6031_C4_IRQ_EN_TSQ_TO_Pos         	(21U)
#define AS6031_C4_IRQ_EN_TSQ_TO_Msk         	(0x1UL << AS6031_C4_IRQ_EN_TSQ_TO_Pos)		/*!< 0x00200000 */
#define AS6031_C4_IRQ_EN_TSQ_TO         		AS6031_C4_IRQ_EN_TSQ_TO_Msk					/*!< Interrupt Request Enable, Firmware */
#define AS6031_C4_HIDDEN_22_22_Pos          	(22U)
#define AS6031_C4_HIDDEN_22_22_Msk          	(0x1UL << AS6031_C4_HIDDEN_22_22_Pos)		/*!< 0x00400000 */
#define AS6031_C4_HIDDEN_22_22          		AS6031_C4_HIDDEN_22_22_Msk					/*!< Mandatory setting: b0 */
#define AS6031_C4_IRQ_EN_ERR_FLAG_Pos       	(23U)
#define AS6031_C4_IRQ_EN_ERR_FLAG_Msk       	(0x1UL << AS6031_C4_IRQ_EN_ERR_FLAG_Pos)		/*!< 0x00800000 */
#define AS6031_C4_IRQ_EN_ERR_FLAG       		AS6031_C4_IRQ_EN_ERR_FLAG_Msk					/*!< Interrupt Request Enable, Error Flag */
#define AS6031_C4_HIDDEN_26_24_Pos          	(24U)
#define AS6031_C4_HIDDEN_26_24_Msk          	(0x07UL << AS6031_C4_HIDDEN_26_24_Pos)		/*!< 0x07000000 */
#define AS6031_C4_HIDDEN_26_24          		AS6031_C4_HIDDEN_26_24_Msk					/*!< HIDDEN_26_24[26:24]Mandatory setting: b000 */
#define AS6031_C4_HIDDEN_26_24_0          		(0x00000001 << AS6031_C4_HIDDEN_26_24_Pos)	
#define AS6031_C4_HIDDEN_26_24_1          		(0x00000002 << AS6031_C4_HIDDEN_26_24_Pos)	
#define AS6031_C4_HIDDEN_26_24_2          		(0x00000004 << AS6031_C4_HIDDEN_26_24_Pos)	
#define AS6031_C4_CPU_REQ_EN_GPH_Pos        	(27U)
#define AS6031_C4_CPU_REQ_EN_GPH_Msk        	(0x1UL << AS6031_C4_CPU_REQ_EN_GPH_Pos)		/*!< 0x08000000 */
#define AS6031_C4_CPU_REQ_EN_GPH        		AS6031_C4_CPU_REQ_EN_GPH_Msk					/*!< CPU Request Enable, General Purpose Handling */
#define AS6031_C4_TS_GPT_RATE_Pos           	(28U)
#define AS6031_C4_TS_GPT_RATE_Msk           	(0xFUL << AS6031_C4_TS_GPT_RATE_Pos)		/*!< 0xF0000000 */
#define AS6031_C4_TS_GPT_RATE           		AS6031_C4_TS_GPT_RATE_Msk					/*!< TS_GPT_RATE[31:28]General Purpose Timer Rate */
#define AS6031_C4_TS_GPT_RATE_0           		(0x00000001 << AS6031_C4_TS_GPT_RATE_Pos)	
#define AS6031_C4_TS_GPT_RATE_1           		(0x00000002 << AS6031_C4_TS_GPT_RATE_Pos)	
#define AS6031_C4_TS_GPT_RATE_2           		(0x00000004 << AS6031_C4_TS_GPT_RATE_Pos)	
#define AS6031_C4_TS_GPT_RATE_3           		(0x00000008 << AS6031_C4_TS_GPT_RATE_Pos)	

/*******************  Bit definition for AS6031_C5 register  ********************/
#define AS6031_C5_HSC_DIV_MODE_Pos          	(0U)
#define AS6031_C5_HSC_DIV_MODE_Msk          	(0x1UL << AS6031_C5_HSC_DIV_MODE_Pos)		/*!< 0x00000001 */
#define AS6031_C5_HSC_DIV_MODE          		AS6031_C5_HSC_DIV_MODE_Msk					/*!< High Speed Clock Divider Mode */
#define AS6031_C5_NOT_USED_1_1_Pos          	(1U)
#define AS6031_C5_NOT_USED_1_1_Msk          	(0x1UL << AS6031_C5_NOT_USED_1_1_Pos)		/*!< 0x00000002 */
#define AS6031_C5_NOT_USED_1_1          		AS6031_C5_NOT_USED_1_1_Msk					/*!< Mandatory setting: b0 */
#define AS6031_C5_HSC_CLK_ST_Pos            	(2U)
#define AS6031_C5_HSC_CLK_ST_Msk            	(0x07UL << AS6031_C5_HSC_CLK_ST_Pos)		/*!< 0x0000001C */
#define AS6031_C5_HSC_CLK_ST            		AS6031_C5_HSC_CLK_ST_Msk					/*!< HSC_CLK_ST[4:2]High-Speed Clock Settling Time */
#define AS6031_C5_HSC_CLK_ST_0            		(0x00000001 << AS6031_C5_HSC_CLK_ST_Pos)	
#define AS6031_C5_HSC_CLK_ST_1            		(0x00000002 << AS6031_C5_HSC_CLK_ST_Pos)	
#define AS6031_C5_HSC_CLK_ST_2            		(0x00000004 << AS6031_C5_HSC_CLK_ST_Pos)	
#define AS6031_C5_HIDDEN_7_5_Pos            	(5U)
#define AS6031_C5_HIDDEN_7_5_Msk            	(0x07UL << AS6031_C5_HIDDEN_7_5_Pos)		/*!< 0x000000E0 */
#define AS6031_C5_HIDDEN_7_5            		AS6031_C5_HIDDEN_7_5_Msk					/*!< HIDDEN_7_5[7:5]Recommended setting: b001 */
#define AS6031_C5_HIDDEN_7_5_0            		(0x00000001 << AS6031_C5_HIDDEN_7_5_Pos)	
#define AS6031_C5_HIDDEN_7_5_1            		(0x00000002 << AS6031_C5_HIDDEN_7_5_Pos)	
#define AS6031_C5_HIDDEN_7_5_2            		(0x00000004 << AS6031_C5_HIDDEN_7_5_Pos)	
#define AS6031_C5_HSC_DIV_Pos               	(8U)
#define AS6031_C5_HSC_DIV_Msk               	(0x1UL << AS6031_C5_HSC_DIV_Pos)		/*!< 0x00000100 */
#define AS6031_C5_HSC_DIV               		AS6031_C5_HSC_DIV_Msk					/*!< High-Speed Clock Divider */
#define AS6031_C5_HSC_RATE_Pos              	(9U)
#define AS6031_C5_HSC_RATE_Msk              	(0x07UL << AS6031_C5_HSC_RATE_Pos)		/*!< 0x00000E00 */
#define AS6031_C5_HSC_RATE              		AS6031_C5_HSC_RATE_Msk					/*!< HSC_RATE[11:9]High-Speed Clock Calibration Rate */
#define AS6031_C5_HSC_RATE_0              		(0x00000001 << AS6031_C5_HSC_RATE_Pos)	
#define AS6031_C5_HSC_RATE_1              		(0x00000002 << AS6031_C5_HSC_RATE_Pos)	
#define AS6031_C5_HSC_RATE_2              		(0x00000004 << AS6031_C5_HSC_RATE_Pos)	
#define AS6031_C5_HSC_MODE_CPU_Pos          	(12U)
#define AS6031_C5_HSC_MODE_CPU_Msk          	(0x1UL << AS6031_C5_HSC_MODE_CPU_Pos)		/*!< 0x00001000 */
#define AS6031_C5_HSC_MODE_CPU          		AS6031_C5_HSC_MODE_CPU_Msk					/*!< High-Speed Clock Mode CPU */
#define AS6031_C5_VM_RATE_Pos               	(13U)
#define AS6031_C5_VM_RATE_Msk               	(0x07UL << AS6031_C5_VM_RATE_Pos)		/*!< 0x0000E000 */
#define AS6031_C5_VM_RATE               		AS6031_C5_VM_RATE_Msk					/*!< VM_RATE[15:13]VCC Voltage measurement rate */
#define AS6031_C5_VM_RATE_0               		(0x00000001 << AS6031_C5_VM_RATE_Pos)	
#define AS6031_C5_VM_RATE_1               		(0x00000002 << AS6031_C5_VM_RATE_Pos)	
#define AS6031_C5_VM_RATE_2               		(0x00000004 << AS6031_C5_VM_RATE_Pos)	
#define AS6031_C5_LBD_TH_Pos                	(16U)
#define AS6031_C5_LBD_TH_Msk                	(0x3FUL << AS6031_C5_LBD_TH_Pos)		/*!< 0x003F0000 */
#define AS6031_C5_LBD_TH                		AS6031_C5_LBD_TH_Msk					/*!< LBD_TH[21:16]Low battery detection threshold */
#define AS6031_C5_LBD_TH_0                		(0x00000001 << AS6031_C5_LBD_TH_Pos)	
#define AS6031_C5_LBD_TH_1                		(0x00000002 << AS6031_C5_LBD_TH_Pos)	
#define AS6031_C5_LBD_TH_2                		(0x00000004 << AS6031_C5_LBD_TH_Pos)	
#define AS6031_C5_LBD_TH_3                		(0x00000008 << AS6031_C5_LBD_TH_Pos)	
#define AS6031_C5_LBD_TH_4                		(0x00000010 << AS6031_C5_LBD_TH_Pos)	
#define AS6031_C5_LBD_TH_5                		(0x00000020 << AS6031_C5_LBD_TH_Pos)	
#define AS6031_C5_TSV_UPD_MODE_Pos          	(22U)
#define AS6031_C5_TSV_UPD_MODE_Msk          	(0x1UL << AS6031_C5_TSV_UPD_MODE_Pos)		/*!< 0x00400000 */
#define AS6031_C5_TSV_UPD_MODE          		AS6031_C5_TSV_UPD_MODE_Msk					/*!< Time stamp update mode */
#define AS6031_C5_BF_SEL_Pos                	(23U)
#define AS6031_C5_BF_SEL_Msk                	(0x1UL << AS6031_C5_BF_SEL_Pos)		/*!< 0x00800000 */
#define AS6031_C5_BF_SEL                		AS6031_C5_BF_SEL_Msk					/*!< Base Frequency Select */
#define AS6031_C5_HIDDEN_27_24_Pos          	(24U)
#define AS6031_C5_HIDDEN_27_24_Msk          	(0xFUL << AS6031_C5_HIDDEN_27_24_Pos)		/*!< 0x0F000000 */
#define AS6031_C5_HIDDEN_27_24          		AS6031_C5_HIDDEN_27_24_Msk					/*!< HIDDEN_27_24[27:24]Mandatory setting: b0000 */
#define AS6031_C5_HIDDEN_27_24_0          		(0x00000001 << AS6031_C5_HIDDEN_27_24_Pos)	
#define AS6031_C5_HIDDEN_27_24_1          		(0x00000002 << AS6031_C5_HIDDEN_27_24_Pos)	
#define AS6031_C5_HIDDEN_27_24_2          		(0x00000004 << AS6031_C5_HIDDEN_27_24_Pos)	
#define AS6031_C5_HIDDEN_27_24_3          		(0x00000008 << AS6031_C5_HIDDEN_27_24_Pos)	
#define AS6031_C5_HIDDEN_28_28_Pos          	(28U)
#define AS6031_C5_HIDDEN_28_28_Msk          	(0x1UL << AS6031_C5_HIDDEN_28_28_Pos)		/*!< 0x10000000 */
#define AS6031_C5_HIDDEN_28_28          		AS6031_C5_HIDDEN_28_28_Msk					/*!< Mandatory setting: b0 */
#define AS6031_C5_TI_PATH_SEL_Pos           	(29U)
#define AS6031_C5_TI_PATH_SEL_Msk           	(0x03UL << AS6031_C5_TI_PATH_SEL_Pos)		/*!< 0x60000000 */
#define AS6031_C5_TI_PATH_SEL           		AS6031_C5_TI_PATH_SEL_Msk					/*!< TI_PATH_SEL[30:29]Transducer Fire Buffer Impedance */
#define AS6031_C5_TI_PATH_SEL_0           		(0x00000001 << AS6031_C5_TI_PATH_SEL_Pos)	
#define AS6031_C5_TI_PATH_SEL_1           		(0x00000002 << AS6031_C5_TI_PATH_SEL_Pos)	
#define AS6031_C5_HIDDEN_31_31_Pos          	(31U)
#define AS6031_C5_HIDDEN_31_31_Msk          	(0x1UL << AS6031_C5_HIDDEN_31_31_Pos)		/*!< 0x80000000 */
#define AS6031_C5_HIDDEN_31_31          		AS6031_C5_HIDDEN_31_31_Msk					/*!< Mandatory setting: b0 */

/*******************  Bit definition for AS6031_C6 register  ********************/
#define AS6031_C6_MR_CT_Pos                 	(0U)
#define AS6031_C6_MR_CT_Msk                 	(0x1FFFUL << AS6031_C6_MR_CT_Pos)		/*!< 0x00001FFF */
#define AS6031_C6_MR_CT                 		AS6031_C6_MR_CT_Msk					/*!< MR_CT[12:0]Measure rate cycle time */
#define AS6031_C6_MR_CT_0                 		(0x00000001 << AS6031_C6_MR_CT_Pos)	
#define AS6031_C6_MR_CT_1                 		(0x00000002 << AS6031_C6_MR_CT_Pos)	
#define AS6031_C6_MR_CT_2                 		(0x00000004 << AS6031_C6_MR_CT_Pos)	
#define AS6031_C6_MR_CT_3                 		(0x00000008 << AS6031_C6_MR_CT_Pos)	
#define AS6031_C6_MR_CT_4                 		(0x00000010 << AS6031_C6_MR_CT_Pos)	
#define AS6031_C6_MR_CT_5                 		(0x00000020 << AS6031_C6_MR_CT_Pos)	
#define AS6031_C6_MR_CT_6                 		(0x00000040 << AS6031_C6_MR_CT_Pos)	
#define AS6031_C6_MR_CT_7                 		(0x00000080 << AS6031_C6_MR_CT_Pos)	
#define AS6031_C6_MR_CT_8                 		(0x00000100 << AS6031_C6_MR_CT_Pos)	
#define AS6031_C6_MR_CT_9                 		(0x00000200 << AS6031_C6_MR_CT_Pos)	
#define AS6031_C6_MR_CT_10                 		(0x00000400 << AS6031_C6_MR_CT_Pos)	
#define AS6031_C6_MR_CT_11                 		(0x00000800 << AS6031_C6_MR_CT_Pos)	
#define AS6031_C6_MR_CT_12                 		(0x00001000 << AS6031_C6_MR_CT_Pos)	
#define AS6031_C6_TS_MCM_Pos                	(13U)
#define AS6031_C6_TS_MCM_Msk                	(0x1UL << AS6031_C6_TS_MCM_Pos)		/*!< 0x00002000 */
#define AS6031_C6_TS_MCM                		AS6031_C6_TS_MCM_Msk					/*!< Task Sequencer Measure Cycle Mode */
#define AS6031_C6_TS_PP_T_EN_Pos            	(14U)
#define AS6031_C6_TS_PP_T_EN_Msk            	(0x1UL << AS6031_C6_TS_PP_T_EN_Pos)		/*!< 0x00004000 */
#define AS6031_C6_TS_PP_T_EN            		AS6031_C6_TS_PP_T_EN_Msk					/*!< Enables final post processing T */
#define AS6031_C6_TS_PP_F_EN_Pos            	(15U)
#define AS6031_C6_TS_PP_F_EN_Msk            	(0x1UL << AS6031_C6_TS_PP_F_EN_Pos)		/*!< 0x00008000 */
#define AS6031_C6_TS_PP_F_EN            		AS6031_C6_TS_PP_F_EN_Msk					/*!< Enables post processing F */
#define AS6031_C6_TS_PP_MODE_Pos            	(16U)
#define AS6031_C6_TS_PP_MODE_Msk            	(0x1UL << AS6031_C6_TS_PP_MODE_Pos)		/*!< 0x00010000 */
#define AS6031_C6_TS_PP_MODE            		AS6031_C6_TS_PP_MODE_Msk					/*!< Post processing mode */
#define AS6031_C6_TS_CST_RATE_Pos           	(17U)
#define AS6031_C6_TS_CST_RATE_Msk           	(0x07UL << AS6031_C6_TS_CST_RATE_Pos)		/*!< 0x000E0000 */
#define AS6031_C6_TS_CST_RATE           		AS6031_C6_TS_CST_RATE_Msk					/*!< TS_CST_RATE[19:17]Firmware Check(sum) Timer Rate */
#define AS6031_C6_TS_CST_RATE_0           		(0x00000001 << AS6031_C6_TS_CST_RATE_Pos)	
#define AS6031_C6_TS_CST_RATE_1           		(0x00000002 << AS6031_C6_TS_CST_RATE_Pos)	
#define AS6031_C6_TS_CST_RATE_2           		(0x00000004 << AS6031_C6_TS_CST_RATE_Pos)	
#define AS6031_C6_TS_NVR_RATE_Pos           	(20U)
#define AS6031_C6_TS_NVR_RATE_Msk           	(0xFUL << AS6031_C6_TS_NVR_RATE_Pos)		/*!< 0x00F00000 */
#define AS6031_C6_TS_NVR_RATE           		AS6031_C6_TS_NVR_RATE_Msk					/*!< TS_NVR_RATE[23:20]Recall Timer Rate */
#define AS6031_C6_TS_NVR_RATE_0           		(0x00000001 << AS6031_C6_TS_NVR_RATE_Pos)	
#define AS6031_C6_TS_NVR_RATE_1           		(0x00000002 << AS6031_C6_TS_NVR_RATE_Pos)	
#define AS6031_C6_TS_NVR_RATE_2           		(0x00000004 << AS6031_C6_TS_NVR_RATE_Pos)	
#define AS6031_C6_TS_NVR_RATE_3           		(0x00000008 << AS6031_C6_TS_NVR_RATE_Pos)	
#define AS6031_C6_HIDDEN_25_24_Pos          	(24U)
#define AS6031_C6_HIDDEN_25_24_Msk          	(0x03UL << AS6031_C6_HIDDEN_25_24_Pos)		/*!< 0x03000000 */
#define AS6031_C6_HIDDEN_25_24          		AS6031_C6_HIDDEN_25_24_Msk					/*!< HIDDEN_25_24[25:24]Mandatory setting: b01 */
#define AS6031_C6_HIDDEN_25_24_0          		(0x00000001 << AS6031_C6_HIDDEN_25_24_Pos)	
#define AS6031_C6_HIDDEN_25_24_1          		(0x00000002 << AS6031_C6_HIDDEN_25_24_Pos)	
#define AS6031_C6_HIDDEN_30_26_Pos          	(26U)
#define AS6031_C6_HIDDEN_30_26_Msk          	(0x1FUL << AS6031_C6_HIDDEN_30_26_Pos)		/*!< 0x7C000000 */
#define AS6031_C6_HIDDEN_30_26          		AS6031_C6_HIDDEN_30_26_Msk					/*!< HIDDEN_30_26[30:26]Mandatory setting: b00000 */
#define AS6031_C6_HIDDEN_30_26_0          		(0x00000001 << AS6031_C6_HIDDEN_30_26_Pos)	
#define AS6031_C6_HIDDEN_30_26_1          		(0x00000002 << AS6031_C6_HIDDEN_30_26_Pos)	
#define AS6031_C6_HIDDEN_30_26_2          		(0x00000004 << AS6031_C6_HIDDEN_30_26_Pos)	
#define AS6031_C6_HIDDEN_30_26_3          		(0x00000008 << AS6031_C6_HIDDEN_30_26_Pos)	
#define AS6031_C6_HIDDEN_30_26_4          		(0x00000010 << AS6031_C6_HIDDEN_30_26_Pos)	
#define AS6031_C6_TS_CST_MODE_Pos           	(31U)
#define AS6031_C6_TS_CST_MODE_Msk           	(0x1UL << AS6031_C6_TS_CST_MODE_Pos)		/*!< 0x80000000 */
#define AS6031_C6_TS_CST_MODE           		AS6031_C6_TS_CST_MODE_Msk					/*!< Checksum Handling Mode */

/*******************  Bit definition for AS6031_C7 register  ********************/
#define AS6031_C7_TM_RATE_Pos               	(0U)
#define AS6031_C7_TM_RATE_Msk               	(0x03FFUL << AS6031_C7_TM_RATE_Pos)		/*!< 0x000003FF */
#define AS6031_C7_TM_RATE               		AS6031_C7_TM_RATE_Msk					/*!< TM_RATE[9:0]Temperature Measurement Rate */
#define AS6031_C7_TM_RATE_0               		(0x00000001 << AS6031_C7_TM_RATE_Pos)	
#define AS6031_C7_TM_RATE_1               		(0x00000002 << AS6031_C7_TM_RATE_Pos)	
#define AS6031_C7_TM_RATE_2               		(0x00000004 << AS6031_C7_TM_RATE_Pos)	
#define AS6031_C7_TM_RATE_3               		(0x00000008 << AS6031_C7_TM_RATE_Pos)	
#define AS6031_C7_TM_RATE_4               		(0x00000010 << AS6031_C7_TM_RATE_Pos)	
#define AS6031_C7_TM_RATE_5               		(0x00000020 << AS6031_C7_TM_RATE_Pos)	
#define AS6031_C7_TM_RATE_6               		(0x00000040 << AS6031_C7_TM_RATE_Pos)	
#define AS6031_C7_TM_RATE_7               		(0x00000080 << AS6031_C7_TM_RATE_Pos)	
#define AS6031_C7_TM_RATE_8               		(0x00000100 << AS6031_C7_TM_RATE_Pos)	
#define AS6031_C7_TM_RATE_9               		(0x00000200 << AS6031_C7_TM_RATE_Pos)	
#define AS6031_C7_TPM_PAUSE_Pos             	(10U)
#define AS6031_C7_TPM_PAUSE_Msk             	(0x07UL << AS6031_C7_TPM_PAUSE_Pos)		/*!< 0x00001C00 */
#define AS6031_C7_TPM_PAUSE             		AS6031_C7_TPM_PAUSE_Msk					/*!< TPM_PAUSE[12:10]Pause time between 2 temperature measurements */
#define AS6031_C7_TPM_PAUSE_0             		(0x00000001 << AS6031_C7_TPM_PAUSE_Pos)	
#define AS6031_C7_TPM_PAUSE_1             		(0x00000002 << AS6031_C7_TPM_PAUSE_Pos)	
#define AS6031_C7_TPM_PAUSE_2             		(0x00000004 << AS6031_C7_TPM_PAUSE_Pos)	
#define AS6031_C7_TM_MODE_Pos               	(13U)
#define AS6031_C7_TM_MODE_Msk               	(0x07UL << AS6031_C7_TM_MODE_Pos)		/*!< 0x0000E000 */
#define AS6031_C7_TM_MODE               		AS6031_C7_TM_MODE_Msk					/*!< TM_MODE[15:13]Temperature Measurement Mode */
#define AS6031_C7_TM_MODE_0               		(0x00000001 << AS6031_C7_TM_MODE_Pos)	
#define AS6031_C7_TM_MODE_1               		(0x00000002 << AS6031_C7_TM_MODE_Pos)	
#define AS6031_C7_TM_MODE_2               		(0x00000004 << AS6031_C7_TM_MODE_Pos)	
#define AS6031_C7_HIDDEN_16_16_Pos          	(16U)
#define AS6031_C7_HIDDEN_16_16_Msk          	(0x1UL << AS6031_C7_HIDDEN_16_16_Pos)		/*!< 0x00010000 */
#define AS6031_C7_HIDDEN_16_16          		AS6031_C7_HIDDEN_16_16_Msk					/*!< Mandatory setting: b0 */
#define AS6031_C7_TPM_PORT_MODE_Pos         	(17U)
#define AS6031_C7_TPM_PORT_MODE_Msk         	(0x1UL << AS6031_C7_TPM_PORT_MODE_Pos)		/*!< 0x00020000 */
#define AS6031_C7_TPM_PORT_MODE         		AS6031_C7_TPM_PORT_MODE_Msk					/*!< Temperature Measurement Port Mode */
#define AS6031_C7_TM_PORT_ORDER_Pos         	(18U)
#define AS6031_C7_TM_PORT_ORDER_Msk         	(0x03UL << AS6031_C7_TM_PORT_ORDER_Pos)		/*!< 0x000C0000 */
#define AS6031_C7_TM_PORT_ORDER         		AS6031_C7_TM_PORT_ORDER_Msk					/*!< TM_PORT_ORDER[19:18]Temperature Measurement Port Order */
#define AS6031_C7_TM_PORT_ORDER_0         		(0x00000001 << AS6031_C7_TM_PORT_ORDER_Pos)	
#define AS6031_C7_TM_PORT_ORDER_1         		(0x00000002 << AS6031_C7_TM_PORT_ORDER_Pos)	
#define AS6031_C7_TPM_CLOAD_TRIM_Pos        	(20U)
#define AS6031_C7_TPM_CLOAD_TRIM_Msk        	(0x03UL << AS6031_C7_TPM_CLOAD_TRIM_Pos)		/*!< 0x00300000 */
#define AS6031_C7_TPM_CLOAD_TRIM        		AS6031_C7_TPM_CLOAD_TRIM_Msk					/*!< TPM_CLOAD_TRIM[21:20]Temperature Measurement Load Trim */
#define AS6031_C7_TPM_CLOAD_TRIM_0        		(0x00000001 << AS6031_C7_TPM_CLOAD_TRIM_Pos)	
#define AS6031_C7_TPM_CLOAD_TRIM_1        		(0x00000002 << AS6031_C7_TPM_CLOAD_TRIM_Pos)	
#define AS6031_C7_TPM_CYCLE_SEL_Pos         	(22U)
#define AS6031_C7_TPM_CYCLE_SEL_Msk         	(0x1UL << AS6031_C7_TPM_CYCLE_SEL_Pos)		/*!< 0x00400000 */
#define AS6031_C7_TPM_CYCLE_SEL         		AS6031_C7_TPM_CYCLE_SEL_Msk					/*!< Temperature Measurement Cycle Select */
#define AS6031_C7_TPM_FAKE_NO_Pos           	(23U)
#define AS6031_C7_TPM_FAKE_NO_Msk           	(0x1UL << AS6031_C7_TPM_FAKE_NO_Pos)		/*!< 0x00800000 */
#define AS6031_C7_TPM_FAKE_NO           		AS6031_C7_TPM_FAKE_NO_Msk					/*!< Number of Fake measurements */
#define AS6031_C7_HIDDEN_31_24_Pos          	(24U)
#define AS6031_C7_HIDDEN_31_24_Msk          	(0xFFUL << AS6031_C7_HIDDEN_31_24_Pos)		/*!< 0xFF000000 */
#define AS6031_C7_HIDDEN_31_24          		AS6031_C7_HIDDEN_31_24_Msk					/*!< HIDDEN_31_24[31:24]Mandatory setting: h00 */
#define AS6031_C7_HIDDEN_31_24_0          		(0x00000001 << AS6031_C7_HIDDEN_31_24_Pos)	
#define AS6031_C7_HIDDEN_31_24_1          		(0x00000002 << AS6031_C7_HIDDEN_31_24_Pos)	
#define AS6031_C7_HIDDEN_31_24_2          		(0x00000004 << AS6031_C7_HIDDEN_31_24_Pos)	
#define AS6031_C7_HIDDEN_31_24_3          		(0x00000008 << AS6031_C7_HIDDEN_31_24_Pos)	
#define AS6031_C7_HIDDEN_31_24_4          		(0x00000010 << AS6031_C7_HIDDEN_31_24_Pos)	
#define AS6031_C7_HIDDEN_31_24_5          		(0x00000020 << AS6031_C7_HIDDEN_31_24_Pos)	
#define AS6031_C7_HIDDEN_31_24_6          		(0x00000040 << AS6031_C7_HIDDEN_31_24_Pos)	
#define AS6031_C7_HIDDEN_31_24_7          		(0x00000080 << AS6031_C7_HIDDEN_31_24_Pos)	

/*******************  Bit definition for AS6031_C8 register  ********************/
#define AS6031_C8_USM_PAUSE_Pos             	(0U)
#define AS6031_C8_USM_PAUSE_Msk             	(0x07UL << AS6031_C8_USM_PAUSE_Pos)		/*!< 0x00000007 */
#define AS6031_C8_USM_PAUSE             		AS6031_C8_USM_PAUSE_Msk					/*!< USM_PAUSE[2:0]Pause time between two ultrasonic measurements */
#define AS6031_C8_USM_PAUSE_0             		(0x00000001 << AS6031_C8_USM_PAUSE_Pos)	
#define AS6031_C8_USM_PAUSE_1             		(0x00000002 << AS6031_C8_USM_PAUSE_Pos)	
#define AS6031_C8_USM_PAUSE_2             		(0x00000004 << AS6031_C8_USM_PAUSE_Pos)	
#define AS6031_C8_HIDDEN_3_3_Pos            	(3U)
#define AS6031_C8_HIDDEN_3_3_Msk            	(0x1UL << AS6031_C8_HIDDEN_3_3_Pos)		/*!< 0x00000008 */
#define AS6031_C8_HIDDEN_3_3            		AS6031_C8_HIDDEN_3_3_Msk					/*!< Mandatory setting: b0 */
#define AS6031_C8_USM_DIR_MODE_Pos          	(4U)
#define AS6031_C8_USM_DIR_MODE_Msk          	(0x03UL << AS6031_C8_USM_DIR_MODE_Pos)		/*!< 0x00000030 */
#define AS6031_C8_USM_DIR_MODE          		AS6031_C8_USM_DIR_MODE_Msk					/*!< USM_DIR_MODE[5:4]Ultrasonic Measurement Direction Mode */
#define AS6031_C8_USM_DIR_MODE_0          		(0x00000001 << AS6031_C8_USM_DIR_MODE_Pos)	
#define AS6031_C8_USM_DIR_MODE_1          		(0x00000002 << AS6031_C8_USM_DIR_MODE_Pos)	
#define AS6031_C8_USM_NOISE_MASK_WIN_Pos    	(6U)
#define AS6031_C8_USM_NOISE_MASK_WIN_Msk    	(0x03FFUL << AS6031_C8_USM_NOISE_MASK_WIN_Pos)		/*!< 0x0000FFC0 */
#define AS6031_C8_USM_NOISE_MASK_WIN    		AS6031_C8_USM_NOISE_MASK_WIN_Msk					/*!< USM_NOISE_MASK_WIN[15:6]Noise Mask Window */
#define AS6031_C8_USM_NOISE_MASK_WIN_0    		(0x00000001 << AS6031_C8_USM_NOISE_MASK_WIN_Pos)	
#define AS6031_C8_USM_NOISE_MASK_WIN_1    		(0x00000002 << AS6031_C8_USM_NOISE_MASK_WIN_Pos)	
#define AS6031_C8_USM_NOISE_MASK_WIN_2    		(0x00000004 << AS6031_C8_USM_NOISE_MASK_WIN_Pos)	
#define AS6031_C8_USM_NOISE_MASK_WIN_3    		(0x00000008 << AS6031_C8_USM_NOISE_MASK_WIN_Pos)	
#define AS6031_C8_USM_NOISE_MASK_WIN_4    		(0x00000010 << AS6031_C8_USM_NOISE_MASK_WIN_Pos)	
#define AS6031_C8_USM_NOISE_MASK_WIN_5    		(0x00000020 << AS6031_C8_USM_NOISE_MASK_WIN_Pos)	
#define AS6031_C8_USM_NOISE_MASK_WIN_6    		(0x00000040 << AS6031_C8_USM_NOISE_MASK_WIN_Pos)	
#define AS6031_C8_USM_NOISE_MASK_WIN_7    		(0x00000080 << AS6031_C8_USM_NOISE_MASK_WIN_Pos)	
#define AS6031_C8_USM_NOISE_MASK_WIN_8    		(0x00000100 << AS6031_C8_USM_NOISE_MASK_WIN_Pos)	
#define AS6031_C8_USM_NOISE_MASK_WIN_9    		(0x00000200 << AS6031_C8_USM_NOISE_MASK_WIN_Pos)	
#define AS6031_C8_USM_TO_Pos                	(16U)
#define AS6031_C8_USM_TO_Msk                	(0x03UL << AS6031_C8_USM_TO_Pos)		/*!< 0x00030000 */
#define AS6031_C8_USM_TO                		AS6031_C8_USM_TO_Msk					/*!< USM_TO[17:16]Timeout */
#define AS6031_C8_USM_TO_0                		(0x00000001 << AS6031_C8_USM_TO_Pos)	
#define AS6031_C8_USM_TO_1                		(0x00000002 << AS6031_C8_USM_TO_Pos)	
#define AS6031_C8_HIDDEN_18_18_Pos          	(18U)
#define AS6031_C8_HIDDEN_18_18_Msk          	(0x1UL << AS6031_C8_HIDDEN_18_18_Pos)		/*!< 0x00040000 */
#define AS6031_C8_HIDDEN_18_18          		AS6031_C8_HIDDEN_18_18_Msk					/*!< Mandatory setting: b0 */
#define AS6031_C8_USM_RLS_MODE_Pos          	(19U)
#define AS6031_C8_USM_RLS_MODE_Msk          	(0x1UL << AS6031_C8_USM_RLS_MODE_Pos)		/*!< 0x00080000 */
#define AS6031_C8_USM_RLS_MODE          		AS6031_C8_USM_RLS_MODE_Msk					/*!< Select mode for multihit start release */
#define AS6031_C8_ZCC_RATE_Pos              	(20U)
#define AS6031_C8_ZCC_RATE_Msk              	(0x07UL << AS6031_C8_ZCC_RATE_Pos)		/*!< 0x00700000 */
#define AS6031_C8_ZCC_RATE              		AS6031_C8_ZCC_RATE_Msk					/*!< ZCC_RATE[22:20]Zero Cross Calibration Rate */
#define AS6031_C8_ZCC_RATE_0              		(0x00000001 << AS6031_C8_ZCC_RATE_Pos)	
#define AS6031_C8_ZCC_RATE_1              		(0x00000002 << AS6031_C8_ZCC_RATE_Pos)	
#define AS6031_C8_ZCC_RATE_2              		(0x00000004 << AS6031_C8_ZCC_RATE_Pos)	
#define AS6031_C8_HIDDEN_31_24_Pos          	(23U)
#define AS6031_C8_HIDDEN_31_24_Msk          	(0x1FFUL << AS6031_C8_HIDDEN_31_24_Pos)		/*!< 0xFF800000 */
#define AS6031_C8_HIDDEN_31_24          		AS6031_C8_HIDDEN_31_24_Msk					/*!< HIDDEN_31_24[31:23]Mandatory setting: b000000000 */
#define AS6031_C8_HIDDEN_31_24_0          		(0x00000001 << AS6031_C8_HIDDEN_31_24_Pos)	
#define AS6031_C8_HIDDEN_31_24_1          		(0x00000002 << AS6031_C8_HIDDEN_31_24_Pos)	
#define AS6031_C8_HIDDEN_31_24_2          		(0x00000004 << AS6031_C8_HIDDEN_31_24_Pos)	
#define AS6031_C8_HIDDEN_31_24_3          		(0x00000008 << AS6031_C8_HIDDEN_31_24_Pos)	
#define AS6031_C8_HIDDEN_31_24_4          		(0x00000010 << AS6031_C8_HIDDEN_31_24_Pos)	
#define AS6031_C8_HIDDEN_31_24_5          		(0x00000020 << AS6031_C8_HIDDEN_31_24_Pos)	
#define AS6031_C8_HIDDEN_31_24_6          		(0x00000040 << AS6031_C8_HIDDEN_31_24_Pos)	
#define AS6031_C8_HIDDEN_31_24_7          		(0x00000080 << AS6031_C8_HIDDEN_31_24_Pos)	
#define AS6031_C8_HIDDEN_31_24_8          		(0x00000100 << AS6031_C8_HIDDEN_31_24_Pos)	

/*******************  Bit definition for AS6031_C9 register  ********************/
#define AS6031_C9_FBG_CLK_DIV_Pos           	(0U)
#define AS6031_C9_FBG_CLK_DIV_Msk           	(0x07FUL << AS6031_C9_FBG_CLK_DIV_Pos)		/*!< 0x0000007F */
#define AS6031_C9_FBG_CLK_DIV           		AS6031_C9_FBG_CLK_DIV_Msk					/*!< FBG_CLK_DIV[6:0]Clock divider for fire burst generator */
#define AS6031_C9_FBG_CLK_DIV_0           		(0x00000001 << AS6031_C9_FBG_CLK_DIV_Pos)	
#define AS6031_C9_FBG_CLK_DIV_1           		(0x00000002 << AS6031_C9_FBG_CLK_DIV_Pos)	
#define AS6031_C9_FBG_CLK_DIV_2           		(0x00000004 << AS6031_C9_FBG_CLK_DIV_Pos)	
#define AS6031_C9_FBG_CLK_DIV_3           		(0x00000008 << AS6031_C9_FBG_CLK_DIV_Pos)	
#define AS6031_C9_FBG_CLK_DIV_4           		(0x00000010 << AS6031_C9_FBG_CLK_DIV_Pos)	
#define AS6031_C9_FBG_CLK_DIV_5           		(0x00000020 << AS6031_C9_FBG_CLK_DIV_Pos)	
#define AS6031_C9_FBG_CLK_DIV_6           		(0x00000040 << AS6031_C9_FBG_CLK_DIV_Pos)	
#define AS6031_C9_FBG_MODE_Pos              	(7U)
#define AS6031_C9_FBG_MODE_Msk              	(0x1UL << AS6031_C9_FBG_MODE_Pos)		/*!< 0x00000080 */
#define AS6031_C9_FBG_MODE              		AS6031_C9_FBG_MODE_Msk					/*!< Fire Burst Generator Mode */
#define AS6031_C9_FBG_PHASE_INS_Pos         	(8U)
#define AS6031_C9_FBG_PHASE_INS_Msk         	(0xFFUL << AS6031_C9_FBG_PHASE_INS_Pos)		/*!< 0x0000FF00 */
#define AS6031_C9_FBG_PHASE_INS         		AS6031_C9_FBG_PHASE_INS_Msk					/*!< FBG_PHASE_INS[15:8]Fire Burst Generator, Phase Insertion */
#define AS6031_C9_FBG_PHASE_INS_0         		(0x00000001 << AS6031_C9_FBG_PHASE_INS_Pos)	
#define AS6031_C9_FBG_PHASE_INS_1         		(0x00000002 << AS6031_C9_FBG_PHASE_INS_Pos)	
#define AS6031_C9_FBG_PHASE_INS_2         		(0x00000004 << AS6031_C9_FBG_PHASE_INS_Pos)	
#define AS6031_C9_FBG_PHASE_INS_3         		(0x00000008 << AS6031_C9_FBG_PHASE_INS_Pos)	
#define AS6031_C9_FBG_PHASE_INS_4         		(0x00000010 << AS6031_C9_FBG_PHASE_INS_Pos)	
#define AS6031_C9_FBG_PHASE_INS_5         		(0x00000020 << AS6031_C9_FBG_PHASE_INS_Pos)	
#define AS6031_C9_FBG_PHASE_INS_6         		(0x00000040 << AS6031_C9_FBG_PHASE_INS_Pos)	
#define AS6031_C9_FBG_PHASE_INS_7         		(0x00000080 << AS6031_C9_FBG_PHASE_INS_Pos)	
#define AS6031_C9_FBG_BURST_PRE_Pos         	(16U)
#define AS6031_C9_FBG_BURST_PRE_Msk         	(0x3FUL << AS6031_C9_FBG_BURST_PRE_Pos)		/*!< 0x003F0000 */
#define AS6031_C9_FBG_BURST_PRE         		AS6031_C9_FBG_BURST_PRE_Msk					/*!< FBG_BURST_PRE[21:16]Fire Burst Generator, pre-burst */
#define AS6031_C9_FBG_BURST_PRE_0         		(0x00000001 << AS6031_C9_FBG_BURST_PRE_Pos)	
#define AS6031_C9_FBG_BURST_PRE_1         		(0x00000002 << AS6031_C9_FBG_BURST_PRE_Pos)	
#define AS6031_C9_FBG_BURST_PRE_2         		(0x00000004 << AS6031_C9_FBG_BURST_PRE_Pos)	
#define AS6031_C9_FBG_BURST_PRE_3         		(0x00000008 << AS6031_C9_FBG_BURST_PRE_Pos)	
#define AS6031_C9_FBG_BURST_PRE_4         		(0x00000010 << AS6031_C9_FBG_BURST_PRE_Pos)	
#define AS6031_C9_FBG_BURST_PRE_5         		(0x00000020 << AS6031_C9_FBG_BURST_PRE_Pos)	
#define AS6031_C9_FBG_BURST_POST_Pos        	(22U)
#define AS6031_C9_FBG_BURST_POST_Msk        	(0x3FUL << AS6031_C9_FBG_BURST_POST_Pos)		/*!< 0x0FC00000 */
#define AS6031_C9_FBG_BURST_POST        		AS6031_C9_FBG_BURST_POST_Msk					/*!< FBG_BURST_POST[27:22]Fire Burst Generator, post-burst */
#define AS6031_C9_FBG_BURST_POST_0        		(0x00000001 << AS6031_C9_FBG_BURST_POST_Pos)	
#define AS6031_C9_FBG_BURST_POST_1        		(0x00000002 << AS6031_C9_FBG_BURST_POST_Pos)	
#define AS6031_C9_FBG_BURST_POST_2        		(0x00000004 << AS6031_C9_FBG_BURST_POST_Pos)	
#define AS6031_C9_FBG_BURST_POST_3        		(0x00000008 << AS6031_C9_FBG_BURST_POST_Pos)	
#define AS6031_C9_FBG_BURST_POST_4        		(0x00000010 << AS6031_C9_FBG_BURST_POST_Pos)	
#define AS6031_C9_FBG_BURST_POST_5        		(0x00000020 << AS6031_C9_FBG_BURST_POST_Pos)	
#define AS6031_C9_HIDDEN_28_28_Pos          	(28U)
#define AS6031_C9_HIDDEN_28_28_Msk          	(0x1UL << AS6031_C9_HIDDEN_28_28_Pos)		/*!< 0x10000000 */
#define AS6031_C9_HIDDEN_28_28          		AS6031_C9_HIDDEN_28_28_Msk					/*!< Mandatory setting: b0 */
#define AS6031_C9_HIDDEN_29_29_Pos          	(29U)
#define AS6031_C9_HIDDEN_29_29_Msk          	(0x1UL << AS6031_C9_HIDDEN_29_29_Pos)		/*!< 0x20000000 */
#define AS6031_C9_HIDDEN_29_29          		AS6031_C9_HIDDEN_29_29_Msk					/*!< Mandatory setting: b1 */
#define AS6031_C9_TOF_HIT_MODE_Pos          	(30U)
#define AS6031_C9_TOF_HIT_MODE_Msk          	(0x1UL << AS6031_C9_TOF_HIT_MODE_Pos)		/*!< 0x40000000 */
#define AS6031_C9_TOF_HIT_MODE          		AS6031_C9_TOF_HIT_MODE_Msk					/*!< TOF data in FDB according to Multi-Hit Mode */
#define AS6031_C9_HIDDEN_31_31_Pos          	(31U)
#define AS6031_C9_HIDDEN_31_31_Msk          	(0x1UL << AS6031_C9_HIDDEN_31_31_Pos)		/*!< 0x80000000 */
#define AS6031_C9_HIDDEN_31_31          		AS6031_C9_HIDDEN_31_31_Msk					/*!< Mandatory setting: b0 */

/*******************  Bit definition for AS6031_CA register  ********************/
#define AS6031_CA_HIDDEN_0_0_Pos            	(0U)
#define AS6031_CA_HIDDEN_0_0_Msk            	(0x1UL << AS6031_CA_HIDDEN_0_0_Pos)		/*!< 0x00000001 */
#define AS6031_CA_HIDDEN_0_0            		AS6031_CA_HIDDEN_0_0_Msk					/*!< Mandatory setting: b0 */
#define AS6031_CA_TOF_HIT_START_Pos         	(1U)
#define AS6031_CA_TOF_HIT_START_Msk         	(0x1FUL << AS6031_CA_TOF_HIT_START_Pos)		/*!< 0x0000003E */
#define AS6031_CA_TOF_HIT_START         		AS6031_CA_TOF_HIT_START_Msk					/*!< TOF_HIT_START[5:1]Defines number of detected hits (including first hit) */
#define AS6031_CA_TOF_HIT_START_0         		(0x00000001 << AS6031_CA_TOF_HIT_START_Pos)	
#define AS6031_CA_TOF_HIT_START_1         		(0x00000002 << AS6031_CA_TOF_HIT_START_Pos)	
#define AS6031_CA_TOF_HIT_START_2         		(0x00000004 << AS6031_CA_TOF_HIT_START_Pos)	
#define AS6031_CA_TOF_HIT_START_3         		(0x00000008 << AS6031_CA_TOF_HIT_START_Pos)	
#define AS6031_CA_TOF_HIT_START_4         		(0x00000010 << AS6031_CA_TOF_HIT_START_Pos)	
#define AS6031_CA_TOF_HIT_IGN_Pos           	(6U)
#define AS6031_CA_TOF_HIT_IGN_Msk           	(0x03UL << AS6031_CA_TOF_HIT_IGN_Pos)		/*!< 0x000000C0 */
#define AS6031_CA_TOF_HIT_IGN           		AS6031_CA_TOF_HIT_IGN_Msk					/*!< TOF_HIT_IGN[7:6]Number of multi hits ignored between two hits taken for TDC measurement */
#define AS6031_CA_TOF_HIT_IGN_0           		(0x00000001 << AS6031_CA_TOF_HIT_IGN_Pos)	
#define AS6031_CA_TOF_HIT_IGN_1           		(0x00000002 << AS6031_CA_TOF_HIT_IGN_Pos)	
#define AS6031_CA_TOF_HIT_SUM_NO_Pos        	(8U)
#define AS6031_CA_TOF_HIT_SUM_NO_Msk        	(0x1FUL << AS6031_CA_TOF_HIT_SUM_NO_Pos)		/*!< 0x00001F00 */
#define AS6031_CA_TOF_HIT_SUM_NO        		AS6031_CA_TOF_HIT_SUM_NO_Msk					/*!< TOF_HIT_SUM_NO[12:8]Number of hits taken for sum value of TOF measurement */
#define AS6031_CA_TOF_HIT_SUM_NO_0        		(0x00000001 << AS6031_CA_TOF_HIT_SUM_NO_Pos)	
#define AS6031_CA_TOF_HIT_SUM_NO_1        		(0x00000002 << AS6031_CA_TOF_HIT_SUM_NO_Pos)	
#define AS6031_CA_TOF_HIT_SUM_NO_2        		(0x00000004 << AS6031_CA_TOF_HIT_SUM_NO_Pos)	
#define AS6031_CA_TOF_HIT_SUM_NO_3        		(0x00000008 << AS6031_CA_TOF_HIT_SUM_NO_Pos)	
#define AS6031_CA_TOF_HIT_SUM_NO_4        		(0x00000010 << AS6031_CA_TOF_HIT_SUM_NO_Pos)	
#define AS6031_CA_TOF_HIT_END_Pos           	(13U)
#define AS6031_CA_TOF_HIT_END_Msk           	(0x07FUL << AS6031_CA_TOF_HIT_END_Pos)		/*!< 0x000FE000 */
#define AS6031_CA_TOF_HIT_END           		AS6031_CA_TOF_HIT_END_Msk					/*!< TOF_HIT_END[19:13]TOF Hits stored to frontend data buffer */
#define AS6031_CA_TOF_HIT_END_0           		(0x00000001 << AS6031_CA_TOF_HIT_END_Pos)	
#define AS6031_CA_TOF_HIT_END_1           		(0x00000002 << AS6031_CA_TOF_HIT_END_Pos)	
#define AS6031_CA_TOF_HIT_END_2           		(0x00000004 << AS6031_CA_TOF_HIT_END_Pos)	
#define AS6031_CA_TOF_HIT_END_3           		(0x00000008 << AS6031_CA_TOF_HIT_END_Pos)	
#define AS6031_CA_TOF_HIT_END_4           		(0x00000010 << AS6031_CA_TOF_HIT_END_Pos)	
#define AS6031_CA_TOF_HIT_END_5           		(0x00000020 << AS6031_CA_TOF_HIT_END_Pos)	
#define AS6031_CA_TOF_HIT_END_6           		(0x00000040 << AS6031_CA_TOF_HIT_END_Pos)	
#define AS6031_CA_HIDDEN_21_20_Pos          	(20U)
#define AS6031_CA_HIDDEN_21_20_Msk          	(0x03UL << AS6031_CA_HIDDEN_21_20_Pos)		/*!< 0x00300000 */
#define AS6031_CA_HIDDEN_21_20          		AS6031_CA_HIDDEN_21_20_Msk					/*!< HIDDEN_21_20[21:20]Mandatory setting: b00 */
#define AS6031_CA_HIDDEN_21_20_0          		(0x00000001 << AS6031_CA_HIDDEN_21_20_Pos)	
#define AS6031_CA_HIDDEN_21_20_1          		(0x00000002 << AS6031_CA_HIDDEN_21_20_Pos)	
#define AS6031_CA_TOF_EDGE_MODE_Pos         	(22U)
#define AS6031_CA_TOF_EDGE_MODE_Msk         	(0x03UL << AS6031_CA_TOF_EDGE_MODE_Pos)		/*!< 0x00C00000 */
#define AS6031_CA_TOF_EDGE_MODE         		AS6031_CA_TOF_EDGE_MODE_Msk					/*!< TOF_EDGE_MODE[23:22]Time of Flight, edge mode */
#define AS6031_CA_TOF_EDGE_MODE_0         		(0x00000001 << AS6031_CA_TOF_EDGE_MODE_Pos)	
#define AS6031_CA_TOF_EDGE_MODE_1         		(0x00000002 << AS6031_CA_TOF_EDGE_MODE_Pos)	
#define AS6031_CA_TOF_RATE_INIT_Pos         	(24U)
#define AS6031_CA_TOF_RATE_INIT_Msk         	(0x3FUL << AS6031_CA_TOF_RATE_INIT_Pos)		/*!< 0x3F000000 */
#define AS6031_CA_TOF_RATE_INIT         		AS6031_CA_TOF_RATE_INIT_Msk					/*!< TOF_RATE_INIT[29:24]FWD copy of initial value for TOF rate */
#define AS6031_CA_TOF_RATE_INIT_0         		(0x00000001 << AS6031_CA_TOF_RATE_INIT_Pos)	
#define AS6031_CA_TOF_RATE_INIT_1         		(0x00000002 << AS6031_CA_TOF_RATE_INIT_Pos)	
#define AS6031_CA_TOF_RATE_INIT_2         		(0x00000004 << AS6031_CA_TOF_RATE_INIT_Pos)	
#define AS6031_CA_TOF_RATE_INIT_3         		(0x00000008 << AS6031_CA_TOF_RATE_INIT_Pos)	
#define AS6031_CA_TOF_RATE_INIT_4         		(0x00000010 << AS6031_CA_TOF_RATE_INIT_Pos)	
#define AS6031_CA_TOF_RATE_INIT_5         		(0x00000020 << AS6031_CA_TOF_RATE_INIT_Pos)	
#define AS6031_CA_NOT_USED_31_30_Pos        	(30U)
#define AS6031_CA_NOT_USED_31_30_Msk        	(0x03UL << AS6031_CA_NOT_USED_31_30_Pos)		/*!< 0xC0000000 */
#define AS6031_CA_NOT_USED_31_30        		AS6031_CA_NOT_USED_31_30_Msk					/*!< NOT_USED_31_30[31:30]Not Used */
#define AS6031_CA_NOT_USED_31_30_0        		(0x00000001 << AS6031_CA_NOT_USED_31_30_Pos)	
#define AS6031_CA_NOT_USED_31_30_1        		(0x00000002 << AS6031_CA_NOT_USED_31_30_Pos)	

/*******************  Bit definition for AS6031_CB register  ********************/
#define AS6031_CB_AM_RATE_Pos               	(0U)
#define AS6031_CB_AM_RATE_Msk               	(0x07UL << AS6031_CB_AM_RATE_Pos)		/*!< 0x00000007 */
#define AS6031_CB_AM_RATE               		AS6031_CB_AM_RATE_Msk					/*!< AM_RATE[2:0]Amplitude measurement rate */
#define AS6031_CB_AM_RATE_0               		(0x00000001 << AS6031_CB_AM_RATE_Pos)	
#define AS6031_CB_AM_RATE_1               		(0x00000002 << AS6031_CB_AM_RATE_Pos)	
#define AS6031_CB_AM_RATE_2               		(0x00000004 << AS6031_CB_AM_RATE_Pos)	
#define AS6031_CB_HIDEN_3_3_Pos             	(3U)
#define AS6031_CB_HIDEN_3_3_Msk             	(0x1UL << AS6031_CB_HIDEN_3_3_Pos)		/*!< 0x00000008 */
#define AS6031_CB_HIDEN_3_3             		AS6031_CB_HIDEN_3_3_Msk					/*!< Default setting: b0 */
#define AS6031_CB_AM_PD_END_Pos             	(4U)
#define AS6031_CB_AM_PD_END_Msk             	(0x1FUL << AS6031_CB_AM_PD_END_Pos)		/*!< 0x000001F0 */
#define AS6031_CB_AM_PD_END             		AS6031_CB_AM_PD_END_Msk					/*!< AM_PD_END[8:4]Amplitude measurement, end of peak detection */
#define AS6031_CB_AM_PD_END_0             		(0x00000001 << AS6031_CB_AM_PD_END_Pos)	
#define AS6031_CB_AM_PD_END_1             		(0x00000002 << AS6031_CB_AM_PD_END_Pos)	
#define AS6031_CB_AM_PD_END_2             		(0x00000004 << AS6031_CB_AM_PD_END_Pos)	
#define AS6031_CB_AM_PD_END_3             		(0x00000008 << AS6031_CB_AM_PD_END_Pos)	
#define AS6031_CB_AM_PD_END_4             		(0x00000010 << AS6031_CB_AM_PD_END_Pos)	
#define AS6031_CB_HIDDEN_11_9_Pos           	(9U)
#define AS6031_CB_HIDDEN_11_9_Msk           	(0x07UL << AS6031_CB_HIDDEN_11_9_Pos)		/*!< 0x00000E00 */
#define AS6031_CB_HIDDEN_11_9           		AS6031_CB_HIDDEN_11_9_Msk					/*!< HIDDEN_11_9[11:9]Mandatory setting: b111 */
#define AS6031_CB_HIDDEN_11_9_0           		(0x00000001 << AS6031_CB_HIDDEN_11_9_Pos)	
#define AS6031_CB_HIDDEN_11_9_1           		(0x00000002 << AS6031_CB_HIDDEN_11_9_Pos)	
#define AS6031_CB_HIDDEN_11_9_2           		(0x00000004 << AS6031_CB_HIDDEN_11_9_Pos)	
#define AS6031_CB_AMC_RATE_Pos              	(12U)
#define AS6031_CB_AMC_RATE_Msk              	(0x07UL << AS6031_CB_AMC_RATE_Pos)		/*!< 0x00007000 */
#define AS6031_CB_AMC_RATE              		AS6031_CB_AMC_RATE_Msk					/*!< AMC_RATE[14:12]Amplitude measurement calibration rate */
#define AS6031_CB_AMC_RATE_0              		(0x00000001 << AS6031_CB_AMC_RATE_Pos)	
#define AS6031_CB_AMC_RATE_1              		(0x00000002 << AS6031_CB_AMC_RATE_Pos)	
#define AS6031_CB_AMC_RATE_2              		(0x00000004 << AS6031_CB_AMC_RATE_Pos)	
#define AS6031_CB_PWD_EN_Pos                	(15U)
#define AS6031_CB_PWD_EN_Msk                	(0x1UL << AS6031_CB_PWD_EN_Pos)		/*!< 0x00008000 */
#define AS6031_CB_PWD_EN                		AS6031_CB_PWD_EN_Msk					/*!< Enables pulse width detection */
#define AS6031_CB_PGA_TRIM_Pos              	(16U)
#define AS6031_CB_PGA_TRIM_Msk              	(0x07UL << AS6031_CB_PGA_TRIM_Pos)		/*!< 0x00070000 */
#define AS6031_CB_PGA_TRIM              		AS6031_CB_PGA_TRIM_Msk					/*!< PGA_TRIM[18:16]DC gain of the PGA */
#define AS6031_CB_PGA_TRIM_0              		(0x00000001 << AS6031_CB_PGA_TRIM_Pos)	
#define AS6031_CB_PGA_TRIM_1              		(0x00000002 << AS6031_CB_PGA_TRIM_Pos)	
#define AS6031_CB_PGA_TRIM_2              		(0x00000004 << AS6031_CB_PGA_TRIM_Pos)	
#define AS6031_CB_HIDDEN_19_19_Pos          	(19U)
#define AS6031_CB_HIDDEN_19_19_Msk          	(0x1UL << AS6031_CB_HIDDEN_19_19_Pos)		/*!< 0x00080000 */
#define AS6031_CB_HIDDEN_19_19          		AS6031_CB_HIDDEN_19_19_Msk					/*!< Default setting: b0 */
#define AS6031_CB_PGA_EN_MODE_Pos           	(20U)
#define AS6031_CB_PGA_EN_MODE_Msk           	(0x1UL << AS6031_CB_PGA_EN_MODE_Pos)		/*!< 0x00100000 */
#define AS6031_CB_PGA_EN_MODE           		AS6031_CB_PGA_EN_MODE_Msk					/*!< PGA enable mode */
#define AS6031_CB_PGA_MODE_Pos              	(21U)
#define AS6031_CB_PGA_MODE_Msk              	(0x1UL << AS6031_CB_PGA_MODE_Pos)		/*!< 0x00200000 */
#define AS6031_CB_PGA_MODE              		AS6031_CB_PGA_MODE_Msk					/*!< Ultrasonic measurement PGA Mode */
#define AS6031_CB_HIDDEN_22_22_Pos          	(22U)
#define AS6031_CB_HIDDEN_22_22_Msk          	(0x1UL << AS6031_CB_HIDDEN_22_22_Pos)		/*!< 0x00400000 */
#define AS6031_CB_HIDDEN_22_22          		AS6031_CB_HIDDEN_22_22_Msk					/*!< Mandatory setting: b0 */
#define AS6031_CB_AM_PD_START_MODE_Pos      	(23U)
#define AS6031_CB_AM_PD_START_MODE_Msk      	(0x1UL << AS6031_CB_AM_PD_START_MODE_Pos)		/*!< 0x00800000 */
#define AS6031_CB_AM_PD_START_MODE      		AS6031_CB_AM_PD_START_MODE_Msk					/*!< Peak Detection Start Mode */
#define AS6031_CB_ZCD_FHL_INIT_Pos          	(24U)
#define AS6031_CB_ZCD_FHL_INIT_Msk          	(0xFFUL << AS6031_CB_ZCD_FHL_INIT_Pos)		/*!< 0xFF000000 */
#define AS6031_CB_ZCD_FHL_INIT          		AS6031_CB_ZCD_FHL_INIT_Msk					/*!< ZCD_FHL_INIT[31:24]FWD copy of initial value for first hit levels */
#define AS6031_CB_ZCD_FHL_INIT_0          		(0x00000001 << AS6031_CB_ZCD_FHL_INIT_Pos)	
#define AS6031_CB_ZCD_FHL_INIT_1          		(0x00000002 << AS6031_CB_ZCD_FHL_INIT_Pos)	
#define AS6031_CB_ZCD_FHL_INIT_2          		(0x00000004 << AS6031_CB_ZCD_FHL_INIT_Pos)	
#define AS6031_CB_ZCD_FHL_INIT_3          		(0x00000008 << AS6031_CB_ZCD_FHL_INIT_Pos)	
#define AS6031_CB_ZCD_FHL_INIT_4          		(0x00000010 << AS6031_CB_ZCD_FHL_INIT_Pos)	
#define AS6031_CB_ZCD_FHL_INIT_5          		(0x00000020 << AS6031_CB_ZCD_FHL_INIT_Pos)	
#define AS6031_CB_ZCD_FHL_INIT_6          		(0x00000040 << AS6031_CB_ZCD_FHL_INIT_Pos)	
#define AS6031_CB_ZCD_FHL_INIT_7          		(0x00000080 << AS6031_CB_ZCD_FHL_INIT_Pos)	

/*******************  Bit definition for AS6031_CC register  ********************/
#define AS6031_CC_TRIM1_Pos                 	(0U)
#define AS6031_CC_TRIM1_Msk                 	(0xFFFFFFFFUL << AS6031_CC_TRIM1_Pos)		/*!< 0xFFFFFFFF */
#define AS6031_CC_TRIM1                 		AS6031_CC_TRIM1_Msk					/*!< TRIM1[31:0]Default setting: 0x95A0C06C */
#define AS6031_CC_TRIM1_0                 		(0x00000001 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_1                 		(0x00000002 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_2                 		(0x00000004 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_3                 		(0x00000008 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_4                 		(0x00000010 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_5                 		(0x00000020 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_6                 		(0x00000040 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_7                 		(0x00000080 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_8                 		(0x00000100 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_9                 		(0x00000200 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_10                 		(0x00000400 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_11                 		(0x00000800 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_12                 		(0x00001000 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_13                 		(0x00002000 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_14                 		(0x00004000 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_15                 		(0x00008000 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_16                 		(0x00010000 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_17                 		(0x00020000 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_18                 		(0x00040000 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_19                 		(0x00080000 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_20                 		(0x00100000 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_21                 		(0x00200000 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_22                 		(0x00400000 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_23                 		(0x00800000 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_24                 		(0x01000000 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_25                 		(0x02000000 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_26                 		(0x04000000 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_27                 		(0x08000000 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_28                 		(0x10000000 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_29                 		(0x20000000 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_30                 		(0x40000000 << AS6031_CC_TRIM1_Pos)	
#define AS6031_CC_TRIM1_31                 		(0x80000000 << AS6031_CC_TRIM1_Pos)	

/*******************  Bit definition for AS6031_CD register  ********************/
#define AS6031_CD_TRIM2_Pos                 	(0U)
#define AS6031_CD_TRIM2_Msk                 	(0xFFFFFFFFUL << AS6031_CD_TRIM2_Pos)		/*!< 0xFFFFFFFF */
#define AS6031_CD_TRIM2                 		AS6031_CD_TRIM2_Msk					/*!< TRIM2[31:0]Default setting: 0x40110000 */
#define AS6031_CD_TRIM2_0                 		(0x00000001 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_1                 		(0x00000002 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_2                 		(0x00000004 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_3                 		(0x00000008 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_4                 		(0x00000010 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_5                 		(0x00000020 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_6                 		(0x00000040 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_7                 		(0x00000080 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_8                 		(0x00000100 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_9                 		(0x00000200 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_10                 		(0x00000400 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_11                 		(0x00000800 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_12                 		(0x00001000 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_13                 		(0x00002000 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_14                 		(0x00004000 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_15                 		(0x00008000 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_16                 		(0x00010000 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_17                 		(0x00020000 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_18                 		(0x00040000 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_19                 		(0x00080000 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_20                 		(0x00100000 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_21                 		(0x00200000 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_22                 		(0x00400000 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_23                 		(0x00800000 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_24                 		(0x01000000 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_25                 		(0x02000000 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_26                 		(0x04000000 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_27                 		(0x08000000 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_28                 		(0x10000000 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_29                 		(0x20000000 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_30                 		(0x40000000 << AS6031_CD_TRIM2_Pos)	
#define AS6031_CD_TRIM2_31                 		(0x80000000 << AS6031_CD_TRIM2_Pos)	

/*******************  Bit definition for AS6031_CE register  ********************/
#define AS6031_CE_TRIM3_Pos                 	(0U)
#define AS6031_CE_TRIM3_Msk                 	(0xFFFFFFFFUL << AS6031_CE_TRIM3_Pos)		/*!< 0xFFFFFFFF */
#define AS6031_CE_TRIM3                 		AS6031_CE_TRIM3_Msk					/*!< TRIM3[31:0]Default setting: 0x4027000F */
#define AS6031_CE_TRIM3_0                 		(0x00000001 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_1                 		(0x00000002 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_2                 		(0x00000004 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_3                 		(0x00000008 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_4                 		(0x00000010 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_5                 		(0x00000020 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_6                 		(0x00000040 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_7                 		(0x00000080 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_8                 		(0x00000100 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_9                 		(0x00000200 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_10                 		(0x00000400 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_11                 		(0x00000800 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_12                 		(0x00001000 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_13                 		(0x00002000 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_14                 		(0x00004000 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_15                 		(0x00008000 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_16                 		(0x00010000 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_17                 		(0x00020000 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_18                 		(0x00040000 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_19                 		(0x00080000 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_20                 		(0x00100000 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_21                 		(0x00200000 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_22                 		(0x00400000 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_23                 		(0x00800000 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_24                 		(0x01000000 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_25                 		(0x02000000 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_26                 		(0x04000000 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_27                 		(0x08000000 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_28                 		(0x10000000 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_29                 		(0x20000000 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_30                 		(0x40000000 << AS6031_CE_TRIM3_Pos)	
#define AS6031_CE_TRIM3_31                 		(0x80000000 << AS6031_CE_TRIM3_Pos)	

/*******************  Bit definition for AS6031_D0 register  ********************/
#define AS6031_D0_TOF_RATE_Pos              	(0U)
#define AS6031_D0_TOF_RATE_Msk              	(0x3FUL << AS6031_D0_TOF_RATE_Pos)		/*!< 0x0000003F */
#define AS6031_D0_TOF_RATE              		AS6031_D0_TOF_RATE_Msk					/*!< TOF_RATE[5:0]TOF Rate */
#define AS6031_D0_TOF_RATE_0              		(0x00000001 << AS6031_D0_TOF_RATE_Pos)	
#define AS6031_D0_TOF_RATE_1              		(0x00000002 << AS6031_D0_TOF_RATE_Pos)	
#define AS6031_D0_TOF_RATE_2              		(0x00000004 << AS6031_D0_TOF_RATE_Pos)	
#define AS6031_D0_TOF_RATE_3              		(0x00000008 << AS6031_D0_TOF_RATE_Pos)	
#define AS6031_D0_TOF_RATE_4              		(0x00000010 << AS6031_D0_TOF_RATE_Pos)	
#define AS6031_D0_TOF_RATE_5              		(0x00000020 << AS6031_D0_TOF_RATE_Pos)	
#define AS6031_D0_NOT_USED_31_6_Pos         	(6U)
#define AS6031_D0_NOT_USED_31_6_Msk         	(0x03FFFFFFUL << AS6031_D0_NOT_USED_31_6_Pos)		/*!< 0xFFFFFFC0 */
#define AS6031_D0_NOT_USED_31_6         		AS6031_D0_NOT_USED_31_6_Msk					/*!< NOT_USED_31_6[31:6]Not used */
#define AS6031_D0_NOT_USED_31_6_0         		(0x00000001 << AS6031_D0_NOT_USED_31_6_Pos)	
#define AS6031_D0_NOT_USED_31_6_1         		(0x00000002 << AS6031_D0_NOT_USED_31_6_Pos)	
#define AS6031_D0_NOT_USED_31_6_2         		(0x00000004 << AS6031_D0_NOT_USED_31_6_Pos)	
#define AS6031_D0_NOT_USED_31_6_3         		(0x00000008 << AS6031_D0_NOT_USED_31_6_Pos)	
#define AS6031_D0_NOT_USED_31_6_4         		(0x00000010 << AS6031_D0_NOT_USED_31_6_Pos)	
#define AS6031_D0_NOT_USED_31_6_5         		(0x00000020 << AS6031_D0_NOT_USED_31_6_Pos)	
#define AS6031_D0_NOT_USED_31_6_6         		(0x00000040 << AS6031_D0_NOT_USED_31_6_Pos)	
#define AS6031_D0_NOT_USED_31_6_7         		(0x00000080 << AS6031_D0_NOT_USED_31_6_Pos)	
#define AS6031_D0_NOT_USED_31_6_8         		(0x00000100 << AS6031_D0_NOT_USED_31_6_Pos)	
#define AS6031_D0_NOT_USED_31_6_9         		(0x00000200 << AS6031_D0_NOT_USED_31_6_Pos)	
#define AS6031_D0_NOT_USED_31_6_10         		(0x00000400 << AS6031_D0_NOT_USED_31_6_Pos)	
#define AS6031_D0_NOT_USED_31_6_11         		(0x00000800 << AS6031_D0_NOT_USED_31_6_Pos)	
#define AS6031_D0_NOT_USED_31_6_12         		(0x00001000 << AS6031_D0_NOT_USED_31_6_Pos)	
#define AS6031_D0_NOT_USED_31_6_13         		(0x00002000 << AS6031_D0_NOT_USED_31_6_Pos)	
#define AS6031_D0_NOT_USED_31_6_14         		(0x00004000 << AS6031_D0_NOT_USED_31_6_Pos)	
#define AS6031_D0_NOT_USED_31_6_15         		(0x00008000 << AS6031_D0_NOT_USED_31_6_Pos)	
#define AS6031_D0_NOT_USED_31_6_16         		(0x00010000 << AS6031_D0_NOT_USED_31_6_Pos)	
#define AS6031_D0_NOT_USED_31_6_17         		(0x00020000 << AS6031_D0_NOT_USED_31_6_Pos)	
#define AS6031_D0_NOT_USED_31_6_18         		(0x00040000 << AS6031_D0_NOT_USED_31_6_Pos)	
#define AS6031_D0_NOT_USED_31_6_19         		(0x00080000 << AS6031_D0_NOT_USED_31_6_Pos)	
#define AS6031_D0_NOT_USED_31_6_20         		(0x00100000 << AS6031_D0_NOT_USED_31_6_Pos)	
#define AS6031_D0_NOT_USED_31_6_21         		(0x00200000 << AS6031_D0_NOT_USED_31_6_Pos)	
#define AS6031_D0_NOT_USED_31_6_22         		(0x00400000 << AS6031_D0_NOT_USED_31_6_Pos)	
#define AS6031_D0_NOT_USED_31_6_23         		(0x00800000 << AS6031_D0_NOT_USED_31_6_Pos)	
#define AS6031_D0_NOT_USED_31_6_24         		(0x01000000 << AS6031_D0_NOT_USED_31_6_Pos)	
#define AS6031_D0_NOT_USED_31_6_25         		(0x02000000 << AS6031_D0_NOT_USED_31_6_Pos)	

/*******************  Bit definition for AS6031_D1 register  ********************/
#define AS6031_D1_USM_RLS_DLY_U_Pos         	(0U)
#define AS6031_D1_USM_RLS_DLY_U_Msk         	(0x07FFFFUL << AS6031_D1_USM_RLS_DLY_U_Pos)		/*!< 0x0007FFFF */
#define AS6031_D1_USM_RLS_DLY_U         		AS6031_D1_USM_RLS_DLY_U_Msk					/*!< USM_RLS_DLY_U[18:0]Delay window in up direction, releasing ultrasonic measurement */
#define AS6031_D1_USM_RLS_DLY_U_0         		(0x00000001 << AS6031_D1_USM_RLS_DLY_U_Pos)	
#define AS6031_D1_USM_RLS_DLY_U_1         		(0x00000002 << AS6031_D1_USM_RLS_DLY_U_Pos)	
#define AS6031_D1_USM_RLS_DLY_U_2         		(0x00000004 << AS6031_D1_USM_RLS_DLY_U_Pos)	
#define AS6031_D1_USM_RLS_DLY_U_3         		(0x00000008 << AS6031_D1_USM_RLS_DLY_U_Pos)	
#define AS6031_D1_USM_RLS_DLY_U_4         		(0x00000010 << AS6031_D1_USM_RLS_DLY_U_Pos)	
#define AS6031_D1_USM_RLS_DLY_U_5         		(0x00000020 << AS6031_D1_USM_RLS_DLY_U_Pos)	
#define AS6031_D1_USM_RLS_DLY_U_6         		(0x00000040 << AS6031_D1_USM_RLS_DLY_U_Pos)	
#define AS6031_D1_USM_RLS_DLY_U_7         		(0x00000080 << AS6031_D1_USM_RLS_DLY_U_Pos)	
#define AS6031_D1_USM_RLS_DLY_U_8         		(0x00000100 << AS6031_D1_USM_RLS_DLY_U_Pos)	
#define AS6031_D1_USM_RLS_DLY_U_9         		(0x00000200 << AS6031_D1_USM_RLS_DLY_U_Pos)	
#define AS6031_D1_USM_RLS_DLY_U_10         		(0x00000400 << AS6031_D1_USM_RLS_DLY_U_Pos)	
#define AS6031_D1_USM_RLS_DLY_U_11         		(0x00000800 << AS6031_D1_USM_RLS_DLY_U_Pos)	
#define AS6031_D1_USM_RLS_DLY_U_12         		(0x00001000 << AS6031_D1_USM_RLS_DLY_U_Pos)	
#define AS6031_D1_USM_RLS_DLY_U_13         		(0x00002000 << AS6031_D1_USM_RLS_DLY_U_Pos)	
#define AS6031_D1_USM_RLS_DLY_U_14         		(0x00004000 << AS6031_D1_USM_RLS_DLY_U_Pos)	
#define AS6031_D1_USM_RLS_DLY_U_15         		(0x00008000 << AS6031_D1_USM_RLS_DLY_U_Pos)	
#define AS6031_D1_USM_RLS_DLY_U_16         		(0x00010000 << AS6031_D1_USM_RLS_DLY_U_Pos)	
#define AS6031_D1_USM_RLS_DLY_U_17         		(0x00020000 << AS6031_D1_USM_RLS_DLY_U_Pos)	
#define AS6031_D1_USM_RLS_DLY_U_18         		(0x00040000 << AS6031_D1_USM_RLS_DLY_U_Pos)	
#define AS6031_D1_NOT_USED_31_19_Pos        	(19U)
#define AS6031_D1_NOT_USED_31_19_Msk        	(0x1FFFUL << AS6031_D1_NOT_USED_31_19_Pos)		/*!< 0xFFF80000 */
#define AS6031_D1_NOT_USED_31_19        		AS6031_D1_NOT_USED_31_19_Msk					/*!< NOT_USED_31_19[31:19]Not used */
#define AS6031_D1_NOT_USED_31_19_0        		(0x00000001 << AS6031_D1_NOT_USED_31_19_Pos)	
#define AS6031_D1_NOT_USED_31_19_1        		(0x00000002 << AS6031_D1_NOT_USED_31_19_Pos)	
#define AS6031_D1_NOT_USED_31_19_2        		(0x00000004 << AS6031_D1_NOT_USED_31_19_Pos)	
#define AS6031_D1_NOT_USED_31_19_3        		(0x00000008 << AS6031_D1_NOT_USED_31_19_Pos)	
#define AS6031_D1_NOT_USED_31_19_4        		(0x00000010 << AS6031_D1_NOT_USED_31_19_Pos)	
#define AS6031_D1_NOT_USED_31_19_5        		(0x00000020 << AS6031_D1_NOT_USED_31_19_Pos)	
#define AS6031_D1_NOT_USED_31_19_6        		(0x00000040 << AS6031_D1_NOT_USED_31_19_Pos)	
#define AS6031_D1_NOT_USED_31_19_7        		(0x00000080 << AS6031_D1_NOT_USED_31_19_Pos)	
#define AS6031_D1_NOT_USED_31_19_8        		(0x00000100 << AS6031_D1_NOT_USED_31_19_Pos)	
#define AS6031_D1_NOT_USED_31_19_9        		(0x00000200 << AS6031_D1_NOT_USED_31_19_Pos)	
#define AS6031_D1_NOT_USED_31_19_10        		(0x00000400 << AS6031_D1_NOT_USED_31_19_Pos)	
#define AS6031_D1_NOT_USED_31_19_11        		(0x00000800 << AS6031_D1_NOT_USED_31_19_Pos)	
#define AS6031_D1_NOT_USED_31_19_12        		(0x00001000 << AS6031_D1_NOT_USED_31_19_Pos)	

/*******************  Bit definition for AS6031_D2 register  ********************/
#define AS6031_D2_USM_RLS_DLY_D_Pos         	(0U)
#define AS6031_D2_USM_RLS_DLY_D_Msk         	(0x07FFFFUL << AS6031_D2_USM_RLS_DLY_D_Pos)		/*!< 0x0007FFFF */
#define AS6031_D2_USM_RLS_DLY_D         		AS6031_D2_USM_RLS_DLY_D_Msk					/*!< USM_RLS_DLY_D[18:0]Delay window in down direction, releasing ultrasonic measurement */
#define AS6031_D2_USM_RLS_DLY_D_0         		(0x00000001 << AS6031_D2_USM_RLS_DLY_D_Pos)	
#define AS6031_D2_USM_RLS_DLY_D_1         		(0x00000002 << AS6031_D2_USM_RLS_DLY_D_Pos)	
#define AS6031_D2_USM_RLS_DLY_D_2         		(0x00000004 << AS6031_D2_USM_RLS_DLY_D_Pos)	
#define AS6031_D2_USM_RLS_DLY_D_3         		(0x00000008 << AS6031_D2_USM_RLS_DLY_D_Pos)	
#define AS6031_D2_USM_RLS_DLY_D_4         		(0x00000010 << AS6031_D2_USM_RLS_DLY_D_Pos)	
#define AS6031_D2_USM_RLS_DLY_D_5         		(0x00000020 << AS6031_D2_USM_RLS_DLY_D_Pos)	
#define AS6031_D2_USM_RLS_DLY_D_6         		(0x00000040 << AS6031_D2_USM_RLS_DLY_D_Pos)	
#define AS6031_D2_USM_RLS_DLY_D_7         		(0x00000080 << AS6031_D2_USM_RLS_DLY_D_Pos)	
#define AS6031_D2_USM_RLS_DLY_D_8         		(0x00000100 << AS6031_D2_USM_RLS_DLY_D_Pos)	
#define AS6031_D2_USM_RLS_DLY_D_9         		(0x00000200 << AS6031_D2_USM_RLS_DLY_D_Pos)	
#define AS6031_D2_USM_RLS_DLY_D_10         		(0x00000400 << AS6031_D2_USM_RLS_DLY_D_Pos)	
#define AS6031_D2_USM_RLS_DLY_D_11         		(0x00000800 << AS6031_D2_USM_RLS_DLY_D_Pos)	
#define AS6031_D2_USM_RLS_DLY_D_12         		(0x00001000 << AS6031_D2_USM_RLS_DLY_D_Pos)	
#define AS6031_D2_USM_RLS_DLY_D_13         		(0x00002000 << AS6031_D2_USM_RLS_DLY_D_Pos)	
#define AS6031_D2_USM_RLS_DLY_D_14         		(0x00004000 << AS6031_D2_USM_RLS_DLY_D_Pos)	
#define AS6031_D2_USM_RLS_DLY_D_15         		(0x00008000 << AS6031_D2_USM_RLS_DLY_D_Pos)	
#define AS6031_D2_USM_RLS_DLY_D_16         		(0x00010000 << AS6031_D2_USM_RLS_DLY_D_Pos)	
#define AS6031_D2_USM_RLS_DLY_D_17         		(0x00020000 << AS6031_D2_USM_RLS_DLY_D_Pos)	
#define AS6031_D2_USM_RLS_DLY_D_18         		(0x00040000 << AS6031_D2_USM_RLS_DLY_D_Pos)	
#define AS6031_D2_NOT_USED_31_19_Pos        	(19U)
#define AS6031_D2_NOT_USED_31_19_Msk        	(0x1FFFUL << AS6031_D2_NOT_USED_31_19_Pos)		/*!< 0xFFF80000 */
#define AS6031_D2_NOT_USED_31_19        		AS6031_D2_NOT_USED_31_19_Msk					/*!< NOT_USED_31_19[31:19]Not used */
#define AS6031_D2_NOT_USED_31_19_0        		(0x00000001 << AS6031_D2_NOT_USED_31_19_Pos)	
#define AS6031_D2_NOT_USED_31_19_1        		(0x00000002 << AS6031_D2_NOT_USED_31_19_Pos)	
#define AS6031_D2_NOT_USED_31_19_2        		(0x00000004 << AS6031_D2_NOT_USED_31_19_Pos)	
#define AS6031_D2_NOT_USED_31_19_3        		(0x00000008 << AS6031_D2_NOT_USED_31_19_Pos)	
#define AS6031_D2_NOT_USED_31_19_4        		(0x00000010 << AS6031_D2_NOT_USED_31_19_Pos)	
#define AS6031_D2_NOT_USED_31_19_5        		(0x00000020 << AS6031_D2_NOT_USED_31_19_Pos)	
#define AS6031_D2_NOT_USED_31_19_6        		(0x00000040 << AS6031_D2_NOT_USED_31_19_Pos)	
#define AS6031_D2_NOT_USED_31_19_7        		(0x00000080 << AS6031_D2_NOT_USED_31_19_Pos)	
#define AS6031_D2_NOT_USED_31_19_8        		(0x00000100 << AS6031_D2_NOT_USED_31_19_Pos)	
#define AS6031_D2_NOT_USED_31_19_9        		(0x00000200 << AS6031_D2_NOT_USED_31_19_Pos)	
#define AS6031_D2_NOT_USED_31_19_10        		(0x00000400 << AS6031_D2_NOT_USED_31_19_Pos)	
#define AS6031_D2_NOT_USED_31_19_11        		(0x00000800 << AS6031_D2_NOT_USED_31_19_Pos)	
#define AS6031_D2_NOT_USED_31_19_12        		(0x00001000 << AS6031_D2_NOT_USED_31_19_Pos)	

/*******************  Bit definition for AS6031_DA register  ********************/
#define AS6031_DA_ZCD_FHL_U_Pos             	(0U)
#define AS6031_DA_ZCD_FHL_U_Msk             	(0xFFUL << AS6031_DA_ZCD_FHL_U_Pos)		/*!< 0x000000FF */
#define AS6031_DA_ZCD_FHL_U             		AS6031_DA_ZCD_FHL_U_Msk					/*!< ZCD_FHL_U[7:0]First Hit Level Up */
#define AS6031_DA_ZCD_FHL_U_0             		(0x00000001 << AS6031_DA_ZCD_FHL_U_Pos)	
#define AS6031_DA_ZCD_FHL_U_1             		(0x00000002 << AS6031_DA_ZCD_FHL_U_Pos)	
#define AS6031_DA_ZCD_FHL_U_2             		(0x00000004 << AS6031_DA_ZCD_FHL_U_Pos)	
#define AS6031_DA_ZCD_FHL_U_3             		(0x00000008 << AS6031_DA_ZCD_FHL_U_Pos)	
#define AS6031_DA_ZCD_FHL_U_4             		(0x00000010 << AS6031_DA_ZCD_FHL_U_Pos)	
#define AS6031_DA_ZCD_FHL_U_5             		(0x00000020 << AS6031_DA_ZCD_FHL_U_Pos)	
#define AS6031_DA_ZCD_FHL_U_6             		(0x00000040 << AS6031_DA_ZCD_FHL_U_Pos)	
#define AS6031_DA_ZCD_FHL_U_7             		(0x00000080 << AS6031_DA_ZCD_FHL_U_Pos)	
#define AS6031_DA_NOT_USED_31_8_Pos         	(8U)
#define AS6031_DA_NOT_USED_31_8_Msk         	(0xFFFFFFUL << AS6031_DA_NOT_USED_31_8_Pos)		/*!< 0xFFFFFF00 */
#define AS6031_DA_NOT_USED_31_8         		AS6031_DA_NOT_USED_31_8_Msk					/*!< NOT_USED_31_8[31:8]Not used */
#define AS6031_DA_NOT_USED_31_8_0         		(0x00000001 << AS6031_DA_NOT_USED_31_8_Pos)	
#define AS6031_DA_NOT_USED_31_8_1         		(0x00000002 << AS6031_DA_NOT_USED_31_8_Pos)	
#define AS6031_DA_NOT_USED_31_8_2         		(0x00000004 << AS6031_DA_NOT_USED_31_8_Pos)	
#define AS6031_DA_NOT_USED_31_8_3         		(0x00000008 << AS6031_DA_NOT_USED_31_8_Pos)	
#define AS6031_DA_NOT_USED_31_8_4         		(0x00000010 << AS6031_DA_NOT_USED_31_8_Pos)	
#define AS6031_DA_NOT_USED_31_8_5         		(0x00000020 << AS6031_DA_NOT_USED_31_8_Pos)	
#define AS6031_DA_NOT_USED_31_8_6         		(0x00000040 << AS6031_DA_NOT_USED_31_8_Pos)	
#define AS6031_DA_NOT_USED_31_8_7         		(0x00000080 << AS6031_DA_NOT_USED_31_8_Pos)	
#define AS6031_DA_NOT_USED_31_8_8         		(0x00000100 << AS6031_DA_NOT_USED_31_8_Pos)	
#define AS6031_DA_NOT_USED_31_8_9         		(0x00000200 << AS6031_DA_NOT_USED_31_8_Pos)	
#define AS6031_DA_NOT_USED_31_8_10         		(0x00000400 << AS6031_DA_NOT_USED_31_8_Pos)	
#define AS6031_DA_NOT_USED_31_8_11         		(0x00000800 << AS6031_DA_NOT_USED_31_8_Pos)	
#define AS6031_DA_NOT_USED_31_8_12         		(0x00001000 << AS6031_DA_NOT_USED_31_8_Pos)	
#define AS6031_DA_NOT_USED_31_8_13         		(0x00002000 << AS6031_DA_NOT_USED_31_8_Pos)	
#define AS6031_DA_NOT_USED_31_8_14         		(0x00004000 << AS6031_DA_NOT_USED_31_8_Pos)	
#define AS6031_DA_NOT_USED_31_8_15         		(0x00008000 << AS6031_DA_NOT_USED_31_8_Pos)	
#define AS6031_DA_NOT_USED_31_8_16         		(0x00010000 << AS6031_DA_NOT_USED_31_8_Pos)	
#define AS6031_DA_NOT_USED_31_8_17         		(0x00020000 << AS6031_DA_NOT_USED_31_8_Pos)	
#define AS6031_DA_NOT_USED_31_8_18         		(0x00040000 << AS6031_DA_NOT_USED_31_8_Pos)	
#define AS6031_DA_NOT_USED_31_8_19         		(0x00080000 << AS6031_DA_NOT_USED_31_8_Pos)	
#define AS6031_DA_NOT_USED_31_8_20         		(0x00100000 << AS6031_DA_NOT_USED_31_8_Pos)	
#define AS6031_DA_NOT_USED_31_8_21         		(0x00200000 << AS6031_DA_NOT_USED_31_8_Pos)	
#define AS6031_DA_NOT_USED_31_8_22         		(0x00400000 << AS6031_DA_NOT_USED_31_8_Pos)	
#define AS6031_DA_NOT_USED_31_8_23         		(0x00800000 << AS6031_DA_NOT_USED_31_8_Pos)	

/*******************  Bit definition for AS6031_DB register  ********************/
#define AS6031_DB_ZCD_FHL_D_Pos             	(0U)
#define AS6031_DB_ZCD_FHL_D_Msk             	(0xFFUL << AS6031_DB_ZCD_FHL_D_Pos)		/*!< 0x000000FF */
#define AS6031_DB_ZCD_FHL_D             		AS6031_DB_ZCD_FHL_D_Msk					/*!< ZCD_FHL_D[7:0]First Hit Level Down */
#define AS6031_DB_ZCD_FHL_D_0             		(0x00000001 << AS6031_DB_ZCD_FHL_D_Pos)	
#define AS6031_DB_ZCD_FHL_D_1             		(0x00000002 << AS6031_DB_ZCD_FHL_D_Pos)	
#define AS6031_DB_ZCD_FHL_D_2             		(0x00000004 << AS6031_DB_ZCD_FHL_D_Pos)	
#define AS6031_DB_ZCD_FHL_D_3             		(0x00000008 << AS6031_DB_ZCD_FHL_D_Pos)	
#define AS6031_DB_ZCD_FHL_D_4             		(0x00000010 << AS6031_DB_ZCD_FHL_D_Pos)	
#define AS6031_DB_ZCD_FHL_D_5             		(0x00000020 << AS6031_DB_ZCD_FHL_D_Pos)	
#define AS6031_DB_ZCD_FHL_D_6             		(0x00000040 << AS6031_DB_ZCD_FHL_D_Pos)	
#define AS6031_DB_ZCD_FHL_D_7             		(0x00000080 << AS6031_DB_ZCD_FHL_D_Pos)	
#define AS6031_DB_NOT_USED_31_8_Pos         	(8U)
#define AS6031_DB_NOT_USED_31_8_Msk         	(0xFFFFFFUL << AS6031_DB_NOT_USED_31_8_Pos)		/*!< 0xFFFFFF00 */
#define AS6031_DB_NOT_USED_31_8         		AS6031_DB_NOT_USED_31_8_Msk					/*!< NOT_USED_31_8[31:8]Not used */
#define AS6031_DB_NOT_USED_31_8_0         		(0x00000001 << AS6031_DB_NOT_USED_31_8_Pos)	
#define AS6031_DB_NOT_USED_31_8_1         		(0x00000002 << AS6031_DB_NOT_USED_31_8_Pos)	
#define AS6031_DB_NOT_USED_31_8_2         		(0x00000004 << AS6031_DB_NOT_USED_31_8_Pos)	
#define AS6031_DB_NOT_USED_31_8_3         		(0x00000008 << AS6031_DB_NOT_USED_31_8_Pos)	
#define AS6031_DB_NOT_USED_31_8_4         		(0x00000010 << AS6031_DB_NOT_USED_31_8_Pos)	
#define AS6031_DB_NOT_USED_31_8_5         		(0x00000020 << AS6031_DB_NOT_USED_31_8_Pos)	
#define AS6031_DB_NOT_USED_31_8_6         		(0x00000040 << AS6031_DB_NOT_USED_31_8_Pos)	
#define AS6031_DB_NOT_USED_31_8_7         		(0x00000080 << AS6031_DB_NOT_USED_31_8_Pos)	
#define AS6031_DB_NOT_USED_31_8_8         		(0x00000100 << AS6031_DB_NOT_USED_31_8_Pos)	
#define AS6031_DB_NOT_USED_31_8_9         		(0x00000200 << AS6031_DB_NOT_USED_31_8_Pos)	
#define AS6031_DB_NOT_USED_31_8_10         		(0x00000400 << AS6031_DB_NOT_USED_31_8_Pos)	
#define AS6031_DB_NOT_USED_31_8_11         		(0x00000800 << AS6031_DB_NOT_USED_31_8_Pos)	
#define AS6031_DB_NOT_USED_31_8_12         		(0x00001000 << AS6031_DB_NOT_USED_31_8_Pos)	
#define AS6031_DB_NOT_USED_31_8_13         		(0x00002000 << AS6031_DB_NOT_USED_31_8_Pos)	
#define AS6031_DB_NOT_USED_31_8_14         		(0x00004000 << AS6031_DB_NOT_USED_31_8_Pos)	
#define AS6031_DB_NOT_USED_31_8_15         		(0x00008000 << AS6031_DB_NOT_USED_31_8_Pos)	
#define AS6031_DB_NOT_USED_31_8_16         		(0x00010000 << AS6031_DB_NOT_USED_31_8_Pos)	
#define AS6031_DB_NOT_USED_31_8_17         		(0x00020000 << AS6031_DB_NOT_USED_31_8_Pos)	
#define AS6031_DB_NOT_USED_31_8_18         		(0x00040000 << AS6031_DB_NOT_USED_31_8_Pos)	
#define AS6031_DB_NOT_USED_31_8_19         		(0x00080000 << AS6031_DB_NOT_USED_31_8_Pos)	
#define AS6031_DB_NOT_USED_31_8_20         		(0x00100000 << AS6031_DB_NOT_USED_31_8_Pos)	
#define AS6031_DB_NOT_USED_31_8_21         		(0x00200000 << AS6031_DB_NOT_USED_31_8_Pos)	
#define AS6031_DB_NOT_USED_31_8_22         		(0x00400000 << AS6031_DB_NOT_USED_31_8_Pos)	
#define AS6031_DB_NOT_USED_31_8_23         		(0x00800000 << AS6031_DB_NOT_USED_31_8_Pos)	


#endif /* INC_AS6031_BIT_DEFINITION_H_ */
