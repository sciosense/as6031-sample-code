/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "user_spi_interface.c"
#include "user_tools.c"

#include "AS6031_Coding.h"

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
SPI_HandleTypeDef hspi1;

/* USER CODE BEGIN PV */
AS6031_InitTypeDef DUT; // DUT = Device Under Test

volatile uint32_t  My_INTN_Counter = 0;
volatile uint8_t   My_INTN_State = 1;

volatile int value = 0;
volatile int addr = 0xC0;

volatile float     CLKLS_freq = 32768;             // LS Clock frequency in Hz
volatile float     CLKHS_freq = 4000000;           // HS Clock frequency in Hz
volatile float     CLKHS_freq_cal = 4000000;       // Calibrated HS Clock frequency in Hz
volatile float     CLKHS_freq_corr_fact = 1.000;   // Correction factor for HS Clock frequency

volatile float     RAW_Result = 0;                 // RAW Value in [LSB]
volatile float     Time_Result = 0;                // Result in [s]
volatile float     Time_Result_ns = 0;             // Result in [ns]

volatile float     RAW_CAL_Result = 0;             // RAW Value in [LSB]
volatile float     Time_CAL_Result = 0;            // Result in [s]
volatile float     Time_CAL_Result_ns = 0;         // Result in [ns]

uint8_t   spiRX[7];                       // used for readout of ID
volatile uint64_t  Bit_ID = 0;                     // contains individual ID[55:0] of GP22

volatile float     MAX_Cal_Time_Delay = 0;         // Max. measured calibrated time delay in [s]
volatile float     MAX_Cal_Time_Delay_ns = 0;      // Max. measured calibrated time delay in [ns]

volatile int       N_Measure_Cycles;               // counter for the while loop
volatile int       MAX_N_Measure_Cycles = 100;     // limit for the counter

// Configuration: using plastic spool piece plastic Audiowell New-Design, V-Shape
uint32_t  Reg[20] = {
		0x48DBA399,	// [0xC0] CR_WD_DIS
		0x00800401,	// [0xC1] CR_IFC_CTRL
		0x00111111,	// [0xC2] CR_GP_CTRL
		0x00000001,	// [0xC3] CR_USM_OPT
		0x010703FF,	// [0xC4] CR_IEH
		0x60060C08,	// [0xC5] CR_CPM
		0x01012100,	// [0xC6] CR_MRG_TS
		0x00240000,	// [0xC7] CR_TPM
		0x00680064,	// [0xC8] CR_USM_PRC
		0x60160202,	// [0xC9] CR_USM_FRC
		0x000FEA10,	// [0xCA] CR_USM_TOF
		0x00A7DE81,	// [0xCB] CR_USM_AM
		0x94A0C46C,	// [0xCC] CR_TRIM1
		0x401100C4,	// [0xCD] CR_TRIM2
		0x00A7400F,	// [0xCE] CR_TRIM3
		0x00000001,	// [0xD0] SHR_TOF_RATE
		0x00000D80,	// [0xD1] SHR_USM_RLS_DLY_U
		0x00000D80,	// [0xD2] SHR_USM_RLS_DLY_D
		0x00000041,	// [0xDA] SHR_ZCD_FHL_U
		0x00000041	// [0xDB] SHR_ZCD_FHL_D
};

// Configuration: using plastic spool piece plastic DN8
uint32_t  Reg2[20] = {
		0x48DBA399,	// [0xC0] CR_WD_DIS
		0x00800401,	// [0xC1] CR_IFC_CTRL
		0x00000000,	// [0xC2] CR_GP_CTRL
		0x00000001,	// [0xC3] CR_USM_OPT
		0x0011F7FF,	// [0xC4] CR_IEH
		0x6046EE08,	// [0xC5] CR_CPM
		0x01012100,	// [0xC6] CR_MRG_TS
		0x00E40000,	// [0xC7] CR_TPM
		0x04690564,	// [0xC8] CR_USM_PRC
		0x601E0202,	// [0xC9] CR_USM_FRC
		0x010FEA4E,	// [0xCA] CR_USM_TOF
		0x2320DE61,	// [0xCB] CR_USM_AM
		0x94A0C46C,	// [0xCC] CR_TRIM1
		0x401100C4,	// [0xCD] CR_TRIM2
		0x00A7400F,	// [0xCE] CR_TRIM3
		0x00000001,	// [0xD0] SHR_TOF_RATE
		0x00000ED8,	// [0xD1] SHR_USM_RLS_DLY_U
		0x00000ED8,	// [0xD2] SHR_USM_RLS_DLY_D
		0x00000028,	// [0xDA] SHR_ZCD_FHL_U
		0x00000028	// [0xDB] SHR_ZCD_FHL_D
};

