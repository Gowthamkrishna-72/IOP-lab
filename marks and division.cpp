// PROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISION //

#include<stdio.h>
int main()
{
	float sub1,sub2,sub3,sub4,sub5,per;
	
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
	per = (sub1+sub2+sub3+sub4+sub5)*100/500;
	
	if ( per>=60)
	{printf("Divison secured is FIRST");
    }
    else if ( per<60 && per>=50)
    {printf("Divison secured is SECOND");
	}
	else 
	{printf("Divison secured is THIRD");
	}
}
    
