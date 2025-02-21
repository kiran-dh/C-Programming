#include<stdio.h>
#include<conio.h>
int main()
{
	float m[10],average,sum=0;
	int i;
	printf("Enter the percentage of ten students");
	for(i=0;i<10;i++)
	{
		scanf("%f",&m[i]);
		sum+=m[i];
	}
	average=sum/10;
	printf("\nAverage=%.2f",average);
	for(i=0;i<10;i++)
	{
		printf("\nDeviation of %d \tstudent is %f",i+1,m[i]-average);
	}
	getch();
	return 0;
	
}
