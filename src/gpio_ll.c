
#ifndef GPIO_LL_H
#define GPIO_LL_H

#include "gpio_ll.h"
#include "stm32h7xx_ll_gpio.h"


void gpio_high()
{
   LL_GPIO_WriteOutputPort(GPIOA, 0x01);
}
#endif // GPIO_LL_H
