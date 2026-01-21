// PROGRAM TO WRITE A SERIES //

#include<stdio.h>
int main()
{
	int i,j,n,fact;
	float s;
	
	printf("Enter the value of n =");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		fact=1;
		for(j=1;j<=i;j++)
		{	fact = fact*j;
		}
		printf("%d/%d +",i,fact);
		s=s+(i/fact);	
	}
	printf("\nSum is %f",s);
	return 0;
}
