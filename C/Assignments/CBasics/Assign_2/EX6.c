/*
 * EX6.c
 *
 *  Created on: Sep 13, 2022
 *      Author: alikhaled
 */
#include <stdio.h>

int main ()
{
	int x , sum = 0;

	printf("Enter an integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);

	for(int i=1 ; i<=x ;i++){
		sum+=i;
	}
	printf("sum=%d",sum);
	return 0;
}
