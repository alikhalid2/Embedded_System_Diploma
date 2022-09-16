/*
 * EX2.c
 *
 *  Created on: Sep 16, 2022
 *      Author: ali khaled
 */
#include <stdio.h>

int main ()
{
	char words[100];
	int i , count=0;
	//	to get the string or sentence
	printf("Enter a string : ");
	fflush(stdin); fflush(stdout);
	gets(words);

	for(i=0 ; words[i] !=0 ;i++)
	{
		if(words[i]==' ')
		{
			continue;
		}
		count+=1;
	}

	printf("Length of String : %d", count);
	return 0;
}
