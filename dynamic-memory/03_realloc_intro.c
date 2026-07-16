#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int i;

    ptr = (int *)malloc(3 * sizeof(int));

    if (ptr == NULL)
        return 1;

    for (i = 0; i < 3; i++)
        ptr[i] = i + 1;

    ptr = (int *)realloc(ptr, 5 * sizeof(int));

    if (ptr == NULL)
        return 1;

    ptr[3] = 4;
    ptr[4] = 5;

    for (i = 0; i < 5; i++)
        printf("%d ", ptr[i]);

    printf("\n");

    free(ptr);

    return 0;
}
