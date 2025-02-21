#include<stdio.h>

struct student{
	char name[50];
	int roll;
	float marks;
	char remark;
};

int main()
{
	struct student s[5];
	int i;
	float tempForMarks;
	
	for(i=0; i<5; i++)
	{
		printf("\nEnter information of student No %d\n", i+1);
		
		fflush(stdin);
		printf("Name: ");
		scanf("%[^\n]s", s[i].name);
		
		printf("\nRoll: ");
		scanf("%d", &s[i].roll);
		
		printf("\nMarks: ");
		scanf("%f", &s[i].marks);
		
		printf("\nRemark: ");
		s[i].remark=getche();
	}
	
	printf("\n\nThe Detail Information is\n");
	printf("Student Name\tRoll\tMarks\tRemarks");
	printf("\n--------------------------------------------------------------------\n");
	for(i=0; i<5; i++)
	{
		printf("%s\t\t%d\t%.2f\t%c\n", s[i].name, s[i].roll, s[i].marks, s[i].remark);
	}
	
	return 0;
}
