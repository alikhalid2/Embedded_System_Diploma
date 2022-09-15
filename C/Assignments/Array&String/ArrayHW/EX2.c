/*
 * EX2.c
 *
 *  Created on: Sep 15, 2022
 *      Author: alikhaled
 */
#include <stdio.h>

int main ()
{
	//	float a[2][2] ;
	int n , i ;
	float sum;
	printf("Enter the number of data: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&n);

	float arr[n];
	for(i=0; i<n ;i++)
	{
		printf("%d.Enter number:\t",i+1);
		fflush(stdin);  fflush(stdout);
		scanf("%f",&arr[i]);
		sum+= arr[i];
	}
	printf("\nAverage = %.2f",sum/n);


	return 0;
}
