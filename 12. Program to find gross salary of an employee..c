/*
12. Program to find gross salary of an employee.

In this program, we will read the Basic Salary of an employee and
calculate HRA, DA, and Provident Fund. Based on these parameters
we will calculate the gross salary of the employee and print it on the
screen.

*/

#include<stdio.h>
#include<conio.h>

int main()
{
	float basic_salary, HRA, DA,provident_fund;
	printf("Enter basic salary: ");
	scanf("%f", &basic_salary);
	
	printf("\nEnter housing rent allowance: ");
	scanf("%f", &HRA);
	
	printf("\nEnter dearness allowance: ");
	scanf("%f", &DA);
	
	provident_fund=(basic_salary*10)/100;
	
	float gross_salary=basic_salary+HRA+DA+provident_fund;
	
	printf("\nGross salary: %.2f", gross_salary);
	
	getch();
	return 0;
}
