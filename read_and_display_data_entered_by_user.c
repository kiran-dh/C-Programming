#include<stdio.h>

int main()
{
	struct student
	{
		char name[50];
		int roll;
		float marks;
		char remark;
	};
	
	struct student s;
	
	printf("Enter name: ");
	scanf("%[^\n]s", s.name);
	
	
	fflush(stdin);
	
	printf("\nEnter roll number: ");
	scanf("%[^\n]s", &s.roll);
	
	printf("\nEnter marks: ");
	scanf("%f", &s.marks);
	
	fflush(stdin);
	printf("\nEnter remarks P for pass and F for fail: ");
	scanf("%c", &s.remark);
	
	printf("\nStudent Information\n");
	
	printf("Name: %s", s.name);
	printf("\nRoll Number: %d", s.roll);
	printf("\nMarks: %.2f", s.marks);
	printf("\nRemarks: %c", s.remark);
	
	return 0;
}
