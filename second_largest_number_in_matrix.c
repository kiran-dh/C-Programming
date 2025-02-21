#include<stdio.h>

int main()
{
	int m, n, i, j;
	printf("Enter order of matrix: ");
	scanf("%d%d", &m, &n);
	
	int num[m][n], large, second_large;
	
	printf("\nEnter matrix elements:\n");
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &num[i][j]);
		}
	}
	
	large=num[0][0];
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(num[i][j]>large)
			{
				second_large=large;
				large=num[i][j];
			}
			else
			{
				second_large=num[i][j];
				num[i][j]=large;
			}
		}
	}
	
	printf("\nSecond largest number: %d", second_large);
	
	return 0;
}
