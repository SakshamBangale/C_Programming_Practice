#include <stdio.h>

int main()
{
    int number = 100;
    float price = 99.99f;
    double pi = 3.1415926535;
    char letter = 'C';

    printf("Int: %d\n", number);
    printf("Float: %.2f\n", price);
    printf("Double: %.10lf\n", pi);
    printf("Char: %c\n", letter);

    return 0;
}