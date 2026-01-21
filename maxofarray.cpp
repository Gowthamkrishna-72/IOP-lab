// FUNCTION TO READ AN ARRAY AND FIND MAX //

#include<stdio.h>
int maxofarray(int arr[],int n);
int main ()
{
	int n,arr[n],i;
	printf("Enter the n :");
	scanf("%d",&n);
	printf("Enter the %d integers :",n);
	for(i=0;i<n;i++)
	{scanf("%d", &arr[i]);
	}
	printf("Max of array =%d",maxofarray(arr,n));
	return 0;
}
int maxofarray(int arr[],int n)
{
	int max=arr[0],i;
	for(i=0;i<n;i++)
	{ if(max<arr[i])
	  {max=arr[i];
	  }
	}
	return max;
}
