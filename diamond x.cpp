#include<stdio.h>
int main ()
{
	int r,c,k;
	
	for(r=1;r<=4;r++)
	{	for(c=1;c<=4-r;c++)
		{printf(" ");}
		for(c=1;c<=r;c++)
		{printf("*");}
		for(k=r-1;k>0;k--)
		{printf("*");}
		printf("\n");
	}
	for(r=3;r>0;r--)
	{	for(c=1;c<=4-r;c++)
		{printf(" ");}
		for(c=1;c<=r;c++)
		{printf("*");}
		for(k=r-1;k>0;k--)
		{printf("*");}
		printf("\n");
	}
	return 0;
}
