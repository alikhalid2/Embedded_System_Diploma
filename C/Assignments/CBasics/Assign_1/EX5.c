/*
 * EX5.c
 *
 *  Created on: Sep 13, 2022
 *      Author: alikhaled
 */
#include <stdio.h>

int main ()
{
	char x ;

	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);

	printf("ASCII value of %c = %d", x ,x);
	return 0;
}
