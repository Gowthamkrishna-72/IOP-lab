#include<stdio.h>
int main()
{
    char s1[100],s2[100],s3[100];
    char *p1, *p2, *p3;
    int flag = 0;

    printf("Enter string 1 :");
    fgets(s1, sizeof(s1),stdin);

    printf("Enter string 2 :");
    fgets(s2, sizeof(s2), stdin);

    //  copy
    p1 = s1;    
    p3 = s3;    

    while (*p1 != '\0') 
	{
        *p3 = *p1;  
        p1++;
        p3++;
    }
    *p3 = '\0';
    // while(*p3++ = *p1++); 
    //*p3 = '\0';
    printf("\nA. Copy of s1 into s3: %s\n", s3);


    //  compare
    p1 = s1;
    p2 = s2;

    while(*p1 != '\0' || *p2 != '\0')
    {
        if(*p1 != *p2)
        {
            flag = 1;
            break;
        }
        p1++;
        p2++;
    }
    if (flag == 0)
        printf("B. Strings are equal\n");
    else
        printf("B. Strings are NOT equal\n");

    
    //    concat
    p1 = s1;
    p2 = s2;
    p3 = s3;

    while (*p1 != '\0')
    {  
        *p3 = *p1;
        p3++;
        p1++;
    }
    
    while (*p2 != '\0') 
    {   
        *p3 = *p2;
        p3++;
        p2++;
    }
    *p3 = '\0';
    printf("C. Concatenation (s1 + s2): %s\n", s3);


    // reverse
    p1 = s1;

    while (*p1 != '\0')  
        p1++;

    printf("D. Reverse of str1: ");
    p1--;   
    while (p1 >= s1)
    {
        printf("%c", *p1);
        p1--;
    }
    printf("\n");

    return 0;
}
