#include<stdio.h>
int main()
{
  char alpha;
  printf("Enter an alphabet: ");
  scanf("%c", &alpha);

  if(alpha=='a'||alpha=='e'||alpha=='i'|| alpha=='o'|| alpha=='u'|| alpha=='A' || alpha=='E' || alpha=='I' || alpha=='O'|| alpha=='U')
  {
    printf("\n%c is a vowel.", alpha);
  }
  else
  {
    printf("\n%c is a consonant.", alpha);
  }

  return 0;
}