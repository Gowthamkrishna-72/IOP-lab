// PROGRAM FOR MATRIX ADDITION  //

#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter order of matrix :");
	scanf("%d %d",&m,&n);
	int a[m][n],i,j,b[m][n],r[m][n];
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
	for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
	   {scanf("%d",&b[i][j]);
	   }
	}
	printf("Matrix B\n");
	for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
	   {printf("%d\t",b[i][j]);
	   }
	   printf("\n");
	}
	// ADDI
	for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
	   {r[i][j]= a[i][j]+b[i][j];
	   }   
	}
	printf("Resultant matrix\n");
	for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
	   {printf("%d\t",r[i][j]);
	   }
	   printf("\n");
	}
	return 0;
}
