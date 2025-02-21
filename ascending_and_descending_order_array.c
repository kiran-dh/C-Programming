/*
4. WAP to enter 5 elements and display them in ascending and 
descending order.
*/

#include<stdio.h>
int main()
{
	int num[5], temp;
	int i, j;
	for(i=0; i<5; i++)
	{
		printf("Enter %d number: ", i+1);
		scanf("%d", &num[i]);
		printf("\n");
	}
	
	printf("\nIn ascending order:\n");
	for(i=0; i<5; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(num[i]>num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	
	for(i=0; i<5; i++)
	{
		printf("%d\t", num[i]);
	}
	
	printf("\nIn descending order:\n");
	for(i=0; i<5; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(num[i]<num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	
	for(i=0; i<5; i++)
	{
		printf("%d\t", num[i]);
	}
	
	return 0;
}
