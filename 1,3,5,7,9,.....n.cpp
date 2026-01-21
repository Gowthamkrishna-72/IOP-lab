// PROGRAM TO PRINT 1,3,5,7,9......N //

#include<stdio.h>
int main()
{	int num,i;
	printf("Enter the value =");
	scanf("%d",&num);
	
	for (i=1;i<=num;i=i+2)
	{printf("%d,",i);
	}
	return 0;
}
