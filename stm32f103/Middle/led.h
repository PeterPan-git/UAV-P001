#ifndef _LED_H_
#define _LED_H_
#include "stdint.h"

#define LED_ON	1
#define LED_OFF 0

typedef enum
{
	LED_1 = 0,
	LED_2,
	LED_3,
	LED_4,
	LED_5,
	LED_6,
	LED_7,
	LED_8
}LED_CONTROL_NUM;

void LED_Init(void);
void LED_Single_Control(LED_CONTROL_NUM led_num, uint8_t led_status);
void LED_All_Control(uint8_t led_status);


#endif
