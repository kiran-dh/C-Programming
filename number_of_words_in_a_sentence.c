#include<stdio.h>

int wcount(char[]);

int main()
{
	char str[100];
	printf("Enter a sentence:\n");
//	scanf("%[^\n]s", str);
	gets(str);
	
	int noOfWords;
	noOfWords=Wcount(str);
	
	printf("\nNumber of words in a string: %d", noOfWords);
	
	return 0;
}

int Wcount(char str[])
{
	int count=0,i=0;

	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			count++;
		}
		i++;
	}
	
	count++;
	
	return (count);
	
}
