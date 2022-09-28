/*
 * EX2.c
 *
 *  Created on: Sep 28, 2022
 *      Author: ali khaled
 */
#include <stdio.h>

int main ()
{
	char alphabet[27];
	int i;
	char *p;

	for (i=0 ; i<26 ; i++)
	{
		alphabet[i]= 'A'+i;
	}

	p = alphabet;
	printf("Alphabet Are : ");
	for (i=0 ; i<26 ; i++)
	{
		printf("%c ",*(p+i));
	}
	return 0 ;
}
