#include<stdio.h>
int main()
{
	int n, i;
	printf("How many numbers you want to input?\n");
	scanf("%d", &n);
	
	int num[n], sum=0, average;
	for(i=0; i<n; i++)
	{
		printf("\nEnter number[%d]: ", i);
		scanf("%d", &num[i]);
	}
	
	for(i=0; i<n; i++)
	{
		sum=sum+num[i];
		
	}
	
	average=sum/n;
	printf("\nAverage of entered numbers is %d", average);
	
	return 0;
}
