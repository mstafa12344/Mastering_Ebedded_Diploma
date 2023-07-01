/*
simple calculator
*/
#include <stdio.h>
void main(void)
{
	float num1,num2;
	char operator;
	printf("enter operator + or - or * or /: ");
	scanf("%c",&operator);
	printf("enter number1: ");
	scanf("%f",&num1);
	printf("enter number2: ");
	scanf("%f",&num2);

	
	switch(operator)
	{
		case '+':   printf("%.2f + %.2f = %.2f",num1,num2,num1+num2); break;
		case '-':   printf("%.2f - %.2f = %.2f",num1,num2,num1-num2); break;
		case '*':   printf("%.2f * %.2f = %.2f",num1,num2,num1*num2); break;
		case '/':if(num2==0)
		         {
					 printf("ERROR");
		         }
				 else
					printf("%.2f / %.2f = %.2f",num1,num2,num1/num2);break; 
				
	}
}