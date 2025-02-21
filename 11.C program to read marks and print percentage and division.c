/*
11.C program to read marks and print percentage and division.

In this C program, we are going to read marks in 3 subjects, we will find
the total, percentage and print the division based on the percentage.
*/

#include<stdio.h>
#include<conio.h>

int main()
{
	float physics, math, c_program, total, percentage;
	printf("Enter marks obtained in physics: ");
	scanf("%f", &physics);
	
	printf("\nEnter marks obtained in math: ");
	scanf("%f", &math);
	
	printf("\nEnter marks obtained in c programming: ");
	scanf("%f", &c_program);
	
	total=physics+math+c_program;
	
	percentage=total/3;
	
	printf("\nTotal marks: %.2f", total);
	printf("\nPercentage: %.2f", percentage);
	
	if(percentage>=80)
	{
		printf("\nYou have secured distinction.");
	}
	else if(percentage>=60 && percentage<80)
	{
		printf("\nYou have secured first division.");
	}
	else if(percentage>=50 && percentage<60)
	{
		printf("\nYou have secured second division");
	}
	else if(percentage>=40 && percentage<50)
	{
		printf("\nYou have secured third division.");
	}
	else
	{
		printf("\nYou have failed in examination.");
	}
	getch();
	return 0;
}
