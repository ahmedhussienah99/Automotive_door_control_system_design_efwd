#ifndef TIMER_INTERFACE_H_INCLUDED
#define TIMER_INTERFACE_H_INCLUDED


#define MTIMER_16_32BIT 1
#define MTIMER_3264_64BIT 2
#define MTIMER_1632_32BIT_RTC 3
#define MTIMER_1632_16BIT 4
#define MTIMER_3264_32BIT 5


#define MTIMER_ONE_SHOOT 1
#define MTIMER_PERIODIC 2
#define MTIMER_sCAPTURE 3


#define TIMER_TIMERA_INTERRUPT_TIMEOUT 1


#define MTIMER_COUNT_DOWN 1
#define MTIMER_COUNT_UP 2

#define MTIMER_INTERRUPT_ENABLE 1

void MTIMER_VoidInit();
void MTIMER_VoidStart(u16 Copy_u16LoadValue );
void MTIMER0_VoidSetCallBack( void (*ptr) (void) );
#endif // TIMER_INTERFACE_H_INCLUDED
