/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
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
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_hal.h"

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define DTR_Pin GPIO_PIN_1
#define DTR_GPIO_Port GPIOC
#define RESET_GSM_Pin GPIO_PIN_2
#define RESET_GSM_GPIO_Port GPIOC
#define TX_2_Pin GPIO_PIN_2
#define TX_2_GPIO_Port GPIOA
#define RX_2_Pin GPIO_PIN_3
#define RX_2_GPIO_Port GPIOA
#define RESET_GPS_Pin GPIO_PIN_1
#define RESET_GPS_GPIO_Port GPIOB
#define PGOOD_Pin GPIO_PIN_10
#define PGOOD_GPIO_Port GPIOB
#define PPS_GPS_Pin GPIO_PIN_11
#define PPS_GPS_GPIO_Port GPIOB
#define RING_Pin GPIO_PIN_12
#define RING_GPIO_Port GPIOB
#define LED_DBG_Pin GPIO_PIN_8
#define LED_DBG_GPIO_Port GPIOC
#define TX_1_Pin GPIO_PIN_9
#define TX_1_GPIO_Port GPIOA
#define RX_1_Pin GPIO_PIN_10
#define RX_1_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */
#define RX_BUFFER_SIZE 384
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
