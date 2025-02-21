/*
27. C program to print value in Decimal, Octal, Hexadecimal using printf.

This C program will read an integer value using decimal format and print
the values in Octal, Decimal and Hexadecimal format using printf.

*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int number;
	printf("Enter any number: ");
	scanf("%d", &number);
	
	printf("\nDecimal value: %d", number);	//prints decimal value
	printf("\nOctal value: %o", number);	//prints octal value
	printf("\nHexadecimal value: %X", number); //prints hexadecimal value
	
	getch();
	return 0;
}
