// PROGRAM TO REVERSE A NUMBER //

#include<stdio.h>
int main()
{
	int num,q,sum=0;
	printf("Enter the num =");
	scanf("%d",&num);
	
	while(num!=0)
	{	q=num%10;
		sum=(sum*10)+q;
		num=num/10;
	}
	printf("The reverse of the number is =%d",sum);
	return 0;
}
