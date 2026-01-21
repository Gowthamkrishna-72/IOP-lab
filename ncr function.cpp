// NCR function //

#include<stdio.h>
long fact(long n);
int main()
{
	long n,r,res;
	printf("Enter n value :");
	scanf("%ld", &n);
	printf("Enter r value :");
	scanf("%ld", &r);
	res=(fact(n)/(fact(n-r)*fact(r)));
	printf("%ld", res);
}
long fact(long n)
{
	long p=1,i;
	for(i=n;i>1;i--)
	{p=p*i;
	}
	return p;
}

