#include<stdio.h>
int main()
{
	int num, rem, temp;
	printf("num: ");
	scanf("%d", &num);
	
	temp=num/2;
	rem=num-2*temp;
	
	if(rem==0)
	{
		printf("\n%d is even number.", num);
	}
	else
	{
		printf("\n%d is odd number.", num);
	}
	
	return 0;
}
