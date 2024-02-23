/*
 * software_slave.c
 *
 * Created: 2/14/2024 4:33:24 PM
 * Author : Kirollos
 */ 

#include <avr/io.h>
#include "DIO.h"
#include "MACROS.h"
#include "SPI.h"
int main(void)
{
SPI_SlaveInit();
    /* Replace with your application code */
	DDRC |=(1<<0); //Led 
	PORTC &=(~(1<<0)); //initially led  is closed
    while (1) 
    {
		 char x =SPI_SlaveReceive();
		if(x)
		{
			TOGGLE_BIT(PORTC,0);

while(x== 'l');
		}
		
    }
}

