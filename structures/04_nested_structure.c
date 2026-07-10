#include <stdio.h>

struct Address
{
    char city[50];
    char state[50];
};

struct Student
{
    int roll;
    char name[50];
    struct Address address;
};

int main()
{
    struct Student student = {101, "Rahul", {"Pune", "Maharashtra"}};

    printf("Roll Number: %d\n", student.roll);
    printf("Name: %s\n", student.name);
    printf("City: %s\n", student.address.city);
    printf("State: %s\n", student.address.state);

    return 0;
}
