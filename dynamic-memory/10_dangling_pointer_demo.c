#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int *)malloc(sizeof(int));

    if (ptr == NULL)
        return 1;

    *ptr = 75;

    printf("Value = %d\n", *ptr);

    free(ptr);
    ptr = NULL;

    if (ptr == NULL)
        printf("Pointer is now NULL.\n");

    return 0;
}
