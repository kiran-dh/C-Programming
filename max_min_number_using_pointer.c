#include<stdio.h>
#include<stdlib.h>

void asc(float *, int);
void desc(float *, int);
void getnum(float *, int);
int main()
{
	int n;
	printf("How many numbers you want to enter?\n");
	scanf("%d", &n);
	
	float *num;
	
	num=(float*)malloc(n*sizeof(float));
	
	getnum(num, n);
	asc(num, n);
	desc(num, n);
	
	return 0;
}

void getnum(float *num, int n)
{
	int i;
	printf("\nEnter your numbers:\n");
	for(i=0; i<n; i++)
	{
		scanf("%f", num+i);
	}
}

void asc(float *num, int n)
{
	int i, j;
	float temp;
	
	temp=*num;
	for(i=0; i<n; i++)
	{
		if(temp>*(num+i))
		{
			temp=*(num+i);
		}
	}
	
	printf("\nThe minimum number is %.2f ", temp);
}

void desc(float *num, int n)
{
	int i;
	float temp;
	
	temp=*num;
	
	for(i=0; i<n; i++)
	{
		if(temp<*(num+i))
		{
			temp=*(num+i);
		}
	}
	
	printf("\nThe maximum number is %.2f", temp);
}
