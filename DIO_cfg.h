/*
  Author:  Mohamed Abdulaal
  Date:    Aug 23, 2019
  Version: 1.0
 */


#ifndef DIO_CFG_H
#define DIO_CFG_H

/**************** Typedefs , declarations and definitions ***************/

/* Direction datatype */
typedef enum
{
  INPUT,
  OUTPUT
  
}PinDir_t;

/* PIN configuration datatype */
typedef struct
{
  Portx_t port;
  Pinx_t pin;
  PinDir_t direction;
  
}PinConfig_t;


extern PinConfig_t PinConfigs[];
extern u16 PinConfigCount;

#endif
