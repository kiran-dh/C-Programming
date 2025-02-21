/*
5. Demonstrate the differences among getch(), getche(), getchar(). Demonstrate 
the difference between scanf() & gets(), printf() & puts().
*/

#include<stdio.h>
#include<conio.h>
int main()
{
  char ch;
  printf("Enter a character:");
  ch=getch();   //getch() is used to read a character from the keyboard without echoing it to the screen
  printf("\nThe entered character is: %c", ch);

  printf("\nEnter a character: ");
  ch=getche();  //getche() is used to read a character from the keyboard and echo it to the screen
  printf("\nThe entered character is %c", ch);

  printf("\nEnter a character: ");
  ch=getchar();   //getchar() is used to read a character from the keyboard and echo it to the screen
  printf("\nThe entered character is: %c", ch);


  char chr[50];
  printf("\nEnter a string: "); //printf() is used to display a string on the screen
  scanf("%s", chr); //scanf() is used to read a string from the keyboard
  printf("\nThe entered string is: %s", chr);

  char str[50];
  puts("\nEnter a string: "); //puts() is used to display a string on the screen
  // gets( c); //gets() is used to read a string from the keyboard

  fgets(str, sizeof(str), stdin); //fgets() is used to read a string from the keyboard
  printf("\nThe entered string is: %s", str);

  return 0;
}