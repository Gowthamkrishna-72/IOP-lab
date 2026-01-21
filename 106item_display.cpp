#include <stdio.h>

struct item 
{
    char item_name[50];
    int quantity;
    float price;
    float amount;
};

int main() 
{
    struct item x;

    printf("Enter item name: ");
    gets(x.item_name);

    printf("Enter quantity: ");
    scanf("%d", &x.quantity);

    printf("Enter price: ");
    scanf("%f", &x.price);
    //
    x.amount = x.quantity*x.price;

    // 
    printf("\n--- Item Details ---\n");
    printf("Item Name : %s\n", x.item_name);
    printf("Quantity  : %d\n", x.quantity);
    printf("Price     : %.2f\n", x.price);
    printf("Amount    : %.2f\n", x.amount);

    return 0;
}

