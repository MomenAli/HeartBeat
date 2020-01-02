/*
 * File:   Led.c
 * Author: Momen Ali
 *
 * Created on January 3, 2020, 1:20 AM
 */


#include"HW.h"
#include"port.h"
#include"GPIO.h"
#include"Led.h"

u8_t LED_Init(LED_t led, LEDState_t state)
{
    /* initialize the led
     * set initial state
     * return true if success
     */
    u8_t ret = 1;   // return value if 1 success if 0 Failed
    switch(led)
    {
        case LED1:
            ret = GPIO_init_pin(LED_1_DIR,LED_1_PIN,GPIO_OUT);
            break;
        case LED2:
            ret = GPIO_init_pin(LED_2_DIR,LED_2_PIN,GPIO_OUT);
            break;
        case LED3:
            ret = GPIO_init_pin(LED_3_DIR,LED_3_PIN,GPIO_OUT);
            break;
        case LED4:
            ret = GPIO_init_pin(LED_4_DIR,LED_4_PIN,GPIO_OUT);
            break;
        default: ret = 0;
    }
    if(ret != 0)
    {
        LED_SetState(led,state);
    }

    return ret;
}
u8_t LED_GetState(LED_t led)
{
    /* return the led state */
    u8_t ret = 1;
    switch(led)
    {
        case LED1:
            ret = GPIO_Read_Pin(LED_1_PORT,LED_1_PIN);
            break;
        case LED2:
            ret = GPIO_Read_Pin(LED_2_PORT,LED_2_PIN);
            break;
        case LED3:
            ret = GPIO_Read_Pin(LED_3_PORT,LED_3_PIN);
            break;
        case LED4:
            ret = GPIO_Read_Pin(LED_4_PORT,LED_4_PIN);
            break;
        default:
            break;
    }

    return ret;
}
void LED_SetState(LED_t led, LEDState_t state)
{
    /* set the new state */
    switch(led)
    {
        case LED1:
            GPIO_Write_Pin(LED_1_PORT,LED_1_PIN,state);
            break;
        case LED2:
            GPIO_Write_Pin(LED_2_PORT,LED_2_PIN,state);
            break;
        case LED3:
            GPIO_Write_Pin(LED_3_PORT,LED_3_PIN,state);
            break;
        case LED4:
            GPIO_Write_Pin(LED_4_PORT,LED_4_PIN,state);
            break;
        default:
            break;
    }
}
void LED_update(void)
{
    /* do nothing in this application */
}
void LED_Toggle(LED_t led)
{
    if(LED_GetState(led))
    {
        LED_SetState(led,LED_ON);
    }
    else
    {
        LED_SetState(led,LED_ON);
    }
}
