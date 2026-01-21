// PROGRAM TO WRITE A AND B ARRAYS IN ASCENDING ORDER AND MERGE THEN INTO A ARRAY C//

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of array(n) :");
	scanf("%d",&n);
	int a[n],i,j,k,temp,b[n],c[n];
	printf("Enter the array A:");
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);
	}
	printf("Before sort A\n");
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
     }
	}
	printf("\nAfter sort A\n");
	for(i=0;i<n;i++)
	{printf("\t%d",a[i]);
	}
	printf("\nEnter the array B:");
	for(i=0;i<n;i++)
	{scanf("%d",&b[i]);
	}
	printf("\nBefore sort B\n");
	for(i=0;i<n;i++)
	{printf("\t%d",b[i]);
	}
	for(i=0;i<n;i++)
	{for(j=i+1;j<n;j++)
	 {  if(b[i]>b[j])
	 	{ temp=b[i];
	 	  b[i]=b[j];
		  b[j]=temp; 
		}
     }
	}
	printf("\nAfter sort B\n");
	for(i=0;i<n;i++)
	{printf("\t%d",b[i]);
	}
	// resultant//
	printf("\nResultant array\n");
	for(i=0;i<n;i++)
	{printf("\t%d",a[i]+b[i]);
	}
}
