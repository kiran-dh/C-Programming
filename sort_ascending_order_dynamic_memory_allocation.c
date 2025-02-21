#include<stdio.h>
#include<stdlib.h>


void get(float *, int);
void display(float *, int);
void sort(float *, int);

int main()
{
	int n;
	float *num;
	printf("Enter number of elements in your array: ");
	scanf("%d", &n);
	
	num=(float*)malloc(n*sizeof(float));
	
	get(num, n);
	sort(num, n);
	display(num, n);
	
	return 0;
}

void get(float *nums, int n)
{
	int i;
	printf("\nEnter %d numbers: ", n);
	for(i=0; i<n; i++)
	{
		scanf("%f", nums+i);
	}
}

void sort(float *nums,  int n)
{
	float temp;
	int i, j;
	
	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(*(nums+i)>*(nums+j))
			{
				temp=*(nums+i);
				*(nums+i)=*(nums+j);
				*(nums+j)=temp;
			}
		}
	}
}

	void display(float *nums, int n)
	{
		int i;
		printf("\nThe numbers in ascending order:\n");
		
		for(i=0; i<n; i++)
		{
			printf("\t%.2f", *(nums+i));
		}
	}
