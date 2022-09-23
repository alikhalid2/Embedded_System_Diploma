//Q5
#include <stdio.h>

int countOnes(int num)
{
	int count =0 ,i;

	for(i=0 ; i<31 ; i++)
	{
		if(num &(1<<i))
			count++;
	}
	return count ;
}

int main ()
{
	int num;

	printf("input: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	printf("The Numbers Of Ones= %d",countOnes(num));
	return 0;
}
