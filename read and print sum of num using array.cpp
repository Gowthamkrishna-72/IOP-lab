// PROGRAM TO READ AND ARRAY OF 10 INTRGER AND PRINT SUM OF NUMBERS //

#include<stdio.h>
int main()
{
	int num[10],i,sum=0;
	printf("Reading the numbers =");
	for(i=0;i<10;i++)
	{ scanf("%d",&num[i]);
	  sum=sum+num[i];
	}
	printf("Sum of numbers is =%d",sum);
	return 0;
}
