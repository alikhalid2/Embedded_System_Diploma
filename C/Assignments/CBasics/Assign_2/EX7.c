/*
 * EX6.c
 *
 *  Created on: Sep 13, 2022
 *      Author: alikhaled
 */
#include <stdio.h>

int main ()
{
	int x , factorial =1;

	printf("Enter an integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);

	if(x<0){
		printf("ERROR !! Factorial of negative number doesn't exist");
	}
	else if(x==0)
	{
		printf("0");
	}

	else
	{
		for(int i=1 ; i<=x ;i++)
		{
			factorial*=i;
		}
		printf("factorial=%d",factorial);
	}

	return 0;
}
