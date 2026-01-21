// PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF POSITIVE,NEGATIVR,ZERO ELEMENTS //

#include<stdio.h>
int main()
{
	int num[10],i,positivecount=0,negativecount=0,zerocount=0;
	
	printf("Reading the numbers =");
	for(i=0;i<10;i++)
	{scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++)
	{	if(num[i]==0)
		{zerocount++;
		}
		else if(num[i]>0)
		{positivecount++;
		}
		else if(num[i]<0)
		{negativecount++;
		}
	}
	printf("Total no of postive elements =%d",positivecount);
	printf("\nTotal no of zero elements =%d",zerocount);
	printf("\nTotal no of negative elements =%d",negativecount);
	return 0;
}
