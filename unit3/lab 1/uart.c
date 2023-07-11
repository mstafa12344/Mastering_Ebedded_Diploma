#include "uart.h"
#define UARTDR   *((volatile unsigned int*)0x101f1000)
void uart_send_string(unsigned char *tx_string)
{
	int i=0;
	while(tx_string[i] !=0)
	{
		UARTDR=((unsigned int)(tx_string[i]));
		i++;
	}
}