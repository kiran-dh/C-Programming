#include<stdio.h>
int main()
{
	char str[100];
	int count;
	printf("Enter any string: ");
	scanf("%[^\n]s", str);
	int i=0;
	
	while(str[i]!='\0')
	{
		count++;
		i++;
	}
	
	printf("\nThe length of string is: %d", count);
	
	return 0;
}
