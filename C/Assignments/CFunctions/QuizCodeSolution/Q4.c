
#include <stdio.h>
#include <string.h>

int toInt(char a[],int len)
{
	int i ;
	unsigned int sum=0 , temp;
	for (i=0 ; i <len ; i++)
	{
		sum*=10;
		temp = a[i]-'0';
		sum += temp;

	}
	return sum;
}

int main ()
{
	char a[10];
	int num ,len ,temp;

	printf("Enter An Array: ");
	fflush(stdin); fflush(stdout);
	scanf("%s",a);


	len= strlen(a);
	num= toInt(a ,len);

	printf("%u\n",num);
	return 0;
}
