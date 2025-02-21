#include<stdio.h>

int main()
{
	FILE *fptr;
	fptr = fopen("filec.txt", "r");
	
	int count=0;
	char ch;
	
	if(fptr==NULL)
	{
		printf("File can`t be open.");
	}
	
//	fscanf(fptr, "%s", ch);
	
	while(ch=fgetc(fptr) != EOF)
	{
		count++;
	}
	
	printf("\nThe number of characters in a file is %d.", count);
	
	fclose(fptr);
	
	return 0;
}
