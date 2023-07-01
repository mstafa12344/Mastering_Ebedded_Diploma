/*
EX4:

Write C Program to Multiply two Floating Point Numbers
i should see the Console as following:
##########Console-output###

###########################
Enter two numbers: 2.4
1.1
Product: 2.640000
#########################
*/
#include <stdio.h>
void main(void)
{
	float number1,number2,product;
	
	printf("enter the first number: ");
	scanf("%f",&number1);
	printf("enter the second number: ");
	scanf("%f",&number2);

	product = number1*number2;
	printf("product = %f",product);
}