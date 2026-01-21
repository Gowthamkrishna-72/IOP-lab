// ARMSTRONG FUNCTION //

#include<stdio.h>
#include<math.h>
int armstrong(int num);
int main()
{
	int num,flag=0;
	printf("Enter the value :");
	scanf("%d",&num);
	flag=armstrong(num);
	if (flag==1)
	{printf("The given num %d a armstrong",num);
	}
	else
	{printf("The given num %d a NOT armstrong",num);
	}	
	return 0;
}
int armstrong(int num)
{	int flag=0,org,count=0,q,sum=0;
	org=num;
	for(int i=num;i!=0;i=i/10)
	{	count++;	
	}
	
	while(num!=0)
	{ 	q=num%10;
		q=pow(q,count);
		sum=sum+q;
		num=num/10;
	}
	if (org==sum)
	{flag=1;
	}
	return flag; 
}
