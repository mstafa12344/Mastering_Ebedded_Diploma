/*
EX3:

Write C Program to Add Two Integers

i should see the Console as following:
##########Console-output###
Enter two integers: 12
11
Sum: 23
*/

#include <stdio.h>
void main(void)
{
	int number1,number2,result;
	
	printf("enter the first number: ");
	scanf("%d",&number1);
	printf("enter the second number: ");
	scanf("%d",&number2);

	result = number1+number2;
	printf("sum = %d",result);
}