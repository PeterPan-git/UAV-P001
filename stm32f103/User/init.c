/******************************************************************************
**@file:    init.c
**@author:  Peter Pan
**@version: V-001
**@date:    5-May-2019
**@brief:   This file contains the initialization of the system and all the 
**          peripherals. If you want to use some function, you need to initia
**          -lize the corresponding peripheral first.
******************************************************************************/
#include "main.h"

void All_Init()
{
	SystemInit();
	USART1_Init();
	LED_Init();
	Key_init();
	//IWDG_Init();
}
