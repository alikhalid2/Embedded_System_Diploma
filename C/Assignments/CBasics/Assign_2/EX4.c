/*
 * EX4.c
 *
 *  Created on: Sep 13, 2022
 *      Author: alikhaled
 */
#include <stdio.h>

int main ()
{
	float x  ;

	printf("Enter a numbers : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&x);

	if( x > 0 ){
		printf("%f is positive",x);
	}else if (x < 0){
		printf("%f is negative",x);
	}else {
		printf(" You entered ZERO !!");
	}
	return 0;
}
