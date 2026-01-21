// PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE ARRAYS //

#include<stdio.h>
int main()
{
	int array1[10],array2[10],array3[10],i;
	printf("Reading the numbers of array 1 =");
	for(i=0;i<10;i++)
	{scanf("%d",&array1[i]);
	}
	printf("Reading the numbers of array 2 =");
	for(i=0;i<10;i++)
	{scanf("%d",&array2[i]);
	}
	for(i=0;i<10;i++)
	{array3[i]=array1[i];
	 array1[i]=array2[i];
	 array2[i]=array3[i];
	}
	printf("Array 1 =");
	for(i=0;i<10;i++)
	{printf("\t%d",array1[i]);
	}
	printf("\nArray 2 =");
	for(i=0;i<10;i++)
	{printf("\t%d",array2[i]);
	}
	return 0;
}
