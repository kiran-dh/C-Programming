#include<stdio.h>
int main()
{
	char your_name[50];
	printf("Enter your name: ");
	//scanf() take single character 
	//but fgets() take multiple character
	fgets(your_name,sizeof(your_name),stdin);
	printf("Hey, %s", your_name);
	return 0;
}
