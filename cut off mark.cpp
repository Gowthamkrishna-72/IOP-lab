// PROGRAM TO CALCULATE THE CUT OFF MARK //

#include<stdio.h>
int main()
{
	float m,p,c,e,cm;
	
	printf("Marks in mathematics out of 200 =");
	scanf("%f",&m);
	printf("Marks in physics out of 200 =");
	scanf("%f",&p);
	printf("Marks in chemistry out of 200 =");
	scanf("%f",&c);
	printf("Marks in entrance examination out of 100 =");
	scanf("%f",&e);
	
	cm= (m+p+c+e*2)/2;
	printf("cut off marks =%f",cm);
	
	return 0;
}
