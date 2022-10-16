#include <HDIO.h>
#include "gpio.h"

/*Functon Prototypes *******************************************/
/*
* Description : This function is used to initialize the GPIO
*               with the given configuration
* Parameters  : GPIO_initStruct : pointer to the struct
*               that contains the configuration
* Return      : void
*/
void HAL_DIO_pinInit(HAL_DIO_initTypedef *DIO_initStruct) {
  uint8_t channel = 0, mode = 0, direction = 0;
  if (DIO_initStruct->channel < 8) {
    channel = DIO_initStruct->channel;
    if (DIO_initStruct->mode == HAL_DIO_MODE_OUT) {
      direction = 1;
    } else if (DIO_initStruct->mode == HAL_DIO_MODE_INPUTFLOAT ||
               DIO_initStruct->mode == HAL_DIO_MODE_INPUTPULLUP) {
      direction = 0;
    }
    GPIO_setupPinDirection(PORTA_ID, channel, direction);
  } else if (DIO_initStruct->channel < 16) {
    channel = DIO_initStruct->channel - 8;
    if (DIO_initStruct->mode == HAL_DIO_MODE_OUT) {
      direction = 1;
    } else if (DIO_initStruct->mode == HAL_DIO_MODE_INPUTFLOAT ||
               DIO_initStruct->mode == HAL_DIO_MODE_INPUTPULLUP) {
      direction = 0;
    }
    GPIO_setupPinDirection(PORTB_ID, channel, direction);
  } else if (DIO_initStruct->channel < 24) {
    channel = DIO_initStruct->channel - 16;
    if (DIO_initStruct->mode == HAL_DIO_MODE_OUT) {
      direction = 1;
    } else if (DIO_initStruct->mode == HAL_DIO_MODE_INPUTFLOAT ||
               DIO_initStruct->mode == HAL_DIO_MODE_INPUTPULLUP) {
      direction = 0;
    }
    GPIO_setupPinDirection(PORTC_ID, channel, direction);
  } else if (DIO_initStruct->channel < 32) {
    channel = DIO_initStruct->channel - 24;
    if (DIO_initStruct->mode == HAL_DIO_MODE_OUT) {
      direction = 1;
    } else if (DIO_initStruct->mode == HAL_DIO_MODE_INPUTFLOAT ||
               DIO_initStruct->mode == HAL_DIO_MODE_INPUTPULLUP) {
      direction = 0;
    }
    GPIO_setupPinDirection(PORTD_ID, channel, direction);
  }
}

/*
* Description : This function is used to write a value to a pin
* Parameters  : DIO_writeStruct : pointer to the struct
*               that contains the configuration
* Return      : void
*/
void HAL_DIO_pinWrite(HAL_DIO_writeTypedef *DIO_writeStruct) {
  uint8_t channel = 0, value = 0;
  if (DIO_writeStruct->channel < 8) {
    channel = DIO_writeStruct->channel;
    value = DIO_writeStruct->value;
    GPIO_writePin(PORTA_ID, channel, value);
  } else if (DIO_writeStruct->channel < 16) {
    channel = DIO_writeStruct->channel - 8;
    value = DIO_writeStruct->value;
    GPIO_writePin(PORTB_ID, channel, value);
  } else if (DIO_writeStruct->channel < 24) {
    channel = DIO_writeStruct->channel - 16;
    value = DIO_writeStruct->value;
    GPIO_writePin(PORTC_ID, channel, value);
  } else if (DIO_writeStruct->channel < 32) {
    channel = DIO_writeStruct->channel - 24;
    value = DIO_writeStruct->value;
    GPIO_writePin(PORTD_ID, channel, value);
  }
}

/*
* Description : This function is used to read a value from a pin
* Parameters  : DIO_readStruct : pointer to the struct
*               that contains the configuration
* Return      : void
*/
void HAL_DIO_pinRead(HAL_DIO_readTypedef *DIO_readStruct) {
  uint8_t channel = 0, value = 0;
  if (DIO_readStruct->channel < 8) {
    channel = DIO_readStruct->channel;
    value = GPIO_readPin(PORTA_ID, channel);
  } else if (DIO_readStruct->channel < 16) {
    channel = DIO_readStruct->channel - 8;
    value = GPIO_readPin(PORTB_ID, channel);
  } else if (DIO_readStruct->channel < 24) {
    channel = DIO_readStruct->channel - 16;
    value = GPIO_readPin(PORTC_ID, channel);
  } else if (DIO_readStruct->channel < 32) {
    channel = DIO_readStruct->channel - 24;
    value = GPIO_readPin(PORTD_ID, channel);
  }
  DIO_readStruct->value = value;
}
