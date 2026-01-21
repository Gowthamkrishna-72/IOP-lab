// PROGRAM TO CALCULATE AREA OF TRIANGLE //

#include<stdio.h>
int main()
{
	int base,height;
	float area;
	
	printf("Enter the value of base=");
	scanf("%d",&base);
	printf("Enter the vqalue of height= ");
	scanf("%d",&height);
	
	area=0.5*base*height;
	
	printf("area of the triangle =%f",area);
	
	return 0;
}

