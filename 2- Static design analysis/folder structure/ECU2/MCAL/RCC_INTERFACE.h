#ifndef RCC_INTERFACE_H_INCLUDED
#define RCC_INTERFACE_H_INCLUDED
#include"TYPES.h"

#define     MRCC_GPIO   0
#define     MRCC_TIMER  1
#define     MRCC_NVIC   2



#define     MRCC_GPIO_PORTA     0
#define     MRCC_GPIO_PORTB     1
#define     MRCC_GPIO_PORTC     2
#define     MRCC_GPIO_PORTD     3
#define     MRCC_GPIO_PORTE     4
#define     MRCC_GPIO_PORTF     5

#define MRCC_TIMER0 0
#define MRCC_TIMER1 1
#define MRCC_TIMER2 2
#define MRCC_TIMER3 3
#define MRCC_TIMER4 4
#define MRCC_TIMER5 5

#define MRCC_AHB_BUS 0
#define MRCC_APB_BUS 1

#define Bit0 0
#define Bit1 1
#define Bit2 2
#define Bit3 3
#define Bit4 4
#define Bit5 5
#define Bit6 6
#define Bit7 7
#define Bit8 8
#define Bit9 9
#define Bit10 10
#define Bit11 11
#define Bit12 12
#define Bit13 13
#define Bit14 14
#define Bit15 15
#define Bit27 27

void MRCC_VoidEnablePeripheral(u8 Copy_u8Peripheral,u8 Copy_u8TypePeripheral);
void MRCC_VoidSelectGpioBus(u8 Copy_u8TypePeripheral,u8 Copy_u8TypeBus);
#endif // RCC_INTERFACE_H_INCLUDED
