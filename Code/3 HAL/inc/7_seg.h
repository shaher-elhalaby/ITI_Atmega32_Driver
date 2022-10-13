/********************************************************************/
/********************************************************************/
/**************       Author : Moahmed A Shaheen     *****************/
/**************       Layer : HAL                  *****************/
/**************       SWC:    _7SEG_H_                  *****************/
/**************       Version : 1.0                 *****************/
/**************       Date : 13/10/2022              *****************/


#ifndef  _7SEG_H_
#define  _7SEG_H_



/*Functon Prototypes *******************************************/
/*
* Description : This function is used to initialize the 7 seqment
* Parameters  : 
*               
* Return      : void
*/
void _7seq_voidInit();

/*Functon Prototypes *******************************************/
/*
* Description : This function is used to initialize the 7 seqment
* Parameters  : 
*               
* Return      : void
*/
uint8_t _7seq_voidInit(uint8_t 	Copy_u8Port ,  uint8_t Copy_u8Mode);

uint8_t _7seq_voidWrite(uint8_t 	Copy_u8Port , uint8_t Copy_u8Pin , uint8_t Copy_u8Mode);


#endif