
//Q7
#include <stdio.h>
#include <math.h>


int isPower3(int num)
{
	float i;
	i = log(num) / log(3);
	return i == (int)i;
}

int main()
{
	int num;
	printf("Enter number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	printf("%d ==> %d",num,! isPower3(num));

	return 0;
}
