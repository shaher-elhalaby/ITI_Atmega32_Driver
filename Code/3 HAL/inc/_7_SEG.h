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
* Parameters  : uint8_t
*               
* Return      : void
*/

void _7seq_voidInit(uint8_t Copy_u8Port);


/*Functon Prototypes *******************************************/
/*
* Description : This function is used to initialize the 7 seqment
* Parameters  : uint8_t , uint8_t 
*               
* Return      : void
*/

void _7seq_u8Write(uint8_t 	Copy_u8Port , uint8_t Copy_u8Number)


#endif