/********************************************************************/
/********************************************************************/
/**************       Author : Moahmed A Shaheen     *****************/
/**************       Layer : HAL                  *****************/
/**************       SWC:    _7SEG_H_                  *****************/
/**************       Version : 1.0                 *****************/
/**************       Date : 13/10/2022              *****************/

#ifndef _7SEG_H_
#define _7SEG_H_
#include <stdint.h>
typedef struct {
  uint8_t channel[9];
  uint8_t error;
  uint8_t value;
} HAL_7SEG_Typedef;

/*Functon Prototypes *******************************************/
/*
* Description : This function is used to initialize the 7 seqment
* Parameters  : 1- Pointer to a structure contains the following:
*                   - Array of channels
*                   - Error
*                   - Value
*
* Return      : void
*/

void _7seq_voidInit(HAL_7SEG_Typedef* _7SEG_init);

/*Functon Prototypes *******************************************/
/*
* Description : This function is used to initialize the 7 seqment
* Parameters  : uint8_t , uint8_t
*
* Return      : void
*/

void _7seq_u8Write(HAL_7SEG_Typedef* _7SEG);

#endif