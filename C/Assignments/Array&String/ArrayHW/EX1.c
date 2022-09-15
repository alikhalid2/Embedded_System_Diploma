/*
 * EX1.c
 *
 *  Created on: Sep 15, 2022
 *      Author: ali khaled
 */
#include <stdio.h>

int main ()
{
	float a[2][2] , b[2][2] , sum[2][2] ;
	int i , j ;
	//	a => first array , b => Second array
	//Enter 1st matrix
	printf("Enter the elements of 1st matrix \n");
	fflush(stdin);  fflush(stdout);
	for(i=0; i<2 ;i++)
	{
		for(j=0; j<2; j++)
		{
			printf("Enter a%d%d:\t",i+1,j+1);
			fflush(stdin);  fflush(stdout);
			scanf("%f",&a[i][j]);

		}
	}
	//Enter 2nd matrix
	printf("Enter the elements of 2st matrix \n");
	fflush(stdin);  fflush(stdout);
	for(i=0; i<2 ;i++)
	{
		for(j=0; j<2; j++)
		{
			printf("Enter b%d%d:\t",i+1,j+1);
			fflush(stdin);  fflush(stdout);
			scanf("%f",&b[i][j]);

		}
	}
	// Sum of two matrix in Sum matrix
	for(i=0; i<2 ;i++)
	{
		for(j=0; j<2; j++)
		{
			sum[i][j]= a[i][j]+b[i][j];
		}
	}
	//Print the sum matrix
	printf("sum of Matrix:\n");
	for(int i = 0 ; i < 2 ; i++)
	{
		for(int j = 0 ; j < 2 ; j++)
		{
			printf("%.2f \t",sum[i][j]);
		}
		printf("\n");

	}
	return 0;
}
