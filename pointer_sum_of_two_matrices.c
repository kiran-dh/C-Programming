#include<stdio.h>

#define m 2
#define n 3

int main()
{
	int a[m][n], b[m][n], sum[m][n], i, j;
	
	printf("Enter first matrix:\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", *(a+i)+j);
		}
	}
	
	printf("\nEnter second matrix:\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", *(b+i)+j);
		}
	}
	
	printf("\nThe sum of matrix is:\n");
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			*(*(sum+i)+j)=*(*(a+i)+j) + *(*(b+i)+j);
			printf("\t%d", *(*(sum+i)+j) );
		}
		
		printf("\n");
	}
	
	return 0;
}
