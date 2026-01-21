// PROGRAM TO PRINT ELECTRICITY BILL //

#include<stdio.h>
int main()
{
	int units;
	float bill;
	
	printf("Enter the tatal units consumed =");
	scanf("%d",&units);
	
	if (units>=0 && units<=200)
	{ bill = units *0.50;
	}
	else if (units>200 && units<=400)
	{ bill =100 +(units-200) *0.65;
	} 
	else if (units>400 && units<=600)
	{ bill =230 +(units-400) *0.80;
	} 
	else if (units>600)
	{ bill =425 +(units-600) *1.25;
	} 
	else
	{printf("Enter the correct no of units");
	}
	printf("The amount to be paid by the consumer is:Rs. %.2f",bill);
	return 0;
}
