/*
 * EX3.c
 *
 *  Created on: Sep 28, 2022
 *      Author: ali khaled
 */
#include <stdio.h>
#include <string.h>
int main ()
{
	char arr[50] ,*ptr;
	int i , len;
	printf("Input a string : ");
	fflush(stdin);  fflush(stdout);
	gets(arr);
	len = strlen(arr);
	ptr = &arr[len-1];

	printf("Reverse of the string is: ");
	for(i=len-1 ;i>=0 ;i-- )
	{
		printf("%c",*ptr--);
	}

	return 0 ;
}
