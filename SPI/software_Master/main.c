/*
 * software.c
 *
 * Created: 2/14/2024 4:22:02 PM
 * Author : Kirollos
 */ 

#include <avr/io.h>
#include "DIO.h"
#include "SPI.h"
#include "MACROS.h"

int main(void)
{
	
	DDRB &=(~(1<<0)); //switch 
	
 SPI_MasterInit();
	while (1)
	{
		if(PINB&(1<<0))
		{
			
			SPI_MasterTransmit('l');
			while(PINB&(1<<0));
		}

	
	}
}

