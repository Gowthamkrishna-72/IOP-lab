// PROGRAM TO CONVERT TIME TO NUMBER OF DAYS,HOURS,MINUTES //

#include<stdio.h>
int main()
{
	float hours,days,minutes,sec;
	
	printf("Give the value of time in sec =");
	scanf("%f",&sec);
	hours= sec/3600;
	days= sec/86400;
	minutes= sec/60;
	printf("The time in hours is=%f",hours);
	printf("\n");
	printf("The time in days is=%f",days);
	printf("\n");
	printf("The time in minutes is=%f",minutes);
	
	return 0;
	
}
