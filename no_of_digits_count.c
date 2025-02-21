#include<stdio.h>
#include<conio.h>
int main()
{
	int n,count=0,rem;
	printf("Enter a number");
	scanf("%d",&n);
	while(n!=0)
	{
	  rem=n%10;
	  count=count+1;
	  n=n/10;	
	}
	printf("The no of digits are %d",count);
	getch();
	return 0;
}
