// 

#include<stdio.h>

struct employee
{
	int employee_no;
	char employee_name[50];
	float basicpay;
};

int main()
{
	struct employee empo[50];
	struct employee *ptr;
	int n,i;
	
	printf("Enter the number of employees :");
	scanf("%d", &n);
	
	ptr = empo;
	
	for(i=0;i<n;i++)
	{
		printf("Enter employee Number :");
		scanf("%d", &(ptr+i)->employee_no);
		
		printf("Enter employee Name :");
		scanf("%s", &(ptr+i)->employee_name);
		
		printf("Enter Basic pay :");
		scanf("%f", &(ptr+i)->basicpay);
	}
	
	printf("\n  Employee Details  \n");
	
	for(i=0;i<n;i++)
	{
		printf(" \nemployee Number :");
		printf("%d", (ptr+i)->employee_no);
		
		printf(" \nemployee Name :");
		printf("%s", (ptr+i)->employee_name);
		
		printf(" \nBasic pay :");
		printf("%f", (ptr+i)->basicpay);
	}
	
	return 0;

}
