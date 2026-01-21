// PROGRAM TO CALCULATE SALES COMMISSION //

#include<stdio.h>
int main()
{
	float sales,commision;
	
	printf("Enter the sales amount: Rs. ");
	scanf("%f",&sales);
	
	if (sales<=500)
	{commision =0.05*sales;
	}
	else if (500<sales<=2000)
	{commision =35+(0.10*(sales-500));
	}
	else if (2000<sales<=5000)
	{commision =185+(0.12*(sales-2000));
	}
	else 
	{commision =0.125*sales;
	}
	printf("The commission for sales of Rs.%.2f is Rs.%.2f\n",sales,commision);
	return 0;
}
