// MATRIX MULTIPLICATION //

#include<stdio.h>
int main()
{
	int m,n,p,q;
	printf("Enter order of matrix A:");
	scanf("%d %d",&m,&n);
	printf("Enter order of matrix B:");
	scanf("%d %d",&p,&q);
	if(n==p)
	{	int a[m][n],i,j,b[p][q],r[i][j],k;
		printf("Enter the A matrix ");
		for(i=0;i<m;i++)
		{for(j=0;j<n;j++)
		   {scanf("%d",&a[i][j]);
		   }
		}
		printf("Matrix A\n");
		for(i=0;i<m;i++)
		{for(j=0;j<n;j++)
		   {printf("%d\t",a[i][j]);
		   }
		   printf("\n");
		}
		printf("\nEnter the B matrix ");
		for(i=0;i<p;i++)
		{for(j=0;j<q;j++)
		   {scanf("%d",&b[i][j]);
		   }
		}
		printf("Matrix B\n");
		for(i=0;i<p;i++)
		{for(j=0;j<q;j++)
		   {printf("%d\t",b[i][j]);
		   }
		   printf("\n");
		}
		// MULTIPLICATION
		for(i=0;i<m;i++)
		{for(j=0;j<q;j++)
		   { r[i][j]=0;
		     for(k=0;k<n;k++)
		     {r[i][j]=r[i][j] + a[i][k]*b[k][j];
			 }
		   }   
		}
		printf("Resultant matrix\n");
		for(i=0;i<m;i++)
		{for(j=0;j<q;j++)
		   {printf("%d\t",r[i][j]);
		   }
		   printf("\n");
		}
	}
	else
	{printf("Matrix doest not satisfy the condition ");
	}
	return 0;
}
