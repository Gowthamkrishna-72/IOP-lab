#include<stdio.h>
#include<string.h>
int main()
{
	char st[100],rev[100];
	char *p, *q; 
	int len, i;
	
	p = st;  
    q = rev; 

    printf("Enter a string: ");
    fgets(st, sizeof(st), stdin);   
	
	len = strlen(st);
    if (st[len - 1] == '\n')
        st[len - 1] = '\0';
    len = strlen(st);
    p = st;    
    q = rev;
    
    for(i = 0; i < len; i++)
    {
    	*(q + i)= *(p + (len-1)-i);
	}
	*(q + len) = '\0';
    
    printf("Original string : %s\n", st);
    printf("Reversed copy   : %s\n", rev);
    
    return 0;
}

