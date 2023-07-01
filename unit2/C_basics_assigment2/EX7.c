/*
EX7:
c program to calculate factorial
*/
#include <stdio.h>
void main(void)
{
	int number,factorial=1;
	printf("enter the value of number: ");
	scanf("%d",&number);
	if(number<0)
	{
		printf("ERROR!!! factorial of negative not exist");
	}
	else
	{
		while(number>0)
		{
			factorial*=number;
			number--;
		}
		printf("factorial = %d",factorial);
	}
	
}