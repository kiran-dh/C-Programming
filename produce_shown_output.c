/*
2. Write a program to produce the output as shown below:
x y expressions results
6 | 3 | x=y+3 | x=6
6 | 3 | x=y-2 | x=1
6 | 3 | x=y*5 | x=15
6 | 3 | x=x/y | x=2
6 | 3 | x=x%y | x=0

*/

#include <stdio.h>
int main()
{
  int x=6, y=3;
  printf("x\ty\texpressions\tresults");
 
 printf("\n%d%3c%5d%6c%9s%5c\tx=%d" ,x, '|', y, '|', "x+y=3", '|', y+3);
 printf("\n%d%3c%5d%6c%9s%5c\tx=%d" ,x, '|', y, '|', "x=y-2", '|', y-2);
 printf("\n%d%3c%5d%6c%9s%5c\tx=%d" ,x, '|', y, '|', "x=y*5", '|', y*5);
 printf("\n%d%3c%5d%6c%9s%5c\tx=%d" ,x, '|', y, '|', "x=x/y", '|', x/y);
 printf("\n%d%3c%5d%6c%9s%5c\tx=%d" ,x, '|', y, '|', "x=x%y", '|', x%y);
  return 0;
}
