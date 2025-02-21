#include<stdio.h>

 int main()
 {
 	float p,t,i,r;
 	printf("Enter the principle amount: ");
 	scanf("%f",&p);
 	printf("\n");
 	
 	printf("Enter time in years: ");
 	scanf("%f",&t);
 	printf("\n");
 	
 	printf("Enter rate: ");
 	scanf("%f",&r);
 	printf("\n");
 	
 	i=(p*t*r)/100;
 	
 	printf("The simple interest is %.3f",i);
 	
 	return 0;
 }
