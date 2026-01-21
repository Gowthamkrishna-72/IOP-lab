// PROGRAM TO SORT (BUBBLE SORT) AN ARRAY //

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of array(n) :");
	scanf("%d",&n);
	int a[n],i,j,k,temp;
	printf("Enter the array :");
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);
	}
	printf("Before sort\n");
	for(i=0;i<n;i++)
	{printf("\t%d",a[i]);
	}
	for(i=0;i<n;i++)
	{for(j=0;j<n-i-1;j++)
		{if(a[j]>a[j+1])
		  { temp=a[j];
	 	    a[j]=a[j+1];
		    a[j+1]=temp; 
		}
	    printf("\npass=%d",i);
	    for(k=0;k<n;k++)
	    {printf("\t%d",a[k]);
        }
        printf("\n");
	    }
	}
	printf("\nAfter sort\n");
	for(i=0;i<n;i++)
	{printf("\t%d",a[i]);
	}
	return 0;
}
