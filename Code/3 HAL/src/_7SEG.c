/********************************************************************/
/********************************************************************/
/**************       Author : Moahmed A Shaheen     *****************/
/**************       Layer : HAL                  *****************/
/**************       SWC:    _7SEG_c_                  *****************/
/**************       Version : 1.0                 *****************/
/**************       Date : 13/10/2022              *****************/

#include "_7SEG.h "
#include " HDIO.h "

#define HAL_SEG_ERROR_OK 1
#define HAL_SEG_ERROR_NOK 0

void _7seq_voidInit(HAL_7SEG_Typedef* _7SEG_init) {
  HAL_DIO_initTypedef seg;
  seg.direction = HAL_DIO_MODE_OUT;
  for (int i = 0; i < 9; i++) {
    seg.channel = _7SEG_init->channel[i];
    HAL_DIO_pinInit(&seg);
  }
  seg.error = HAL_SEG_ERROR_OK;
}

void _7seq_u8Write(HAL_7SEG_Typedef* _7SEG) {
  HAL_DIO_writeTypedef seg;

  HAL_DIO_writeTypedef enable_unit;
  HAL_DIO_writeTypedef enable_tenth;

  enable_unit.channel = _7SEG->channel[7];
  enable_unit.value = 0;
  HAL_DIO_writePin(&enable_unit);

  enable_tenth.channel = _7SEG->channel[8];
  enable_tenth.value = 0;
  HAL_DIO_writePin(&enable_tenth);

  uint8_t tenth = _7SEG->value / 10;
  uint8_t unit = _7SEG->value % 10;

  for (int i = 0; i < 7; i++) {
    seg.channel = _7SEG->channel[i];
    seg.value = 0x01 & tenth;
    HAL_DIO_pinWrite(&seg);
    tenth >>= 1;

    enable_tenth.value = 1;
    HAL_DIO_writePin(&enable_tenth);
  }

  for (int i = 0; i < 7; i++) {
    seg.channel = _7SEG->channel[i];
    seg.value = 0x01 & unit;
    HAL_DIO_pinWrite(&seg);
    unit >>= 1;

    enable_tenth.value = 0;
    HAL_DIO_writePin(&enable_tenth);

    enable_unit.value = 1;
    HAL_DIO_writePin(&enable_unit);
  }
  seg.error = HAL_SEG_ERROR_OK;
}
