/********************************************************************/
/********************************************************************/
/**************       Author : Moahmed A Shaheen     *****************/
/**************       Layer : HAL                  *****************/
/**************       SWC:    _7SEG_c_                  *****************/
/**************       Version : 1.0                 *****************/
/**************       Date : 13/10/2022              *****************/

#include "_7SEG.h "
#include " HDIO.h "

/*Functon Implementation *******************************************/
/*
* Description : This function is used to initialize the 7 seqment
* Parameters  : uint8_t port
*
* Return      : void
*/
void _7seq_voidInit(uint8_t Copy_u8Port) {
  HAL_DIO_initTypedef _7seq;
  _7seq.channel = Copy_u8Port;

  HAL_DIO_pinInit(&HAL_7SEG_init);
}

/*Functon Implementation *******************************************/
/*
* Description : This function is used to write on the 7 seqment
* Parameters  :  uint8_t , uint8_t
*
* Return      : void
*/

void _7seq_u8Write(uint8_t Copy_u8Port, uint8_t Copy_u8Number) {
  HAL_7SEG_Write._7Seg_ channel = Copy_u8Port;

  uint8_t b_num = 0;
  switch (Copy_u8Number) {
    //  gfedcba
    case 0:
      b_num = 0b0111111;
      break;
    case 1:
      b_num = 0b0000110;
      break;
    case 2:
      b_num = 0b1011011;
      break;
    case 3:
      b_num = 0b1001111;
      break;
    case 4:
      b_num = 0b1100110;
      break;
    case 5:
      b_num = 0b1101101;
      break;
    case 6:
      b_num = 0b1111101;
      break;
    case 7:
      b_num = 0b1000111;
      break;
    case 8:
      b_num = 0b1111111;
      break;
    case 9:
      b_num = 0b1101111;
      break;
    default:
      b_num = 0b0111111;
      break;
  }
  HAL_7SEG_Write._7SegPort_value = b_num;

  HAL_DIO_pinWrite(&HAL_7SEG_Write);
}
