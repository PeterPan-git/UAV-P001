/******************************************************************************
**@file:    main.c
**@author:  Peter Pan
**@version: V-001
**@date:    5-May-2019
**@brief:   This is a main file.
******************************************************************************/
#include "main.h"

int main()
{
	All_Init();
	while(1)
	{
		

		#ifdef _DEBUG_
			printf("Feed dog!\r\n");
		#endif
		LED_All_Control(LED_ON);
		#ifdef _DEBUG_
			printf("LED light!\r\n");
		#endif
		MS_Delay(1500);
		LED_All_Control(LED_OFF);
		#ifdef _DEBUG_
			printf("LED die out!\r\n");
		#endif
		
		MS_Delay(1500);
	}
}
