//Q7

#include <stdio.h>

int add;
int sum(int num)
{
	if(num !=0)
	{
		sum(num-1);
		add+=num;
	}
	return add;
}

int main ()
{
	printf("sum from 1 to 100 : %d",sum(100));
	return 0;
}
