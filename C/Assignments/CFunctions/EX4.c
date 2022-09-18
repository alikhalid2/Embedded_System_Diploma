/*
 * EX4.c
 *
 *  Created on: Sep 18, 2022
 *      Author: ali khaled
 */
#include <stdio.h>

int power (int base , int p);

int main ()
{
	int base , p ;
	printf("Enter base number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&base);

	printf("Enter power number (Positive integer): ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&p);

	printf("%d ^ %d = %d", base , p , power(base,p));

	return 0;
}

int power (int base , int p )
{
	if(p !=0)
	{
		return base*power(base ,p-1 );
	}else {
		return 1 ;
	}
}
