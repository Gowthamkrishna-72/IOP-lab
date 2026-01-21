// SWAP FUNCTION //

#include<stdio.h>
void swap(int *x,int *y);
int main()
{
	int a,b;
	printf("Enter a value :");
	scanf("%d", &a);
	printf("Enter b value :");
	scanf("%d", &b);
	printf("Before swap a=%d b=%d",a,b);
	swap(&a,&b);
	printf("\nAfter swap a=%d b=%d",a,b);
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
