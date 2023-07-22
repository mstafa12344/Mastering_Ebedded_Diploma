#include <stdio.h>

void main(void)
{
	int row ,col;
	printf("Enter row: ");
	scanf("%d",&row);
	printf("Enter cols: ");
	scanf("%d",&col);
	
	int arr[row][col];
	int arr1[col][row];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("Enter element a%d%d: ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Entered Matrix:\n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			arr1[j][i]=arr[i][j];
		}
		printf("\n");
	}
	printf("Transpose Matrix:\n");
	for(int i=0;i<col;i++)
	{
		for(int j=0;j<row;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
	
}