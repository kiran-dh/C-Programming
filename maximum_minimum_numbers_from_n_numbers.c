#include<stdio.h>
int main()
{
	int n, max, min, i, temp;
	printf("How many numbers you want to input?\n");
	scanf("%d", &n);
	
	int num[n];
	for(i=0; i<n; i++)
	{
		printf("\nEnter number[%d]: ", i);
		scanf("%d", &num[i]);
	}
	
	max=num[0];
	min=num[0];
	
	for(i=0; i<n; i++)
	{
		if(max<num[i])
		{
			temp=max;
			max=num[i];
			num[i]=temp;
		}
	}
	for(i=0; i<n; i++)
	{
		if(min>num[i])
		{
			temp=min;
			min=num[i];
			num[i]=temp;
		}
	}
	printf("\nmaximum number: %d", max);
	printf("\nminimum number: %d", min);
	
	return 0;
}
