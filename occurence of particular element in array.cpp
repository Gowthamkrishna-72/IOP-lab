// PROGRAM TO READ AN ARRAY AND PRINT OCCURENCE OF ANY PARTICULAR ELEMENT IN THE ARRAY //

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of array(n) :");
	scanf("%d",&n);
	int a[n],r,i,found=0,count=0;
	printf("Enter the array :");
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);
	}
	printf("Enter element to search :");
	scanf("%d",&r);
	for(i=0;i<n;i++)
	{if(a[i]==r)
		{found=1;
		 count++;
		}
	}
	printf("Occurence of the element %d is = %d",r,count);
	if(found==0)
	{printf("Element is not found in array");
	}
	return 0;
}
