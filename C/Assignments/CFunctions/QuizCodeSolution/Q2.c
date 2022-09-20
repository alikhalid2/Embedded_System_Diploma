
//Q2
#include <stdio.h>
#include <string.h>

int main ()
{
	char a[100],b[100],c[100];
	int i,max;

	printf("Enter 1st array: ");
	fflush(stdin); fflush(stdout);
	gets(a);

	printf("Enter 2nd array: ");
	fflush(stdin); fflush(stdout);
	gets(b);

	max =strlen(b);
	if(strlen(a) > strlen(b))
		max = strlen(a);


	for(i=0;i <= max; i++)
	{
		c[i]= a[i];
		a[i]=b[i];
		b[i]=c[i];
	}

	printf("After Swapping :\n");
	printf("1st Array: %s \n2nd Array: %s",a,b);


	return 0;
}
