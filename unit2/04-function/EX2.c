#include <stdio.h>
int Factorial(int number);
void main(void)
{
	int num;
	printf("please enter posotive number: ");
	scanf("%d",&num);
	printf("\n\n factorial of %d = %d",num,Factorial(num));
}
int Factorial(int number)
{
	int fact=1;
	if(number<0)
	{
		printf("Error you should enter positive number");
	}
	else if(number>1)
	{
		fact=number*Factorial(number-1);	
	}
	return fact;
}