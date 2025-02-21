#include<stdio.h>
int main()
{
	char name[100], address[100];
	int age;
	float weight;
	
	puts("Name: ");
	gets(name);
	
	puts("\nAddress: ");
	gets(address);
	
	printf("\nAge(in years): ");
	scanf("%d", &age);
	
	printf("\nweight(in kg): ");
	scanf("%f", weight);
	
	puts("\nName: %s", name);
	puts("\nAddress: %s", address);
	printf("\nAge(in years): %d", age);
	printf("\nweight(in kg): %f", weight);
	
	return 0;
	
}
