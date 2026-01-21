// PROGRAM TO FINDOUT MAX AND MIN FROM N NOS //

#include<stdio.h>
int main()
{
	int num,max=0,min=1;
	for(;;)
	{
		printf("Enter the number");
		scanf("%d",&num);
		
		if (num==0)
			break;
		
		if(num>max)
		{ max=num;
		}
		else if (num<=min)
		{ min=num;
		}
	}
	printf("Maximum is %d",max);
	printf("\nMinimum is %d",min);
	return 0;
}
