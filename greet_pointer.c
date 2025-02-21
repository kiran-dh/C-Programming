#include<stdio.h>
#include<string.h>

int main()
{
	char *greet = "NAMASKAR SIR";
	
	char name[40];
	
	printf("Enter your name: ");
	scanf("%[^\n]s", name);
	
	puts(greet);
	printf("\nNamaskar %s sir", name);
	
	return 0;
}
