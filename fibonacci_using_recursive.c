#include<stdio.h>
int fibonacci(int);

int main()
{
	int n, i;
	printf("Enter number of terms: ");
	scanf("%d", &n);
	
	fibonacci(n);
	printf("\nThe fibonacci series upto %d terms is:\n", n);
	for(i=1; i<=n; i++)
	{
		printf("%d, ", fibonacci(i));
	}
	
	return 0;
}

int fibonacci(int n)
{
	if(n==1)
	{
		return 0;
	}
	else if(n==2)
	{
		return 1; 
	}
	else if(n>2)
	{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
