#include<stdio.h>

struct employee{
	char name[50];
	int id;
	float salary;
};

void display(struct employee e)
{
	printf("\nName\t\tID\t\tSalary");
	printf("\n-----------------------------------------------------");
	printf("\n%st\t%d\t\t%.2f", e.name, e.id, e.salary);
}

int main()
{
	struct employee emp;
	printf("\nEmployee Name: ");
	scanf("%[^\n]s", emp.name);
	
	printf("\nEmployee id: ");
	scanf("%d", &emp.id);
	
	printf("\nEmployee Salary: ");
	scanf("%f", &emp.salary);
	
	printf("\nThe entered employee information is:\n");
	display(emp);
	
	return 0;
}
