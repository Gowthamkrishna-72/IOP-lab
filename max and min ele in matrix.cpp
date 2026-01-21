// PROGRAM TO READ 3*3 MATRIX AND FINDOUT MAX AND MIN ELEMENT //

#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter order of matrix :");
	scanf("%d %d",&m,&n);
	int a[m][n],i,j;
	printf("Enter the matrix ");
	for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
	   {scanf("%d",&a[i][j]);
	   }
	}
	printf("Matrix\n");
	for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
	   {printf("%d\t",a[i][j]);
	   }
	   printf("\n");
	}
	int max=a[0][0],min=a[0][0];
	for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
		{if (a[i][j]>max)
			{max=a[i][j];
			}
		 else if (a[i][j]<min)
			{min=a[i][j];
			}
		}
	}
	printf("\nMaximum of element =%d",max);
	printf("\nMinimum of element =%d",min);
	return 0;
}
