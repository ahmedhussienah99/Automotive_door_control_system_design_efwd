
#include"TYPES.h"
#include"MACROS.h"
#include"GPIO_INTERFACE.h"
#include"GPIO_REG.h"
#include"GPIO_CONFIG.h"

void MGPIO_VoidSetPinDirection( u8 Copy_u8Port , u8 Copy_u8Pin , u8 Copy_u8Direction ){


    switch(Copy_u8Port){

        case MGPIO_PORTA:
                        if(Copy_u8Direction== MGPIO_OUTPUT){SET_BIT(MGPIOA_DIR,Copy_u8Pin);}
                        if(Copy_u8Direction== MGPIO_INPUT){CLEAR_BIT(MGPIOA_DIR,Copy_u8Pin);}
                        break;

        case MGPIO_PORTB:
                        if(Copy_u8Direction== MGPIO_OUTPUT){SET_BIT(MGPIOB_DIR,Copy_u8Pin);}
                        if(Copy_u8Direction== MGPIO_INPUT){CLEAR_BIT(MGPIOB_DIR,Copy_u8Pin);}
                        break;

        case MGPIO_PORTC:
                        if(Copy_u8Direction== MGPIO_OUTPUT){SET_BIT(MGPIOC_DIR,Copy_u8Pin);}
                        if(Copy_u8Direction== MGPIO_INPUT){CLEAR_BIT(MGPIOC_DIR,Copy_u8Pin);}
                        break;

        case MGPIO_PORTD:
                        if(Copy_u8Direction== MGPIO_OUTPUT){SET_BIT(MGPIOD_DIR,Copy_u8Pin);}
                        if(Copy_u8Direction== MGPIO_INPUT){CLEAR_BIT(MGPIOD_DIR,Copy_u8Pin);}
                        break;

        case MGPIO_PORTE:
                        if(Copy_u8Direction== MGPIO_OUTPUT){SET_BIT(MGPIOE_DIR,Copy_u8Pin);}
                        if(Copy_u8Direction== MGPIO_INPUT){CLEAR_BIT(MGPIOE_DIR,Copy_u8Pin);}
                        break;

        case MGPIO_PORTF:
                        if(Copy_u8Direction== MGPIO_OUTPUT){SET_BIT(MGPIOF_DIR,Copy_u8Pin);}
                        if(Copy_u8Direction== MGPIO_INPUT){CLEAR_BIT(MGPIOF_DIR,Copy_u8Pin);}
                        break;


    }

}


