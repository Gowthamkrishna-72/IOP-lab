/* PROGRAM TO READ INFORMATION OF 10 STUDENTS AND DISPLAY THE INFO OF  
 THOSE STUDENT WHOSE MARKS ARE GREATER THAN 500.
 {PASSING ARRAY OF STRUCTURE INTO FUNCTION } */
 
#include<stdio.h>
struct student
{
    int rollno;
    char name[50];
    int marks;
};
void display(struct student s[],int n) 
{
    int i;
    printf("\n Students with marks greater than 500 :\n");
    for(i=0;i<n;i++)
    {
        if(s[i].marks>500)
        {
            printf("Roll No: %d\n", s[i].rollno);
            printf("Name : %s\n", s[i].name);
            printf("Marks : %d\n", s[i].marks);
           
        }
    }
}
int main ()
{
    struct student s[10];
    int i;
    printf("Enter details of 10 students:\n");
    for(i=0;i<10;i++)
    {
        printf("Enter Roll no :");
        scanf("%d", &s[i].rollno);
        printf("Enter Name :");
        scanf("%s", s[i].name);
        printf("Enter Marks :");
        scanf("%d", &s[i].marks);
    }
    display(s, 10);
    return 0;
}


