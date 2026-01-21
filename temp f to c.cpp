// PROGRAM TO CONVERT FARENHIET TO CELCIUS //

#include<stdio.h>
int main()
{
	float c,f;
	
	printf("Enter the temperature in farenhiet= ");
	scanf("%f",&f);
	c= (f-32)*5.0/9.0;
	
	printf("Temperature in celcius =%f",c);
	
	return 0;
}
