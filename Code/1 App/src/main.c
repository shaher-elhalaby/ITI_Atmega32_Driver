#include "main.h"

int main(void) {
  HAL_DIO_initTypedef pa1;
  pa1.channel = HAL_DIO_PIN_1;
  pa1.mode = HAL_DIO_MODE_OUTPUT;
  HAL_DIO_pinInit(&pa1);
  while (1) {
    HAL_DIO_writeTypedef pa1;
    pa1.channel = HAL_DIO_PIN_1;
    pa1.value = 1;
    HAL_DIO_pinWrite(&pa1);

    pa1.value = 0;
    HAL_DIO_pinWrite(&pa1);
  }
}