// PROGRAM TO CONVERT TIME IN DAYS,HRS,MINS TO SECONDS //

#include<stdio.h>
int main()
{
	float hours,days,minutes,sec;
	
	printf("Give the value of time in days =");
	scanf("%f",&days);
	printf("Give the value of time in hours =");
	scanf("%f",&hours);
	printf("Give the value of time in minutes =");
	scanf("%f",&minutes);
	sec = (days*86400) + (hours*3600) + (minutes*60);
	printf("The time in seconds is =%f",sec);
	
	return 0;
}
