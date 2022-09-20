#include <stdio.h>



int LeastSB(int num)
{
	int tog;
	tog = num ^ 1<<3;
	if(tog > num)
		return 0;
	else
		return 1;
}

int main()
{
	int num;
	printf("Enter Integer Number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	printf("4th SB is: %d",LeastSB(num));

	return 0;
}
