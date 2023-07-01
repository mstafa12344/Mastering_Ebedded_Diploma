/*
EX7:
Write Source Code to Swap 
Two Numbers without temp variable.
*/

#include <stdio.h>
void main(void)
{
	int a,b;
	printf("enter the value of a: ");
	scanf("%d",&a);
	printf("enter the value of b: ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	

}