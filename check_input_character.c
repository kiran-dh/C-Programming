/*
6. Write a program to take a character input from keyboard and check if it is a 
number or alphabet or special character using ASCII CODE. Again check if 
the character is using character functions below:
a) Alphanumeric (isalnum)
b) Blank character (isblank)
c) Alphabetic (isalpha)
d) Control character (iscntrl)
e) Number-digit (isdigit)
f) Upper case (isupper)
g) Lower case (islower)
h) Hexadecimal digit (ixdigit)
i) Graphical character (isgraph)

*/

#include<stdio.h>
#include<ctype.h>
int main()
{
  char ch;
  printf("Enter a character: ");
  scanf("%c", &ch);

  if(isalnum(ch))
  {
    printf("\nThe entered character is alphanumeric.");
  }
  else if(isblank(ch))
  {
    printf("\nThe entered character is a blank character.");
  }
  else if(isalpha(ch))
  {
    printf("\nThe entered character is alphabet.");
  }
  else if(iscntrl(ch))
  {
    printf("\nThe entered character is a control character.");
  }
  else if(isdigit(ch))
  {
    printf("\nThe entered character is a number digit.");
  }
  else if(isupper(ch))
  {
    printf("\nThe entered character is an uppercase character.");
  }
  else if(islower(ch))
  {
    printf("\nThe entered character is a lowercase character.");
  }
  else if(isxdigit(ch))
  {
    printf("\nThe entered character is a hexadecimal digit.");
  }
  else if(isgraph(ch))
  {
    printf("\nThe entered character is a graphical character.");
  }

  return 0;

}