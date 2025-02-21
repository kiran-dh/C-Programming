/*
24. C program to read Formatted Time Once through Scanf in C Language.

In this C program we will learn how to read formatted time using scanf(),
the input formatted will be "HH:MM:SS".
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int hour, minute, second;
	printf("Enter time (in HH:MM:SS)  ");
	scanf("%02d:%02d:%02d", &hour, &minute, &second);
	
	printf("\nEntered time is %02d:%02d:%02d", hour, minute, second);
	
	getch();
	return 0;
	
	
}
 

 


