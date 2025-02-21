#include<stdio.h>

struct date{
	int day;
	int month;
	int year;
};

struct employee{
	char name[50];
	int id;
	struct date dob;
	float salary;
}emp;

int main()
{
	printf("Name of employee: ");
	scanf("%[^\n]s", emp.name);
	
	printf("ID of employee: ");
	scanf("%d", &emp.id);
	
	printf("Day of birthday: ");
	scanf("%d", &emp.dob.day);
	
	printf("Month of birthday: ");
	scanf("%d", &emp.dob.month);
	
	printf("Birth Year: ");
	scanf("%d", &emp.dob.year);
	
	printf("Salary of employee: ");
	scanf("%f", &emp.salary);
	
	printf("\nThe Detail Information of Entered employee:\n");
	
	printf("Name\tID\tDay\tMonth\tYear\tSalary");
	printf("\n_______________________________________________________________________\n");
	printf("%s\t%d\t%d\t%d\t%d\t\%.2f", emp.name, emp.dob.day, emp.dob.month, emp.dob.year, emp.salary);
	
	return 0;
}
