#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int i;

    ptr = (int *)calloc(5, sizeof(int));

    printf("Initial Values: ");

    for (i = 0; i < 5; i++)
        printf("%d ", ptr[i]);

    printf("\n");

    free(ptr);

    return 0;
}
