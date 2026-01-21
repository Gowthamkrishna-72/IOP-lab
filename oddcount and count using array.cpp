//PROGRAM TO READ AN ARRAY OF 10 INTRGER AND COUNT TOTAL NO OF ODD AND TOTAL NO OF EVERY ELEMENT //

#include<stdio.h>
int main()
{
	int num[10],i,oddcount=0,count=0;
	
	printf("Reading the numbers =");
	for(i=0;i<10;i++)
	{scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++)
	{	if(num[i]%2!=0)
		{oddcount++;
		}
	 count++;
	}
	printf("Total no of odd =%d",oddcount);
	printf("\nTotal no of every element =%d",count);
	return 0;
}
