// PROGRAM TO PRINT SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF N //

#include<stdio.h>
int main()
{
	int num,q,sum=0,p,ans=0;
	printf("Enter the num =");
	scanf("%d",&num);
	
	while(num!=0)
	{	q=num%10;
		sum= sum+q;
		num=num/10;
	}
	while(sum!=0)
	{	p=sum%10;
		ans= ans+p;
		sum=sum/10;
	}
	printf("The single digit sum of num is =%d",ans);
	return 0;
}
