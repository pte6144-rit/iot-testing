#include <msp430fr2476.h>


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	PM5CTL0 &= ~LOCKLPM5;        // Power mode 5 thingy
	P1DIR |= BIT0;
	P1OUT |= BIT0;
	return 0;
}
