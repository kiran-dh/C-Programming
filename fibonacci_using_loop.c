#include<stdio.h>
int main()
{
	int n1=0, n2=1, n3, terms, i;
	printf("Enter number of terms: ");
	scanf("%d", &terms);
	
	printf("\nThe fibonacci series is:\n");
	printf("%d, %d, ", n1, n2);
	for(i=1; i<=terms; i++)
	{
		
		n3=n1+n2;
		if(n3>300)
		{
			break;
		}
		n1=n2;
		n2=n3;
		
		printf("%d, ", n3);
		
	}
	
	return 0;
}
