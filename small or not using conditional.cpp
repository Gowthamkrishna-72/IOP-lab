// PROGRAM TO CHECK WHETHER A GIVEN CHARECTER IS SMALL CASE LETTER OR NOT USING CONDITIONAL OPERATOR //

#include<stdio.h>
int main()
{
	char ch,a,z,small,not_small;
	
	printf("Enter the charecter =");
	scanf("%c",&ch);
	
	(ch >='a' && ch<='z')
		? printf("%c is a small case letter.\n",ch)
		: printf("%c is a not small case letter.\n",ch);
	return 0;
}
	
