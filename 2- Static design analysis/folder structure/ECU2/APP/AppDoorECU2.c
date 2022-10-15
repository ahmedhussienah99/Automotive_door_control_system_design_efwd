#include "RCC_INTERFACE.h"
#include "GPIO_INTERFACE.h"
#include "NVIC_INTERFACE.h"
#include "TIMER_INTERFACE.h"
#include "MACROS.h"
#include "TYPES.h"
#include "RCC_REG.h"
#include "GPIO_REG.h"


u8 volatile Flag = 0;

void MTIMER0_CALLBACK(){
	
			if(Flag==0){
					MGPIO_VoidSetPinValue(MRCC_GPIO_PORTA,2,MGPIO_LOW);
					Flag = 1 ;
					MTIMER_VoidStart(3000);

			}
			if( Flag == 1 ){
					MGPIO_VoidSetPinValue(MRCC_GPIO_PORTA,2,MGPIO_HIGH);
					Flag = 0 ;
					MTIMER_VoidStart(500);
			}
			
}
int main()
{
	
	MRCC_VoidEnablePeripheral(MRCC_GPIO,MRCC_GPIO_PORTA);
	MRCC_VoidEnablePeripheral(MRCC_TIMER,MRCC_TIMER0);
	MNVIC_VoidEnablePeripheral(MNVIC_GPIOA);
	MNVIC_VoidEnablePeripheral(MNVIC_TIMER0A);
	MGPIO_VoidSetPinDirection(MRCC_GPIO_PORTA,2,1);
	MTIMER_VoidInit();
	MTIMER0_VoidSetCallBack(MTIMER0_CALLBACK);
	MTIMER_VoidStart(10);
	while(1){
			
	}
    return 0;
}





