// FUNCTION THAT RETURNS 1 IF ITS ARGUMENT IS PRIME NUMBER AND RETURN 0 OTHERWISE //

#include<stdio.h>
int prime(int n);
int main()
{
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	if(prime(n))
		printf(" prime ");
	else
		printf(" Not prime ");
	return 0;
}
int prime(int n)
{
	if(n<=1)
		return 0;
	for(int i=2;i*i <=n;i++)
		if(n%i==0)
			return 0;
	return 1;
}
