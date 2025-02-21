#include<stdio.h>
int main()
{
  char alpha;
  printf("Enter an alphabet: ");
  scanf("%c", &alpha);

  if ((alpha>='A' && alpha<='Z')||(alpha>='a' && alpha<='z'))
  {
    switch(alpha)
      {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
          printf("\n%c is a vowel.", alpha);
        break;
        default:
          printf("\n%c is a consonant.", alpha);
  }
  }
  else
  {
    printf("\n%c is not an alphabet.", alpha);
  }

  return 0;

}
