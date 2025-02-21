/*
Pass the structures defined in Question 1 into a function and read the structure member 
and display the values from the function (use structure pointer).
*/

#include<stdio.h>
struct scholar
{
	char name[100];
	int papers;
	int research;
};

int print(struct scholar *scholar)
{
	printf("Scholar name: %s", scholar->name);
	printf("Published research papers: %d", scholar->papers);
	printf("Contributed in research: %d", scholar->research);
}

int main()
{
	struct scholar sch, *scholar;
	
	printf("Enter name of scholar: ");
	fgets(sch.name, sizeof(sch.name), stdin);
	
	printf("Numbers of papers published: ");
	scanf("%d", &sch.papers);
	
	printf("\nNumber of research involved: ");
	scanf("%d", &sch.research);
	
	scholar = &sch;
	
	printf("\n");
	
	print(&sch);
	
	return 0;
}
