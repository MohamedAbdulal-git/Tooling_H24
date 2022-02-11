/*
  Author:  Mohamed Abdulaal
  Date:    Aug 23, 2019
  Version: 1.0
 */

#include <avr/delay.h>
#include "std_types.h"
#include "bit_math.h"
#include "registers.h"
#include "DIO.h"
#include "TIM0.h"

u16 counter = 0;
u16 dimingCounter = 0;
u8 DutyCycle = 50; /* DutyCycle = 50% */
u8 Ton = 0;
u8 Toff = 0;
u8 Ttotal = 10; /* 100 HZ */


void handlingTest(void)
{
	counter++;
	dimingCounter++;
}

int main(void)
{
	DDRC |=(1<<7);
	PORTC |=(1<<7);
	CLR_BIT(DDRC,7);
	SET_BIT(PORTC,7);
	DIO_init();
	TIM0_init();
	TIM0_setCmIntCallback(handlingTest);
	TIM0_compareMatchIntState(TIM0_CM_INT_ENABLE);

	SREG |= 0b10000000;

	Ton = (DutyCycle/(f32)100) * Ttotal;
	Toff = Ttotal - Ton;

	while(1)
	{
		if(counter <= Toff)
		{
			CLR_BIT(PORTC,2);
		}
		else if(counter <= Ttotal)
		{
			SET_BIT(PORTC,2);
		}
		else
		{
			counter = 0;
		}


		if(dimingCounter >= 20)
		{
			dimingCounter = 0;

			DutyCycle += 1;

			Ton = (DutyCycle/(f32)100) * Ttotal;
			Toff = Ttotal - Ton;

			if(DutyCycle == 100) DutyCycle = 0;
		}
	}


	return 0;
}