void MGPIO_VoidSetPinValue( u8 Copy_u8Port , u8 Copy_u8Pin , u8 Copy_u8Value ){

      switch(Copy_u8Port){

        case MGPIO_PORTA:
                        if(Copy_u8Value== MGPIO_HIGH){SET_BIT(MGPIOA_DATA,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_LOW){CLEAR_BIT(MGPIOA_DATA,Copy_u8Pin);}
                        break;

        case MGPIO_PORTB:
                        if(Copy_u8Value== MGPIO_HIGH){SET_BIT(MGPIOB_DATA,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_LOW){CLEAR_BIT(MGPIOB_DATA,Copy_u8Pin);}
                        break;

        case MGPIO_PORTC:
                        if(Copy_u8Value== MGPIO_HIGH){SET_BIT(MGPIOC_DATA,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_LOW){CLEAR_BIT(MGPIOC_DATA,Copy_u8Pin);}
                        break;

        case MGPIO_PORTD:
                        if(Copy_u8Value== MGPIO_HIGH){SET_BIT(MGPIOD_DATA,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_LOW){CLEAR_BIT(MGPIOD_DATA,Copy_u8Pin);}
                        break;

        case MGPIO_PORTE:
                        if(Copy_u8Value== MGPIO_HIGH){SET_BIT(MGPIOE_DATA,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_LOW){CLEAR_BIT(MGPIOE_DATA,Copy_u8Pin);}
                        break;

        case MGPIO_PORTF:
                        if(Copy_u8Value== MGPIO_HIGH){SET_BIT(MGPIOF_DATA,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_LOW){CLEAR_BIT(MGPIOF_DATA,Copy_u8Pin);}
                        break;


    }


}

void MGPIO_VoidSetPinDigital( u8 Copy_u8Port , u8 Copy_u8Pin , u8 Copy_u8Value ){
    switch(Copy_u8Port){

        case MGPIO_PORTA:
                        if(Copy_u8Value== MGPIO_DIGITAL_ENABLED){SET_BIT(MGPIOA_DEN,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_DIGITAL_DISABLED){CLEAR_BIT(MGPIOA_DEN,Copy_u8Pin);}
                        break;

        case MGPIO_PORTB:
                        if(Copy_u8Value== MGPIO_DIGITAL_ENABLED){SET_BIT(MGPIOB_DEN,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_DIGITAL_DISABLED){CLEAR_BIT(MGPIOB_DEN,Copy_u8Pin);}
                        break;

        case MGPIO_PORTC:
                        if(Copy_u8Value== MGPIO_DIGITAL_ENABLED){SET_BIT(MGPIOC_DEN,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_DIGITAL_DISABLED){CLEAR_BIT(MGPIOC_DEN,Copy_u8Pin);}
                        break;

        case MGPIO_PORTD:
                        if(Copy_u8Value== MGPIO_DIGITAL_ENABLED){SET_BIT(MGPIOD_DEN,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_DIGITAL_DISABLED){CLEAR_BIT(MGPIOD_DEN,Copy_u8Pin);}
                        break;

        case MGPIO_PORTE:
                        if(Copy_u8Value== MGPIO_DIGITAL_ENABLED){SET_BIT(MGPIOE_DEN,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_DIGITAL_DISABLED){CLEAR_BIT(MGPIOE_DEN,Copy_u8Pin);}
                        break;

        case MGPIO_PORTF:
                        if(Copy_u8Value== MGPIO_DIGITAL_ENABLED){SET_BIT(MGPIOF_DEN,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_DIGITAL_DISABLED){CLEAR_BIT(MGPIOF_DEN,Copy_u8Pin);}
                        break;


    }


}


void MGPIO_VoidSelectAlternateFunction( u8 Copy_u8Port , u8 Copy_u8Pin,u8 Copy_u8Value ){

    switch(Copy_u8Port){

        case MGPIO_PORTA:
                        if(Copy_u8Value== MGPIO_ALTERFUNC_ENABLED){SET_BIT(MGPIOA_AFSEL,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_ALTERFUNC_DISABLED){CLEAR_BIT(MGPIOA_AFSEL,Copy_u8Pin);}
                        break;

        case MGPIO_PORTB:
                        if(Copy_u8Value== MGPIO_ALTERFUNC_ENABLED){SET_BIT(MGPIOB_AFSEL,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_ALTERFUNC_DISABLED){CLEAR_BIT(MGPIOB_AFSEL,Copy_u8Pin);}
                        break;

        case MGPIO_PORTC:
                        if(Copy_u8Value== MGPIO_ALTERFUNC_ENABLED){SET_BIT(MGPIOC_AFSEL,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_ALTERFUNC_DISABLED){CLEAR_BIT(MGPIOC_AFSEL,Copy_u8Pin);}
                        break;

        case MGPIO_PORTD:
                        if(Copy_u8Value== MGPIO_ALTERFUNC_ENABLED){SET_BIT(MGPIOD_AFSEL,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_ALTERFUNC_DISABLED){CLEAR_BIT(MGPIOD_AFSEL,Copy_u8Pin);}
                        break;

        case MGPIO_PORTE:
                        if(Copy_u8Value== MGPIO_ALTERFUNC_ENABLED){SET_BIT(MGPIOE_AFSEL,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_ALTERFUNC_DISABLED){CLEAR_BIT(MGPIOE_AFSEL,Copy_u8Pin);}
                        break;

        case MGPIO_PORTF:
                        if(Copy_u8Value== MGPIO_ALTERFUNC_ENABLED){SET_BIT(MGPIOF_AFSEL,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_ALTERFUNC_DISABLED){CLEAR_BIT(MGPIOF_AFSEL,Copy_u8Pin);}
                        break;


    }




}

void MGPIO_VoidStatusODR( u8 Copy_u8Port , u8 Copy_u8Pin,u8 Copy_u8Value ){

       switch(Copy_u8Port){

        case MGPIO_PORTA:
                        if(Copy_u8Value== MGPIO_OPENDRAIN_ENABLED){SET_BIT(MGPIOA_ODR,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_OPENDRAIN_DISABLED){CLEAR_BIT(MGPIOA_ODR,Copy_u8Pin);}
                        break;

        case MGPIO_PORTB:
                        if(Copy_u8Value== MGPIO_OPENDRAIN_ENABLED){SET_BIT(MGPIOB_ODR,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_OPENDRAIN_DISABLED){CLEAR_BIT(MGPIOB_ODR,Copy_u8Pin);}
                        break;

        case MGPIO_PORTC:
                        if(Copy_u8Value== MGPIO_OPENDRAIN_ENABLED){SET_BIT(MGPIOC_ODR,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_OPENDRAIN_DISABLED){CLEAR_BIT(MGPIOC_ODR,Copy_u8Pin);}
                        break;

        case MGPIO_PORTD:
                        if(Copy_u8Value== MGPIO_OPENDRAIN_ENABLED){SET_BIT(MGPIOD_ODR,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_OPENDRAIN_DISABLED){CLEAR_BIT(MGPIOD_ODR,Copy_u8Pin);}
                        break;

        case MGPIO_PORTE:
                        if(Copy_u8Value== MGPIO_OPENDRAIN_ENABLED){SET_BIT(MGPIOE_ODR,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_OPENDRAIN_DISABLED){CLEAR_BIT(MGPIOE_ODR,Copy_u8Pin);}
                        break;

        case MGPIO_PORTF:
                        if(Copy_u8Value== MGPIO_OPENDRAIN_ENABLED){SET_BIT(MGPIOF_ODR,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_OPENDRAIN_DISABLED){CLEAR_BIT(MGPIOF_ODR,Copy_u8Pin);}
                        break;


    }


}


void MGPIO_VoidStatusPUR( u8 Copy_u8Port , u8 Copy_u8Pin,u8 Copy_u8Value ){

       switch(Copy_u8Port){

        case MGPIO_PORTA:
                        if(Copy_u8Value== MGPIO_PUR_ENABLED){SET_BIT(MGPIOA_PUR,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_PUR_DISABLED){CLEAR_BIT(MGPIOA_PUR,Copy_u8Pin);}
                        break;

        case MGPIO_PORTB:
                        if(Copy_u8Value== MGPIO_PUR_ENABLED){SET_BIT(MGPIOB_PUR,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_PUR_DISABLED){CLEAR_BIT(MGPIOB_PUR,Copy_u8Pin);}
                        break;

        case MGPIO_PORTC:
                        if(Copy_u8Value== MGPIO_PUR_ENABLED){SET_BIT(MGPIOC_PUR,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_PUR_DISABLED){CLEAR_BIT(MGPIOC_PUR,Copy_u8Pin);}
                        break;

        case MGPIO_PORTD:
                        if(Copy_u8Value== MGPIO_PUR_ENABLED){SET_BIT(MGPIOD_PUR,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_PUR_DISABLED){CLEAR_BIT(MGPIOD_PUR,Copy_u8Pin);}
                        break;

        case MGPIO_PORTE:
                        if(Copy_u8Value== MGPIO_PUR_ENABLED){SET_BIT(MGPIOE_PUR,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_PUR_DISABLED){CLEAR_BIT(MGPIOE_PUR,Copy_u8Pin);}
                        break;

        case MGPIO_PORTF:
                        if(Copy_u8Value== MGPIO_PUR_ENABLED){SET_BIT(MGPIOF_PUR,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_PUR_DISABLED){CLEAR_BIT(MGPIOF_PUR,Copy_u8Pin);}
                        break;


    }


}


void MGPIO_VoidStatusPDR( u8 Copy_u8Port , u8 Copy_u8Pin,u8 Copy_u8Value ){

       switch(Copy_u8Port){

        case MGPIO_PORTA:
                        if(Copy_u8Value== MGPIO_PDR_ENABLED){SET_BIT(MGPIOA_PDR,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_PDR_DISABLED){CLEAR_BIT(MGPIOA_PDR,Copy_u8Pin);}
                        break;

        case MGPIO_PORTB:
                        if(Copy_u8Value== MGPIO_PDR_ENABLED){SET_BIT(MGPIOB_PDR,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_PDR_DISABLED){CLEAR_BIT(MGPIOB_PDR,Copy_u8Pin);}
                        break;

        case MGPIO_PORTC:
                        if(Copy_u8Value== MGPIO_PDR_ENABLED){SET_BIT(MGPIOC_PDR,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_PDR_DISABLED){CLEAR_BIT(MGPIOC_PDR,Copy_u8Pin);}
                        break;

        case MGPIO_PORTD:
                        if(Copy_u8Value== MGPIO_PDR_ENABLED){SET_BIT(MGPIOD_PDR,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_PDR_DISABLED){CLEAR_BIT(MGPIOD_PDR,Copy_u8Pin);}
                        break;

        case MGPIO_PORTE:
                        if(Copy_u8Value== MGPIO_PDR_ENABLED){SET_BIT(MGPIOE_PDR,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_PDR_DISABLED){CLEAR_BIT(MGPIOE_PDR,Copy_u8Pin);}
                        break;

        case MGPIO_PORTF:
                        if(Copy_u8Value== MGPIO_PDR_ENABLED){SET_BIT(MGPIOF_PDR,Copy_u8Pin);}
                        if(Copy_u8Value== MGPIO_PDR_DISABLED){CLEAR_BIT(MGPIOF_PDR,Copy_u8Pin);}
                        break;


    }


}
