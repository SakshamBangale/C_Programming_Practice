#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
};

int main()
{
    struct Student student = {101, "Amit"};
    struct Student *ptr = &student;

    printf("Roll Number: %d\n", ptr->roll);
    printf("Name: %s\n", ptr->name);

    return 0;
}
