/*
 * EX5.c
 *
 *  Created on: Sep 15, 2022
 *      Author: alikhaled
 */
#include <stdio.h>

int main ()
{
	int  n , i ,searcedElement;
	char c = 'T';
	printf("enter no of elements:");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&n);

	int arr[n];

	for (i=0 ; i < n ;i++)
	{
		scanf("%d",&arr[i]);
	}
	// Entering the Element That we want to Search
	printf("Enter the element to be searched:");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&searcedElement);
	//	Search About The Number
	for(i =0 ; i<n;i++)
	{
		if(arr[i]==searcedElement)
		{
			printf("Number found at the location = %d",i+1);
			c='F';
			break;
		}
	}
	//	if Don't Found The Number
	if (c =='T')
		printf("Number Not FOUND !!!");

	return 0;
}
