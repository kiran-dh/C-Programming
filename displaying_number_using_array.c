#include<stdio.h>
int main()
{
  int n;
  printf("How many numbers you want to display?\n");
  scanf("%d", &n);

  int num[n], i;
  printf("Enter numbers:\n");
  for(i=0; i<n; i++)
  {
    scanf("%d", &num[i]);
  }

  printf("\nThe numbers are: ");
  for (i=0; i<n; i++)
  {
    printf("%d\t", num[i]);
  }

  return 0;
}