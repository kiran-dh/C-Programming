/*
25. C program to define, modify and access a global variable.

In this C program, we will learn how to declare, define, access and
modify the value of Global variables in C programming language?

*/

#include<stdio.h>
#include<conio.h>
int num=34;		//defining global variable

int main()
{
	printf("\n1. The value of num is %d", num);
	
	num=300;	//modifying global variable
	printf("\n2. The value of num is %d", num);
	
	getch();
	return 0;
}
