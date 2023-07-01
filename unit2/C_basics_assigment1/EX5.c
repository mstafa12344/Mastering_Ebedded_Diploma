/*

EX5:

Write C Program to Find ASCII Value of a Character

#########Console_output######
Enter a character: G
ASCII value of G = 71
#############################
*/
#include <stdio.h>
void main(void)
{
	char character;
	
	printf("enter the character: ");
	scanf("%c",&character);
	printf("ASCII Value of %c = %d",character,character);

}