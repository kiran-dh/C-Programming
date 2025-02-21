/*
21. C program to multiply two numbers using plus operator.

This C program will read two integer numbers and calculate their
multiplication (product) using plus operator, here we will not
multiplication (*) operator.

*/

#include<stdio.h>
#include<conio.h>
int main()
{
	
	int num1, num2, product=0;
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("\nEnter second number: ");
	scanf("%d", &num2);
	
	for(int i=1; i<=num1; i++)
	{
		product+=num2;
	}
	
	printf("\nThe product of two numbers %d and %d is %d", num1, num2, product);
	
	getch();
	return 0;
}
