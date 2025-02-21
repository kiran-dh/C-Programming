/*2.Write a program to declare two integer and one float variables then 
initialize them to 10, 15, and 12.6. Also print the variable values in 
the screen. */

#include<stdio.h>
#include<conio.h>
int main()
{
	int num1=10, num2=15;
	float num3=12.6;
	
	printf("%d\n%d\n%.1f", num1, num2, num3);
	
	getch();
	return 0;
}
