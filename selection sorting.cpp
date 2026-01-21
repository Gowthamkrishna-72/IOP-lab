// PROGRAM TO SORT (SELECTION SORT) AN ARRAY //

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
	{for(j=i+1;j<n;j++)
	 {  if(a[i]>a[j])
	 	{ temp=a[i];
	 	  a[i]=a[j];
		  a[j]=temp; 
		}
	    printf("\npass=%d",i);
	    for(k=0;k<n;k++)
	    {printf("\t%d",a[k]);
        }
        printf("\n");
	 }
	}
	printf("After sort\n");
	for(i=0;i<n;i++)
	{printf("\t%d",a[i]);
	}
}
