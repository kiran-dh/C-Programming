/*1.Write a program to take input of name, rollno and marks obtained 
by a student in 5 subjects each have its 100 full marks and display 
the name, rollno with percentage score secured.*/

#include<stdio.h>
#include<conio.h>
int main()
{
	char name[100];
	int roll_no;
	float physics, engg_drawing, engg_workshop, c_programming, FEE, math;
	
	// taking input from student
	//name
	printf("Enter your name: ");
	fgets(name, sizeof(name),stdin);
	
	//roll number
	printf("\nEnter your roll number: ");
	scanf("%d", &roll_no);
	
	// marks obtained in physics
	printf("\nEnter marks obtained in physics: ");
	scanf("%f", &physics);
	
	// marks obtained in engineering drawing
	printf("\nEnter marks obtained in engineering drawing: ");
	scanf("%f", &engg_drawing);
	
	// marks obtained in engineering workshop
	printf("\nEnter marks ontained in engineering workshop: ");
	scanf("%f", &engg_workshop);
	
	// marks obtained in c programming
	printf("\nEnter marks obtained in c programming: ");
	scanf("%f", &c_programming);
	
	// marks obtained in math
	printf("\nEnter marks obtained in math: ");
	scanf("%f", &math);
	
	float total_marks=physics+engg_drawing+engg_workshop+c_programming+math;
	
	float percentage= total_marks/5;
	
	// printing name, roll no, percentage secured 
	printf("\nName: %s", name);
	printf("\nRoll no.: %d", roll_no);
	printf("\nMarks secured: %.2f", total_marks);
	printf("\nPercentage secured: %.2f", percentage);
	
	getch();
	return 0;
	
}
