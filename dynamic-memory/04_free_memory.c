#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int *)malloc(sizeof(int));

    if (ptr == NULL)
        return 1;

    *ptr = 50;

    printf("%d\n", *ptr);

    free(ptr);
    ptr = NULL;

    if (ptr == NULL)
        printf("Memory released.\n");

    return 0;
}
