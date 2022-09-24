/*
 * EX5.c
 *
 *  Created on: Sep 24, 2022
 *      Author: ali khaled
 */
#include <stdio.h>
#define area(r)(3.141*r*r)

int main ()
{
	float r;
	printf("Enter the radius: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&r);

	printf("The area =%.2f",area(r));

	return 0 ;
}
