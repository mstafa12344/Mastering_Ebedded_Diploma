#include <stdio.h>
#include <string.h>
void rev_string(void);
void main(void)
{
rev_string();
	
}
void rev_string(void)
{
	char string[40]={0};
	char rev[40]={0};	
	printf("enter string: ");
	gets(string);
	int lenght = strlen(string);
	rev[0]=string[lenght-1];
	if(lenght!=0)
	{

		rev_string();

	}
	printf("%s",rev);
}