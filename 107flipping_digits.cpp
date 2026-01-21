#include <stdio.h>
#include <math.h>

int flip(int num, int n)
{
    int power = pow(10, n);       
    int lastN = num % power;      
    int reversed = 0;

    // 
    while (lastN > 0) {
        reversed = reversed * 10 + lastN % 10;
        lastN /= 10;
    }

    // 
    int result = (num / power) * power + reversed;
    return result;
}

int main() 
{
    int number, n;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter number of digits to flip: ");
    scanf("%d", &n);

    int flipped = flip(number, n);
    printf("Result after flipping last %d digits: %d\n", n, flipped);

    return 0;
}

