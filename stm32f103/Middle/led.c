/******************************************************************************
** @file:    led.c
** @author:  Peter Pan
** @version: V-001
** @date:    5-May-2019
** @brief:   This file contains three functions.
** $1: The "LED_Init" function: Initializatin the LED1-LED8 port.
** $2: The "LED_Single_Control" function: The function can control single LED 
**     bright or die out.
** $3: The "LED_All_Control" function: The function can control all LED bright
**     or die out.
******************************************************************************/
#include "main.h"

void LED_Init()
{
	GPIO_InitTypeDef GPIO_InitStructure;	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC,ENABLE);

	GPIO_InitStructure.GPIO_Pin= LED1 | LED2 | LED3 | LED4 | LED5 | LED6 | LED7 | LED8 ;	 
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;	 
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;	  
	GPIO_Init(GPIOC,&GPIO_InitStructure); 
	LED_All_Control(LED_OFF);
}

void LED_Single_Control(LED_CONTROL_NUM led_num, uint8_t led_status)
{
	if(led_status)
	{
		switch(led_num)
		{
			case LED_1:
				GPIO_ResetBits(GPIOC, LED1);
				break;
			
			case LED_2:
				GPIO_ResetBits(GPIOC, LED2);
				break;
			
			case LED_3:
				GPIO_ResetBits(GPIOC, LED3);
				break;
			
			case LED_4:
				GPIO_ResetBits(GPIOC, LED4);
				break;
			
			case LED_5:
				GPIO_ResetBits(GPIOC, LED5);
				break;
			
			case LED_6:
				GPIO_ResetBits(GPIOC, LED6);
				break;
			
			case LED_7:
				GPIO_ResetBits(GPIOC, LED7);
				break;
			
			case LED_8:
				GPIO_ResetBits(GPIOC, LED8);
				break;
			
			default:
				break;
		}
	}
	else
	{
		switch(led_num)
		{
			case LED_1:
				GPIO_SetBits(GPIOC, LED1);
				break;
			
			case LED_2:
				GPIO_SetBits(GPIOC, LED2);
				break;
			
			case LED_3:
				GPIO_SetBits(GPIOC, LED3);
				break;
			
			case LED_4:
				GPIO_SetBits(GPIOC, LED4);
				break;
			
			case LED_5:
				GPIO_SetBits(GPIOC, LED5);
				break;
			
			case LED_6:
				GPIO_SetBits(GPIOC, LED6);
				break;
			
			case LED_7:
				GPIO_SetBits(GPIOC, LED7);
				break;
			
			case LED_8:
				GPIO_SetBits(GPIOC, LED8);
				break;
			
			default:
				break;
		}
	}
		
}

void LED_All_Control(uint8_t led_status)
{
	
	
	if(led_status)
	{
		GPIO_ResetBits(GPIOC, LED1);
		GPIO_ResetBits(GPIOC, LED2);
		GPIO_ResetBits(GPIOC, LED3);
		GPIO_ResetBits(GPIOC, LED4);
		GPIO_ResetBits(GPIOC, LED5);
		GPIO_ResetBits(GPIOC, LED6);
		GPIO_ResetBits(GPIOC, LED7);
		GPIO_ResetBits(GPIOC, LED8);
	}
	else
	{
		GPIO_SetBits(GPIOC, LED1);
		GPIO_SetBits(GPIOC, LED2);
		GPIO_SetBits(GPIOC, LED3);
		GPIO_SetBits(GPIOC, LED4);
		GPIO_SetBits(GPIOC, LED5);
		GPIO_SetBits(GPIOC, LED6);
		GPIO_SetBits(GPIOC, LED7);
		GPIO_SetBits(GPIOC, LED8);
	}
}
