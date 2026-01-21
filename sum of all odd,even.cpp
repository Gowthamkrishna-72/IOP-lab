// PROGRAM TO PRINT SUM OF EVEN AND ODD NUMBERS //

#include<stdio.h>
int main()
{
	int n,sum_odd=0,sum_even=0;
	printf("Give the n value =");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{ if (i%2==0)
		sum_even =sum_even+i; 
		
	  else 
	  	sum_odd=sum_odd+i;
	}
	
	printf("sum of all odd numbers =%d\n",sum_odd);
	printf("sum of all even numbers =%d",sum_even);
}
