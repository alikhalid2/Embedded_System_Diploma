//Q6
#include <stdio.h>

int unique(int a[], int size)
{
	int num=0 ,i;

	for(i=0 ; i< size ; i++)
	{
		num^=a[i]; // to add the unique and subtract the repeated
	}
	return num ;
}

int main ()
{
	int size ,a[10],i;

	printf("size : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&size);
	for(i=0 ; i <size ;i++)
	{
		printf("element %d :",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",&a[i]);
	}

	printf("Unique Number in Array= %d", unique(a,size));
	return 0;
}
