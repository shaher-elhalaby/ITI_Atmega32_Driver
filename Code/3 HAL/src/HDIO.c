#include <HDIO.h>

/*Functon Prototypes *******************************************/
/*
* Description : This function is used to initialize the GPIO
*               with the given configuration
* Parameters  : GPIO_initStruct : pointer to the struct
*               that contains the configuration
* Return      : void
*/
void HAL_DIO_pinInit(HAL_DIO_initTypedef *DIO_initStruct) {}

/*
* Description : This function is used to write a value to a pin
* Parameters  : DIO_writeStruct : pointer to the struct
*               that contains the configuration
* Return      : void
*/
void HAL_DIO_pinWrite(HAL_DIO_writeTypedef *DIO_writeStruct) {}

/*
* Description : This function is used to read a value from a pin
* Parameters  : DIO_readStruct : pointer to the struct
*               that contains the configuration
* Return      : void
*/
void HAL_DIO_pinRead(HAL_DIO_readTypedef *DIO_readStruct) {}
