/* 6. Write a program to calculate area of an ellipse having its minor
axes=7cm & major axes=10cm. */

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.1415
int main()
{
	int major_axes=10, minor_axes=7, area_of_ellipse;
	area_of_ellipse=PI*major_axes*minor_axes;
	
	printf("The area of ellipse is %d.", area_of_ellipse,);
	
	getch();
	return 0;
}
