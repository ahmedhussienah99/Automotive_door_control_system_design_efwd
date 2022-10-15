#ifndef GPIO_INTERFACE_H_INCLUDED
#define GPIO_INTERFACE_H_INCLUDED

#include "TYPES.h"





#define MGPIO_PIN0  0
#define MGPIO_PIN1  1
#define MGPIO_PIN2  2
#define MGPIO_PIN3  3
#define MGPIO_PIN4  4
#define MGPIO_PIN5  5
#define MGPIO_PIN6  6
#define MGPIO_PIN7  7

#define MGPIO_PORTA 0
#define MGPIO_PORTB 1
#define MGPIO_PORTC 2
#define MGPIO_PORTD 3
#define MGPIO_PORTE 4
#define MGPIO_PORTF 5


#define MGPIO_INPUT 0
#define MGPIO_OUTPUT 1

#define MGPIO_LOW 0
#define MGPIO_HIGH 1


#define MGPIO_ALTERFUNC_DISABLED 0
#define MGPIO_ALTERFUNC_ENABLED 1


#define MGPIO_OPENDRAIN_DISABLED 0
#define MGPIO_OPENDRAIN_ENABLED 1

#define MGPIO_PUR_DISABLED 0
#define MGPIO_PUR_ENABLED 1

#define MGPIO_PDR_DISABLED 0
#define MGPIO_PDR_ENABLED 1


#define MGPIO_DIGITAL_DISABLED 0
#define MGPIO_DIGITAL_ENABLED 1


void MGPIO_VoidSetPinDirection( u8 Copy_u8Port , u8 Copy_u8Pin , u8 Copy_u8Direction );
void MGPIO_VoidSetPinValue( u8 Copy_u8Port , u8 Copy_u8Pin , u8 Copy_u8Value );
void MGPIO_VoidSetPinDigital( u8 Copy_u8Port , u8 Copy_u8Pin , u8 Copy_u8Value );
void MGPIO_VoidSelectAlternateFunction( u8 Copy_u8Port , u8 Copy_u8Pin,u8 Copy_u8Value );
void MGPIO_VoidStatusODR( u8 Copy_u8Port , u8 Copy_u8Pin,u8 Copy_u8Value );
void MGPIO_VoidStatusPUR( u8 Copy_u8Port , u8 Copy_u8Pin,u8 Copy_u8Value );
void MGPIO_VoidStatusPDR( u8 Copy_u8Port , u8 Copy_u8Pin,u8 Copy_u8Value );

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

#endif // GPIO_INTERFACE_H_INCLUDED
