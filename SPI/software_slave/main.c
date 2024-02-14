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
    /* Replace with your application code */
	OUTPUT_MODULE(DDRA,0);
	OUTPUT_MODULE_OFF(PORTA,0);
    while (1) 
    {
		unsigned char x =SPI_recieveByte();
		if(x == 'l')
		{
			
TOGGLE_BIT(PORTA,0);
while(x== 'l');
		}
		
    }
}

