/*14. C program to calculate X^N (X to the power of N) using pow function*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int X, N, power;
	printf("Enter the base value: ");
	scanf("%d", &X);
	printf("\nEnter power of base value: ");
	scanf("%d", &N);
	
	power=pow(X,N);
	printf("\nThe value of %d^%d is %d", X,N,power);
	getch();
	return 0;
}
