// PROGRAM TO CALCULATE THE SIMPLE INTREST //

#include<stdio.h>
int main()
{
	int p,r,t,si;
	printf(" Enter the value of principle amount ");
	scanf("%d",&p);
	printf(" Enter the value of rate of intrest ");
	scanf("%d",&r);
	printf(" Enter the value of time period ");
	scanf("%d",&t);
	
	si= p*r*t/100;
	printf("\nSimple intrest is =%d",si);
	
	return 0;
}


