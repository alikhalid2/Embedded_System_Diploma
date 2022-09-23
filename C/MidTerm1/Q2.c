//Q2
#include <stdio.h>
#include<math.h>

float square(int num)
{

	return pow(10, 0.5 * log10(num));
}

int main ()
{

	int num;

	printf("input:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	printf("Square Root of %d = %.3f",num ,square(num));
	return 0;
}

