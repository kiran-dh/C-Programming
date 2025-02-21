#include<stdio.h>
int main()
{
	int num;
	printf("num: ");
	scanf("%d", &num);
	
	if(num&1)
	{
		printf("\n%d is odd number.", num);
	}
	else
	{
		printf("\n%d is even number.", num);
	}
	
	return 0;
}
