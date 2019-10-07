/*	Author: kmaka003
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
    DDRA = 0x00; PORTA = 0xFF;
    DDRC = 0xFF; PORTC = 0x00;
    unsigned char cntavail = 0x00;
    unsigned char tmpA = 0x00;




    /* Insert your solution below */
    while (1) {
        tmpA = PINA;
	cntavail = 0x00; 
        if (tmpA & 0x01) {
        	cntavail = cntavail + 1;
        }
	if (tmpA & 0x02) {
        	cntavail = cntavail + 1;
        }
	if (tmpA & 0x04) {
        	cntavail = cntavail + 1;
        }
	if (tmpA & 0x08) {
        	cntavail = cntavail + 1;
        }
         
        PORTC = cntavail;
    }
       return 1;
    }
                                                                        
