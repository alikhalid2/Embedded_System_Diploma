/*
 * EX3.c
 *
 *  Created on: Sep 24, 2022
 *      Author: ali khaled
 */
#include <stdio.h>

struct Scomplex
{
	float real;
	float img; // imaginary number
};

void sum (struct Scomplex n1,struct Scomplex n2)
{
	struct Scomplex sum ;
	sum.real= n1.real + n2.real ;
	sum.img=  n1.img  + n2.img ;

	printf("\nSum =%.1f + %.1fi ",sum.real,sum.img);
}
int main ()
{
	struct Scomplex n1 ,n2 ;
	printf("For 1st Complex Number : \n");
	printf("Enter real: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &n1.real);

	printf("Enter imaginary: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &n1.img);

	printf("For 2nd Complex Number : \n");
	printf("Enter real: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &n2.real);

	printf("Enter imaginary: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &n2.img);

	sum(n1 , n2);

	return 0 ;
}
