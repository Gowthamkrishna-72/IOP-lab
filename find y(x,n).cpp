// PROGRAM TO FIND VALUE OF Y USING Y(X,N) //

#include<stdio.h>
#include<math.h>
int main ()
{
	int n;
	double x,y;
	
	printf("Enter the value of x =");
	scanf("%lf",&x);
	printf("Enter the value of n =");
	scanf("%d",&n);
	
	if (n==1)
	{y= 1 + x;
	}
	else if (n==2)
	{y=1 + x/n ;
	}
	else if (n==3)
	{y=1 + pow(x,n) ;
	}
	else 
	{y=1 + x*n ;
	}
	printf("y =%.2lf",y);
	return 0;
}
