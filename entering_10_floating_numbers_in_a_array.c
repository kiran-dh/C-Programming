/*
1. Write a program to enter 10 floating numbers in an array and 
display it.

*/

#include<stdio.h>
int main()
{
	float num[10];
	int i;
	for(i=0; i<10; i++)
	{
		printf("Enter %d number: ", i+1);
		scanf("%f", &num[i]);
		printf("\n");
	}
	
	printf("\nDisplaying 10 numbers:\n");
	for(i=0; i<10; i++)
	{
		printf("%.0f\t", num[i]);
	}
	
	return 0;
}
