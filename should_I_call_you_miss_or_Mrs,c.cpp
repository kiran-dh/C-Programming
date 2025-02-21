//Program to take name and marital status of a girl and print name with miss or Mrs. accordingly.
#include<stdio.h>
int main()
{
	char name[20],status;
	printf("Enter name: ");
	gets(name);
	printf("Enter marital status(married(m) or single(s)): ");
	scanf(" %c",&status);
	
	switch(status)
	{
		case 'm': printf("Mrs. %s",name);
		break;
		
		case 's': printf("Miss. %s",name);
		break;
			}
			
	return 0;
}

