/*
 * mq2.h
 *
 *  Created on: Dec 30, 2025
 *      Author: ADMIN
 */


#define mq2_H
#define mq2_H
#include "stm32f4xx_hal.h"
void mq2_Init(ADC_HandleTypeDef* hadc1);
uint16_t mq2_Read();
