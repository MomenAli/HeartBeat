/*
 * File:   HeartBeat.c
 * Author: Momen Ali
 *
 * Created on January 3, 2020, 1:36 AM
 */


#include <xc.h>
#include <stdio.h>
#include "Port.h"
#include "GPIO.h"
#include "Led.h"
#include "Util.h"

 

void main(void) {
    
    //initialization
    LED_Init(LED1,LED_OFF);
    LED_Init(LED2,LED_OFF);
    
    while(1){
        //LED1
        LED_Toggle(LED1);
        __delay_ms(500);
        LED_Toggle(LED1);
        LED_Toggle(LED2);
        __delay_ms(500);
        LED_Toggle(LED2);
    }
}
