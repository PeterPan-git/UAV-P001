#include "main.h"

void IWDG_Init()
{
	IWDG_WriteAccessCmd(IWDG_WriteAccess_Enable);
	IWDG_SetPrescaler(IWDG_Prescaler_64);
	IWDG_SetReload(800);
	IWDG_ReloadCounter();
	IWDG_Enable();
}
