/*
EX6:
c program to calculate the sum of natural numbers
*/

#include <stdio.h>
void main(void)
{
	int number,sum=0;
	printf("enter the value of number: ");
	scanf("%d",&number);
	for(int i=1;i<=number;i++)
	{
		sum+=i;
	}
	printf("sum = %d",sum);
}