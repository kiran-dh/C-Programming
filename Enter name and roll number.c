//1. Write a program to display your name and roll number in C.

#include<stdio.h>
#include<conio.h>
int main()
{
	int roll_no;
	char name[100];
	printf("Enter your name: ");
	scanf("%s", name);
	
	printf("\nEnter your roll number: ")
	scanf("%d",&roll_no);
	
	printf("\nName: %s", name);
	printf("\nRoll number: %d",roll_no);
	
	getch();
	return 0;
}
