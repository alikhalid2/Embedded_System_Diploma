/*
 * EX3.c
 *
 *  Created on: Sep 18, 2022
 *      Author: ali khaled
 */
#include <stdio.h>

void reverseSentence (char words[]);

int main ()
{
	char words[100] ;
	printf("Enter a sentence: ");
	fflush(stdin); fflush(stdout);
	gets(words);

	reverseSentence(words);
	return 0;
}

int i =0;
void reverseSentence (char words[])
{

	if (words[i] != '\0')
	{
		reverseSentence(&words[i+1]);
		printf("%c",words[i]);
	}
}
