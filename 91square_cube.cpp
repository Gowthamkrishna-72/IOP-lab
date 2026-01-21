//PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING
//POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER.

#include<stdio.h>
int main()
{
	int n;
    int *p;   

    printf("Enter a number: ");
    scanf("%d", &n);

    p = &n; 

    int square = (*p) * (*p);
    int cube   = (*p) * (*p) * (*p);

    printf("Square = %d\n", square);
    printf("Cube   = %d\n", cube);

    return 0;
}
