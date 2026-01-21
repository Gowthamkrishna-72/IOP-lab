// FUNCTION TO READ CHARECTER AND CHECK WHETHER IT IS VOWEL OR NOT //

#include<stdio.h>
void vowel(char);
int main()
{
	char ch;
	printf("Enter the charecter :");
	scanf("%c",&ch);
	vowel(ch);	
	return 0;
}
void vowel(char ch)
{
	if (ch=='a'|| ch=='A')
	{printf("%c is vowel ",ch);
	}
	else if (ch=='e'|| ch=='E')
	{printf("%c is vowel ",ch);
	}
	else if (ch=='i' || ch=='I')
	{printf("%c is vowel ",ch);
	}
	else if (ch=='o' || ch=='O')
	{printf("%c is vowel ",ch);
	}
	else if (ch=='u' || ch=='U')
	{printf("%c is vowel",ch);
	}
	else
	{printf("%c is not vowel ",ch);
	}
}
