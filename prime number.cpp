// PROGRAM TO CHECK A NUMBER WHETHER IT IS A PRIME OR NOT //

#include<stdio.h>
int main ()
{
	int num,b,flag=0;
	printf("Enter the positive number =");
	scanf("%d",&num);
	
	if (num==0)
	{printf("the given num is neither prime nor composite");
	}
	if (num==1)
	{printf("the given num is neither prime nor composite");
	}
	for(b=2;b<num;b++)
	{	if (num%b==0)
			{flag=1;
			 break;
			} 
	}
	if (flag==1)
	{printf("Not prime ");
	}
	else 
	{printf(" prime ");
	}
}
