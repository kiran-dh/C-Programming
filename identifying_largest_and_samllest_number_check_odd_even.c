#include<stdio.h>
int main()
{
  int num1, num2, num3;
  printf("Enter three numbers:");
  printf("\nnum1: ");
  scanf("%d", &num1);

  printf("\nnum2: ");
  scanf("%d", &num2);

  printf("\nnum3: ");
  scanf("%d", &num3);

  if(num1>num2 && num1>num3)
  {
    printf("\n%d is the largest number", num1);
    if(num1%2==0)
    {
      printf("\n%d is an even number", num1);
    }
    else
    {
      printf("\n%d is an odd number", num1);
    }
  }
  else if(num2>num1 && num2>num3)
  {
    printf("\n%d is the largest number", num2);
    if(num2%2==0)
    {
      printf("\n%d is an even number", num2);
    }
    else
    {
      printf("\n%d is an odd number", num2);
    }
  }
  else
  {

    printf("\n%d is the largest number", num3);
    if(num3%2==0)
    {
      printf("\n%d is an even number", num3);
    }
    else
    {
      printf("\n%d is an odd number", num3);
    }
  }

  return 0;

}