// Firmware Code: <AS6031_AS6040_A1.F1.11.01_DIF_over_PI_sim.hex>
uint8_t FWC[] = {
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0xA1, 0xF1, 0x11, 0x01, 0xF2, 0xDC, 0x61, 0x1B, 0x64, 0x16, 0xF2, 0xDC, 0x61, 0x13, 0x64, 0x31,
		0xF2, 0xDC, 0x61, 0x23, 0x64, 0x2E, 0xF2, 0xDC, 0x61, 0x2B, 0x64, 0x76, 0xC9, 0x01, 0x1D, 0xF2,
		0xE2, 0x61, 0x37, 0xC9, 0x01, 0x1D, 0xB8, 0x77, 0xF2, 0x80, 0x2D, 0xF2, 0x84, 0x37, 0x7D, 0xCA,
		0x00, 0x66, 0xF2, 0xC1, 0x61, 0x43, 0xCA, 0xF9, 0x11, 0xF2, 0xDD, 0xF1, 0xAB, 0xC9, 0x01, 0x1D,
		0xC9, 0x01, 0x1D, 0xC9, 0x01, 0x1D, 0xF2, 0x80, 0x77, 0xF2, 0x84, 0x7B, 0x88, 0x73, 0xCB, 0x74,
		0xF2, 0xA5, 0x7D, 0x76, 0x88, 0x73, 0xCB, 0x74, 0xF2, 0xA6, 0x7D, 0xF2, 0xA6, 0x73, 0xF2, 0xA5,
		0x33, 0x87, 0x7C, 0xF3, 0x03, 0x77, 0x34, 0x71, 0xF3, 0x05, 0x0F, 0x4B, 0x13, 0x5D, 0x73, 0xF3,
		0x04, 0x13, 0x4D, 0x73, 0xF2, 0x5E, 0x77, 0xCB, 0x54, 0xCA, 0xFD, 0x67, 0x75, 0x3B, 0x9A, 0xCA,
		0x00, 0xCB, 0x54, 0xCA, 0xFD, 0x67, 0xF3, 0x02, 0x77, 0xCB, 0x54, 0xCA, 0xFD, 0x67, 0x82, 0x7C,
		0xCF, 0xF3, 0x67, 0x73, 0xF2, 0xD1, 0x7C, 0xF2, 0xD2, 0x7C, 0xF2, 0x5F, 0x7F, 0x00, 0x3D, 0x09,
		0x00, 0xF2, 0x5E, 0x7F, 0x00, 0x00, 0x04, 0x31, 0xF2, 0xC5, 0x62, 0x03, 0xF2, 0x5F, 0xD3, 0xF2,
		0xC5, 0x62, 0x03, 0xF2, 0x5E, 0xC3, 0xF2, 0xCA, 0x73, 0xCB, 0x80, 0x00, 0x00, 0x1F, 0x00, 0xCE,
		0x70, 0x88, 0x7C, 0xF2, 0xC6, 0x73, 0xCB, 0x80, 0x00, 0x00, 0x1F, 0xFF, 0x09, 0xCB, 0xA5, 0x00,
		0x00, 0x00, 0x1F, 0xF2, 0xD0, 0x7B, 0xCB, 0x86, 0xCB, 0x54, 0xCE, 0x58, 0xF2, 0xE3, 0x63, 0x47,
		0x75, 0x00, 0x01, 0x06, 0x24, 0xCB, 0x54, 0xCA, 0xFD, 0x67, 0xF2, 0x9E, 0x7C, 0xF3, 0x5B, 0x73,
		0xF3, 0x5C, 0x77, 0xF2, 0x9E, 0x7B, 0xCA, 0xF3, 0x1C, 0x8A, 0x7C, 0x64, 0x01, 0xF2, 0xDC, 0x0B,
		0xCD
};

int FWC_Length = sizeof(FWC);  // Calculates the size of the array in bytes.

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_SPI1_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_SPI1_Init();
  /* USER CODE BEGIN 2 */

  /* PIN Assignment of STM32L476:
   * SPI1_MOSI PA7
   * SPI1_MISO PA6
   * SPI1_SCK  PA5
   * SPI1_SSN  PB6
   *
   * INTN      PA9
   */

