#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int *)malloc(sizeof(int));

    if (ptr == NULL)
        return 1;

    *ptr = 200;

    printf("Value = %d\n", *ptr);

    printf("Always call free() to avoid memory leaks.\n");

    free(ptr);

    return 0;
}
