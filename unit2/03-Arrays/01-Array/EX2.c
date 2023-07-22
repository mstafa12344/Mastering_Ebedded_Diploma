#include <stdio.h>

void main(void)
{
	int Data_Number;
	float sum=0,average;
	
	printf("Enter the number of data: ");
	scanf("%d",&Data_Number);
	float data[Data_Number];
	
	for(int i=0;i<Data_Number;i++)
	{
		printf("enter number: ");
		scanf("%f",&data[i]);
		sum+=data[i];
	}
	average=sum/Data_Number;
	printf("average = %.2f",average);
}