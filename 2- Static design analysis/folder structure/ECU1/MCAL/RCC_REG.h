#ifndef RCC_REG_H_INCLUDED
#define RCC_REG_H_INCLUDED
#include"TYPES.h"



#define MRCC_RCC   *((volatile u32*)0x400FE060 )
#define MRCC_RCC2   *((volatile u32*)0x400FE070 )
#define MRCC_MOSCCTL   *((volatile u32*)0x400FE07C )
#define MRCC_RCGCGPIO   *((volatile u32*)0x400FE608 )
#define MRCC_MGPIOHBCTL *((volatile u32*)0x400FE06C)
#define MRCC_RCGCTIMER *((volatile u32*)0x400FE604)
#define MRCC_PRGPIO * ((volatile u32 *) 0x400FEA08)
#define MRCC_PRTIMER 	 * ((volatile u32 *) 0x400FEA04)

#endif // RCC_REG_H_INCLUDED
