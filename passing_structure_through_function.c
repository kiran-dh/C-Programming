/*
a function which accepts structure as argument and returns structure to the calling 
program.
*/

#include<stdio.h>

struct scholar
{
	char name[100];
	int papers;
	int research;
};

int print(struct scholar scholar)
{
	printf("Scholar name: %s", scholar.name);
	printf("Published research papers: %d", scholar.papers);
	printf("Contributed in research: %d", scholar.research);
}

int main()
{
	struct scholar sch;
	
	printf("Enter name of scholar: ");
	fgets(sch.name, sizeof(sch.name), stdin);
	
	printf("Numbers of papers published: ");
	scanf("%d", &sch.papers);
	
	printf("\nNumber of research involved: ");
	scanf("%d", &sch.research);
	
	printf("\n");
	
	print(sch);
	
	return 0;
}
