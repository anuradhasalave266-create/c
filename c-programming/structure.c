#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[5];
    int i, topper = 0;
    float total = 0, average;

    // Input
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        total += s[i].marks;

        if(s[i].marks > s[topper].marks)
            topper = i;
    }

    average = total / 5;

    // Display
    printf("\n------ Student Details ------\n");
    for(i = 0; i < 5; i++)
    {
        printf("\nRoll No : %d", s[i].rollNo);
        printf("\nName    : %s", s[i].name);
        printf("\nMarks   : %.2f\n", s[i].marks);
    }

    printf("\nAverage Marks = %.2f\n", average);

    printf("\nTopper Details\n");
    printf("Roll No : %d\n", s[topper].rollNo);
    printf("Name    : %s\n", s[topper].name);
    printf("Marks   : %.2f\n", s[topper].marks);

    return 0;
}