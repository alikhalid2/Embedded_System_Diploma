/*
 * EX1.c
 *
 *  Created on: Sep 13, 2022
 *      Author: alikhaled
 */
#include <stdio.h>

int main ()
{
	int x ;

	printf("Enter an integer you want to check : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);

	if(x%2==0){
		printf("%d is even.",x);
	}else {
		printf("%d is odd.",x);
	}

	//     (x%2==0) ? printf("%d is even.",x) : printf("%d is odd.",x);
	return 0;
}
