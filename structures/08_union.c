#include <stdio.h>

union Data
{
    int number;
    float price;
    char grade;
};

int main()
{
    union Data data;

    data.number = 100;
    printf("Number: %d\n", data.number);

    data.price = 99.99f;
    printf("Price: %.2f\n", data.price);

    data.grade = 'A';
    printf("Grade: %c\n", data.grade);

    return 0;
}
