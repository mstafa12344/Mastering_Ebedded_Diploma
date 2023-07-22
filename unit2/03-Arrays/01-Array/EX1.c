#include <stdio.h>
/*program to find the sum of two matrix of order 2*2*/
void main(void)
{
	float arr1[2][2];
	float arr2[2][2];
	float sum[2][2] ;
	
	printf("enter the elements of 1st matrix\n");
	printf("enter a11: ");
	scanf("%f",&arr1[0][0]);
	printf("enter a12: ");
	scanf("%f",&arr1[0][1]);	
	printf("enter a21: ");
	scanf("%f",&arr1[1][0]);
	printf("enter a22: ");
	scanf("%f",&arr1[1][1]);

	printf("enter the elements of 2nd matrix\n");
	printf("enter b11: ");
	scanf("%f",&arr2[0][0]);
	printf("enter b12: ");
	scanf("%f",&arr2[0][1]);	
	printf("enter b21: ");
	scanf("%f",&arr2[1][0]);
	printf("enter b22: ");
	scanf("%f",&arr2[1][1]);

	printf("Sum of Matrix: \n");
	printf("%.1f\t",arr1[0][0]+arr2[0][0]);
	printf("%.1f\t",arr1[0][1]+arr2[0][1]);
	printf("\n");
	printf("%.1f\t",arr1[1][0]+arr2[1][0]);
	printf("%.1f\t",arr1[1][1]+arr2[1][1]);
}