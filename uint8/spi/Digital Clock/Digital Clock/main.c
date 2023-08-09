#include "STD_Types.h"
#include "BIT_Math.h"
#include "DIO_int.h"
#include "SPI_int.h"
#include "MAX7221.h"
#define F_CPU 1000000UL
#include "avr/delay.h"

int main(void)
{
   	   uint8 counter = 0;
	   uint8 minute1=1, minute2=1;
	   uint8 hour1=1,hour2=1;
   	   uint8 index_display;
	   uint8 Gcounter=0;
	   uint8 second1;
	   uint8 second2;
	DIO_voidInit();
   	SPIMaster_voidInit();
	MAX7721_voidInit();

   	while (1)
   	{
			 if(Gcounter<13)
			 {	   
				  
					if(counter<59)
					{
						for (second1 =0;second1<6;second1++)
						{
							execute(MAX7221_DIGIT6,second1);
							for(second2=1;second2<11;second2++)
							{
								counter++;
								execute(8,second2-1);
								_delay_ms(1000);
							}
						}		  
					}
					
					else
					{
							counter=0;
							execute(MAX7221_DIGIT6,0);
							execute(MAX7221_DIGIT7,0);
							
							if(minute2<6) // still in minutes
							{
								
								if (minute1<10)
								{
									
									execute(MAX7221_DIGIT5,minute1);
									_delay_ms(1000);
									minute1++;
									
								}
								else
								{
									minute1=1;
									execute(MAX7221_DIGIT4,minute2);
									execute(MAX7221_DIGIT5,0);
									_delay_ms(1000);
									minute2++;
								}
							}
							else // hours
							{
								minute2=1;
								minute1=1;
								Gcounter++;
								execute(MAX7221_DIGIT5,0);
								execute(MAX7221_DIGIT4,0);
								if(hour1<9)
								{
									execute(MAX7221_DIGIT3,hour1);
									_delay_ms(1000);
									hour1++;
								}
								else
								{
									hour1=1;
									execute(MAX7221_DIGIT3,0);
									execute(MAX7221_DIGIT2,hour2);
									_delay_ms(1000);
									hour2++;
									
								}
							 }

					  }
					}
					else
					{
						execute(MAX7221_DIGIT2,0);
						execute(MAX7221_DIGIT3,0);
						execute(MAX7221_DIGIT4,0);
						execute(MAX7221_DIGIT5,0);
						execute(MAX7221_DIGIT6,0);
						execute(MAX7221_DIGIT7,0);
						minute1 =1;
						minute2 =1;
						counter=0;
						Gcounter =0;
						hour1 =1;
						hour2 =1;
						
					}
	   }
 }