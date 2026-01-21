//WRITE A C PROGRAM TO READ THE TEXT FILE AND ALSO COUNT THE NUMBER OF VOWELS PRESENT IN THE FILE.
#include<stdio.h>
#include<ctype.h>
int main()
{
    FILE *fp;
    char ch;
    int count = 0;

    fp = fopen("C:\\Users\\GOWTHAM\\OneDrive\\Documents\\c program\\problems\\vowel_filehandling.text", "r");

    if(fp== NULL)
    {
        printf("ERROR ");
    }
    else
    {
        while((ch=getc(fp)) != EOF)
        {
            switch(toupper(ch))
            {
                case 'A':case 'E':case 'I':case 'O':case 'U':
                count++;
            }
        }
    }
    printf("%d", count);
    fclose(fp);
}
