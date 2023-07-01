/*
EX6:

Write Source Code to Swap Two Numbers

#########Console_output######
Enter value of a: 1.20
Enter value of b: 2.45

After swapping, value of a = 2.45
After swapping, value of b = 1.2
#############################
*/
#include <stdio.h>
void main(void)
{
	float a,b,temp;
	printf("enter the first number: ");
	scanf("%f",&a);
	printf("enter the second number: ");
	scanf("%f",&b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping, value of a = %.2f\n",a);
	printf("After swapping, value of b = %.2f\n",b);
	

}