#include <stdio.h>

void square(int *number);

int main()
{
    int value;

    printf("Enter a number: ");
    scanf("%d", &value);

    square(&value);

    printf("Square = %d\n", value);

    return 0;
}

void square(int *number)
{
    *number = (*number) * (*number);
}
