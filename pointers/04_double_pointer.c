#include <stdio.h>

int main()
{
    int number = 100;
    int *ptr = &number;
    int **dptr = &ptr;

    printf("Value = %d\n", number);
    printf("Using Pointer = %d\n", *ptr);
    printf("Using Double Pointer = %d\n", **dptr);

    return 0;
}
