// PROGRAM TO CALCULATE TABLE OF ANY NUM //

#include<stdio.h>
int main()
{
	int num,i,range,res;
	
	printf("Give the num =");
	scanf("%d",&num);
	printf("Give the range =");
	scanf("%d",&range);
	
	for (i=1;i<=range;i++)
	{res =num*i;
	printf("%d x %d =%d\n",num,i,res);
	}
	return 0;
}
