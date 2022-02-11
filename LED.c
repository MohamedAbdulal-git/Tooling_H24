/*
  Author:  Mohamed Abdulaal
  Date:    Aug 23, 2019
  Version: 1.0
 */

#include "std_types.h"
#include "bit_math.h"
#include "registers.h"
#include "DIO.h"
#include "LED.h"
#include "LED_cfg.h"




/******************** Function prototypes **********************/

/* Function to write to I/O pins */
void LED_write(LEDs_t led, State_t state)
{
  u16 ledIndex;
  
  /* Find configurations of LED */
  for(ledIndex = 0; ledIndex < LEDConfigCount;ledIndex++)
  {
    if( LEDConfigs[ledIndex].led == led )
    {
      break;
    }
  }
  
  /* Call DIO function to write state on PIN */
  DIO_write(LEDConfigs[ledIndex].port, LEDConfigs[ledIndex].pin, state);
}


/* Function init LED module  */
void LED_init(void)
{
  /* Nothing to initialize */
}
