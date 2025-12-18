#include <stdint.h>
#include <stdio.h>
#include"stm32f407xx.h"
#include"my_switch.h"


void switch_init(void)
{
	//0. enable clock for GPIOA in AHB1
	RCC->AHB1ENR |= BV(0);
	//1. select mode as Input
	GPIOA->MODER &= ~(BV(0) | BV(1) );


	//2. select type as push pull
	//GPIOA->OTYPER &= ~(BV(0) );
	//3. select speed as low
	GPIOA->OSPEEDR &= ~(BV(0) | BV(1));

	//4. select pull up/down as no
	GPIOA->PUPDR &= ~(BV(0) | BV(1));

}
int switch_status(void)
{
	static int pressed=0;
	static int state=0;
if ((GPIOA->IDR) & BV(0) )
{
		//return 1 ; // switch is press
	//}
//	else
//	{
	//	return 0 ; // switch is nor press
	//}
//}
		while(1)
			if (switch_status() == 1 && pressed == 0)
		{
			if (pressed == 1)
			{
				state++;

			if (state == 1)
			{
				GPIOD->ODR |= BV(12);    // Green ON
				GPIOD->ODR &= ~BV(15);   // Blue OFF
			}
			else if (state == 2)
			{
			GPIOD->ODR |= BV(15);    // Blue ON
			}
			else if (state == 3)
			{
			GPIOD->ODR &= ~(BV(12) | BV(15)); // Both OFF
			state = 0; // reset cycle
			}

							pressed = 1;
						}
					}
   }
return 0;
}

