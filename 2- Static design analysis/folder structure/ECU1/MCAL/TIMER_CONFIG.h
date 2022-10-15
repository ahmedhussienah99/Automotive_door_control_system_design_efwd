#ifndef TIMER_CONFIG_H_INCLUDED
#define TIMER_CONFIG_H_INCLUDED

/* to choose type
#define MTIMER_16_32BIT 1
#define MTIMER_3264_64BIT 2
#define MTIMER_1632_32BIT_RTC 3
#define MTIMER_1632_16BIT 4
#define MTIMER_3264_32BIT 5
*/
#define MTIMER_TYPE 1



/* to choose mode
#define MTIMER_ONE_SHOOT 1
#define MTIMER_PERIODIC 2
#define MTIMER_sCAPTURE 3
*/
#define MTIMER_MODE 2


/* to choose mode interrupt
#define TIMER_TIMERA_INTERRUPT_TIMEOUT 1
*/

/* to choose direction
#define MTIMER_COUNT_DOWN 1
#define MTIMER_COUNT_UP 2
*/
#define MTIMER_DIRECTION 1


/* to enable interrupt
#define MTIMER_INTERRUPT_ENABLE 1
*/
#define MTIMER_INTERRUPT 1




#endif // TIMER_CONFIG_H_INCLUDED
