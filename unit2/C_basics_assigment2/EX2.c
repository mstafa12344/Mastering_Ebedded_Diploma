/*
EX1:
c program to check vowl or constant
*/

#include <stdio.h>
void main(void)
{
	char alphabet;
	printf("enter an alphabet: ");
	scanf("%c",&alphabet);
	if((alphabet=='a')||(alphabet=='e')||(alphabet=='i')||(alphabet=='o')||(alphabet=='u')
	   ||(alphabet=='A')||(alphabet=='E')||(alphabet=='I')||(alphabet=='O')||(alphabet=='U')
      )
	{
		printf("%c is vowel",alphabet);
	}
	else
	{
		printf("%c is constant",alphabet);
	}
	
	

}