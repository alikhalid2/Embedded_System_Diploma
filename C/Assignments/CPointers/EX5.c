/*
 * EX5.c
 *
 *  Created on: Sep 28, 2022
 *      Author: ali khaled
 */
#include <stdio.h>
#include <string.h>

struct Semployee
{
	char empName[10];
	int empID;
}emp1,emp2;

int main ()
{

	strcpy(emp1.empName ,"Ali");
	emp1.empID=1234;

	strcpy(emp2.empName ,"Salah");
	emp2.empID=1034;

	struct Semployee *emp[2]={&emp1 ,&emp2};
	struct Semployee **ptr=emp;

	printf("Employee Name: %s \nEmployee ID: %d\n",(*ptr)->empName,(*ptr)->empID);
	printf("Employee Name: %s \nEmployee ID: %d",(*(ptr+1))->empName,(*(ptr+1))->empID);
	return 0 ;
}
