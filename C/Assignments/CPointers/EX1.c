/*
 * EX1.c
 *
 *  Created on: Sep 28, 2022
 *      Author: ali khaled
 */
#include <stdio.h>

int main ()
{
	//print the value of m and address
	int m= 29 ;
	printf("Address of m: 0x%p\nValue of m: %d", &m , m);

	//	assign pointer to the address od m
	int*ab=&m;
	printf("\n\nNow ab is assigned with the address of m.");
	printf("\nAddress of pointer ab: 0x%p\nContent of pointer ab : %d",ab,*ab);

	//	print the pointer value after assign the var
	m=34;
	printf("\n\nThe value of m assigned to 34 now.");
	printf("\nAddress of pointer ab: 0x%p\nContent of pointer ab : %d",ab,*ab);

	//print the m after assign the pointer
	*ab=7;
	printf("\n\nThe pointer variable ab is assigned with the value 7 now.");
	printf("\nAddress of m: 0x%p\nValue of m: %d", &m , m);
	return 0 ;
}
