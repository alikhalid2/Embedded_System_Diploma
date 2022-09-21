//Q8


#include <stdio.h>
#include <string.h>

int check(int a[] , int len)
{
	int x ,i;
	printf("Enter The Number To Show Last Index:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);

	for(i=len;i>0;i--)
	{
		if(a[i] == x)
			return i+1;
	}
	return -1;
}

int main()
{
	int a[50],len ,i;


	printf("Enter The Length:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&len);
	for(i=0 ;i< len; i++)
	{
		printf("%d.Enter The number:",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",&a[i]);
	}

	printf("The Last Occurrence: %d",check(a , len));
}
