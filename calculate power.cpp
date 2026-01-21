// PROGRAM TO CALCULATE POWER WITHOUT USING HEADER FILE <math.h> //

#include<stdio.h>
int main()
{
	int a,b,c,i;
	printf("Enter the base num =");
	scanf("%d",&a);
	printf("Enter the power num =");
	scanf("%d",&b);
	c =1;
	if (b < 0)
	{printf("Negative exponents are not defined");
	}
	for (i=0; i<b ;i++)
		{c=c*a;
		}
	
	printf("The %d to the power of %d =%d",a,b,c);
	return 0;
	
}
