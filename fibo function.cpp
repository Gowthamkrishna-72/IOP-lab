// PROGRAM TO PRINT FIRST N NUMBERS OF FIBONACII SERIES //

#include<stdio.h>
int fibo(int n);
int main()
{
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	fibo(n);
	
}
int fibo(int n)
{
    int a=0,b=1,c,i;
	printf("%d,%d,",a,b);
	
	for (i=2;i<n;i++)
	{ 	c=a+b;
		printf("%d,",c);
		a=b;
		b=c;
	}
	return 0;
}
