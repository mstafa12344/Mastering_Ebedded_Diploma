/*
EX1:
c program to check number even or odd
*/

#include <stdio.h>
void main(void)
{
	int number;
	printf("enter the value of number: ");
	scanf("%d",&number);
	if((number%2)==0)
	{
		printf("%d is even",number);
	}
	else
	{
		printf("%d is odd",number);
	}
	
	

}