#ifndef GPIO_REG_H_INCLUDED
#define GPIO_REG_H_INCLUDED
#include"TYPES.h"




#define MGPIOA_DATA 	*((volatile u32 *) 0x400043FC)
#define MGPIOA_DIR 		*((volatile u32 *) 0x40004400)
#define MGPIOA_AFSEL 	*((volatile u32 *) 0x40004420)
#define MGPIOA_ODR 		*((volatile u32 *) 0x4000450C)
#define MGPIOA_PUR 		*((volatile u32 *) 0x40004510)
#define MGPIOA_PDR 		*((volatile u32 *) 0x40004514)
#define MGPIOA_DEN 		*((volatile u32 *) 0x4000451C)


#define MGPIOB_DATA * ((volatile u32 *) 0x400053FC)
#define MGPIOB_DIR * ((volatile u32 *) 0x40005400)
#define MGPIOB_AFSEL * ((volatile u32 *) 0x40005420)
#define MGPIOB_ODR * ((volatile u32 *) 0x4000550C)
#define MGPIOB_PUR * ((volatile u32 *) 0x40005510)
#define MGPIOB_PDR * ((volatile u32 *) 0x40005514)
#define MGPIOB_DEN * ((volatile u32 *) 0x4000551C)


#define MGPIOC_DATA * ((volatile u32 *) 0x400063FC)
#define MGPIOC_DIR * ((volatile u32 *) 0x40006400)
#define MGPIOC_AFSEL * ((volatile u32 *) 0x40006420)
#define MGPIOC_ODR * ((volatile u32 *) 0x4000650C)
#define MGPIOC_PUR * ((volatile u32 *) 0x40006510)
#define MGPIOC_PDR * ((volatile u32 *) 0x40006514)
#define MGPIOC_DEN * ((volatile u32 *) 0x4000651C)


#define MGPIOD_DATA * ((volatile u32 *) 0x400073FC)
#define MGPIOD_DIR * ((volatile u32 *) 0x40007400)
#define MGPIOD_AFSEL * ((volatile u32 *) 0x40007420)
#define MGPIOD_ODR * ((volatile u32 *) 0x4000750C)
#define MGPIOD_PUR * ((volatile u32 *) 0x40007510)
#define MGPIOD_PDR * ((volatile u32 *) 0x40007514)
#define MGPIOD_DEN * ((volatile u32 *) 0x4000751C)


#define MGPIOE_DATA * ((volatile u32 *) 0x400243FC)
#define MGPIOE_DIR * ((volatile u32 *) 0x40024400)
#define MGPIOE_AFSEL * ((volatile u32 *) 0x40024420)
#define MGPIOE_ODR * ((volatile u32 *) 0x4002450C)
#define MGPIOE_PUR * ((volatile u32 *) 0x40024510)
#define MGPIOE_PDR * ((volatile u32 *) 0x40024514)
#define MGPIOE_DEN * ((volatile u32 *) 0x4002451C)


#define MGPIOF_DATA * ((volatile u32 *) 0x400253FC)
#define MGPIOF_DIR * ((volatile u32 *) 0x40025400)
#define MGPIOF_AFSEL * ((volatile u32 *) 0x40025420)
#define MGPIOF_ODR * ((volatile u32 *) 0x4002500050C)
#define MGPIOF_PUR * ((volatile u32 *) 0x40025510)
#define MGPIOF_PDR * ((volatile u32 *) 0x40025514)
#define MGPIOF_DEN * ((volatile u32 *) 0x4002551C)

#endif // GPIO_REG_H_INCLUDED
