#ifndef NVIC_INTERFACE_H_INCLUDED
#define NVIC_INTERFACE_H_INCLUDED
#include"TYPES.h"


// IT  IS NUMBER OF INTERRUPT IN VECTOR TABLE
#define MNVIC_GPIOA     0
#define MNVIC_GPIOB     1
#define MNVIC_GPIOC     2
#define MNVIC_GPIOD     3
#define MNVIC_GPIOE     4
#define MNVIC_GPIOF     30
#define MNVIC_TIMER0A   19
#define MNVIC_TIMER0B   20
#define MNVIC_TIMER1A   21
#define MNVIC_TIMER1B   22
#define MNVIC_TIMER2A   23
#define MNVIC_TIMER2B   24


void MNVIC_VoidEnablePeripheral ( u8 Copy_u8NumberInVector );
void MNVIC_VoidDisablePeripheral ( u8 Copy_u8NumberInVector );
void MNVIC_VoidSetPending ( u8 Copy_u8NumberInVector );
void MNVIC_VoidClearPending ( u8 Copy_u8NumberInVector );
u8   MNVIC_u8GetActive( u8 Copy_u8NumberInVector );
void MNVIC_VoidSetPriority(u8 Copy_u8NumberInVector, u8 u8InterruptPriority);

#endif // NVIC_INTERFACE_H_INCLUDED
