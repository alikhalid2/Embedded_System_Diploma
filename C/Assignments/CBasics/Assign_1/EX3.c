/*
 * EX3.c
 *
 *  Created on: Sep 13, 2022
 *      Author: alikhaled
 */
#include <stdio.h>

int main ()
{
	int x , y;

	printf("Enter two integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&x ,&y);

	printf("sum: %d", x+y);
	return 0;
}
