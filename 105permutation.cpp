// PERMUTATION //

#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="ABCD";
    int i,j,k,l;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(j==i)
            continue;
             for(k=0;k<4;k++)
             {
                if(k==i || k==j)
                continue; 
                for(l=0;l<4;l++)
                {
                    
                if(l==i || l==j || l==k)
                continue; 
                    printf("%c%c%c%c \t",str[i],str[j],str[k],str[l]);
                }
             }
        } 
    }
}

//

