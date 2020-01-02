/*
 * File:   Util.c
 * Author: Momen Ali
 *
 * Created on January 3, 2020, 1:28 AM
 */

#include"HW.h"
#include"Util.h"

void Delay_ms(u16_t delay)
{
    volatile u16_t i,j;
    // this nested for loop take 30 instruction to execute
	for(i = 0; i < delay ; i++)
	{
		for(j = 0; j < FOR_N_CYCLES ; j++);
	}
}

