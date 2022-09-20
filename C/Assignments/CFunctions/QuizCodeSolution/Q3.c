//Q3
#include <stdio.h>
#include <string.h>

void reverse (char a[])
{
	char c ;
	int i,j;
	j = strlen(a) -1 ;

	for(i=0 ; j >= i ;i++)
	{
		c = a[i];
		a[i] =a[j];
		a[j] =c ;
		j--;
	}

	printf("Output: %s", a);
}

int main ()
{
	char a[100];
	printf("Input: ");
	fflush(stdin); fflush(stdout);
	gets(a);
	reverse(a);
	return 0;
}
