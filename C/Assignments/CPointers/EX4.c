/*
 * EX4.c
 *
 *  Created on: Sep 28, 2022
 *      Author: ali khaled
 */
#include <stdio.h>

int main ()
{
	char arr[15],*ptr;
	int i ,len;
	ptr= arr;
	printf("Input the number of elements to store in the array (max 15): ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&len);
	printf("Input %d number of elements in the array : \n",len);

	for(i=0 ;i<len ;i++)
	{
		printf("element -%d : ",i+1);
		fflush(stdin);  fflush(stdout);
		scanf("%c",ptr+i);

	}

	ptr= &arr[len-1];

	printf("The elements of array in reverse order are : \n");
	for(i=len ;i>0 ;i--)
	{
		printf("%d - element  : %c\n",i,*ptr--);

	}
	return 0 ;
}
