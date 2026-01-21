// PROGRAM TO REVERSE OF AN ARRAY //

#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number of terms =");
	scanf("%d",&n);
	int num[n];
	printf("Reading the numbers =");
	for(i=0;i<n;i++)
	{scanf("%d",&num[i]);
	}
	printf("Reverse of an array =");
	for(i=n-1;i>=0;i--)
	{printf("\t%d",num[i]);
	}
	return 0;
}
