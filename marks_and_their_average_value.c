#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, i;
	float *p, sum=0, avg;
	
	printf("How many students are there?\n");
	scanf("%d", &n);
	
	printf("Enter marks of each student:\n");
	
	p=(float*)malloc(n*sizeof(float));
	
	for(i=0; i<n; i++)
	{
		scanf("%f", p+i);
		
		sum+=*(p+i);
	}
	
	avg=sum/n;
	
	printf("\nThe average marks of");
	for(i=0; i<n; i++)
	{
		printf("\t%.2f", *(p+i));
	}
	
	printf(" is: %.2f", avg);
	
	free(p);
	
	return 0;
}
