/*
13. C program to convert temperature from Fahrenheit to Celsius and
vice versa
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char temperature[50];
	float cel, fahrenheit, fah, celsius;
	printf("Enter \"f\" for fahrenheit to celsius conversion.");
	printf("\nEnter \"c\" for celsius to fahrenheit conversion.\n");
	scanf("%c", temperature);
	
	if(strcmp(temperature,"f")==0)
	{
		printf("Enter temperature in celsius: ");
		scanf("%f", &cel);
		fahrenheit=((9*cel)/5)+32;
		printf("\nThe temperature in fahrenheit scale is %.2f", fahrenheit);
	}
	else if(strcmp(temperature,"c")==1)
	{
		printf("\nEnter temperature in fahrenheit: ");
		scanf("%f", &fah);
		celsius=(5*(fah-32)/9);
		printf("\nThe temperature in celsius scale is %.2f", celsius);
	}
	else
	{
		printf("Invalid Choice!!!");
	}
	
	getch();
	return 0;
}
