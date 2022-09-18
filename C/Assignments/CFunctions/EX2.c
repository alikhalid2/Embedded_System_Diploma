/*
 * EX2.c
 *
 *  Created on: Sep 18, 2022
 *      Author: ali khaled
 */
#include <stdio.h>

int Factorial (int num);

int main ()
{
	int n ;
	printf("Enter Positive integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	printf("Factorial of %d = %d",n , Factorial(n));
	return 0;
}

int Factorial (int num)
{
	if(num ==0) // at Factorial of 0
	{
		return 1;
	}
	else
	{
		return num*Factorial(num-1) ;
	}
}

