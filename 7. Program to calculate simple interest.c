/*7. Program to calculate simple interest. */
#include<stdio.h>
#include<conio.h>

int main()
{
	float principal, rate, time, simple_interest;
	printf("Enter Principal: ");
	scanf("%f", &principal);
	
	printf("\nEnter rate: ");
	scanf("%f", &rate);
	
	printf("\nEnter time: ");
	scanf("%f", &time);
	
	simple_interest=(principal*rate*time)/100;
	
	printf("\nSimple interest: %.2f", simple_interest);
	
	getch();
	return 0;
	
}
