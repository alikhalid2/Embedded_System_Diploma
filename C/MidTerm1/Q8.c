//Q8
#include <stdio.h>

int i;
void reverseArray (char a[])
{
	if (a[i] != '\0')
	{
		reverseArray(&a[i+1]);
		printf("%c",a[i]);
	}
}

int main ()
{
	char a[100] ;
	printf("Enter an Array: ");
	fflush(stdin); fflush(stdout);
	gets(a);

	reverseArray(a);
	return 0;
}
