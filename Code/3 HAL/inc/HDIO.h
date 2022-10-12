/*
* Author : shaher Elhalaby
* Date : 10/8/2022
* Version : 1.0
* Description : This file contains the Interface for MCAL functions
*               for DIO module
*/

#ifndef HDIO_H
#define HDIO_H

/*Include Files****************************************/
#include <stdint.h>

/*Data Types********************************************/

/*create Data Type for Initiating GPIO*/
typedef struct {
  uint8_t channel;  // channel number
  uint8_t direction;  // input or output
  uint8_t error;      // error flag
} HAL_DIO_initTypedef;

/*create Data Type for Reading GPIO*/
typedef struct {
  uint8_t channel;  // channel number
  uint8_t value;  // value of the channel
  uint8_t error;  // error flag
} HAL_DIO_readTypedef;

/*create Data Type for Writing GPIO*/
typedef struct {
  uint8_t channel;  // channel number
  uint8_t value;  // value of the channel
  uint8_t error;  // error flag
} HAL_DIO_writeTypedef;

/*define pins from 0 to all*/
#define HAL_DIO_PIN_0 ((uint8_t)0x01)
#define HAL_DIO_PIN_1 ((uint8_t)0x02)
#define HAL_DIO_PIN_2 ((uint8_t)0x03)
#define HAL_DIO_PIN_3 ((uint8_t)0x04)
#define HAL_DIO_PIN_4 ((uint8_t)0x05)
#define HAL_DIO_PIN_5 ((uint8_t)0x06)
#define HAL_DIO_PIN_6 ((uint8_t)0x07)
#define HAL_DIO_PIN_7 ((uint8_t)0x08)
#define HAL_DIO_PIN_8 ((uint8_t)0x09)
#define HAL_DIO_PIN_9 ((uint8_t)0x0A)
#define HAL_DIO_PIN_10 ((uint8_t)0x0B)
#define HAL_DIO_PIN_11 ((uint8_t)0x0C)
#define HAL_DIO_PIN_12 ((uint8_t)0x0D)
#define HAL_DIO_PIN_13 ((uint8_t)0x0E)
#define HAL_DIO_PIN_14 ((uint8_t)0x0F)
#define HAL_DIO_PIN_15 ((uint8_t)0x10)
#define HAL_DIO_PIN_16 ((uint8_t)0x11)
#define HAL_DIO_PIN_17 ((uint8_t)0x12)
#define HAL_DIO_PIN_18 ((uint8_t)0x13)
#define HAL_DIO_PIN_19 ((uint8_t)0x14)
#define HAL_DIO_PIN_20 ((uint8_t)0x15)
#define HAL_DIO_PIN_21 ((uint8_t)0x16)
#define HAL_DIO_PIN_22 ((uint8_t)0x17)
#define HAL_DIO_PIN_23 ((uint8_t)0x18)
#define HAL_DIO_PIN_24 ((uint8_t)0x19)
#define HAL_DIO_PIN_25 ((uint8_t)0x1A)
#define HAL_DIO_PIN_26 ((uint8_t)0x1B)
#define HAL_DIO_PIN_27 ((uint8_t)0x1C)
#define HAL_DIO_PIN_28 ((uint8_t)0x1D)
#define HAL_DIO_PIN_29 ((uint8_t)0x1E)
#define HAL_DIO_PIN_30 ((uint8_t)0x1F)
#define HAL_DIO_PIN_31 ((uint8_t)0x20)
#define HAL_DIO_PIN_ALL ((uint8_t)0xFF)

/*define Mode */
#define HAL_DIO_MODE_OUT (0x00)
#define HAL_DIO_MODE_INPUTFLOAT (0x01)
#define HAL_DIO_MODE_INPUTPULLUP (0x02)

/*Functon Prototypes *******************************************/
/*
* Description : This function is used to initialize the GPIO
*               with the given configuration
* Parameters  : GPIO_initStruct : pointer to the struct
*               that contains the configuration
* Return      : void
*/
void HAL_DIO_pinInit(HAL_DIO_initTypedef *DIO_initStruct);

/*
* Description : This function is used to write a value to a pin
* Parameters  : DIO_writeStruct : pointer to the struct
*               that contains the configuration
* Return      : void
*/
void HAL_DIO_pinWrite(HAL_DIO_writeTypedef *DIO_writeStruct);

/*
* Description : This function is used to read a value from a pin
* Parameters  : DIO_readStruct : pointer to the struct
*               that contains the configuration
* Return      : void
*/
void HAL_DIO_pinRead(HAL_DIO_readTypedef *DIO_readStruct);

#endif