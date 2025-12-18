/*
 * my_led.c
 *
 *  Created on: Dec 17, 2025
 *      Author: kiran_z6dopa8
 */

#include "my_led.h"

void led_init(void)
{
	//0. enable clock for GPIOD in AHB1
	RCC->AHB1ENR |= BV(3);
	//1. select mode as output
	GPIOD->MODER &= ~( BV(29));
	GPIOD->MODER |=  BV(28) ;
	//2. select type as push pull
	GPIOD->OTYPER &= ~( BV(14));
	//3. select speed as low
	GPIOD->OSPEEDR &= ~( BV(29));
	GPIOD->OSPEEDR &= ~(BV(28));
	//4. select pull up/down as no
	GPIOD->PUPDR &= ~(BV(29));
	GPIOD->PUPDR &= ~(BV(28));
}
void led_on(void)
{
	GPIOD->ODR ^=  BV(14);
}
void led_off(void)
{
	GPIOD->ODR ^= ~(BV(12));
}

