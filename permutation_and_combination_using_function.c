#include<stdio.h>
int factorial(int);


int main()
{
	int n, r, permutation, combination, f1, f2, f3;
	printf("Enter n and r(n>r): ");
	scanf("%d%d", &n, &r);
	
	f1=factorial(n);
	f2=factorial(r);
	f3=factorial(n-r);
	
	permutation=f1/f2;
	combination=f1/(f2*f3);
	
	printf("\nPermutation: %d", permutation);
	printf("\nCombination: %d", combination);
	
	return 0;
}

int factorial(int n)
{
	int i, f=1;
	for(i=1; i<=n; i++)
	{
		f=f*i;
	}
	
	return f;
}
