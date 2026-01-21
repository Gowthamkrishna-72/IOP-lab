// PROGRAM TO PRINT SUM OF INDIVIDUAL  DIGIT OF A NUMBER //

#include<stdio.h>
int main()
{
	int num,q,sum=0;
	printf("Enter the num =");
	scanf("%d",&num);
	
	while(num!=0)
	{	q=num%10;
		sum= sum+q;
		num=num/10;
	}
	printf("The individual sum of digits is=%d",sum);
	return 0;
}
