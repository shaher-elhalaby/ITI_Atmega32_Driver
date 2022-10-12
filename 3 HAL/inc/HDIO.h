/*
* Author : shaher Elhalaby
* Date : 10/8/2022
* Version : 1.0
* Description : This file contains the Interface for MCAL functions
*               for DIO module
*/

#ifndef HDIO_H
#define HDIO_H

/*create Data Type for Initiating GPIO*/
typedef struct {
  uint8_t mode;
  uint8_t pin;
} HAL_DIO_initTypedef;

/*define pins from 0 to all*/
#define HAL_DIO_PIN_0 ((uint8_t)0x01)
#define HAL_DIO_PIN_1 ((uint8_t)0x02)
#define HAL_DIO_PIN_2 ((uint8_t)0x04)
#define HAL_DIO_PIN_3 ((uint8_t)0x08)
#define HAL_DIO_PIN_4 ((uint8_t)0x10)
#define HAL_DIO_PIN_5 ((uint8_t)0x20)
#define HAL_DIO_PIN_6 ((uint8_t)0x40)
#define HAL_DIO_PIN_7 ((uint8_t)0x80)
#define HAL_DIO_ALLPINS ((uint8_t)0xFF)

/*define Mode */
#define HAL_DIO_MODE_OUT (0x00)
#define HAL_DIO_MODE_INPUTFLOAT (0x01)
#define HAL_DIO_MODE_INPUTPULLUP (0x02)

/*Functon Prototypes *******************************************/
/*
* Description : This function is used to initialize the GPIO
*               with the given configuration
* Parameters  : G : GPIO Port
*               GPIO_initStruct : pointer to the struct
*               that contains the configuration
* Return      : void
*/
void HAL_DIO_pinInit(void *G, HAL_DIO_initTypedef *GPIO_initStruct);

/*
* Description : This function is used to write a value to a pin
* Parameters  : G : GPIO Port
*               pin : pin number
*               state : value to be written
* Return      : void
*/
void HAL_DIO_pinWrite(void *G, uint8_t pin, uint8_t state);

/*
* Description : This function is used to read a value from a pin
* Parameters  : G : GPIO Port
*               pin : pin number
* Return      : value of the pin
*/
uint8_t HAL_DIO_pinRead(void *G, uint8_t pin);

#endif