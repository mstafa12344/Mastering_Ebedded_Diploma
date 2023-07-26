#include <stdio.h>
int Prim_voidPrint(int number);
void main(void)

{
	
	int n2,n1;
	printf("enter intervals: ");
	scanf("%d%d",&n1,&n2);
	
	for(int i=n1;i<=n2;i++)
	{
		if(Prim_voidPrint(i)==0)
		{
		}
		else
		{
			printf("%d\t",i);
		}
	}
}

int Prim_voidPrint(int number)
{
	int ret = 1;
	for(int i=2;i<number/2;i++)
	{
		if(number%i==0)
		{
			ret =0;
			break;
		}
	}
	return ret;
}