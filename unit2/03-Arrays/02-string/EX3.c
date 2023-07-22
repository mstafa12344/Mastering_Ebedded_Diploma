#include <stdio.h>
#include <string.h>
void main(void)
{
	char string[30];
	char character;
	int counter=0;
	char temp;
	int Length;
	printf("please enter an string: ");
	gets(string);
	Length = strlen(string);
	//printf("%d",Length);
	for(int i=0;i<Length/2;i++)
	{
		temp = string[i];
		string[i]=string[Length-i-1];
		string[Length-i-1]=temp;
		//printf("%c",string[i]);
	}
	printf("reverse string is : %s",string);
}