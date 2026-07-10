#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student student;

    printf("Enter Roll Number: ");
    scanf("%d", &student.roll);

    printf("Enter Name: ");
    scanf("%s", student.name);

    printf("Enter Marks: ");
    scanf("%f", &student.marks);

    printf("\nStudent Details\n");
    printf("Roll Number: %d\n", student.roll);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
