/*
22.C program to demonstrate example of global and local scope.

Basically, variables have two types of scopes, in which they can be
accessed. This C program, we will demonstrate the use of Global and
Local scope of variables.

global variable is constant for all code blocks or function in whole program.

local variable is limited only to particular function.

*/

#include<stdio.h>
#include<conio.h>
int pi=3.14;	//defining global variable
int main()
{
	float radius, area;	//defining local variable
	printf("Enter radius of circle: ");
	scanf("%f", &radius);
	
	area=pi*radius*radius;
	
	printf("\nThe area of circle is %.2f.",area );
}
