/*
check character is alphabet or not
*/
#include <stdio.h>
void main(void)
{
	char character;
	printf("enter character: ");
	scanf("%c",&character);
	if((character>='a' && character<='z')||(character>='A' && character<='Z'))
	{
		printf("%c is alphabet",character);
	}
	else
	{
		printf("%c is not alphabet",character);
	}
}