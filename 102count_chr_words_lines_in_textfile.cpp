#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;

    char ch,prev=' ';
    int characters = 0, words = 0, lines = 0;

    fp = fopen("C:\\Users\\GOWTHAM\\OneDrive\\Documents\\c program\\problems\\sample.txt", "r");

    if (fp == NULL) 
	{
        printf("Error opening file!\n");
    }
    else 
    {
        while ((ch = fgetc(fp)) != EOF)
        {
            characters++;

            if (ch == '\n')
            {lines++;
            } 
            if (!isspace(ch) && isspace(prev))
            words++;

            prev = ch;
        }
    }
    fclose(fp);

    printf("\n--- File Statistics ---\n");
    printf("Characters: %d\n", characters);
    printf("Words     : %d\n", words);
    printf("Lines     : %d\n", lines);
}
