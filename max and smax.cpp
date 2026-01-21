// PROGRAM TO FINDOUT MAX AND SECOND MAX FROM N NOS //

#include<stdio.h>
int main()
{
	int num,max=0,smax=0;
	for(;;)
	{
		printf("Enter the number");
		scanf("%d",&num);
		
		if (num==0)
			break;
		
		if(num>max)
		{ 	smax=max;
			max=num;
		}
		else if (num>smax)
		{	smax=num;
		}
	}
	printf("Maximum is %d",max);
	printf("\nSecond Maximum is %d",smax);
	return 0;
}
