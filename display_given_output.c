/*
3. Given x=3.0, y=12.5, z= 523.3, A=300.0, B=1200.5, C=5300.3, Write a 
program to display the following:
X y z= 3.0| 12.5| 523.3|
A B C= 300.0| 1200.5| 5300.3|
---------------------------------------------------------------------
X y z= |3.00 |12.50 |523.30
A B C= |300.00 |1200.50 |52300.30
*/

#include<stdio.h>
int main()
{
  float x=3.0, y=12.5, z=523.3, A=300.0, B=1200.5, C=5300.3;
  printf("X\ty\tz=\t%.1f  |\t%.1f  |\t%.1f |", x, y, z);
  printf("\nA\tB\tC=\t%4.1f|\t%.1f|\t%.1f|", A, B, C);
  printf("\n------------------------------------------------------------");
  printf("\nX\ty\tz=\t|%3.2f\t|%5.2f\t |%.2f", x, y, z);
  printf("\nA\tB\tC=\t|%3.2f\t|%.2f |%.2f", A, B, C);
  return 0;
}