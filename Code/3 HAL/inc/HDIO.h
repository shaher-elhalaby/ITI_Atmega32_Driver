/*
* Author : shaher Elhalaby
* Date : 10/8/2022
* Version : 1.0
* Description : This file contains the Interface for MCAL functions
*               for DIO module
*              This file contains the following functions:
*               - HAL_DIO_pinInit
*               - HAL_DIO_pinWrite
*               - HAL_DIO_pinRead
*               THIS FILE IS USED BY THE APPLICATION LAYER
*               TO USE THE DIO MODULE
*               by mapping GPIO pin into Channel
*               ex :
*               Channel 0 --> GPIOA PIN 0
*               Channel 1 --> GPIOA PIN 1
*               Channel 2 --> GPIOA PIN 2
*               Channel 3 --> GPIOA PIN 3
*               Channel 4 --> GPIOA PIN 4
*               Channel 5 --> GPIOA PIN 5
*               Channel 6 --> GPIOA PIN 6
*               Channel 7 --> GPIOA PIN 7
*               Channel 8 --> GPIOB PIN 0
*               Channel 9 --> GPIOB PIN 1
*               Channel 10 --> GPIOB PIN 2
*               Channel 11 --> GPIOB PIN 3
*               Channel 12 --> GPIOB PIN 4
*               Channel 13 --> GPIOB PIN 5
*               Channel 14 --> GPIOB PIN 6
*               Channel 15 --> GPIOB PIN 7
*               Channel 16 --> GPIOC PIN 0
*               Channel 17 --> GPIOC PIN 1
*               Channel 18 --> GPIOC PIN 2
*               Channel 19 --> GPIOC PIN 3
*               Channel 20 --> GPIOC PIN 4
*               Channel 21 --> GPIOC PIN 5
*               Channel 22 --> GPIOC PIN 6
*               Channel 23 --> GPIOC PIN 7
*               Channel 24 --> GPIOD PIN 0
*               Channel 25 --> GPIOD PIN 1
*               Channel 26 --> GPIOD PIN 2
*               Channel 27 --> GPIOD PIN 3
*               Channel 28 --> GPIOD PIN 4
*               Channel 29 --> GPIOD PIN 5
*               Channel 30 --> GPIOD PIN 6
*               Channel 31 --> GPIOD PIN 7
*               ALL the Channels into all.
*/

#ifndef HDIO_H
#define HDIO_H

#include <stdint.h>
/*create Data Type for Initiating GPIO*/
typedef struct {
  uint8_t channel;
  uint8_t direction;
  uint8_t error;
} HAL_DIO_initTypedef;

/*create Data Type for Reading GPIO*/
typedef struct {
  uint8_t channel;
  uint8_t value;
  uint8_t error;
} HAL_DIO_readTypedef;

/*create Data Type for Writing GPIO*/
typedef struct {
  uint8_t channel;
  uint8_t value;
  uint8_t error;
} HAL_DIO_writeTypedef;

/*define pins from 0 to all*/
#define HAL_DIO_PIN_0 ((uint8_t)0x00)    // GPIOA PIN0
#define HAL_DIO_PIN_1 ((uint8_t)0x01)    // GPIOA PIN1
#define HAL_DIO_PIN_2 ((uint8_t)0x02)    // GPIOA PIN2
#define HAL_DIO_PIN_3 ((uint8_t)0x03)    // GPIOA PIN3
#define HAL_DIO_PIN_4 ((uint8_t)0x04)    // GPIOA PIN4
#define HAL_DIO_PIN_5 ((uint8_t)0x05)    // GPIOA PIN5
#define HAL_DIO_PIN_6 ((uint8_t)0x06)    // GPIOA PIN6
#define HAL_DIO_PIN_7 ((uint8_t)0x07)    // GPIOA PIN7
#define HAL_DIO_PIN_8 ((uint8_t)0x08)    // GPIOB PIN0
#define HAL_DIO_PIN_9 ((uint8_t)0x09)    // GPIOB PIN1
#define HAL_DIO_PIN_10 ((uint8_t)0x0A)   // GPIOB PIN2
#define HAL_DIO_PIN_11 ((uint8_t)0x0B)   // GPIOB PIN3
#define HAL_DIO_PIN_12 ((uint8_t)0x0C)   // GPIOB PIN4
#define HAL_DIO_PIN_13 ((uint8_t)0x0D)   // GPIOB PIN5
#define HAL_DIO_PIN_14 ((uint8_t)0x0E)   // GPIOB PIN6
#define HAL_DIO_PIN_15 ((uint8_t)0x0F)   // GPIOB PIN7
#define HAL_DIO_PIN_16 ((uint8_t)0x10)   // GPIOC PIN0
#define HAL_DIO_PIN_17 ((uint8_t)0x11)   // GPIOC PIN1
#define HAL_DIO_PIN_18 ((uint8_t)0x12)   // GPIOC PIN2
#define HAL_DIO_PIN_19 ((uint8_t)0x13)   // GPIOC PIN3
#define HAL_DIO_PIN_20 ((uint8_t)0x14)   // GPIOC PIN4
#define HAL_DIO_PIN_21 ((uint8_t)0x15)   // GPIOC PIN5
#define HAL_DIO_PIN_22 ((uint8_t)0x16)   // GPIOC PIN6
#define HAL_DIO_PIN_23 ((uint8_t)0x17)   // GPIOC PIN7
#define HAL_DIO_PIN_24 ((uint8_t)0x18)   // GPIOD PIN0
#define HAL_DIO_PIN_25 ((uint8_t)0x19)   // GPIOD PIN1
#define HAL_DIO_PIN_26 ((uint8_t)0x1A)   // GPIOD PIN2
#define HAL_DIO_PIN_27 ((uint8_t)0x1B)   // GPIOD PIN3
#define HAL_DIO_PIN_28 ((uint8_t)0x1C)   // GPIOD PIN4
#define HAL_DIO_PIN_29 ((uint8_t)0x1D)   // GPIOD PIN5
#define HAL_DIO_PIN_30 ((uint8_t)0x1E)   // GPIOD PIN6
#define HAL_DIO_PIN_31 ((uint8_t)0x1F)   // GPIOD PIN7
#define HAL_DIO_PIN_ALL ((uint8_t)0xFF)  // ALL the Pins

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