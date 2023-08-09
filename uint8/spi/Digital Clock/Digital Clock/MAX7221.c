#include "STD_Types.h"
#include "MAX7221.h"
#include "SPI_int.h"

void execute(unsigned char cmd, unsigned char data)
{
	uint8 x;
	DIO_enuWritePin(12,0);//PORTB &= ~(1 << SS);
	SPI_u8Transceiver(cmd,&x);//SPDR = cmd;
	SPI_u8Transceiver(data,&x);
	DIO_enuWritePin(12,1);
}

void MAX7721_voidInit(void)
{
   	execute(MAX7221_DECODE   , 0xFF);
   	execute(MAX7221_INTENSITY, 0xFF);
   	execute(MAX7221_ENABLE   , 0xFF);
   	execute(MAX7221_SCAN     , 0xFF);
}