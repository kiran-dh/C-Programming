#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.1418
int main()
{
	float x,y,r,q,angle;
	printf("Enter the values of x and y");
	scanf("%f %f",&x,&y);
	r=sqrt(x*x+y*y);
	q=atan(y/x);
	angle=(180*q)/pi;
	printf("The angle is %f and r=%f",angle,r);
	getch();
	return 0;
}
