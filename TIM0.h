/*
  Author:  Mohamed Abdulaal
  Date:    Aug 23, 2019
  Version: 1.0
*/

#ifndef TIM0_INT_H
#define TIM0_INT_H


#define TIM0_OVF_INT_ENABLE     1
#define TIM0_OVF_INT_DISABLE    0

#define TIM0_CM_INT_ENABLE      1
#define TIM0_CM_INT_DISABLE     0

#define TIM0_CMO_ENABLE      1
#define TIM0_CMO_DISABLE     0


extern void TIM0_init(void);
extern void TIM0_overFlowIntState(u8 state);
extern void TIM0_compareMatchIntState(u8 state);
extern void TIM0_setTCNT0(u8 value);
extern void TIM0_setOCRO(u8 value);
void TIM0_forceOutputCompare(u8 state);
extern void TIM0_setOvfIntCallback(void (*callbackPtr)(void));
extern void TIM0_setCmIntCallback(void (*callbackPtr)(void));

#endif
