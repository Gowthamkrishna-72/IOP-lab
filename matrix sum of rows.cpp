// PROGRAM TO READ 3*3 MATRIX AND SUM OF ALL ROWS //

#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter order of matrix :");
	scanf("%d %d",&m,&n);
	int a[m][n],i,j,t[i][j],s;
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
	for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
		{s=s+a[i][j];
		}
	printf("Sum of row %d=%d",i+1,s);
	printf("\n");
	s=0;
	}
	return 0;
}
