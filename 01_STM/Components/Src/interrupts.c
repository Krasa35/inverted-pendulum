/**
  ******************************************************************************
  * @file		: interrupts.c
  * @author  	: KKI		kacper.krasin35@gmail.com
  * @version 	: 0.0.1
  * @date    	: Jan 12, 2024
  * @brief   	: Brief of source file
  *
  ******************************************************************************
**/
#include "interrupts.h"

extern struct AS5600 device;
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim){
	  float zmienna = AS5600_Angle(&device);
	  char buffer[20];  // Adjust the size as needed
	  int len = snprintf(buffer, sizeof(buffer), "%f", zmienna);
	  buffer[len++] = '\r';
	  buffer[len++] = '\n';
	  HAL_UART_Transmit(&huart3, (uint8_t *)buffer, len, HAL_MAX_DELAY);
}
