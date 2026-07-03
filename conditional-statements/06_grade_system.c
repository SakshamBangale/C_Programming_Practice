#include <stdio.h>

int main()
{
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 90)
        printf("A+\n");
    else if (marks >= 80)
        printf("A\n");
    else if (marks >= 70)
        printf("B\n");
    else if (marks >= 60)
        printf("C\n");
    else if (marks >= 40)
        printf("D\n");
    else
        printf("Fail\n");

    return 0;
}