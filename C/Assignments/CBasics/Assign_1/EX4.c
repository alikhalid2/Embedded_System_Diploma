/*
 * EX4.c
 *
 *  Created on: Sep 13, 2022
 *      Author: alikhaled
 */
#include <stdio.h>

int main ()
{
	float x , y;

	printf("Enter two integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&x ,&y);

	printf("sum: %.6f", x * y);
	return 0;
}
