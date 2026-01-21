//A FILE CALLED “LNMIITSTUDENT.JAVA” CONTAINS INFORMATION SUCH AS STUDENT ROLL
//NUMBER, NAME AND TOTAL MARKS. WRITE A C PROGRAM TO CREATE A FILE TO STORE DETAILS OF N STUDENTS.

#include<stdio.h>

struct st
{
    int roll_no;
    char name[50];
    float marks;
};

int main()
{
    struct st s;
    FILE *fp;
    int n;

    fp = fopen("C:\\Users\\GOWTHAM\\OneDrive\\Documents\\c program\\problems\\LNMIITSTUDENT.JAVA", "w");

    if(fp== NULL)
    {
        printf("ERROR ");
    }
    else
    {
        printf("Enter the number of students :");
        scanf("%d", &n);

        for (int i = 0; i < n;i++)
        {
            printf("\nEnter details of student %d:\n", i + 1);

            printf("Roll Number: ");
            scanf("%d", &s.roll_no);

            printf("Name: ");
            scanf(" %[^\n]", s.name);    

            printf("Total Marks: ");
            scanf("%f", &s.marks);

             // Writing to file
            fprintf(fp, "Roll: %d, Name: %s, Marks: %.2f\n", s.roll_no, s.name, s.marks);
        }
    }
    fclose(fp);
}
