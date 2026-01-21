// PROGRAM FOR FIBONACCI SERIES //

#include<stdio.h>
int main ()
{
	int a=0,b=1,c,n,i;
	printf("Enter the no of terms require n =");
	scanf("%d",&n);
	printf("%d,%d,",a,b);
	
	for (i=2;i<n;i++)
	{ 	c=a+b;
		printf("%d,",c);
		a=b;
		b=c;
	}
	return 0;
}
