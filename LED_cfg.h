/*
  Author:  Mohamed Abdulaal
  Date:    Aug 23, 2019
  Version: 1.0
 */


#ifndef LED_CFG_H
#define LED_CFG_H

/**************** Typedefs , declarations and definitions ***************/



/* PIN configuration datatype */
typedef struct
{
  LEDs_t led;
  Portx_t port;
  Pinx_t pin;
  
}LEDConfig_t;


extern LEDConfig_t LEDConfigs[];
extern u16 LEDConfigCount;

#endif
