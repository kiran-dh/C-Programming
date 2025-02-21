#include<stdio.h>

void operate_ab(int*, int*);

int main()
{
	int n1, n2;
	printf("Enter two numbers: ");
	scanf("%d%d", &n1, &n2);
	
	operate_ab(&n1, &n2);
	printf("\nn1: %d\tn2: %d", n1, n2);
	
	return 0;
}

void operate_ab(int *a, int *b)
{
	*a=*a+55;
	*b=*b+10;
}
