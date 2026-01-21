// FUNCTION TO READ INFO OF BOOK AND DISPLAY THE INFO //

#include<stdio.h>
struct book
{
	char title[50];
	char auther[50];
	float price;
};
void displaybook(struct book b)
{
	printf("\n   Book Information   \n");
	printf("\nTitle  : %s", b.title);
	printf("\nAuther  : %s", b.auther);
	printf("\nPrice  : %.2f", b.price);
}


int main()
{
	struct book b;
	printf("Enter the book title :");
	scanf("%s", &b.title);
	
	printf("Enter auther name :");
	scanf("%s", &b.auther);
	
	printf("Enter price :");
	scanf("%f", &b.price);
	
	displaybook(b);
	
	return 0;
}



