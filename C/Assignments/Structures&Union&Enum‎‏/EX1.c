/*
 * EX1.c
 *
 *  Created on: Sep 24, 2022
 *      Author: ali khaled
 */
#include <stdio.h>

struct Sstudent
{
	char name[10];
	int roll ;
	float marks;
};

int main ()
{
	struct Sstudent student ;
	printf("Enter Information of Student : \n");

	printf("Enter name: ");
	fflush(stdin); fflush(stdout);
	scanf("%s", student.name);

	printf("Enter roll: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &student.roll);

	printf("Enter marks: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &student.marks);

	printf("\nDisplaying Information : \n");
	printf("name: %s\n", student.name);
	printf("roll: %d\n", student.roll);
	printf("marks: %.2f\n", student.marks);
	return 0 ;
}
