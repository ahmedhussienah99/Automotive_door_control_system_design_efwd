/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


#ifndef MACROS_H_
#define MACROS_H_


#define SET_BIT(REG , BITNUM) REG |= 1<<BITNUM
#define CLEAR_BIT(REG , BITNUM) REG &= ~(1<<BITNUM)
#define TOG_BIT(REG , BITNUM) REG ^= 1<<BITNUM
#define GET_BIT(REG , BITNUM) ( (REG) & (1<< BITNUM ))


#endif /* MACROS_H_ */
