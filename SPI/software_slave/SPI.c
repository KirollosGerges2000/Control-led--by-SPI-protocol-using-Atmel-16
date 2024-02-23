/*
 * SPI.c
 *
 *  Created on: Sep 13, 2019
 *      Author: Joseph Hanna
 */

#include "SPI.h"

void SPI_SlaveInit(void)
{
	/* Set MISO output, all others input */
	DDRB &=(~(1<<4)); //switch 
	DDRB &=(~(1<<5)); //switch 
	DDRB &=(~(1<<7)); //switch 
	
	/* Enable SPI */
	SPCR = (1<<SPE);
}
char SPI_SlaveReceive(void)
{
	/* Wait for reception complete */
	while(!(SPSR & (1<<SPIF)))
	;
	/* Return data register */
	return SPDR;
}