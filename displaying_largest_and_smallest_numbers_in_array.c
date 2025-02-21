/*
2. Write a program to display largest and smallest element of an 
array defined in Q. No. 1.
*/

#include<stdio.h>
int main()
{
	float num[10];
	int i;
	for(i=0; i<10; i++)
	{
		printf("Enter %d number: ", i+1);
		scanf("%f", &num[i]);
		printf("\n");
	}
	
	float large=num[0], small=num[0], temp;
	
	for(i=0; i<10; i++)
	{
		if(large<num[i])
		{
			temp=large;
			large=num[i];
			num[i]=temp;
		}
	}
	
	for(i=0; i<10; i++)
	{
		if(small>num[i])
		{
			temp=small;
			small=num[i];
			num[i]=temp;
		}
	}
	
	printf("\nlargest number: %.2f", large);
	printf("\nsmallest number: %.2f", small);
	return 0;
}
