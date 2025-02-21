#include<stdio.h>

int global_var=0;
void demonstrate_var();

int main()
{
	int i;
	
	for(i=1; i<=3; i++)
	{
		printf("Function call %d: \n", i);
		demonstrate_var();
		printf("\n");
	}
	return 0;
}

void demonstrate_var()
{
	int local_var=0;
	static int static_var=0;
	
	local_var++;
	static_var++;
	global_var++;
	
	printf("Local Variable: %d", local_var);
	printf("\nstatic Variable: %d", static_var);
	printf("\nGlobal Variable: %d", global_var);
	printf("\n");
}
