// PROGRAM TO CONVERT SECONDS INTO TIME //

#include<stdio.h>
int main()
{
	int hours,minutes,sec;
	
	printf("Give the value of time in sec =");
	scanf("%d",&sec);
	
	hours = sec/3600;
	minutes = (sec - (3600*hours))/60;
	sec = (sec - (3600*hours)-(60*minutes));
	
	printf("hours=%d",hours);
	printf("\n");
	printf("minutes=%d",minutes);
	printf("\n");
	printf("seconds=%d",sec);
	
	return 0;
}
