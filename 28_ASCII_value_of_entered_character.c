/*
28. C program to print ASCII value of entered character.

This C program will read a character from the user and print its ASCII
code (value) on the screen.

*/

#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter any character: ");
	scanf("%c", &ch);
	
	printf("\nThe ASCII value of entered character is %d.", ch);
	
	getch();
	return 0;
}
