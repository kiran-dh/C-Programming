#include<stdio.h>
#include<math.h>
int main()
{
	int n=5, i, j, p;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			p=pow(j, 2);
			printf("%d\t",p);
		}
		
		printf("\n");
	}
	
	return 0;
}
