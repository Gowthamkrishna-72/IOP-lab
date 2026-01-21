//PROGRAM TO COPY ONE ARRAY INTO ANOTHER ARRAY .ORDER OF ELEMENTS OF SECOND ARRAY
//SHOULD BE OPPOSITE TO FIRST ARRAY.//

#include<stdio.h>
int main()
{
	int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n], b[n];
    int *p1 = a;       
    int *p2 = b;  
    // 
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", p1 + i);
    }
    // 
    for (int i = 0; i < n; i++)
	{
        *(p2 + i) = *(p1 + (n-1)-i);
    }
    //
    printf("Copied array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}

