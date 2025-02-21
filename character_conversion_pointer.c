#include<stdio.h>
void conversion(char *);

int main()
{
	char alphabet;
	printf("\nEnter a alphabet: ");
	scanf("%c", &alphabet);
	
	conversion(&alphabet);
	printf("\nThe corresponding character is %c", alphabet);
	
	return 0;
}

void conversion(char *alphabet)
{
	if(*alphabet>=97 && *alphabet<=122)
	{
		*alphabet=*alphabet-32;
	}
	else if(*alphabet>=65 && *alphabet<=97)
	{
		*alphabet *alphabet+32;
	}
}
