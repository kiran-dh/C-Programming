#include<stdio.h>
#define PI 3.1415326
int main()
{
	float major, minor, area;
	printf("Enter major axis of ellipse: ");
	scanf("%f",&major);
	
	printf("\nEnter minor axis of ellipse: ");
	scanf("%f",&minor);
	
	area=PI*major*minor;
	
	printf("\nArea of ellipse is %.3f .",area);
	
	getch();
	return 0;
}
