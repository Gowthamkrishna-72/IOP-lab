// PROGRAM TO READ N NOS AND FINDOUT MAX AND SECOND MAX //

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
	int max=num[0],smax=num[0];
	for(i=0;i<n;i++)
	{	if(max<num[i])
		{smax=max;
		 max=num[i];
		}
		else if(smax<num[i])
		{smax=num[i];
		}
	}
	printf("Maximum is =%d",max);
	printf("Second maximum is =%d",smax);
	return 0;
}