/*
  // Set configuration registers
  DUT.CR[0] = 0xF3076010;
  DUT.CR[1] = 0x01410032;
  DUT.CR[2] = 0xA0000054;
  DUT.CR[3] = 0x00000076;
  DUT.CR[4] = 0x10000098;
  DUT.CR[5] = 0x000000BA;
  DUT.CR[6] = 0x400000DC;

  AS6031_Update_Param(&DUT);
*/

  AS6031_Init_CFG(&DUT, Reg);

  // Reset DUT
  Write_Opcode(RC_SYS_RST);
  DUT.State = AS6031_STATE_RESET;

  HAL_Delay(3); // Datasheet -> Delay = 1ms... BUT at least 3ms are needed _MH

  // Write Configuration (0xC0 - 0xCE, 0xD0 - 0xD2, 0xDA - 0xDB)
  int offset = 0;
  int i, j = 0;

  for (i = 0; i <= 19; i++) {
	  if (i == 0) {
		  offset = 0xC0;
		  j = 0;
	  }
	  if (i == 15) {
		  offset = 0xD0;
		  j = 0;
	  }
	  if (i == 18) {
		  offset = 0xDA;
		  j = 0;
	  }
	  Write_Dword(RC_RAA_WR, (offset+j), DUT.CR[i]);
	  j++;
  }

  Write_Opcode(RC_MCT_ON);

/*
  for (i = 0; i < 200; i++) {
	  // update CR9 register with new parameter
	  DUT.Param.CR9.FBG_CLK_DIV = (addr);
	  AS6031_Update_CFG(&DUT); // Function to update CFG for uploading into DUT!

	  Write_Dword(RC_RAA_WR, 0xC9, DUT.CR[9]); // Write Register into AS6031!
	  i++;
  }
*/

