
#ifdef TEST_CEEDLING


#include "unity.h"

#include "gpio_ll.h"
#include "mock_stm32h7xx_ll_gpio.h"
void setUp(void)
{
}

void tearDown(void)
{
}

void test_gpio_high_1(void)
{
    gpio_high();
}

#endif // TEST_CEEDLING
