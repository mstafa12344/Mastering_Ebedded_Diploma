#include <stdio.h>
void main(void)
{
	char string[30];
	int Length=0;
	int i=0;
	printf("please enter an string: ");
	gets(string);
	
	while(string[i]!=0)
	{
		Length++;
		i++;
	}
	printf("the length = %d",Length);
}