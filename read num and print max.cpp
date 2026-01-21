// PROGRAM TO READ NUMS AND PRINT MAX //

#include<stdio.h>
int main()
{
	float num1,num2,num3;
	
	printf("Enter num1 =");
	scanf("%f",&num1);
	printf("Enter num2 =");
	scanf("%f",&num2);
	printf("Enter num3 =");
	scanf("%f",&num3);
	
	if ( num1>num2)
		if(num1>num3)
		{printf("Maximum number is =%f",num1);
		}
		else 
		{printf("Maximum number is =%f",num3);
		}
	else if (num2>num1)
		if (num2>num3)
		{printf("Maximum number is =%f",num2);
		}
		else 
		{printf("Maximum number is =%f",num3);
		}
	else if (num3>num1) 
		if(num3>num2)
		{printf("Maximum number is =%f",num3);
		} 
		else 
		{printf("Maximum number is =%f",num2);
		}
}
