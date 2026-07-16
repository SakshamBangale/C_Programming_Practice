#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll;
    float marks;
};

int main()
{
    struct Student *student;

    student = (struct Student *)malloc(sizeof(struct Student));

    if (student == NULL)
        return 1;

    student->roll = 101;
    student->marks = 91.5f;

    printf("Roll: %d\n", student->roll);
    printf("Marks: %.2f\n", student->marks);

    free(student);

    return 0;
}
