
//Q1


#include <stdio.h>
#include <string.h>

int main ()
{
	char a[100] , b[100] ;
	printf("Enter The String: ");
	fflush(stdin); fflush(stdout);
	gets(a);

	printf("Enter Your USERNAME: ");
	fflush(stdin); fflush(stdout);
	gets(b);

	if (strcmp(a,b))
		printf("Not Same");
	else
		printf("Same");

	return 0;
}
