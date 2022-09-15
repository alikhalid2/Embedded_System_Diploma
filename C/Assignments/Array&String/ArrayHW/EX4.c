/*
 * EX4.c
 *
 *  Created on: Sep 15, 2022
 *      Author: ali khaled
 */
#include <stdio.h>

int main ()
{
	int  n , i ,new_element , location;

	printf("enter no of elements:");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&n);
	n=n+1;

	int arr[n];

	for (i=0 ; i <n-1 ;i++)
	{
		scanf("%d",&arr[i]);
	}
	// Entering the Element
	printf("Enter the element to be inserted:");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&new_element);

	//Entering the Location of Element
	printf("Enter the location:");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&location);

	// inserting The Element
	for(i= n ; i>=location ;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[location-1]= new_element;
	//print the new array
	for(int i = 0; i <= n-1 ;i++)
	{
		printf("%d ",arr[i]);

	}

	return 0;
}
