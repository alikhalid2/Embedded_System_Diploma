/*
 * EX3.c
 *
 *  Created on: Sep 13, 2022
 *      Author: alikhaled
 */
#include <stdio.h>

int main ()
{
	float x , y , z , largest ;

	printf("\nEnter 3 numbers : ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f",&x ,&y ,&z);

	if( x > y ){
		if (x > z){
			largest = x ;
		}
		else {
			largest = z ;
		}
	}else if(y > x){
		if(y > z){
			largest = y ;
		}
		else {
			largest = z ;
		}
	}
	printf("Largest is %.3f",largest);
	return 0;
}
