/*
 * EX1.c
 *
 *  Created on: Sep 18, 2022
 *      Author: ali khaled
 */
#include <stdio.h>

int isPrime (int num);

int main ()
{
	int start , end , i , isFind=1 ;
	printf("Enter Two Numbers(intervals): ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&start ,&end);

	printf("Prime Numbers Between %d and %d are: ", start , end);
	for(i= start+1 ; i < end ; i++ )
	{
		if(isPrime(i))
		{
			printf("%d ",i);
			isFind=0;
		}
	}
	if(isFind)
		printf("No Prime Numbers Between %d and %d ", start , end);
	return 0;
}

int isPrime (int num)
{
	int f=1 , i;
	if (num==1){ return 0 ;}
	else{
		for(i=2 ;i<= num/2 ;i++)
		{
			if(num%i==0)
			{
				f=0;
				break;
			}
		}
	}
	return f ;
}

