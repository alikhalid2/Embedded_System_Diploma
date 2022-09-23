//Q1
#include <stdio.h>

int digitsum(int num)
{
	static int sum=0 ;
	int temp;
	if(num !=0)
	{
		temp=num%10;
		sum+=temp;
		digitsum(num/10);
	}
	else
		return 0;
	return sum;
}


int main ()
{

	int num;

	printf("input:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	printf("output:%d",digitsum(num));
	return 0;
}
