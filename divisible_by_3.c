#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	printf("Enter number");
	scanf("%d",&n);
	for(;n%3==0;)
	 printf("%d Divisible by 3",n--);
	getch();
	return 0;
}
