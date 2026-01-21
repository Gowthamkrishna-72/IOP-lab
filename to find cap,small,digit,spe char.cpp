// PROGRAM TO CHECK WHETHER A GIVEN CHARECTER IS CAPITAL,LETTER,SMALL CASE LETTER,A DIGIT OR A SPECIAL SYMBOL //

#include<stdio.h>
int main()
{
	char ch,a,z,A,Z;
	
	printf("Enter the charecter =");
	scanf("%c",&ch);
	
	if ( ch >='a' && ch <='z')
	{printf("The given charecter is Small case letter");
	}
	else if ( ch >='A' && ch <='Z')
	{printf("The given charecter is Capital");
	}
	else if ( ch >='0' && ch <='9')
	{printf("The given charecter is a Digit");
	}
	else 
	{printf("The given charecter is a Special symbol");
	}
}
