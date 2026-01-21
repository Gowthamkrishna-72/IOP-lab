// PROGRAM TO SWAP TWO VARIABLES USING THIRD VARIABLE //

#include<stdio.h>
int main()
{
	float a,b,c;
	
	printf("Give the value of a=");
	scanf("%f",&a);
	printf("Give the value of b=");
	scanf("%f",&b);
	c= a;
	a= b;
	b= c;
	printf("After swapping a=%f",a);
	printf("\n");
	printf("After swapping b=%f",b);
	return 0;
}
