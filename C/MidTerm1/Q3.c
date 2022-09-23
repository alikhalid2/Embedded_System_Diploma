//Q3
#include <stdio.h>

int isPrime (int num)
{
	int f=1 , i;
	if (num==1){ return 0 ;}
	else{
		for(i=2 ;i<= num/2 ;i++)
		{
			if(num%i==0)
			{
				f=0;
				break;
			}
		}
	}
	return f ;
}

int main ()
{
	int start , end , i , isFind=1 ;
	printf("input:\nn1 ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&start);

	printf("n2 ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&end);
	printf("Prime Numbers Between %d and %d are: ", start , end);
	for(i= start+1 ; i < end ; i++ )
	{
		if(isPrime(i))
		{
			printf("%d ",i);
			isFind=0;
		}
	}
	if(isFind)
		printf("No Prime Numbers Between %d and %d ", start , end);
	return 0;
}


