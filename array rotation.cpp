// WRITE A PROGRAM IN C TO ROTATE AN ARRAY BY N  POSITIONS

#include<stdio.h>
int main()
{
	int n,N;
	printf("Enter the size of array(n) :");
	scanf("%d",&n);
	int a[n],i,temp;
	printf("Enter the array :");
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);
	}
	printf("Array : \n");
	for(i=0;i<n;i++)
	{printf("\t%d",a[i]);
	}
	//
	printf("\nEnter number of positions to rotate :");
	scanf("%d",&N);
	for(int j=0;j<(N%n);j++)
	{ temp=a[0];
	  for(int i=0;i<n-1;i++)
	  {a[i]=a[i+1];
	  }
	  a[n-1]=temp;
	}
	printf("Array after rotation: \n");
	for(i=0;i<n;i++)
	{printf("\t%d",a[i]);
	}
	return 0;
}
