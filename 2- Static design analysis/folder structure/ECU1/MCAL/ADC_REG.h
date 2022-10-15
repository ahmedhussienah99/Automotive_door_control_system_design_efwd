#ifndef NVIC_REG_H_INCLUDED
#define NVIC_REG_H_INCLUDED
#include"TYPES.h"

typedef struct{

	volatile u32 EN    [ 32 ];
	volatile u32 DIS    [ 32 ];
	volatile u32 PEND    [ 32 ];
	volatile u32 UNPEND    [ 32 ];
	volatile u32 ACTIVE    [ 32 ];
	volatile u32 RESERVED[ 32 ];
	volatile u8 PRI      [ 128];

}NVIC;

#define MNVIC ((volatile NVIC *)0xE000E100)
	
//#define MNVIC_EN0 *((volatile u32 *)0xE000E1000)

#endif // NVIC_REG_H_INCLUDED
