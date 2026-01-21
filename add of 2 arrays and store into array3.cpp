// PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDITION OF THOSE ARRAYS INTO THIRD //

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
	printf("Sum array =");
	for(i=0;i<10;i++)
	{array3[i]=array1[i]+array2[i];
	 printf("\t%d",array3[i]);
	}
	return 0;
}
