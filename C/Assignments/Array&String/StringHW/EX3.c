/*
 * EX3.c
 *
 *  Created on: Sep 16, 2022
 *      Author: ali khaled
 */
#include <stdio.h>
#include <string.h>

int main ()
{
	char a[100] , c;
	int i , j=0 ;

	//	to get the string or sentence
	printf("Enter a string : ");
	fflush(stdin); fflush(stdout);
	gets(a);
	j = strlen(a) -1 ;

	for(i=0 ; j >= i ;i++)
	{
		c = a[i];
		a[i] =a[j];
		a[j] =c ;
		j--;
	}

	printf("reverse  of String : %s", a);
	return 0;
}
