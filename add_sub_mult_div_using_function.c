#include<stdio.h>
int add(int, int);
int sub(int, int);
int div(int, int);
int mult(int, int);

int main()
{
	int n1, n2, result;
	printf("Enter first number: ");
	scanf("%d", &n1);
	
	printf("\nEnter second number: ");
	scanf("%d", &n2);
	
	result=add(n1, n2);
	printf("\nsum: %d", result);
	
	result=sub(n1, n2);
	printf("\nDifference: %d", result);
	
	result=div(n1, n2);
	printf("\nDivision: %d", result);
	
	result=mult(n1, n2);
	printf("\nProduct: %d", result);
	
	return 0;
}

int add(int n1, int n2)
{
	int result;
	result=n1+n2;
	return result;
}

int sub(int n1, int n2)
{
	int result;
	result=n1-n2;
	return result;
}

int div(int n1, int n2)
{
	int result;
	result=n1/n2;
	return result;
}

int mult(int n1, int n2)
{
	int result;
	result=n1*n2;
	return result;
}
