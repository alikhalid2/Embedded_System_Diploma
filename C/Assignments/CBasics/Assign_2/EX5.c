/*
 * EX5.c
 *
 *  Created on: Sep 13, 2022
 *      Author: alikhaled
 */
#include <stdio.h>

int main ()
{
	char x  ;

	printf("Enter a character : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);

	if((x>=65 && x<=90) || (x>=97 && x<=122)){
		//		the small alphabet from 65 : 90   and  the capital alphabet from 97 : 122
		printf("%c is an alphabet",x);
	}
	else{
		printf("%c is not an alphabet",x);
	}
	return 0;
}
