
#include"TYPES.h"
#include"MACROS.h"
#include"RCC_INTERFACE.h"
#include"RCC_CONFIG.h"
#include"RCC_REG.h"


void MRCC_VoidInit(){
	//#if CLOCK_SOURCE == MOSC_MAIN_OSCILLATOR_16_MHZ
        /*enable main OSC*/
							MRCC_RCC2=0;
							CLEAR_BIT(MRCC_RCC,Bit0);	
							MRCC_RCC=0x000000000;
        /*select the input source for OSC*/
							CLEAR_BIT(MRCC_RCC,Bit4);
							CLEAR_BIT(MRCC_RCC,Bit5);	
	
        /* Select the crystal value */
	           SET_BIT(MRCC_RCC,Bit6);
		         SET_BIT(MRCC_RCC,Bit8);
	           SET_BIT(MRCC_RCC,Bit10);
						 CLEAR_BIT(MRCC_RCC,Bit7);	
						 CLEAR_BIT(MRCC_RCC,Bit9);	

        /* MOSC monitor circuit enable */
	           SET_BIT(MRCC_MOSCCTL,Bit0);
        /* indecate a crystall connected to the OSC1_OSC2   */
						MRCC_MOSCCTL &= ~(1<<2);
   
						 CLEAR_BIT(MRCC_RCC,Bit27);	


	
}


void MRCC_VoidEnablePeripheral(u8 Copy_u8Peripheral,u8 Copy_u8TypePeripheral){

    switch(Copy_u8Peripheral){

        case MRCC_GPIO:
					
				
					  if(Copy_u8TypePeripheral==MRCC_GPIO_PORTA){  
												SET_BIT(MRCC_RCGCGPIO,Bit0);
												//while(!GET_BIT(MRCC_PRGPIO , Bit0)){}
												for(volatile int i=0;i<150;i++){}	
						}
						if(Copy_u8TypePeripheral==MRCC_GPIO_PORTB){  
												SET_BIT(MRCC_RCGCGPIO,Bit1);
												for(volatile int i=0;i<150;i++){}	

						}
						if(Copy_u8TypePeripheral==MRCC_GPIO_PORTC){  
												SET_BIT(MRCC_RCGCGPIO,Bit2);
												for(volatile int i=0;i<150;i++){}	

						}
						if(Copy_u8TypePeripheral==MRCC_GPIO_PORTD){  
												SET_BIT(MRCC_RCGCGPIO,Bit3);
												for(volatile int i=0;i<150;i++){}	

						}
						if(Copy_u8TypePeripheral==MRCC_GPIO_PORTE){  
												SET_BIT(MRCC_RCGCGPIO,Bit4);
												for(volatile int i=0;i<150;i++){}	

						}
						if(Copy_u8TypePeripheral==MRCC_GPIO_PORTF){  
												SET_BIT(MRCC_RCGCGPIO,Bit5);
												for(volatile int i=0;i<150;i++){}	

						}
						
						break;

        case MRCC_TIMER:
					
			
						if(Copy_u8TypePeripheral==MRCC_TIMER0){  
												SET_BIT(MRCC_RCGCTIMER,Bit0);
												for(volatile int i=0;i<150;i++){}	

						}
						if(Copy_u8TypePeripheral==MRCC_TIMER1){ 
												SET_BIT(MRCC_RCGCTIMER,Bit1);
												while(GET_BIT(MRCC_PRTIMER , Bit1)==0){}

						}
						if(Copy_u8TypePeripheral==MRCC_TIMER2){  SET_BIT(MRCC_RCGCTIMER,Bit2);}
						if(Copy_u8TypePeripheral==MRCC_TIMER3){  SET_BIT(MRCC_RCGCTIMER,Bit3);}
						if(Copy_u8TypePeripheral==MRCC_TIMER4){  SET_BIT(MRCC_RCGCTIMER,Bit4);}
						if(Copy_u8TypePeripheral==MRCC_TIMER5){  SET_BIT(MRCC_RCGCTIMER,Bit5);}
						break;
           
    }

}


void MRCC_VoidSelectGpioBus(u8 Copy_u8TypePeripheral,u8 Copy_u8TypeBus){

    switch(Copy_u8TypePeripheral){

        case MRCC_GPIO_PORTA:
            if(Copy_u8TypeBus==MRCC_AHB_BUS){   SET_BIT(MRCC_MGPIOHBCTL,Bit0);   }
            if(Copy_u8TypeBus==MRCC_APB_BUS){   CLEAR_BIT(MRCC_MGPIOHBCTL,Bit0);    }
            break;
        case MRCC_GPIO_PORTB:
            if(Copy_u8TypeBus==MRCC_AHB_BUS){   SET_BIT(MRCC_MGPIOHBCTL,Bit1);   }
            if(Copy_u8TypeBus==MRCC_APB_BUS){   CLEAR_BIT(MRCC_MGPIOHBCTL,Bit1);    }
            break;
        case MRCC_GPIO_PORTC:
            if(Copy_u8TypeBus==MRCC_AHB_BUS){   SET_BIT(MRCC_MGPIOHBCTL,Bit2);   }
            if(Copy_u8TypeBus==MRCC_APB_BUS){   CLEAR_BIT(MRCC_MGPIOHBCTL,Bit2);    }
            break;
        case MRCC_GPIO_PORTD:
            if(Copy_u8TypeBus==MRCC_AHB_BUS){   SET_BIT(MRCC_MGPIOHBCTL,Bit3);   }
            if(Copy_u8TypeBus==MRCC_APB_BUS){   CLEAR_BIT(MRCC_MGPIOHBCTL,Bit3);    }
            break;
        case MRCC_GPIO_PORTE:
            if(Copy_u8TypeBus==MRCC_AHB_BUS){   SET_BIT(MRCC_MGPIOHBCTL,Bit4);   }
            if(Copy_u8TypeBus==MRCC_APB_BUS){   CLEAR_BIT(MRCC_MGPIOHBCTL,Bit4);    }
            break;
        case MRCC_GPIO_PORTF:
            if(Copy_u8TypeBus==MRCC_AHB_BUS){   SET_BIT(MRCC_MGPIOHBCTL,Bit5);   }
            if(Copy_u8TypeBus==MRCC_APB_BUS){   CLEAR_BIT(MRCC_MGPIOHBCTL,Bit5);    }
            break;


    }



}


