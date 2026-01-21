// PROGRAM TO READ 3*3 MATRIX AND ITS TRANSPOSE //

#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter order of matrix :");
	scanf("%d %d",&m,&n);
	int a[m][n],i,j,t[i][j];
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
	    t[i][j]=a[j][i];
	   }
	   printf("\n");
	}
	printf("Transpose matrix :\n");
	for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
	   {printf("%d\t",t[i][j]);
	   
	   }
	   printf("\n");
	}
	return 0;
}
