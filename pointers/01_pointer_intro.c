#include <stdio.h>

int main()
{
    int number = 10;
    int *ptr = &number;

    printf("Value = %d\n", number);
    printf("Address = %p\n", (void *)&number);
    printf("Pointer = %p\n", (void *)ptr);
    printf("Dereferenced Value = %d\n", *ptr);

    return 0;
}
