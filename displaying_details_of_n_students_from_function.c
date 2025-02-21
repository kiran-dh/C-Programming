/*
 read RollNo, Name, Address, Age & average-marks of 12 students in 
the BCT class and display the details from function. 
*/
#include<stdio.h>
int n;
struct student{
	int roll;
	char name[100];
	char address[100];
	int age;
	float average_marks;
};

int read(struct student st[], int n)
{	
	int i;
	
	
	for(i=0; i<n; i++)
	{
		printf("Student %d:\n", i+1);
		printf("Enter student roll number: ");
		scanf("%d", &st[i].roll);
		fflush(stdin);
		printf("Enter student name: ");
		fgets(st[i].name, sizeof(st[i].name), stdin);
		
		printf("Enter student address: ");
		fgets(st[i].address, sizeof(st[i].address), stdin);
		
		printf("Enter student age: ");
		scanf("%d", &st[i].age);
		
		printf("Enter student average marks: ");
		scanf("%f", &st[i].average_marks);
		
		printf("\n");
	}
}

int st_details(struct student st[], int n)
{
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("Student %d:\n", i+1);
		printf("Roll number: %d", st[i].roll);
		printf("\nName: %s", st[i].name);
		printf("\nAddress: %s", st[i].address);
		printf("\nAge: %d", st[i].age);
		printf("\nAverage marks: %.2f", st[i].average_marks);
		printf("\n");
	}
}

int main()
{
	printf("How many students do you have?\n");
	scanf("%d", &n);
	struct student st[n];
	printf("\nReading students details: \n");
	read(st, n);
	printf("\nPrinting student details:\n");
	st_details(st, n);
	
	return 0;
}
