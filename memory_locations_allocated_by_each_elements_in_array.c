#include<stdio.h>
int main()
{
  int n;
  printf("How many numbers you want to enter?\n");
  scanf("%d", &n);

  int num[n], i;

  printf("\nEnter numbers: ");
  for(i=0; i<n; i++)
  {
    scanf("%d", &num[i]);
  }

  printf("\nThe memory locations are: \n");

  for(i=0; i<n; i++)
  {
    printf("%u\n", &num[i]);
  }

  return 0;

  
}