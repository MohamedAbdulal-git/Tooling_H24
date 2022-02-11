/*
  Author:  Mohamed Abdulaal
  Date:    Aug 23, 2019
  Version: 1.0
 */

#include "std_types.h"
#include "bit_math.h"
#include "registers.h"
#include "DIO.h"
#include "DIO_cfg.h"



/******************** Function prototypes **********************/


/* Function to write to I/O pins */
void DIO_write(Portx_t port,Pinx_t pin,State_t state)
{
  /* Check which port the pin belongs to */
  switch(port)
  {
    case PORT_A:
    
      if( state == HIGH )
      {
        SET_BIT(PORTA,pin);
      }
      else if( state == LOW )
      {
        CLR_BIT(PORTA,pin);
      }  
      
      break;
    
    case PORT_B:
    
      if( state == HIGH )
      {
        SET_BIT(PORTB,pin);
      }
      else if( state == LOW )
      {
        CLR_BIT(PORTB,pin);
      } 
    
      break;
      
    case PORT_C:
    
      if( state == HIGH )
      {
        SET_BIT(PORTC,pin);
      }
      else if( state == LOW )
      {
        CLR_BIT(PORTC,pin);
      } 
    
      break;

    case PORT_D:
    
      if( state == HIGH )
      {
        SET_BIT(PORTD,pin);
      }
      else if( state == LOW )
      {
        CLR_BIT(PORTD,pin);
      }
    
      break; 
  }
}

/* Function to read from I/O pins */
State_t DIO_read(Portx_t port,Pinx_t pin)
{
  State_t val;
  
  /* Check which port the pin belongs to */
  switch(port)
  {
    case PORT_A:
    
      if( GET_BIT(PINA,pin) )
      {
        val = HIGH;
      }
      else
      {
        val = LOW;
      }  
      
      break;
    
    case PORT_B:
    
      if( GET_BIT(PINB,pin) )
      {
        val = HIGH;
      }
      else
      {
        val = LOW;
      }  
    
      break;
      
    case PORT_C:
    
      if( GET_BIT(PINC,pin) )
      {
        val = HIGH;
      }
      else
      {
        val = LOW;
      } 
    
      break;

    case PORT_D:
    
      if( GET_BIT(PIND,pin) )
      {
        val = HIGH;
      }
      else
      {
        val = LOW;
      } 
    
      break; 
  }
  
  return val;
}


/* Function to init DIO module and configure all pins */
void DIO_init(void)
{
  int i;
  
  /* Execute all configurations */
  for(i = 0;i < PinConfigCount; i++)
  {
    switch(PinConfigs[i].port)
    {
      case PORT_A:
      
        if(PinConfigs[i].direction == OUTPUT)
        {
          SET_BIT(DDRA, PinConfigs[i].pin);
        }
        else if(PinConfigs[i].direction == INPUT)
        {
          CLR_BIT(DDRA, PinConfigs[i].pin);
        }
      
        break;
      
      case PORT_B:
      
        if(PinConfigs[i].direction == OUTPUT)
        {
          SET_BIT(DDRB, PinConfigs[i].pin);
        }
        else if(PinConfigs[i].direction == INPUT)
        {
          CLR_BIT(DDRB, PinConfigs[i].pin);
        }
      
        break;
        
      case PORT_C:
      
        if(PinConfigs[i].direction == OUTPUT)
        {
          SET_BIT(DDRC, PinConfigs[i].pin);
        }
        else if(PinConfigs[i].direction == INPUT)
        {
          CLR_BIT(DDRC, PinConfigs[i].pin);
        }
      
        break;

      case PORT_D:
      
        if(PinConfigs[i].direction == OUTPUT)
        {
          SET_BIT(DDRD, PinConfigs[i].pin);
        }
        else if(PinConfigs[i].direction == INPUT)
        {
          CLR_BIT(DDRD, PinConfigs[i].pin);
        }
      
        break; 
    }
  }
}
