/*
 * EX3.c
 *
 *  Created on: Sep 15, 2022
 *      Author: alikhaled
 */
#include <stdio.h>

int main ()
{
	int  r, c, i ,j ;

	printf("Enter rows and column of matrix: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d %d",&r,&c);

	float arr[r][c] ,t[c][r];

	//	Enter the Matrix
	printf ("Enter elements of matrix: \n");
	for(i=0; i < r ;i++)
	{
		for(j=0 ; j < c ; j++)
		{
			printf("Enter Element a%d%d:\t",i+1,j+1);
			fflush(stdin);  fflush(stdout);
			scanf("%f",&arr[i][j]);
		}
	}
	//	Make the transpose matrix
	for(i=0; i < c ;i++)
	{
		for(j=0 ; j < r ; j++)
		{
			t[i][j] = arr[j][i];
		}
	}
	//	Print Matrices
	//	matrix that entered
	printf("Entered Matrix: \n");
	for( i = 0 ; i < r ; i++)
	{
		for( j = 0 ; j < c ; j++)
		{
			printf("%.2f \t",arr[i][j]);
		}
		printf("\n");
	}
	//	 Transposed Matrix
	printf("Transposed Matrix: \n");
	for( i = 0 ; i < c ; i++)
	{
		for( j = 0 ; j < r ; j++)
		{
			printf("%.2f \t",t[i][j]);
		}
		printf("\n");
	}

	return 0;
}
