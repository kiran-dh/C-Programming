#include<stdio.h>
int main()
{
	int v=189, *ptr;
	ptr=&v;
	
	printf("\nThe address of v: %u", &v);
	printf("\nThe address of v: %u", ptr);
	printf("\nThe address of ptr: %u", &ptr);
	printf("\nThe value stored in v: %d", v);
	printf("\nThe value stored in v: %d", *ptr);
	printf("\nThe value stored in ptr: %d", ptr);
	
	return 0;

}
