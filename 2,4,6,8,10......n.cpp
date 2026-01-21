// PROGRAM TO PRINT 2,4,6,8,10,......N //

#include<stdio.h>
int main()
{	int num,i;
	printf("Enter the value =");
	scanf("%d",&num);
	
	for (i=2;i<=num;i=i+2)
	{printf("%d,",i);
	}
	return 0;
}
