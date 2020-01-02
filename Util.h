
/* 
 * File:        Util.h
 * Author:      Momen Ali
 * Comments:    this module used for making delay for the system
 * Revision history: 3/1/2020
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef __UTIL_H
#define	__UTIL_H

#include <xc.h> // include processor files - each processor file is guarded.  

/* this function make a delay on processing
 * the rest of the program for n m second. */
void Delay_ms(u16_t delay);



#endif	/* XC_HEADER_TEMPLATE_H */

