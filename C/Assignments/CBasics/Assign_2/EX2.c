/*
 * EX2.c
 *
 *  Created on: Sep 13, 2022
 *      Author: alikhaled
 */
#include <stdio.h>

int main ()
{
	char x ;

	printf("\nEnter an alphabet : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);

	if(x == 'i'||x =='I'||x =='A'||x =='a'||x =='o'||x =='O'||x =='u'||x =='U'||x =='E'||x =='e' ){
		printf("%c is a vowel.",x);
	}else {
		printf("%c is consonant.",x);
	}

	return 0;
}
