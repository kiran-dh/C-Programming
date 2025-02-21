/*4. Write a program to calculate simple interest for a given
 P=$6000, T=2years, R=3.5 p.a. */
 
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
 	int principal=6000, time=2, rate=3.5;
 	int simple_interest=(principal*time*rate)/100;
 	printf("The simple interest is %d.", simple_interest);
 	
 	getch();
 	return 0;
 }
