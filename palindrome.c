#include<stdio.h>

int main()
{
	int n, num, rev=0;
	int digit;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	n=num;
	
	while(num!=0)
	{
		digit=num%10;
		rev=rev*10+digit;
		num/=10;
	}
	
	
	if(n==rev)
		printf("\n %d is a palindrome.", n);
		
	else
		printf("\n %d is not a palindrome.", n);
		
	return 0;
}
