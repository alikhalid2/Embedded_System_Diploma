/*
 * EX4.c
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
	int i,
	n=2;  // print any number of student you want to enter like "10" in this Question
	struct Sstudent s[n] ;
	printf("Enter Information of Students : \n");
	for(i=0 ; i < n;i++)
	{
		printf("%d.Enter roll Number : ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d", &s[i].roll);

		printf("Enter name: ");
		fflush(stdin); fflush(stdout);
		scanf("%s", s[i].name);

		printf("Enter marks: ");
		fflush(stdin); fflush(stdout);
		scanf("%f", &s[i].marks);
	}
	printf("\nDisplaying Information Of Students" );
	for(i=0 ; i < n;i++)
	{
		printf("\nRoll Number: %d\nName: %s\nMarks: %.2f\n",
				s[i].roll, s[i].name, s[i].marks);
	}
	return 0 ;
}
