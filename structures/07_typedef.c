#include <stdio.h>

typedef struct
{
    int id;
    char name[50];
} Student;

int main()
{
    Student student = {101, "Rohan"};

    printf("ID: %d\n", student.id);
    printf("Name: %s\n", student.name);

    return 0;
}
