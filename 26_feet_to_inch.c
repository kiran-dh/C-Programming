/*
26. C program to convert feet to inches.

This C program will read distance in feet and convert the distance in
inches.

*/
#include<stdio.h>
#include<conio.h>

int main()
{
	float foot, inch;
	printf("Enter the distance in feet: ");
	scanf("%f", &foot);
	
	inch=foot/12;
	
	printf("\nThe distance in inch is %f.", inch);
	
	getch();
	return 0;
}
