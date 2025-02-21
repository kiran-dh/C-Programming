/*
29. C program to check given number is divisible by A and B.

In this C program, we will read an integer number and check whether
the given integer number is divisible by A and B. Here, A and B are the
divisors given by the user.

*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int num, A, B;
	printf("Enter an integer value: ");
	scanf("%d", &num);
	
	printf("\nEnter divisor A: ");
	scanf("%d", &A);
	
	printf("\nEnter divisor B: ");
	scanf("%d", &B);
	
	if(num%A==0 && num%B==0)
	{
		printf("\n%d is divisible by both numbers %d and %d", num, A, B);
		
	}
	
	else if(num%A==0 && num%B!=0)
	{
		printf("\n%d is divisible by %d only not by %d.", num, A, B);
	}
	
	else if(num%A!=0 && num%B==0)
	{
		printf("\n%d is divisible by %d only not by %d", num, B, A);
	}
	
	getch();
	return 0;
}
