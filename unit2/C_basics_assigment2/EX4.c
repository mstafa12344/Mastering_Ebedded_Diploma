/*
check number positive or negative
*/
#include <stdio.h>
void main(void)
{
	float num;
	printf("enter number: ");
	scanf("%f",&num);
	if(num==0)
	{
		printf("you entered zero");
	}
	else if(num>0)
	{
		printf("%.2f is positive",num);
	}
	else
	{
		printf("%.2f is negative",num);
	}
}