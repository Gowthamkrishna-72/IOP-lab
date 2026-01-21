#include <stdio.h>

enum Color 
{
    RED,
    GREEN,
    BLUE,
    YELLOW,
    CYAN,
    MAGENTA
};

int main() 
{
	int choice;
    enum Color c;
    

    printf("Choose a color:\n");
    printf("0. RED\n");
    printf("1. GREEN\n");
    printf("2. BLUE\n");
    printf("3. YELLOW\n");
    printf("4. CYAN\n");
    printf("5. MAGENTA\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    c = choice;  

    switch (c) 
	{
        case RED:	printf("Hex code for RED is #FF0000\n");
                  	break;
        case GREEN:	printf("Hex code for GREEN is #00FF00\n");
    				break;
        case BLUE:	printf("Hex code for BLUE is #0000FF\n");
            	  	break;
        case YELLOW:printf("Hex code for YELLOW is #FFFF00\n");
            		break;
        case CYAN:  printf("Hex code for CYAN is #00FFFF\n");
           			break;
        case MAGENTA:printf("Hex code for MAGENTA is #FF00FF\n");
           	 		 break;
        default:	printf("Invalid choice!\n");
    }

    return 0;
}

