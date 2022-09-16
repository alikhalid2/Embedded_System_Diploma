/*
 * EX1.c
 *
 *  Created on: Sep 16, 2022
 *      Author: ali khaled
 */
#include <stdio.h>

int main ()
{
	char c , words[100];
	int i , count=0;
	//	to get the sentence
	printf("Enter a string : ");
	fflush(stdin); fflush(stdout);
	gets(words);
	//	to get the character that we want to find frequency
	printf("Enter a character to find frequency :  ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);

	for(i=0 ; words[i] !=0 ;i++)
	{
		if(words[i]==c)
		{
			count+=1;
		}
	}
	printf("Frequency of %C = %d",c, count);
	return 0;
}
