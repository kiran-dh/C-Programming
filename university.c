#include<stdio.h>
#include<string.h>
int main()
{
char name[11]={'U','N','I','V','E','R','S','I','T','Y'};
for(int i=2;i<11;i+=2)
{
for(int j=0;j<i;j++)
printf("%c",name[j]);
printf("\n");
}
 for(int i=8;i>=0;i-=2)
{
    for(int j=0;j<i;j++)
        printf("%c",name[j]);
    printf("\n");

}
return 0;
}
