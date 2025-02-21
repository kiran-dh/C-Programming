#include<stdio.h>

int reverse(int);
int main()
{
 	int n,r;
 	printf("Enter number:");
 	scanf("%d",&n);
 	
 	r=reverse(n);
 	
	printf("Reverse number is %d",r);
 	
 	return 0;
}
int reverse(int n)
{
 	int rem,s=0;
 	while(n!=0)
	{
 		rem=n%10;
 		s=s*10+rem; 
 		n=n/10;
	}
return s;
}
