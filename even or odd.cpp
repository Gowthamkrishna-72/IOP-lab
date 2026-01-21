// PROGRAM TO CHECK WHETHER IT IS A EVEN NUMBER OR ODD NUMBER //

#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter the number =");
	scanf("%d",&num);
	if (num==0)
	{printf("The given num is zero");
	}
	else if (num<0)
	{printf("The given num is negative");
	}	
	else if	(num % 2==0)
	{printf("The given num is even");
	}
	else
	{printf("The given num is odd");
	}
	return 0;
}
