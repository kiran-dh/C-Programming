#include<stdio.h>
int main()
{
	int b,c,h,a;
	
	printf("Enter the parallel bases and height of trapezium");
	scanf("%d %d %d ",&b,&h,&c);
	
	a=(b+c)*h/2;
	
	printf("the area of trapezium is %d ",a);
	
	return 0;
}
