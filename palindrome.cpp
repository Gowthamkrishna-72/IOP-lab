// PROGRAM TO CHECK WHETHER A NUMBER IS PALINDROME //

#include<stdio.h>
void palindrome(int);
int main()
{
	int n;
	printf("Enter a number =");
	scanf("%d",&n);
	palindrome(n);
	return 0;
}
void palindrome(int n)
{
	int org,sum,q;
	org=n;
	while(n!=0)
	{	q= n%10;
	 	sum=(sum*10 )+ q;
	 	n=n/10;
	}
	if (org==sum)
	{printf("The given num is %d a palindrome",org);
	}
	else
	{printf("The given num is %d a palindrome",org);
	}
}
