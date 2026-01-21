//PROGRAM TO PRINT 1,4,9,16,25......N //

#include<stdio.h>
int main()
{	int num,i,val;
	printf("Enter the value =");
	scanf("%d",&num);
	
	for (i=1;i<=num;i++)
	{	val=i*i;
		printf("%d,",val);
	}
	return 0;
}
