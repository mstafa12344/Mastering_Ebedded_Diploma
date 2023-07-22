#include <stdint.h>
#define RCC_BASE		        0x40021000UL
#define RCC_APB2ENR		*((volatile uint32_t *)(RCC_BASE + 0x18))


//GPIO
//A & B fully included in LQFP48 package

#define GPIOA_BASE		0x40010800UL

#define INPUT_Pull_up_dwon         0b1000
#define OUTPUT_PUSH_PULL_2MHZ      0b0010

#define GPIOA_CRL		*((volatile uint32_t *)(GPIOA_BASE + 0x00))
#define GPIOA_CRH		*((volatile uint32_t *)(GPIOA_BASE + 0x04))
#define GPIOA_IDR		*((volatile uint32_t *)(GPIOA_BASE + 0x08))
#define GPIOA_ODR		*((volatile uint32_t *)(GPIOA_BASE + 0x0C))


#define GPIOB_BASE		0x40010C00UL
#define GPIOB_CRL		*((volatile uint32_t *)(GPIOB_BASE + 0x00))
#define GPIOB_CRH		*((volatile uint32_t *)(GPIOB_BASE + 0x04))
#define GPIOB_IDR		*((volatile uint32_t *)(GPIOB_BASE + 0x08))
#define GPIOB_ODR		*((volatile uint32_t *)(GPIOB_BASE + 0x0C))


void System_voidInit(void)
{
	//enable port A
	RCC_APB2ENR |=(1<<2);
	//enable port B
	RCC_APB2ENR |=(1<<3);

}
void GPIO_voidInit(void)
{
	GPIOA_CRL=0;
	GPIOB_CRL=0;
	GPIOA_CRH=0;
	GPIOB_CRH=0;
	//PA1 input pull up
	GPIOA_CRL |=(INPUT_Pull_up_dwon<<4);
	GPIOA_ODR |=(1<<1);

	//PA13 input pull dwon
	GPIOA_CRH |=(INPUT_Pull_up_dwon<<20);
	GPIOA_ODR &=~(1<<13);
	//Pin1 and Pin13 in portB input floating--> 0b
	GPIOB_CRL |=(OUTPUT_PUSH_PULL_2MHZ<<4);
	GPIOB_CRH |=(OUTPUT_PUSH_PULL_2MHZ<<20);

}

void main (void)
{
	System_voidInit();
	GPIO_voidInit();
	while(1)
	{
		if(((GPIOA_IDR &=(1<<1))>>1)==0)
		{
			GPIOB_ODR ^=(1<<1);
			while(((GPIOA_IDR &=(1<<1))>>1)==0);
		}
		if((GPIOA_IDR &=(1<<13)))
		{

			GPIOB_ODR ^=(1<<13);
		}
	}

}
