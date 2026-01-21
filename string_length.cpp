// FUNCTION TO READ LINE OF TEXT AND FINDOUT LENGTH OF STRING //

#include<stdio.h>
int stringlen(char str[]);
int main()
{
    char text[100];
    printf("Enter line of text :");
    gets(text); 

    int len = stringlen(text);
    printf("\nLength of the string =%d",len-1);
    return 0;
}
int stringlen(char str[])
{
    int len=0;
    while(str[len] != 0)
    {
        len++;
    }
    return len;
}
