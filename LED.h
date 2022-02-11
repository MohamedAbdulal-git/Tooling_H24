/*
  Author:  Mohamed Abdulaal
  Date:    Aug 23, 2019
  Version: 1.0
 */


#ifndef LED_H
#define LED_H


/**************** Typedefs , declarations and definitions ***************/

/* PIN datatype */
typedef enum
{
  LED_0,
  LED_1,
  LED_2,
  TOTAL_AVAILABLE_LEDS
  
}LEDs_t;


/* Function prototypes */
void LED_write(LEDs_t led, State_t state);
void LED_init(void);


#endif
