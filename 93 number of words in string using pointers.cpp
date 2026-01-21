// PROGRAM USING POINTERS TO COUNT THE NUMBER OF WORDS IN A GIVEN STRING //

#include<stdio.h>
#include<string.h>
int main()
{
	char st[100];
	char *p;
	int no_of_words=0;
	
	printf("Enter the string :");
	fgets(st, sizeof(st), stdin);  
    p = st;
	
	for (;*p != '\0'; p++) 
	{
        if (p == st && *p != ' ' && *p != '\n')
        {
            no_of_words++;
        }
        //
        else if (*p != ' ' && *(p-1) == ' ')
        {
            no_of_words++;
        }
          
    }
	printf("No of words =%d",no_of_words);
	return 0;
}



