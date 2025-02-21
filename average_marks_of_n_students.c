#include<stdio.h>

int main()
{
	int n;
	printf("How many students you have? ");
	scanf("%d", &n);
	
	int marks[n], i, sum=0;
	
	float avg;
	
	printf("\nEnter marks of each student: \n");
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &marks[i]);
		
		sum+=*(marks+i);
	}
	
	avg=sum/n;
	
	printf("\nAverage: %f", avg);
	
	return 0;

}
