#include<stdio.h>
int main()
{
	float radius, area;
	printf("Enter radius if circle: ");
	scanf("%f", &radius);
	
	area=3.14*radius*radius;
	printf("\nThe area of circle is %.2f",area);
	return 0;
}
