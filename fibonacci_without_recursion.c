#include<stdio.h>
int fibonacci(int);


int main()
{
	int n, i, f;
	printf("Enter number of terms: ");
	scanf("%d", &n);
	
	fibonacci(n);
	printf("\nThe fibonacci series upto %d terms is:\n", n);
	
	return 0;
}

int fibonacci(int n)
{
	int t1=0, t2=1, t3, i;
	printf("%d, %d", t1, t2);
	for(i=3; i<=n; i++)
	{
		t3=t1+t2;
		printf(", %d", t3);
		t1=t2;
		t2=t3;
		
	}
}
