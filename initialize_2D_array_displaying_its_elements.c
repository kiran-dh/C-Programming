#include<stdio.h>
int main()
{
  int num[2][3]={{1, 2, 3}, {34, 45, 29}}, i, j;
  printf("The numbers in given array is:\n");

  for(i=0; i<2; i++)
  {
    printf("\nRow number %d:\n", i+1);
    for(j=0; j<3; j++)
    {
      printf("%d\t", num[i][j]);
    }
  }

  return 0;
}
