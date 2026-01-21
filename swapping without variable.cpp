// PROGRAM TO SWAP TWO VARIABLES WITHOUT USING THIRD VARIABLE //

#include<stdio.h>
int main()
{
	float a,b;
	
	printf("Give the value of a=");
	scanf("%f",&a);
	printf("Give the value of b=");
	scanf("%f",&b);
	
	a= a+b;
	b= a-b;
	a= a-b;
	
	printf("After swapping a=%f",a);
	printf("After swapping b=%f",b);
	return 0;
}
