//  PROGRAM TO LENGTH OF A GIVEN STRING INCLUDEING AND EXCLUDING SPACES USING POINTER //

#include<stdio.h>
#include<string.h>
int main()
{
	char st[100];
	char *p;
	int len_including=0,len_excluding=0;
	
	printf("Enter the string :");
	fgets(st, sizeof(st), stdin); 
    p = st;


    for (;*p != '\0'; p++) 
	{   if (*p != '\n')        
            len_including++;

        if (*p != ' ' && *p != '\n')  
            len_excluding++;
    }
    
	printf("\n Length including spaces :%d",len_including);
	printf("\n Length excluding spaces :%d",len_excluding);
	
	return 0;
}
