/*9. Program to find largest number among three numbers. */

#include<stdio.h>
#include<conio.h>

int main()
{
	float num1, num2, num3;
	printf("Enter number 1: ");
	scanf("%f", &num1);
	
	printf("\nEnter number 2: ");
	scanf("%f", &num2);
	
	printf("\nEnter number 3: ");
	scanf("%f", &num3);
	
	if(num1>num2 && num1>num3)
	{
		printf("%.2f is largest number.", num1);
	}
	else if(num2>num1 && num2>num3)
	{
		printf("%.2f is largest number.", num2);
	}
	else
	{
		printf("%.2f is largest number.", num3);
	}
	
	getch();
	return 0;
}
