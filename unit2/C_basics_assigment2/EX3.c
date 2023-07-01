/*
finding the largest number from tree number
*/
#include <stdio.h>
void main(void)
{
	float num1,num2,num3;
	printf("enter number1: ");
	scanf("%f",&num1);
	printf("enter number2: ");
	scanf("%f",&num2);
	printf("enter number3: ");
	scanf("%f",&num1);
	if((num1>num2)&&(num1>num3))
	{
		printf("largets number = %f",num1);
	}
	else if((num2>num1)&&(num2>num3))
	{
		printf("largets number = %f",num2);
	}
	else
	{
		printf("largets number = %f",num3);
	}
	

}