/*
  // update CR5 register with new parameter
  DUT.Param.CR5.HSC_DIV_MODE = 1; // Recommended setting for 8MHz
  DUT.Param.CR5.HSC_DIV = 1; // Recommended setting for 8MHz

  AS6031_Update_CFG(&DUT); // Function to update CFG for uploading into DUT!

  Write_Dword(RC_RAA_WR, 0xC5, DUT.CR[5]); // Write Register into AS6031!
*/

  // FW Handling Procedures
  // Datasheet Appendix, section 15.7
  // Phase 1: Wait time (dependent on start option)
  // Phase 2: Preparation (common for all procedures)
  // Phase 3: FW Update (different for procedures [A], [B], [C], [D] )
  // Phase 4: FW Retention Check (common for all procedures)

  // Phase1: Initial Wait Time
  Write_Opcode(RC_SYS_RST);
  DUT.State = AS6031_STATE_RESET;

  HAL_Delay(3);

  // Phase 2: Preparation
  Write_Opcode(RC_BM_REQ);
  Write_Dword(RC_RAA_WR, 0xC0, 0x48DBA399);
  Write_Dword(RC_RAA_WR, 0xCD, 0x40100000);
  Write_Dword(RC_RAA_WR, 0xC6, 0x00001000);
  Write_Opcode(RC_SV_INIT);
  Write_Opcode(RC_MCT_OFF);
  HAL_Delay(1);
  Write_Opcode2(RC_MT_REQ, 0x00);
  HAL_Delay(1);
  Write_Dword(RC_RAA_WR, 0xDD, 0x00000007);
  Write_Opcode(RC_RF_CLR);
  Write_Dword(RC_RAA_WR, 0xC4, 0x000AF000);
  Write_Opcode(RC_BM_RLS);

  Write_Dword(RC_RAA_WR, 0xDF, 0x50F5B8CA);
  Write_Dword(RC_RAA_WR, 0xDE, 0x00100000);
  while(Read_Dword_Bits(RC_RAA_RD, 0xE0, 1, 1) == 0) {};
  Write_Dword(RC_RAA_WR, 0xDE, 0x00080000);
  while(Read_Dword_Bits(RC_RAA_RD, 0xE0, 1, 1) == 0) {};

  // Phase 3: FW Update
  Read_Dword(RC_RAA_RD, 0xEC);

  // Write FWC
  for (i = 32; i <= FWC_Length; i++) {
	  Write_Byte2(RC_FWC_WR, i, FWC[i]);  // Writing FWC, bytewise with two byte address
  }

  // Write FWD
  Write_Dword(RC_RAA_WR_NVRAM, 0x00, 0x0000AB6A); // Writing Firmware Code User, Checksum
  Write_Dword(RC_RAA_WR_NVRAM, 0x01, 0x00000556); // Writing Firmware Data User, Checksum
  Write_Dword(RC_RAA_WR_NVRAM, 0x02, 0x00010000); // Writing FWD_SIMPLE_SCALE (fd16)
  Write_Dword(RC_RAA_WR_NVRAM, 0x03, 0x00000000); // Writing FWD_ZERO_OFFSET
  Write_Dword(RC_RAA_WR_NVRAM, 0x04, 0x051EB852); // Writing FWD_MAX_TOF_DIFF
  Write_Dword(RC_RAA_WR_NVRAM, 0x05, 0xFAE147AE); // Writing FWD_NEG_TOF_DIFF_LIMIT

  Write_Dword(RC_RAA_WR_NVRAM, 0x5B, 0x0000000A); // Writing FWD_R_PULSE_PER_LITER
  Write_Dword(RC_RAA_WR_NVRAM, 0x5C, 0x000003E8); // Writing FWD_R_PULSE_MAX_FLOW

  Write_Dword(RC_RAA_WR_NVRAM, 0x67, 0x00000000); // Writing FWD_USM_RLS_DLY_INIT

  Write_Dword(RC_RAA_WR_NVRAM, 0x6B, 0xABCD7654); // Writing Boot-Loader Release Code

  // Update Config 0x6C ... 0x77 in NVRAM
  // without CR_TRIMx and without SHR_...
  //Write_Dword(RC_RAA_WR_NVRAM, 0x6C, 0x48DBA399); // CR_WD_DIS Watchdog Disable
  //Write_Dword(RC_RAA_WR_NVRAM, 0x6D, 0x00800101); // CR_IFC_CTRL Interfaces Control
  //Write_Dword(RC_RAA_WR_NVRAM, 0x6E, 0x00100044); // CR_GP_CTRL General Purpose Control
  //Write_Dword(RC_RAA_WR_NVRAM, 0x6F, 0x20000003); // CR_USM_OPT USM Options
  //Write_Dword(RC_RAA_WR_NVRAM, 0x70, 0x001002A7); // CR_IEH Interrupt & Error Handling
  //Write_Dword(RC_RAA_WR_NVRAM, 0x71, 0x2046EE08); // CR_CPM Clock & Power Management
  //Write_Dword(RC_RAA_WR_NVRAM, 0x72, 0x0101A080); // CR_MRG_TS Measure Rate Generator & Task Sequencer
  //Write_Dword(RC_RAA_WR_NVRAM, 0x73, 0x00140000); // CR_TPM Temperature Measurement
  //Write_Dword(RC_RAA_WR_NVRAM, 0x74, 0x207807A4); // CR_USM_PRC USM Processing
  //Write_Dword(RC_RAA_WR_NVRAM, 0x75, 0x60150202); // CR_USM_FRC USM Fire & Receive Control
  //Write_Dword(RC_RAA_WR_NVRAM, 0x76, 0x00002A0E); // CR_USM_TOF Time Of Flight Rate init value
  //Write_Dword(RC_RAA_WR_NVRAM, 0x77, 0x23209E71); // CR_USM_AM Amplitude and FHL

  Write_Dword(RC_RAA_WR, 0xDF, 0x50F5B8CA);
  Write_Dword(RC_RAA_WR, 0xDE, 0x00010000);
  while(Read_Dword_Bits(RC_RAA_RD, 0xE0, 1, 1) == 0) {};

  // Phase 4: FW Retention Check
  Write_Dword(RC_RAA_WR, 0xDF, 0x50F5B8CA);
  Write_Dword(RC_RAA_WR, 0xDE, 0x00100000);
  while(Read_Dword_Bits(RC_RAA_RD, 0xE0, 1, 1) == 0) {};
  Write_Dword(RC_RAA_WR, 0xDE, 0x00080000);
  while(Read_Dword_Bits(RC_RAA_RD, 0xE0, 1, 1) == 0) {};
  Write_Dword(RC_RAA_WR,  0xD3, 0x0007F000);
  HAL_Delay(offset); // After initialization checksum error flags, delay of at least 34ms are needed _MH
  Write_Opcode(RC_FW_CHKSUM);
  while(Read_Dword_Bits(RC_RAA_RD, 0xE0, 3, 3) == 0) {};
  Read_Dword(RC_RAA_RD, 0xD3);

  // END
  Write_Opcode(RC_SYS_RST);


  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
	  N_Measure_Cycles++;

	  // Wait for INTN
	  // NVIC Functionality to increase the speed of MCU
	  while ( (My_INTN_State==1)) { }; //timeout is missing

	  // Post Processing

	  //RAW_Result = Read_Dword(RC_RAA_RD, 0x80);  // FDB_US_TOF_SUM_OF_ALL_U
	  //RAW_Result = Read_Dword(RC_RAA_RD, 0x84);  // FDB_US_TOF_SUM_OF_ALL_D
	  //RAW_Result /= DUT.Param.CR10.TOF_HIT_SUM_NO;  // Divided by number of hits

	  RAW_Result = Read_Dword(RC_RAA_RD, 0x88);  // FDB_US_TOF_0_U

	  RAW_Result /= 65536;  //divided by 2^16
	  Time_Result = RAW_Result * 250 *(1e-9);

	  Time_Result_ns = TIME_ns(Time_Result); // result in [ns]

	  // Clear INTN
	  Write_Opcode(RC_IF_CLR);

	  HAL_Delay(50); // used for debugging

  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  if (HAL_PWREx_ControlVoltageScaling(PWR_REGULATOR_VOLTAGE_SCALE1) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 1;
  RCC_OscInitStruct.PLL.PLLN = 10;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV7;
  RCC_OscInitStruct.PLL.PLLQ = RCC_PLLQ_DIV2;
  RCC_OscInitStruct.PLL.PLLR = RCC_PLLR_DIV2;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_4) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief SPI1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_SPI1_Init(void)
{

  /* USER CODE BEGIN SPI1_Init 0 */

  /* USER CODE END SPI1_Init 0 */

  /* USER CODE BEGIN SPI1_Init 1 */

  /* USER CODE END SPI1_Init 1 */
  /* SPI1 parameter configuration*/
  hspi1.Instance = SPI1;
  hspi1.Init.Mode = SPI_MODE_MASTER;
  hspi1.Init.Direction = SPI_DIRECTION_2LINES;
  hspi1.Init.DataSize = SPI_DATASIZE_8BIT;
  hspi1.Init.CLKPolarity = SPI_POLARITY_LOW;
  hspi1.Init.CLKPhase = SPI_PHASE_2EDGE;
  hspi1.Init.NSS = SPI_NSS_SOFT;
  hspi1.Init.BaudRatePrescaler = SPI_BAUDRATEPRESCALER_8;
  hspi1.Init.FirstBit = SPI_FIRSTBIT_MSB;
  hspi1.Init.TIMode = SPI_TIMODE_DISABLE;
  hspi1.Init.CRCCalculation = SPI_CRCCALCULATION_DISABLE;
  hspi1.Init.CRCPolynomial = 7;
  hspi1.Init.CRCLength = SPI_CRC_LENGTH_DATASIZE;
  hspi1.Init.NSSPMode = SPI_NSS_PULSE_DISABLE;
  if (HAL_SPI_Init(&hspi1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN SPI1_Init 2 */

  /* USER CODE END SPI1_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(SSN_GPIO_Port, SSN_Pin, GPIO_PIN_SET);

  /*Configure GPIO pin : INTN_Pin */
  GPIO_InitStruct.Pin = INTN_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_RISING_FALLING;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(INTN_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : SSN_Pin */
  GPIO_InitStruct.Pin = SSN_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  HAL_GPIO_Init(SSN_GPIO_Port, &GPIO_InitStruct);

  /* EXTI interrupt init*/
  HAL_NVIC_SetPriority(EXTI9_5_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(EXTI9_5_IRQn);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	/* stm32l4xx_hal_gpio.c */

	/* Prevent unused argument(s) compilation warning */
	UNUSED(GPIO_Pin);

	// Note: It takes about 1us after INTN

	if (GPIO_Pin == INTN_Pin) {
		My_INTN_State = (HAL_GPIO_ReadPin(INTN_GPIO_Port, INTN_Pin) == GPIO_PIN_SET); /* low active */
		if (My_INTN_State == 0) {
			My_INTN_Counter += 1;
		}
	}

}

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
