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
    /* Replace with your application code */
	INPUT_MODULE(DDRA,2);
	
    while (1) 
    {
		if (READBIT_BIT(PORTA,2))
		{
			SPI_sendByte('l');
			while(READBIT_BIT(PORTA,2));
		}
    }
}

