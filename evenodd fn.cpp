// PROGRAM TO CHECK WHETHER A NUMBER IS EVEN OR ODD //

#include<stdio.h>
void evenorodd(int);
int main()
{
	int n;
	printf("Enter a number =");
	scanf("%d",&n);
	evenorodd(n);
	return 0;
}
void evenorodd(int n)
{
	if (n%2 == 0)
	{printf("%d is even ",n);
	}
	else
	{printf("%d is odd ",n);
	}
}
