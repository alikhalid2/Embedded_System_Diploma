/*
 * main.c
 *
 *  Created on: Sep 13, 2022
 *      Author: alikhaled
 */
#include <stdio.h>

int main ()
{
	float a , b ,temp ;

	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);

	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);

	 temp = a;
	 a = b ;
	 b = temp;

	printf("\nAfter swapping, value of a = %f", a);
	printf("\nAfter swapping, value of b = %f", b);

	return 0;
}
