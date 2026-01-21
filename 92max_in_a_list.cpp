// PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS.

#include <stdio.h>
int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    int *p = a;  
    // 
    printf("Enter %d integers:\n", n);
    for (int i=0;i<n;i++)
	{
        scanf("%d", p+i);
    }
    int max = *p;
    // 
    for (int i=1;i<n;i++) 
	{
        if (*(p+i) > max) 
		{
            max = *(p+i);
        }
    }
    printf("Largest number = %d\n", max);
    return 0;
}

