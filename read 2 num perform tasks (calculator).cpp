// PROGRAM TO OPERATE TASKS (i.e.,calculator) with using switch case //

#include<stdio.h>
int main()
{
	int a,b;
	char ch;
	printf("Enter the 1st num =");
	scanf("%d",&a);
	printf("Enter the 2st num =");
	scanf("%d",&b);
	printf("Enter the operator (+,-,/,*) =");
 	scanf(" %c", &ch);
	
	switch (ch)
	{
	case '+':
		printf("\n%d + %d =%d",a,b,a+b); // for addition //
		break;
	case '-':
		printf("\n%d - %d =%d",a,b,a-b); // for subtraction //
		break;
	case '*':
		printf("\n%d * %d =%d",a,b,a*b); // for multiplication //
		break;
 	case '/':
		printf("\n%d / %d =%d",a,b,a/b); // for division //
		break;
		
	default:
	 	printf("\nYou entered the wrong opertor");
	}
	return 0;
}
