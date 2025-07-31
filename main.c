#include "main.h"
#include "lcd.h"

void SystemClock_Config(void);
static void MX_GPIO_Init(void);

int main(void)
{
    HAL_Init();
    SystemClock_Config();
    MX_GPIO_Init();

    lcd_init();
    lcd_puts(0,0,(int8_t*)"LCD Test");
    HAL_Delay(5000);
    lcd_clear();

    while (1)
    {
        HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3,1);
        HAL_Delay(1000);
        HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3,0);
        HAL_Delay(1000);
    }
}
