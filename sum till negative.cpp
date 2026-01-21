// PROGRAM TO READ NUMBERS TILL NEGATIVE NUMBER IS ENTERED AND SUM //

#include<stdio.h>
int main()
{
	int num,sum;
	
	for(;;)
	{
		printf("Enter the number");
		scanf("%d",&num);
		
		if (num<0)
			break;
		
		if (num >= 0)
		 sum=sum+num;
		
	}
	printf("The sum of non negative numbers is =%d",sum);
	return 0;
}
