//Q4
#include <stdio.h>

int reversenum(int num)
{
	static int sum=0 ;
	int temp;
	temp=num%10;
	sum+=temp;
	if (num/10!=0)
	{
		sum*=10;
		reversenum(num/10);
	}
	else
		return 0;
	return sum;
}


int main ()
{

	int num;

	printf("input: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	printf("The reverse: %d",reversenum(num));
	return 0;
}
