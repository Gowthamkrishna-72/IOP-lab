// PROGRAM TO PERFORM LINEAR SEARCH ON AN ARRAY //

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of array(n) :");
	scanf("%d",&n);
	int a[n],r,i,found=0;
	printf("Enter the array :");
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);
	}
	printf("Enter element to search :");
	scanf("%d",&r);
	for(i=0;i<n;i++)
	{if(a[i]==r)
		{printf("Element %d is found at position %d\n",r,i+1);
		 found=1;
		 break;
		}
	}
	if(found==0)
	{printf("Element is not found in array");
	}
	return 0;
}
