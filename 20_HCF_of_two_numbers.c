/*
20. C program to calculate HCF of two numbers.

This program will read two integers and print their HCF (Highest
Common Factor).

*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int num1, num2, temp;
	printf("Enter two numbers: ");
	scanf("%d%d", &num1, &num2);
	printf("%d", num1%num2);
	if(num1==0 || num2==0)
	{
		printf("\nThe HCF of two numbers %d and %d is zero", num1, num2);
	}
	else
	{
		while(num2>0)
	{
		temp=num1%num2;
		num1=num2;
		num2=temp;
	}
	printf("\nThe HCF of two numbers is %d", num1);
	}
	
	
	return 0;
}
