/*
17. C program to demonstrate examples of escape sequences.

Escape sequences are the set of characters followed by the escape (\),
in this program, we will learn to use different escape sequences like
new line character, backspace character etc.
*/

#include<stdio.h>
#include<conio.h>

int main()
{
	printf("this gives space of one tab\t.");
	printf("\n this prints new line.");
	printf("\nthis gives backspace\b for real");
	printf("\nhello\\world"); // this prints backslash
	
	getch();
	return 0;
}
