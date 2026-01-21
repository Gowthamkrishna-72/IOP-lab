//HAT SIZE CALCULATOR 

#include<stdio.h>
int main ()
{
	float size[10][3]=
	{
		{20.0,6.375,6.375},
		{20.5,6.500,6.500},
		{21.0,6.625,6.500},
		{21.5,6.750,6.625},
		{22.0,6.875,6.750},
		{22.5,7.000,6.875},
		{23.0,7.125,7.000},
		{23.5,7.250,7.125},
		{24.0,7.375,7.250},
		{24.5,7.300,7.375},	
	};
	float circumference;
	int found=0;
	printf("Enter the circumference of (in inches)");
	scanf("%f",&circumference);
	for(int i=0;i<10;i++)
	{
		if(circumference==size[i][0]);
		{printf("Circumference of hat in inches :%f\n",circumference);
		 printf("US hat size :%f\n",size[i][1]);
		 printf("UK hat size :%f\n",size[i][2]);
		 found=1;
		 break;
		}
	}
	if (found==0)
	{printf("Size is not found\n enter size 20.0,20.5,21.0, etc.. ");
	}
	return 0;
}
