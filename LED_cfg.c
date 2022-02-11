/*
  Author:  Mohamed Abdulaal
  Date:    Aug 23, 2019
  Version: 1.0
 */

#include "std_types.h"
#include "DIO.h"
#include "LED.h"
#include "LED_cfg.h"


/* Array contains all LEDs configurations */
LEDConfig_t LEDConfigs[] = 
                          {
                            {LED_0,PORT_C,PIN7},

                          };

/* Number of configurations  */
u16 LEDConfigCount = sizeof(LEDConfigs)/sizeof(LEDConfig_t);
