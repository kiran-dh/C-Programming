#include<stdio.h>
int main()
{
  float phy, chem, bio, math, eng, total, per;
  char rank[50];
  printf("Enter your marks obtained in following subjects:");
  printf("\nPhysics: ");
  scanf("%f", &phy);

  printf("\nChemistry: ");
  scanf("%f", &chem);

  printf("\nBiology: ");
  scanf("%f", &bio);

  printf("\nMath: ");
  scanf("%f", &math);

  printf("\nEnglish: ");
  scanf("%f", &eng);
  
  total= phy+chem+bio+math+eng;
  per=total/5;

  printf("\nYour academic result is as follows:");
  printf("\nPhysics: %.2f", phy);
  printf("\nChemistry: %.2f", chem);
  printf("\nBiology: %.2f", bio);
  printf("\nMath: %.2f", math);
  printf("\nEnglish: %.2f", eng);
  printf("\nTotal: %.2f", total);
  printf("\nPercentage: %.2f", per);

  if(per<40)
  {
    printf("\nRank: Fail");
    printf("\nDivision: No division");
  }
  else if(per>=40 && per<55)
  {
    printf("\nRank: Pass");
    printf("\nDivision: Third Division");
  }
  else if(per>=55 && per<65)
  {
    printf("\nRank: Pass");
    printf("\nDivision: Second Division");
  }

  else if(per>=65 && per<80)
  {
    printf("\nRank: Pass");
    printf("\nDivision: First Division");
  }
  else if(per>=80 && per<95)
  {
    printf("\nRank: Pass");
    printf("\nDivision: Distinction");
  }
  else if(per>=95 && per<=100)
  {
    printf("\nRank: Pass");
    printf("\nDivision: Extra Ordinary");
  }

  return 0;

}