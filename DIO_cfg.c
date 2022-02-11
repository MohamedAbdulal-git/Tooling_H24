/*
  Author:  Mohamed Abdulaal
  Date:    Aug 23, 2019
  Version: 1.0
 */

#include "std_types.h"
#include "DIO.h"
#include "DIO_cfg.h"

/* Array contains all I/O configurations */
PinConfig_t PinConfigs[] = 
{
		{PORT_C,PIN2,OUTPUT},
};


/* Number of configurations  */
u16 PinConfigCount = sizeof(PinConfigs)/sizeof(PinConfig_t);
