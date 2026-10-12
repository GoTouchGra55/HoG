/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define IMU2_MOSI_Pin GPIO_PIN_1
#define IMU2_MOSI_GPIO_Port GPIOC
#define IMU2_MISO_Pin GPIO_PIN_2
#define IMU2_MISO_GPIO_Port GPIOC
#define ESC_CH1_Pin GPIO_PIN_0
#define ESC_CH1_GPIO_Port GPIOA
#define ESC_CH2_Pin GPIO_PIN_1
#define ESC_CH2_GPIO_Port GPIOA
#define ESC_CH3_Pin GPIO_PIN_2
#define ESC_CH3_GPIO_Port GPIOA
#define TEL_RX_Pin GPIO_PIN_3
#define TEL_RX_GPIO_Port GPIOA
#define IMU1_SCK_Pin GPIO_PIN_5
#define IMU1_SCK_GPIO_Port GPIOA
#define IMU1_MOSI_Pin GPIO_PIN_7
#define IMU1_MOSI_GPIO_Port GPIOA
#define AUX_SCL_Pin GPIO_PIN_10
#define AUX_SCL_GPIO_Port GPIOB
#define AUX_SDA_Pin GPIO_PIN_11
#define AUX_SDA_GPIO_Port GPIOB
#define IMU2_SCK_Pin GPIO_PIN_13
#define IMU2_SCK_GPIO_Port GPIOB
#define GNSS_TX_Pin GPIO_PIN_14
#define GNSS_TX_GPIO_Port GPIOB
#define GNSS_RX_Pin GPIO_PIN_15
#define GNSS_RX_GPIO_Port GPIOB
#define ESC_CH4_Pin GPIO_PIN_12
#define ESC_CH4_GPIO_Port GPIOD
#define ESC_CH5_Pin GPIO_PIN_13
#define ESC_CH5_GPIO_Port GPIOD
#define ESC_CH6_Pin GPIO_PIN_14
#define ESC_CH6_GPIO_Port GPIOD
#define TEL_TX_Pin GPIO_PIN_5
#define TEL_TX_GPIO_Port GPIOD
#define IMU1_MISO_Pin GPIO_PIN_4
#define IMU1_MISO_GPIO_Port GPIOB
#define BARO_SCL_Pin GPIO_PIN_6
#define BARO_SCL_GPIO_Port GPIOB
#define BARO_SDA_Pin GPIO_PIN_7
#define BARO_SDA_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
