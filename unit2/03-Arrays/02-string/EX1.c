#include <stdio.h>
void main(void)
{
	char string[30];
	char character;
	int counter=0;
	printf("please enter an string: ");
	gets(string);
	printf("please enter an a character: ");
	scanf("%c",&character);
	for(int i=0;string[i]!=0;i++)
	{
		if(string[i]==character)
			counter++;
	}
	printf("frequency of %c = %d",character,counter);
}