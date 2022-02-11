/*
  Author:  Mohamed Abdulaal
  Date:    Aug 23, 2019
  Version: 1.0
 */


#ifndef DIO_H
#define DIO_H


/**************** Typedefs , declarations and definitions ***************/

/* PORT datatype */
typedef enum
{
  PORT_A,
  PORT_B,
  PORT_C,
  PORT_D
  
}Portx_t;

/* PIN datatype */
typedef enum
{
  PIN0,
  PIN1,
  PIN2,
  PIN3,
  PIN4,
  PIN5,
  PIN6,
  PIN7
  
}Pinx_t;





/* Function prototypes */
void DIO_write(Portx_t port,Pinx_t pin,State_t state);
State_t DIO_read(Portx_t port,Pinx_t pin);
void DIO_init(void);


#endif
