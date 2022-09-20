
//Q5
#include <stdio.h>

int main ()
{
	int num , bit ;
	printf("Input Number = ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	printf("Bit position =  ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&bit);

	num &= ~(1<<bit);

	printf("result = %d", num);
	return 0;
}
