/*

enter to Cartesian coordinate points and display the distance between them. 

*/

#include<stdio.h>
#include<math.h>
struct distance
{
	float x_coordinate;
	float y_coordinate;
}d;

int main()
{
	float dist;
	printf("Enter X-coordinate: ");
	scanf("%f", &d.x_coordinate);
	
	printf("\nEnter Y-coordinate: ");
	scanf("%f", &d.y_coordinate);
	
	dist = sqrt(pow(d.x_coordinate, 2) + pow(d.y_coordinate, 2));
	
	printf("\nDistance: %.2f", dist);
	
	return 0;
}
