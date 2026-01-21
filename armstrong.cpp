// PROGRAM TO CHECK WHETHER IT IS A ARMSTRONG NUMBER ARE NOT //

#include<stdio.h>
#include<math.h>
int main()
{
	int num,q,sum=0,org,count=0;
	printf("Enter the value");
	scanf("%d",&num);
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
	{printf("The given num is %d a armstrong",org);
	}
	else
	{printf("The given num is %d a NOT armstrong",org);
	}	
	return 0;
}
