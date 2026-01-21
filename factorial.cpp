// PROGRAM TO  CALCULATE FACTORIAL OF A NUM //

#include<stdio.h>
int main()
{
	int num,fact,i;
	fact =1;
	printf("Enter the non-negative number =");
	scanf("%d",&num);

	
	if ( num <0)
	{printf("Fatorial is not defined");
	}
	else 
		for (i=1;i<=num; i=i+1)
	   {fact=fact*i;
	    printf("Factorial of the number is =%d",fact);
	   }
	
	return 0;
}
	
	
