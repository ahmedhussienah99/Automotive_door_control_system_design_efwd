#ifndef TIMER_REG_H_INCLUDED
#define TIMER_REG_H_INCLUDED




#define MGPTM0_CFG * ((volatile u32*) 0x40030000)
#define MGPTM0_TAMR * ((volatile u32*) 0x40030004)
#define MGPTM0_TBMR * ((volatile u32*) 0x40030008)
#define MGPTM0_CTL * ((volatile u32*) 0x4003000C)
#define MGPTM0_SYNC * ((volatile u32*) 0x40030010)
#define MGPTM0_IMR * ((volatile u32*) 0x40030018)
#define MGPTM0_RIS * ((volatile u32*) 0x4003001C)
#define MGPTM0_MIS * ((volatile u32*) 0x40030020)
#define MGPTM0_ICR * ((volatile u32*) 0x40030024)
#define MGPTM0_TAILR * ((volatile u32*) 0x40030028)
#define MGPTM0_TBILR * ((volatile u32*) 0x4003002C)
#define MGPTM0_TAMATCHR * ((volatile u32*) 0x40030030)
#define MGPTM0_TBMATCHR * ((volatile u32*) 0x40030034)
#define MGPTM0_TAPR * ((volatile u32*) 0x40030038)
#define MGPTM0_TBPR * ((volatile u32*) 0x4003003C)
#define MGPTM0_TAPMR * ((volatile u32*) 0x40030040)
#define MGPTM0_TBPMR * ((volatile u32*) 0x40030044)
#define MGPTM0_TAR * ((volatile u32*) 0x40030048)
#define MGPTM0_TBR * ((volatile u32*) 0x4003004C)
#define MGPTM0_TAV * ((volatile u32*) 0x40030050)
#define MGPTM0_TBV * ((volatile u32*) 0x40030054)
#define MGPTM0_RTCPD * ((volatile u32*) 0x40030058)
#define MGPTM0_TAPS * ((volatile u32*) 0x4003005C)
#define MGPTM0_TBPS * ((volatile u32*) 0x40030060)
#define MGPTM0_TAPV * ((volatile u32*) 0x40030064)
#define MGPTM0_TBPV * ((volatile u32*) 0x40030068)
#define MGPTM0_PP * ((volatile u32*) 0x40030FC0)


#endif // TIMER_REG_H_INCLUDED
