/*
19. C program to find area of a rectangle.

This c program will read the length and breadth of a rectangle and
calculate its area; the area of the rectangle will be printed on the screen.
*/

#include<stdio.h>
#include<conio.h>

int main()
{
	float length, breadth, area;
	printf("Enter length of rectangle: ");
	scanf("%f", &length);
	
	printf("\nEnter breadth of rectangle: ");
	scanf("%f", &breadth);
	
	area=length*breadth;
	
	printf("\nArea of rectangle: %.2f", area);
	
	getch();
	return 0;
}
