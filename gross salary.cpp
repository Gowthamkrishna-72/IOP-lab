// PROGRAM TO CALCULATE GROSS SALARY //

#include<stdio.h>
int main()
{
	float gross_salary,basic_salary,house_rent_allowence,other_allowence,other_earnings;
	printf("basic_salary =");
	scanf("%f",&basic_salary);
	printf("house_rent_allowence =");
	scanf("%f",&house_rent_allowence);
	printf("other_allowence =");
	scanf("%f",&other_allowence);
	printf("other_earnings =");
	scanf("%f",&other_earnings);
	
	gross_salary=basic_salary+house_rent_allowence+other_allowence+other_earnings;
	printf("gross_salary =%f",gross_salary);
	
	return 0;
	
}
