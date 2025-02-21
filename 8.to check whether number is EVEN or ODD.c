/*8.Program to check whether number is EVEN or ODD. */

#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d", &num);
	
	if(num%2==0)
	{
		printf("The number %d is EVEN.",num);
	}
	else
	{
		printf("\nThe number %d is ODD.", num);
	}
	
	getch();
	return 0;
}
