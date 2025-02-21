#include<stdio.h>

void sort(char [][100]);

int main()
{
	char name[5][100];
	int i;
	
	printf("Enter name of 5 students: ");
	
	for(i=0; i<5; i++)
	{
		gets(name[i]);
	}
	
	sort(name);
	
	return 0;
}

void sort(char name[][100])
{
	char temp[100];
	int i, j;
	
	for(i=0; i<5; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(strcmp(name[i], name[j])>0)
			{
				strcpy(temp, name[i]);
				strcpy(name[i], name[j]);
				strcpy(name[j], temp);
			}
		}
	}
	
	printf("list of students after sorting in alphabetical order:\n");
	
	for(i=0; i<5; i++)
	{
		puts(name[i]);
	}
}
