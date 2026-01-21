// PROGRAM TO CALCULATE TOTAL MARKS AND PERCENTAGE //

#include<stdio.h>
int main()
{
	float sub1,sub2,sub3,sub4,sub5,total,percentage;
	
	printf("Enter the marks of sub1 =");
	scanf("%f",&sub1);
	printf("Enter the marks of sub2 =");
	scanf("%f",&sub2);
	printf("Enter the marks of sub3 =");
	scanf("%f",&sub3);
	printf("Enter the marks of sub4 =");
	scanf("%f",&sub4);
	printf("Enter the marks of sub5 =");
	scanf("%f",&sub5);
	total= sub1+sub2+sub3+sub4+sub5;
	printf("TOTAL MARKS =%d",total);
	percentage=total*100/500;
	printf("percentage =%f",percentage);
	
	return 0;
	
}
