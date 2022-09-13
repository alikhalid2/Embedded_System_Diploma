/*
 * EX6.c
 *
 *  Created on: Sep 13, 2022
 *      Author: alikhaled
 */
#include <stdio.h>

int main ()
{
	char c ;
	float x , y;


	printf("Enter operator either + or - or * or /  : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);

	printf("Enter two operands : ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&x,&y);

	switch(c)
	{
	case '+' :
	{
		printf("%f",x+y);
	}
	break;
	case '-':
	{
		printf("%f",x-y);
	}
	break;
	case '*':
	{
		printf("%f", x*y);
	}
	break;
	case '/':
	{
		printf("%f",x/y);
	}
	}

	return 0;
}
