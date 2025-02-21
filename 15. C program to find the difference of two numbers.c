/*
15.C program to find the difference of two numbers.

This C program cannot be used to find the subtraction, in this program
we are going to find the differences of two integer numbers. Here, we
will check which largest number is and to get the difference, the
smallest number will be subtracted from the largest number.

*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int num1, num2, difference;
	printf("Enter number 1: ");
	scanf("%d", &num1);
	
	printf("\nEnter number 2: ");
	scanf("%d", &num2);
	
	if(num1>num2)
	{
		difference=num1-num2;
		printf("\nThe difference is %d.", difference);
	}
	else if(num1<num2)
	{
		difference=num2-num1;
		printf("\nThe difference is %d.", difference);
	}
	else
	{
		printf("\nThe difference is 0.");
	}
	
	getch();
	return 0;
}
