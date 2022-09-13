/*
 * EX2.c
 *
 *  Created on: Sep 13, 2022
 *      Author: alikhaled
 */
#include <stdio.h>

int main ()
{
	int i ;

	printf("Enter a integer: ");

	fflush(stdin); fflush(stdout);

	scanf("%d",&i);

	printf("You entered: %d",i);
	return 0;
}
