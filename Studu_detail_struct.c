#include <stdio.h>
#include <string.h>

struct student 
{
    int roll_number;
    char name[50];
    char branch[50];
    char section;
    float percentage;
};

int main()
{   
    int n, i, roll;
    printf("Enter the number of the students");
    scanf("%d", &n);
    struct student students[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter roll no ");
        scanf("%d", &students[i].roll_number);
        getchar();
        printf("Enter name ");
        scanf("%[^\n]s", &students[i].name);
        printf("Enter branch ");
        scanf("%s", &students[i].branch);
        getchar();
        printf("Enter section ");
        scanf("%c", &students[i].section);
        printf("Enter percentage ");
        scanf("%f", &students[i].percentage);
    }

    printf("enter the student roll number whose information you want to access: ");
    scanf("%d", &roll);

    printf("ALL DETAILS \n");
    printf("Name: %s\n", students[roll-1].name);
    printf("Branch: %s\n", students[roll-1].branch);
    printf("Section: %c\n", students[roll-1].section);
    printf("Percentage: %f\n", students[roll-1].percentage);
   
}
