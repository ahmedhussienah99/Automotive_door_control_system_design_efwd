


#include"TYPES.h"
#include"MACROS.h"

#include"NVIC_INTERFACE.h"
#include"NVIC_REG.h"
#include"NVIC_CONFIG.h"



void MNVIC_VoidEnablePeripheral ( u8 Copy_u8NumberInVector ){

	MNVIC->EN[ Copy_u8NumberInVector / 32 ] = 1 << ( Copy_u8NumberInVector % 32 ) ;

}


void MNVIC_VoidDisablePeripheral ( u8 Copy_u8NumberInVector ){

	MNVIC->DIS[ Copy_u8NumberInVector / 32 ] = 1 << ( Copy_u8NumberInVector % 32 ) ;

}

void MNVIC_VoidSetPending ( u8 Copy_u8NumberInVector ){

	MNVIC->PEND[ Copy_u8NumberInVector / 32 ] = 1 << ( Copy_u8NumberInVector % 32 ) ;

}


void MNVIC_VoidClearPending ( u8 Copy_u8NumberInVector ){

	MNVIC->UNPEND[ Copy_u8NumberInVector / 32 ] = 1 << ( Copy_u8NumberInVector % 32 ) ;

}
u8   MNVIC_u8GetActive( u8 Copy_u8NumberInVector ){

	u8 LOC_u8Active = GET_BIT( (MNVIC->ACTIVE[ Copy_u8NumberInVector/32 ]) , ( Copy_u8NumberInVector % 32 ) );
	return LOC_u8Active ;

}

void MNVIC_VoidSetPriority(u8 Copy_u8NumberInVector, u8 u8InterruptPriority){

	MNVIC->PRI[Copy_u8NumberInVector] = (u8InterruptPriority<<5);
}
