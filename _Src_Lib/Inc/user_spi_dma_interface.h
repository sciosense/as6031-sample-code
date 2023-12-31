/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    user_spi_dma_interface.h
  * @brief   This file contains the headers of the SPI communication with DMA.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
 ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USER_SPI_DMA_INTERFACE_H
#define __USER_SPI_DMA_INTERFACE_H

#ifdef __cplusplus
 extern "C" {
#endif 

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */


/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

#define LOW ((uint8_t)0)
#define HIGH ((uint8_t)1)

#define PUT_SSN_LOW (SSN_GPIO_Port->BRR = (uint32_t)SSN_Pin)	// Put SSN low - Activate, SSN -> CLK = < 4us
#define PUT_SSN_HIGH (SSN_GPIO_Port->BSRR = (uint32_t)SSN_Pin)	// Put SSN high - Deactivate, CLK -> SSN = < 9us

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */
   
/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/

/* USER CODE BEGIN EFP */

extern void My_TransmitReceive_DMA(uint8_t *pTxData, uint8_t *pRxData, uint16_t Size);
extern void My_Transmit_DMA(uint8_t *pTxData, uint16_t Size);

extern void My_Clearing_All_FIFOs(void);

/* USER CODE END EFP */

#ifdef __cplusplus
}
#endif

#endif /* __USER_SPI_INTERFACE_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
