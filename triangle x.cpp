
#include<stdio.h>
int main()
{
	int i,r,j;
	for(r=1;r<=5;r++)
	{	for(i=5;i>r;i--)
		{printf(" ");
		}
		for(j=1;j<=r;j++)
		{printf("* ");
		}
		printf("\n");
	}
	return 0;
}
