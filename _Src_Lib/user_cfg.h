/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    user_cfg.h
  * @brief   This file contains the headers of useful tools.
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
#ifndef __USER_CFG_H
#define __USER_CFG_H

#ifdef __cplusplus
 extern "C" {
#endif 

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

 //only for testing
 uint32_t tt;
 uint32_t mm=3;

 //Declaration of default HighSpeed/LowSpeed Clock
#ifndef HS_CLOCK
#define HS_CLOCK        (float)4e6		//4 MHz HighSpeed Clock
#endif

#ifndef T_REF
#define T_REF           (float)(1/HS_CLOCK)
#endif

#ifndef LS_CLOCK
#define LS_CLOCK        (float)32768	//32.768 kHz LowSpeed Clock
#endif

#ifndef T_LS_CLK
#define T_LS_CLK		(float)(1/LS_CLOCK)
#endif

 void My_Write_CFG_1MHz_SpoolPiece(void)
 {
#undef HS_CLOCK
#define HS_CLOCK 4e6
   //Declaration of DEFAULT configuration
   //<GP30Y_config_default_03.cfg>
   uint32_t CFG_Registers [] = {
     0x48DBA399,
     0x0034310A,
     0x81111144,
     0x10215000,
     0x001F03FF,
     0x004ECAE8,
     0x0011A080,
     0x00793400,
     0x00002824,
     0x03E70C83,
     0x00002C10,
     0x0000D481,
     0x84A0C47C,
     0x401725CF,
     0x00270808
   };

   //Extracting needed data
   TOF_HIT_NO = CFG_Registers[0xA];
   TOF_HIT_NO &= TOF_HIT_NO_mask;
   TOF_HIT_NO >>= 8;

   //Configuration Register
   Write_Register_Auto_Incr(RC_RAA_WR_RAM, 0xC0, CFG_Registers, 0xCE);

   //System Handling Register
   Write_Dword(RC_RAA_WR_RAM, SHR_TOF_RATE,          0x00000001);  //TOF RATE Lvl
   Write_Dword(RC_RAA_WR_RAM, SHR_FHL_U,             0x00000055);  //1st Hit Lvl Up
   Write_Dword(RC_RAA_WR_RAM, SHR_FHL_D,         	 0x00000055);  //1st Hit Lvl Dn
   Write_Dword(RC_RAA_WR_RAM, SHR_TOF_START_HIT_DLY, 0x00000000);  //Start Hit Delay Win

   return;
 }

 void My_Write_CFG_2MHz_SpoolPiece(void)
 {
#undef HS_CLOCK
#define HS_CLOCK 4e6
   //Declaration of used configuration
   uint32_t CFG_Registers [] = {
     0x48DBA399,
     0x0034310A,
     0x81111144,
     0x10215000,
     0x001F03FF,
     0x004ECAE8,
     0x0011A080,
     0x00793400,
     0x00002824,
     0x03E70C81,
     0x00002650,
     0x0000D481,
     0x84A0C47C,
     0x401700CF,
     0x00270808
   };

   //Extracting needed data
   TOF_HIT_NO = CFG_Registers[0xA];
   TOF_HIT_NO &= TOF_HIT_NO_mask;
   TOF_HIT_NO >>= 8;

   //Configuration Register
   Write_Register_Auto_Incr(RC_RAA_WR_RAM, 0xC0, CFG_Registers, 0xCE);

   //System Handling Register
   Write_Dword(RC_RAA_WR_RAM, SHR_TOF_RATE,          0x00000001);  //TOF RATE Lvl
   Write_Dword(RC_RAA_WR_RAM, SHR_FHL_U,             0x0000004B);  //1st Hit Lvl Up
   Write_Dword(RC_RAA_WR_RAM, SHR_FHL_D,             0x0000004B);  //1st Hit Lvl Dn
   Write_Dword(RC_RAA_WR_RAM, SHR_TOF_START_HIT_DLY, 0x00000000);  //Start Hit Delay Win

   return;
 }

 void My_Write_CFG_DN8_2MHz_SpoolPiece(void)
 {
#undef HS_CLOCK
#define HS_CLOCK 4e6
   //Declaration of used configuration
   uint32_t CFG_Registers [] = {
		   0x48DBA399,
		   0x0034310A,
		   0x81111144,
		   0x10215000,
		   0x001F03FF,
		   0x00000A00,
		   0x0011A080,
		   0x00793400,
		   0x00001424,
		   0x03E70C81,
		   0x00002650,
		   0x0000D481,
		   0x84A0C47C,
		   0x401725CF,
		   0x00270808
   };

   //Extracting needed data
   TOF_HIT_NO = CFG_Registers[0xA];
   TOF_HIT_NO &= TOF_HIT_NO_mask;
   TOF_HIT_NO >>= 8;

   //Configuration Register
   Write_Register_Auto_Incr(RC_RAA_WR_RAM, 0xC0, CFG_Registers, 0xCE);

   //System Handling Register
   Write_Dword(RC_RAA_WR_RAM, SHR_TOF_RATE,          0x00000001);  //TOF RATE Lvl
   Write_Dword(RC_RAA_WR_RAM, SHR_FHL_U,             0x00000048);  //1st Hit Lvl Up
   Write_Dword(RC_RAA_WR_RAM, SHR_FHL_D,             0x00000048);  //1st Hit Lvl Dn
   Write_Dword(RC_RAA_WR_RAM, SHR_TOF_START_HIT_DLY, 0x00000000);  //Start Hit Delay Win

   return;
 }

/* ------------------------------------------------ */
 void My_Write_CFG_GP30_1MHz_SpoolPiece(void)
 {
#undef HS_CLOCK
#define HS_CLOCK 4e6
   //Declaration of used configuration
   //<GP30Y_config_default_03_MH.cfg>
   uint32_t CFG_Registers [] = {
		   0x48DBA399,
		   0x0034310A,
		   0x81111144,
		   0x10215000,
		   0x001F03FF,
		   0x004EC8E8,
		   0x0011A080,
		   0x00793400,
		   0x00002824,
		   0x03E70C83,
		   0x00002C10,
		   0x0000D481,
		   0x84A0C47C,
		   0x401725CF,
		   0x00270808
   };

   //Extracting needed data
   TOF_HIT_NO = CFG_Registers[0xA];
   TOF_HIT_NO &= TOF_HIT_NO_mask;
   TOF_HIT_NO >>= 8;

   //Configuration Register
   Write_Register_Auto_Incr(RC_RAA_WR_RAM, 0xC0, CFG_Registers, 0xCE);

   //System Handling Register
   Write_Dword(RC_RAA_WR_RAM, SHR_TOF_RATE,          0x00000001);  //TOF RATE Lvl
   Write_Dword(RC_RAA_WR_RAM, SHR_FHL_U,             0x00000055);  //1st Hit Lvl Up
   Write_Dword(RC_RAA_WR_RAM, SHR_FHL_D,             0x00000055);  //1st Hit Lvl Dn
   Write_Dword(RC_RAA_WR_RAM, SHR_TOF_START_HIT_DLY, 0x00000000);  //Start Hit Delay Win

   return;
 }

/* ------------------------------------------------ */
  void My_Write_CFG_AS6031_1MHz_SpoolPiece(void)
  {
 #undef HS_CLOCK
 #define HS_CLOCK 4e6
    //Declaration of used configuration
	//<AS6031_std_MH.cfg>
    uint32_t CFG_Registers [] = {
 		   0x48DBA399,
		   0x00800401,
		   0x00000000,
		   0x00000001,
		   0x0011FFFF,
		   0x4046E868,
		   0x09012100,
		   0x00240000,
		   0x006C07E4,
		   0x60160204,
		   0x010FEA10,
		   0x23A0DE71,
		   0x94A0C46C,
		   0x401100C4,
		   0x00A7400F
    };
//TRIM2 adjusted, 0x401100C7 -> 0x401100C4
    //Extracting needed data
    TOF_HIT_NO = CFG_Registers[0xA];
    TOF_HIT_NO &= TOF_HIT_NO_mask;
    TOF_HIT_NO >>= 8;

    //Configuration Register
    Write_Register_Auto_Incr(RC_RAA_WR_RAM, 0xC0, CFG_Registers, 0xCE);

    //System Handling Register
    Write_Dword(RC_RAA_WR_RAM, SHR_TOF_RATE,          0x00000001);  //TOF RATE Lvl
    Write_Dword(RC_RAA_WR_RAM, SHR_USM_RLS_DLY_U,     0x000015E0);  //Multi-hit Start Delay Up
    Write_Dword(RC_RAA_WR_RAM, SHR_USM_RLS_DLY_D,     0x000015E0);  //Multi-hit Start Delay Down
    Write_Dword(RC_RAA_WR_RAM, SHR_ZCD_FHL_U,         0x00000023);  //Zero Cross Detection First Hit Level Up
    Write_Dword(RC_RAA_WR_RAM, SHR_ZCD_FHL_D,         0x00000023);  //Zero Cross Detection First Hit Level Down

    return;
  }

/* ------------------------------------------------ */
   void My_Write_CFG_AS6040_500kHz_SpoolPiece(void)
   {
  #undef HS_CLOCK
  #define HS_CLOCK 4e6
     //Declaration of used configuration
	 //<AS6040_prod_test_tube_1_MH.cfg>
     uint32_t CFG_Registers [] = {
  		   0x48DBA399,
		   0x00800401,
		   0x00111111,
		   0x00000001,
		   0x000FFFFF,
		   0x3946E868,
		   0x09012100,
		   0x00240000,
		   0x806E006C,
		   0x60160208,
		   0x000FEA10,
		   0x23ABDE81,
		   0x94A0C46C,
		   0x401100C7,
		   0x00A7400F
     };

     //Extracting needed data
     TOF_HIT_NO = CFG_Registers[0xA];
     TOF_HIT_NO &= TOF_HIT_NO_mask;
     TOF_HIT_NO >>= 8;

     //Configuration Register
     Write_Register_Auto_Incr(RC_RAA_WR_RAM, 0xC0, CFG_Registers, 0xCE);

     //System Handling Register
     Write_Dword(RC_RAA_WR_RAM, SHR_TOF_RATE,          0x00000001);  //TOF RATE Lvl
     Write_Dword(RC_RAA_WR_RAM, SHR_USM_RLS_DLY_U,     0x00009C40);  //Multi-hit Start Delay Up
     Write_Dword(RC_RAA_WR_RAM, SHR_USM_RLS_DLY_D,     0x00009C40);  //Multi-hit Start Delay Down
     Write_Dword(RC_RAA_WR_RAM, SHR_ZCD_FHL_U,         0x00000044);  //Zero Cross Detection First Hit Level Up
     Write_Dword(RC_RAA_WR_RAM, SHR_ZCD_FHL_D,         0x00000044);  //Zero Cross Detection First Hit Level Down

     return;
   }

 //FWC, V4.0b (checksum = 0x3D691)
 uint8_t FWC[] = {
		 0x27,0xC8,0xD8,0x37,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xA1,0xC3,0x11,0x04,0x00,0xF2,0xDC,0x61,0x2B,0xC9,0x03,0x59,0xF2,0xE2,0x61,0x4B,
  0xCA,0x02,0x91,0xF2,0xE2,0x61,0x43,0xCA,0x02,0x72,0xF3,0x15,0x62,0xFB,0xF2,0xC4,
  0xF5,0x23,0xF3,0x15,0x61,0x23,0xCA,0x03,0xCC,0xF3,0x0E,0x77,0xB1,0x73,0x34,0x5F,
  0xB1,0x0B,0xCA,0x02,0xE8,0xF2,0xE2,0x61,0x03,0xCA,0x02,0x45,0xF3,0x15,0x63,0x03,
  0xF2,0xE1,0x61,0x0F,0xCA,0x01,0x37,0xF3,0x15,0x63,0x0B,0xF2,0xE1,0x61,0x0F,0xCA,
  0x01,0x76,0xCB,0x01,0xF2,0xE2,0x61,0x33,0xCA,0x01,0x2A,0xF3,0x15,0x63,0x13,0xF2,
  0xE1,0x61,0x0F,0xCA,0x00,0xE5,0xF3,0x15,0x62,0x17,0xCA,0x05,0xC7,0xCA,0x05,0xF2,
  0xF3,0x15,0x63,0x2B,0xF2,0xE2,0x61,0x33,0xCA,0x00,0xBB,0xF2,0xDC,0x63,0x1B,0xCA,
  0x03,0xCD,0xF2,0xDD,0xF1,0xB3,0x00,0x00,0xF2,0xDC,0x61,0x23,0xCA,0x05,0x0C,0xF2,
  0xDC,0x62,0x07,0x61,0x0F,0xCA,0x07,0x76,0xC9,0xF0,0x00,0xF2,0xCA,0x73,0xCB,0x80,
  0x00,0x00,0x00,0x3E,0xCE,0x00,0xF8,0xF8,0xF8,0xF8,0xF8,0xCE,0x08,0xA9,0x77,0xCB,
  0x51,0x79,0xF2,0x88,0x73,0xCE,0xA0,0x34,0xF2,0xD1,0x7D,0xF2,0x92,0x73,0xCE,0xA0,
  0x38,0xF2,0xD2,0x7E,0xCF,0xB0,0x77,0xCB,0x85,0x00,0x00,0x03,0x00,0x5A,0xCA,0x05,
  0xB9,0x64,0x15,0xB0,0x62,0x5B,0xCA,0x05,0xD9,0x64,0x0D,0xB0,0x61,0x43,0xCA,0x05,
  0xC7,0xB0,0x61,0x4B,0xCA,0x05,0xB3,0xB0,0x77,0xCB,0x85,0x00,0x00,0x30,0x00,0x5A,
  0xCA,0x05,0xE4,0x64,0x15,0xB0,0x62,0x7B,0xCA,0x06,0x04,0x64,0x0D,0xB0,0x61,0x63,
  0xCA,0x05,0xF2,0xB0,0x61,0x6B,0xCA,0x05,0xDE,0xCF,0xCA,0x07,0x33,0xCA,0x06,0x24,
  0xCA,0x07,0x08,0xCA,0x05,0x32,0xCF,0xF2,0x88,0x73,0xCE,0x70,0xCE,0x20,0xA8,0x77,
  0x34,0xAA,0x73,0x31,0x4E,0xCA,0x02,0xE8,0x64,0x2C,0xAB,0x73,0x31,0x5E,0xCA,0x02,
  0xE8,0x64,0x23,0xF2,0xD1,0x7D,0xF2,0x92,0x73,0xCE,0x70,0xCE,0x20,0xA8,0x77,0x34,
  0xAA,0x73,0x31,0x4E,0xCA,0x02,0xE8,0x64,0x0D,0xAB,0x73,0x31,0x5E,0xCA,0x02,0xE8,
  0x64,0x04,0xF2,0xD2,0x7D,0xCF,0xF3,0x0D,0x73,0xF2,0x78,0x7B,0x32,0x4D,0xC9,0x02,
  0x44,0xF3,0x0D,0x73,0xF2,0x79,0x7B,0x32,0x4D,0xC9,0x02,0x44,0xF2,0x78,0x73,0xF3,
  0x19,0x7B,0x74,0xCB,0x56,0xCE,0x72,0xF2,0x7A,0x7E,0xF3,0x18,0x7B,0x74,0xCB,0x56,
  0xCE,0x72,0xF2,0x7B,0x7E,0xF2,0x79,0x73,0xF3,0x19,0x7B,0x74,0xCB,0x56,0xCE,0x72,
  0xF2,0x7C,0x7E,0xF3,0x18,0x7B,0x74,0xCB,0x56,0xCE,0x72,0xF2,0x7D,0x7E,0xF2,0x78,
  0x73,0xF2,0x79,0x77,0x21,0xC0,0xF3,0x1A,0x7B,0x74,0xCB,0x56,0xCE,0x72,0xF2,0x7E,
  0x7E,0xF3,0x17,0x7B,0xF2,0x81,0x77,0x39,0x4D,0x64,0x10,0xF2,0x7A,0x73,0xF2,0xDA,
  0x33,0x4F,0xF2,0xDA,0xFB,0x64,0x1D,0xCA,0x03,0x40,0xF3,0x16,0x7B,0xF2,0x81,0x77,
  0x39,0x5D,0x64,0x10,0xF2,0x7B,0x73,0xF2,0xDA,0x33,0x5F,0xF2,0xDA,0xFF,0x64,0x04,
  0xCA,0x03,0x40,0xF3,0x17,0x7B,0xF2,0x85,0x77,0x39,0x4D,0x64,0x10,0xF2,0x7C,0x73,
  0xF2,0xDB,0x33,0x4F,0xF2,0xDB,0xFB,0x64,0x1D,0xCA,0x03,0x48,0xF3,0x16,0x7B,0xF2,
  0x85,0x77,0x39,0x5D,0x64,0x10,0xF2,0x7D,0x73,0xF2,0xDB,0x33,0x5F,0xF2,0xDB,0xFF,
  0x64,0x04,0xCA,0x03,0x48,0xF2,0x79,0x73,0xF2,0x78,0x77,0x31,0xCB,0x28,0xF2,0x7E,
  0x33,0x4D,0x64,0x01,0xCF,0xF2,0xE4,0x73,0x75,0x01,0xE8,0x48,0x00,0xCB,0x71,0xCE,
  0x78,0xCE,0x78,0xCE,0x78,0xCE,0x38,0xAE,0x7C,0xF2,0xE4,0x73,0x75,0x01,0xE8,0x48,
  0x00,0xCB,0x61,0xCE,0x30,0x7A,0x0F,0xFF,0xFF,0xFF,0xCB,0x82,0xAE,0x77,0x21,0xAF,
  0x7C,0xCF,0xF2,0x82,0x73,0xF2,0x77,0x77,0xCB,0x51,0xF2,0x76,0x77,0x34,0xF2,0x78,
  0x7D,0xF2,0x86,0x73,0xF2,0x77,0x77,0xCB,0x51,0xF2,0x76,0x77,0x34,0xF2,0x79,0x7D,
  0xCF,0xF2,0x87,0x73,0xF2,0x83,0x77,0x31,0x09,0x25,0x00,0x00,0x01,0x8D,0xCB,0x64,
  0xF2,0x77,0x7D,0xF2,0x87,0x73,0x23,0xF2,0x83,0x77,0x34,0xF2,0x77,0x73,0xCB,0x54,
  0xF2,0x76,0x7D,0xCF,0xF3,0x02,0x73,0xF2,0xCC,0x7C,0xF3,0x03,0x73,0xF2,0xCD,0x7C,
  0xF3,0x04,0x73,0xF2,0xCE,0x7C,0xCF,0xF2,0x76,0x0B,0x2F,0x00,0x00,0x00,0x12,0xF2,
  0x77,0x0B,0x2F,0x00,0x4B,0xAC,0xE4,0xF2,0x78,0x0B,0x2F,0x00,0x00,0x01,0x8D,0xF2,
  0x79,0x0B,0x2F,0x00,0x00,0x01,0x8D,0xCF,0xF3,0x12,0x73,0xF3,0x0F,0x77,0xCB,0x71,
  0xCE,0x48,0xF2,0xD1,0x7C,0xF2,0xD2,0x7C,0xCF,0xF3,0x13,0x73,0xF3,0x0F,0x77,0xCB,
  0x71,0xCE,0x48,0xA9,0x77,0x34,0xAA,0x7D,0xF3,0x14,0x73,0xF3,0x0F,0x77,0xCB,0x71,
  0xCE,0x48,0xA9,0x77,0x34,0xAB,0x7D,0xF3,0x76,0x73,0xCB,0x80,0x00,0x00,0x00,0x3E,
  0xF8,0xF8,0xA9,0x77,0xCB,0x54,0xA8,0x7C,0xCF,0xF3,0x10,0x73,0xCE,0x00,0xF3,0x0F,
  0x77,0xCB,0x71,0xCE,0x48,0xA9,0x7C,0xCE,0x78,0xCE,0x28,0xAC,0x7C,0x08,0x09,0xCF,
  0xF3,0x11,0x73,0xF2,0xDA,0x7C,0x08,0xCF,0xF3,0x11,0x73,0xF2,0xDB,0x7C,0x08,0xCF,
  0x70,0x10,0x00,0x00,0x00,0xAF,0x7C,0x08,0xCF,0xCA,0xF6,0x19,0xCA,0x02,0xB4,0xCA,
  0x05,0x0D,0xCA,0x03,0x29,0xCA,0x03,0x40,0xCA,0x03,0x48,0xCA,0x03,0x50,0xCA,0x02,
  0xE8,0xCA,0x02,0xF9,0xCA,0x02,0xC7,0xF2,0x7F,0xFB,0xB1,0x0B,0xF2,0xDC,0xF1,0x17,
  0xC9,0xF0,0x00,0xCA,0x07,0x76,0xF2,0x7F,0x7B,0x2A,0x00,0x00,0x00,0x36,0xFE,0xF7,
  0x7D,0xCF,0xF3,0x09,0x73,0xFC,0x0C,0x4F,0x70,0x00,0x00,0x00,0x01,0xF3,0x09,0x7C,
  0xF2,0x9D,0x73,0xB4,0x23,0xF2,0x9D,0x7C,0xF3,0x09,0x77,0xF9,0xF2,0x9E,0x37,0x4D,
  0x64,0x17,0xF3,0x09,0x77,0xCB,0x71,0xB5,0x7C,0xCA,0x03,0x86,0xB3,0x0B,0xF2,0x9D,
  0x0B,0xF2,0x9E,0x0B,0xFB,0xF2,0x7F,0xFB,0xF2,0x9E,0xFB,0xCF,0xCF,0xF2,0xC6,0x73,
  0xCB,0x80,0xFF,0xFF,0xE0,0x00,0xF3,0x08,0xCB,0xA3,0xF2,0xC6,0x7C,0x90,0x77,0xF2,
  0xCA,0x73,0xCB,0x80,0x00,0x00,0x1F,0x00,0xCE,0x70,0xCB,0x74,0x8F,0x7D,0x91,0x77,
  0xF2,0xCA,0x73,0xCB,0x80,0x00,0x00,0x1F,0x00,0xCE,0x70,0xCB,0x74,0xAE,0x7D,0x8F,
  0x77,0xAE,0x27,0xCE,0x01,0x8F,0x7D,0x94,0x77,0x9D,0x27,0xCE,0x01,0xCE,0x01,0xF2,
  0xCA,0x73,0xCB,0x80,0x00,0x00,0x1F,0x00,0xCE,0x70,0xF8,0xCB,0x51,0x8F,0x73,0x34,
  0x8E,0x7D,0x90,0x77,0x91,0x37,0xF2,0xCA,0x73,0xCB,0x80,0x00,0x00,0x1F,0x00,0xCE,
  0x70,0xCB,0x74,0xAF,0x73,0xCE,0xB0,0xCB,0x54,0xCA,0xFD,0x67,0x74,0xB4,0x7D,0xCA,
  0x03,0x92,0xB4,0x77,0xB2,0x0B,0xF3,0x0A,0x73,0x31,0x5D,0x64,0x0D,0xB2,0xCB,0xAF,
  0x00,0x00,0x00,0x04,0xB4,0x7D,0xA9,0x73,0xC0,0xB4,0x77,0xF3,0x0C,0x73,0xF2,0x88,
  0x7B,0x38,0x4E,0xB2,0xCB,0xAF,0x00,0x00,0x00,0x02,0xF3,0x0C,0x73,0xF2,0x92,0x7B,
  0x38,0x4E,0xB2,0xCB,0xAF,0x00,0x00,0x00,0x02,0xF3,0x0B,0x73,0x79,0x38,0x5D,0x64,
  0x0D,0xB2,0xCB,0xAF,0x00,0x00,0x00,0x04,0xB4,0x7D,0xA9,0x73,0xC0,0xF2,0xE1,0x63,
  0x0F,0xB1,0x0B,0x64,0x0A,0xB2,0xCB,0xAF,0x00,0x00,0x00,0x08,0xB1,0xFB,0x00,0xF3,
  0x0D,0x73,0xF2,0x82,0x7B,0x32,0x4E,0xB2,0xCB,0xAF,0x00,0x00,0x00,0x10,0xF3,0x0D,
  0x73,0xF2,0x86,0x7B,0x32,0x4E,0xB2,0xCB,0xAF,0x00,0x00,0x00,0x10,0xF2,0xE0,0x62,
  0x3B,0xB2,0xCB,0xAF,0x00,0x00,0x00,0x20,0xB2,0x73,0x30,0x00,0x00,0x00,0x10,0x5A,
  0xCB,0xAF,0x00,0x00,0x00,0x01,0x64,0x09,0xB2,0x73,0x59,0x7F,0x00,0x00,0x00,0x01,
  0xF2,0x7F,0x7B,0x2A,0x00,0x00,0x00,0x36,0xFE,0xB2,0x73,0xB3,0xCB,0xAC,0xF3,0x0E,
  0x2B,0xF7,0x7C,0xF2,0x7F,0x7B,0xF3,0x0E,0x73,0xFC,0x38,0x4D,0x64,0x06,0xC9,0x07,
  0x76,0xB4,0x77,0xF2,0x7F,0x0B,0xFB,0xF2,0xDD,0xF1,0xAB,0xCF,0xCF,0x70,0x00,0x00,
  0x00,0x88,0x75,0x00,0x00,0x00,0x08,0x7A,0x00,0x00,0x00,0xA0,0xCA,0xF3,0xD3,0x70,
  0x00,0x00,0x00,0x88,0x75,0x00,0x00,0x00,0x08,0x7A,0x00,0x00,0x00,0xA8,0xCA,0xF3,
  0xD3,0xCF,0xB0,0x77,0xF1,0x81,0xF1,0x85,0xF1,0x89,0xF1,0x8D,0xF1,0x91,0xF1,0x95,
  0xF1,0x99,0xF1,0x9D,0xF5,0x01,0xF5,0x05,0xF5,0x09,0xF5,0x0D,0xF3,0x1B,0x7B,0x9B,
  0x73,0x32,0x4D,0x64,0x0D,0xF1,0xA1,0xF1,0xA9,0x9C,0x73,0x32,0x5E,0xF1,0x89,0xF1,
  0xAD,0xF3,0x1B,0x7B,0x9A,0x73,0x32,0x5D,0x64,0x0D,0xF1,0xA5,0xF1,0xA9,0x99,0x73,
  0x32,0x4E,0xF1,0x89,0xF1,0xAD,0xF3,0x1B,0x7B,0xA5,0x73,0x32,0x4D,0x64,0x0D,0xF1,
  0xB1,0xF1,0xB9,0xA6,0x73,0x32,0x5E,0xF1,0x99,0xF1,0xBD,0xF3,0x1B,0x7B,0xA4,0x73,
  0x32,0x5D,0x64,0x0D,0xF1,0xB5,0xF1,0xB9,0xA3,0x73,0x32,0x4E,0xF1,0x99,0xF1,0xBD,
  0x63,0x41,0xF5,0x21,0x61,0x65,0xF5,0x01,0x63,0x49,0xF5,0x25,0x61,0x6D,0xF5,0x05,
  0xB0,0x7D,0xCF,0xF2,0x80,0x77,0x90,0x7D,0xCF,0xF2,0x88,0x77,0xF2,0x80,0x37,0xF2,
  0x8B,0x27,0x90,0x7D,0x92,0x7D,0xCF,0xF2,0x88,0x77,0xF2,0x89,0x27,0xF2,0x80,0x37,
  0xF2,0x8B,0x27,0xF2,0x8C,0x27,0x90,0x7D,0xCF,0x92,0x77,0x90,0x7D,0xCF,0xF2,0x84,
  0x77,0x91,0x7D,0xCF,0xF2,0x92,0x77,0xF2,0x84,0x37,0xF2,0x95,0x27,0x91,0x7D,0x93,
  0x7D,0xCF,0xF2,0x92,0x77,0xF2,0x93,0x27,0xF2,0x84,0x37,0xF2,0x95,0x27,0xF2,0x96,
  0x27,0x91,0x7D,0xCF,0x93,0x77,0x91,0x7D,0xCF,0x95,0x73,0x99,0x77,0x24,0xCE,0x78,
  0xCB,0x64,0xCE,0x71,0x81,0x7D,0x95,0x73,0x9C,0x77,0x24,0xCE,0x78,0xCB,0x64,0xCE,
  0x71,0x82,0x7D,0xCF,0xF2,0xCA,0x73,0xCB,0x80,0x00,0x0F,0xE0,0x00,0xCE,0xB0,0xCE,
  0x00,0xF2,0xCA,0x77,0xCB,0x85,0x00,0x00,0x1F,0x00,0xCE,0x71,0x34,0xFD,0xFD,0xFD,
  0xF2,0x9C,0x7D,0xF2,0x9C,0x77,0x95,0x73,0xF9,0xCE,0x79,0xCE,0x79,0xCB,0x54,0xCA,
  0xFD,0x67,0xF2,0x8C,0x23,0xF2,0x8E,0x33,0x99,0x7C,0xF2,0x9C,0x77,0x95,0x73,0xF9,
  0xF9,0xCE,0x79,0xCE,0x79,0xCB,0x54,0xCA,0xFD,0x67,0xF2,0x8C,0x23,0xF2,0x8F,0x33,
  0x9A,0x7C,0xF2,0x9C,0x77,0x95,0x73,0xF9,0xF9,0xF9,0xCE,0x79,0xCE,0x79,0xCB,0x54,
  0xCA,0xFD,0x67,0xF2,0x8C,0x23,0xF2,0x90,0x33,0x9B,0x7C,0xF2,0x9C,0x77,0x95,0x73,
  0xF9,0xF9,0xF9,0xF9,0xCE,0x79,0xCE,0x79,0xCB,0x54,0xCA,0xFD,0x67,0xF2,0x8C,0x23,
  0xF2,0x91,0x33,0x9C,0x7C,0xF2,0x9C,0x77,0x9E,0x73,0xF9,0xCE,0x79,0xCE,0x79,0xCB,
  0x54,0xCA,0xFD,0x67,0xF2,0x96,0x23,0xF2,0x98,0x33,0xA3,0x7C,0xF2,0x9C,0x77,0x9E,
  0x73,0xF9,0xF9,0xCE,0x79,0xCE,0x79,0xCB,0x54,0xCA,0xFD,0x67,0xF2,0x96,0x23,0xF2,
  0x99,0x33,0xA4,0x7C,0xF2,0x9C,0x77,0x9E,0x73,0xF9,0xF9,0xF9,0xCE,0x79,0xCE,0x79,
  0xCB,0x54,0xCA,0xFD,0x67,0xF2,0x96,0x23,0xF2,0x9A,0x33,0xA5,0x7C,0xF2,0x9C,0x77,
  0x9E,0x73,0xF9,0xF9,0xF9,0xF9,0xCE,0x79,0xCE,0x79,0xCB,0x54,0xCA,0xFD,0x67,0xF2,
  0x96,0x23,0xF2,0x9B,0x33,0xA6,0x7C,0xCF,0x9C,0x77,0x9B,0x73,0x31,0x98,0x7C,0x9B,
  0x77,0x9A,0x73,0x31,0x97,0x7C,0x9A,0x77,0x99,0x73,0x31,0x96,0x7C,0xA6,0x77,0xA5,
  0x73,0x31,0xA2,0x7C,0xA5,0x77,0xA4,0x73,0x31,0xA1,0x7C,0xA4,0x77,0xA3,0x73,0x31,
  0xA0,0x7C,0xCF,0xF2,0x88,0x73,0xF2,0x89,0x33,0x94,0x7C,0xF2,0x8C,0x73,0xF2,0x8D,
  0x33,0x95,0x7C,0x95,0x73,0x75,0x00,0x00,0x00,0x08,0x7A,0x00,0x00,0x00,0xA0,0xCA,
  0xF3,0xDE,0x95,0x7C,0xF2,0x92,0x73,0xF2,0x93,0x33,0x9D,0x7C,0xF2,0x96,0x73,0xF2,
  0x97,0x33,0x9E,0x7C,0x9E,0x73,0x75,0x00,0x00,0x00,0x08,0x7A,0x00,0x00,0x00,0xA8,
  0xCA,0xF3,0xDE,0x9E,0x7C,0xCF,0xF2,0xDD,0xF1,0x27,0xF3,0x15,0x62,0xFF,0xF2,0xDD,
  0xF1,0x2B,0xF2,0xDC,0x0B,0xCB,0x01,0xCD
};

//FWD, V4.0b
uint32_t FWD[] = {
  0x0003D691,
  0x00001EAA,
  0x84A0444C,
  0x601124C2,
  0x40270000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000080,
  0x00000010,
  0xFFFE0000,
  0x00640000,
  0x0C800000,
  0x00000071,
  0x00000010,
  0x000000FA,
  0x00001388,
  0x0000002E,
  0x00088B80,
  0x0007EF40,
  0x00099CF0,
  0x00000006,
  0x00000039,
  0x00000040,
  0x0000002F,
  0x0000003C,
  0x00000043,
  0x00030000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000020,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000001,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x03E80000,
  0x00000000,
  0x00000000,
  0x0029F000,
  0x00000000,
  0x00000000,
  0x03C20000,
  0x00010000,
  0x00010000,
  0x00000010,
  0xABCD7654,
  0x48DBA399,
  0x00800401,
  0x0011111C,
  0x20000003,
  0x001202A7,
  0x20460808,
  0x4101E080,
  0x00240000,
  0xA47A3654,
  0x21982114,
  0x01026A0A,
  0x23AC9281,
  0x94A0C04C,
  0x40112500,
  0x4027000F,
  0x00000000,
  0x00000000,
  0x0000028B,
  0x00001EA9,
  0xFFFF0000
};

//Configuration and System Handling Registers
uint32_t CFG_C0_AS6031 [] = {
  0x48DBA399,
  0x00800401,
  0x0011111C,
  0x20000003,
  0x001A02A7,
  0x20460808,
  0x4101E080,
  0x00240000,
  0xA47A3654,
  0x21982114,
  0x00026A0A,
  0x23AC9281,
  0x84A0444C,
  0x601124C2,
  0x40270000
};

uint32_t CFG_C0_AS6031_water [] = {
  0x48DBA399,
  0x00800401,
  0x00000000,
  0x20000003,
  0x000302A7,
  0x2046EE08,
  0x01012080,
  0x00140000,
  0x20780A24,
  0x60150204,
  0x00002A0E,
  0x23209071,
  0x94A0444C,
  0x401101C2,
  0x00270000
};

uint32_t SHR_REG_AS6031 [6][2] = {
  {0xD0, 0x00000001}, //TOF RATE Lvl   
  {0xD1, 0x0001145E}, //Multihit Release Delay Window Up  
  {0xD2, 0x0001145E}, //Multihit Release Delay Window Down
  {0xDA, 0x0000002E}, //1st Hit Lvl Up 
  {0xDB, 0x0000002E}, //1st Hit Lvl Dn 
  {0xD8, 0x00000000}  //Start Hit Delay Win
};
/*
uint32_t Configuration_Register[15][2] = {
  {0xC0, 0x48DBA399},
  {0xC1, 0x00000401},
  {0xC2, 0x0011111C},
  {0xC3, 0x20000003},
  {0xC4, 0x003D03FF}, //CR_IEH
  {0xC5, 0x2006EE28},
  {0xC6, 0x01010080},
  {0xC7, 0x00240000},
  {0xC8, 0x20700984},
  {0xC9, 0x60150204},
  {0xCA, 0x01002C0E},
  {0xCB, 0x2360D479}, //CR_USM_AM
  {0xCC, 0x94A0C04C},
  {0xCD, 0x4011250F},
  {0xCE, 0x4027001F}
};

uint32_t SHR_Register[6][2] = {
  {0xD0, 0x00000001}, //TOF RATE Lvl   
  {0xD1, 0x00000000}, //Multihit Release Delay Window Up  
  {0xD2, 0x00000000}, //Multihit Release Delay Window Down
  {0xDA, 0x00000055}, //1st Hit Lvl Up 
  {0xDB, 0x00000055}, //1st Hit Lvl Dn 
  {0xD8, 0x00000000}  //Start Hit Delay Win
};
*/
// config_2MHz
uint32_t Configuration_Register[15][2] = {
  {0xC0, 0x48DBA399},
  {0xC1, 0x0034310A},
  {0xC2, 0x81111144},
  {0xC3, 0x10215000},
  {0xC4, 0x001F03FF},
  {0xC5, 0x004ECAE8},
  {0xC6, 0x0011A080},
  {0xC7, 0x00793400},
  {0xC8, 0x00002824},
  {0xC9, 0x03E70C81},
  {0xCA, 0x00002650},
  {0xCB, 0x0000D481},
  {0xCC, 0x84A0C47C},
  {0xCD, 0x401725CF},
  {0xCE, 0x00270808}
};

uint32_t SHR_Register[6][2] = {
  {0xD0, 0x00000001}, //TOF RATE Lvl   
  {0xD1, 0x00000000}, //Multihit Release Delay Window Up  
  {0xD2, 0x00000000}, //Multihit Release Delay Window Down
  {0xDA, 0x0000004B}, //1st Hit Lvl Up 
  {0xDB, 0x0000004B}, //1st Hit Lvl Dn 
  {0xD8, 0x00000000}  //Start Hit Delay Win
};




/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

#ifdef __cplusplus
}
#endif

#endif /* __USER_CFG_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
