/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STDIORETARGET_H
#define __STDIORETARGET_H

#include <stdio.h>
#include "main.h"
#include "stm32f4xx_my_uart.h"

#define DebugUARTStruct huart2   // Replace your UART debug structure (huartx) here

extern UART_HandleTypeDef DebugUARTStruct; 

#endif /* __STDIORETARGET_H */
