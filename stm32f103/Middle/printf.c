#include "main.h"

int fputc(int ch, FILE *p)
{
	USART_SendData(USART1,(uint8_t)ch);	
	while(USART_GetFlagStatus(USART1,USART_FLAG_TXE)==RESET);
	return ch;
}
