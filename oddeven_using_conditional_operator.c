#include<stdio.h>
int main()
{
	int num, oddeven;
	printf("num: ");
	scanf("%d", &num);
	
	oddeven=num%2?1:0;
	if(oddeven==0)
	{
		printf("\n%d is even number.", num);
	}
	else
	{
		printf( "\n%d is odd number.", num);
	}
	
	return 0;
}
