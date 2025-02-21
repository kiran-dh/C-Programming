#include<stdio.h>

struct company
{
	char name[100];
	char address[100];
	int phone_num;
	int noOfemployee;
};


int main()
{
	int n;
	char comp_name[100], comp_add[100];
	printf("How many employee you have?\n");
	scanf("%d", &n);
	fflush(stdin);
	printf("Company Name: ");
	fgets(comp_name, sizeof(comp_name), stdin);
	
	printf("\nCompany Address: ");
	fgets(comp_add, sizeof(comp_add), stdin);
	
	printf("\n");
	
	struct company emp[n];
	int i;
	
	
	
	for(i=0; i<n; i++)
	{
		fflush(stdin);
		printf("Employee Name: ");
		fgets(emp[i].name, sizeof(emp[i].name), stdin);
		
		printf("Employee Address: ");
		fgets(emp[i].address, sizeof(emp[i].address), stdin);
		
		printf("Employee phone number: ");
		scanf("%d", &emp[i].phone_num);
		
		printf("Employee number: ");
		scanf("%d", &emp[i].noOfemployee);
		
		printf("\n");
	}
	
	for(i=0; i<n; i++)
	{
		printf("Employee name: %s", emp[i].name);
		printf("Employee address: %s", emp[i].address);
		printf("Employee Phone number: %d", emp[i].phone_num);
		printf("Employee number: %d", emp[i].noOfemployee);
		printf("\n");
	}
	
	return 0;
}
