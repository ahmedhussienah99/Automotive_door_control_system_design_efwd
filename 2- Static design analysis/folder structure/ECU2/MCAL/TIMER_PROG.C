

#include"TYPES.h"
#include"MACROS.h"
#include"TIMER_INTERFACE.h"
#include"TIMER_REG.h"
#include"TIMER_CONFIG.h"

void (*MTIMER0_CallBack) (void);


void MTIMER_VoidInit( ){

		CLEAR_BIT(MGPTM0_CTL,0);


	#if MTIMER_TYPE==MTIMER_16_32BIT
            MGPTM0_CFG |= 0x0;
    #elif MTIMER_TYPE==MTIMER_32_64BIT
            MGPTM0_CFG |= 0x04;
	#endif // MTIMER_TYPE


	#if MTIMER_MODE==MTIMER_ONE_SHOOT
           // MGPTM0_CFG = 0x00000000;
            MGPTM0_TAMR |= 0x01;
    #elif MTIMER_MODE==MTIMER_PERIODIC
           //  MGPTM0_CFG = 0x00000000;
            MGPTM0_TAMR |= 0x02;
	#endif // MTIMER_MODE

	#if MTIMER_DIRECTION==MTIMER_COUNT_DOWN
				CLEAR_BIT(MGPTM0_TAMR,4);
    #elif MTIMER_DIRECTION==MTIMER_COUNT_UP
				SET_BIT(MGPTM0_TAMR,4);
	#endif // MTIMER_DIRECTION

    #if MTIMER_INTERRUPT==MTIMER_INTERRUPT_ENABLE
				SET_BIT(MGPTM0_IMR,0);
        SET_BIT(MGPTM0_ICR,0);
    #elif MTIMER_INTERRUPT==MTIMER_INTERRUPT_DISABLE
	#endif // MTIMER_INTERRUPT

}

void MTIMER_VoidStart(u16 Copy_u16LoadValue ){
	    MGPTM0_TAILR |= Copy_u16LoadValue;
			SET_BIT(MGPTM0_CTL,0);
}

void MTIMER0_VoidSetCallBack( void (*ptr) (void) ){

		MTIMER0_CallBack = ptr;
    MGPTM0_ICR = 0x01;
}

 
void TIMER0A_Handler(void){
	
	MTIMER0_CallBack();
}
