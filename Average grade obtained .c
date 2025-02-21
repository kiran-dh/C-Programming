#include<stdio.h>
int main()
{
	float phy, che, bio, math, com, per, sum;
	printf("Enter marks obtained in physics: ");
	scanf("%f",&phy);
	
	printf("\nEnter marks obtained in chemistry: ");
	scanf("%f",&che);
	
	printf("\nEnter marks obtained in biology: ");
	scanf("%f",&bio);
	
	printf("\nEnter marks obtained in mathematics: ");
	scanf("%f", &math);
	
	printf("\nEnter marks obtained in computer: ");
	scanf("%f", &com);
	
	sum=phy+che+bio+math+com;
	per=sum/5;
	
	if(per>=90)
	{
		printf("Grade A");
	}
	else if(per>=80)
	{
		printf("Grade B");
	}
	else if(per>=70)
	{
		printf("Grade C");
	}
	else if(per>=60)
	{
		printf("Grade D");
	}
	else if(per>=40)
	{
		printf("Grade E");
	}
	else if(per<40)
	{
		printf("Grade F");
	}
	
	return 0;
}
