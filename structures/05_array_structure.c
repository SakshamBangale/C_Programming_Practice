#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
};

int main()
{
    struct Student students[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Enter Roll and Name: ");
        scanf("%d %s", &students[i].roll, students[i].name);
    }

    printf("\nStudent List\n");

    for (i = 0; i < 3; i++)
        printf("%d %s\n", students[i].roll, students[i].name);

    return 0;
}
