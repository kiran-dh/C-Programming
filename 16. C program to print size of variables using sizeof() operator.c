/*
16. C program to print size of variables using sizeof() operator.

sizeof() is an operator in C language, which is used to print the
occupied size of a variable (or size of a value), in this C program, we
will print the size of different declared variables.

*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int a=5;
	float b=5.5;
	char ch[50]="h";
	
	printf("size of a=%d", sizeof(a));
	printf("\nsize of b=%d", sizeof(b));
	printf("\nsize of ch=%d", sizeof(ch));
	
	getch();
	return 0;
}
