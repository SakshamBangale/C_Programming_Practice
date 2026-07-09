#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int i;

    ptr = (int *)malloc(5 * sizeof(int));

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++)
        scanf("%d", &ptr[i]);

    printf("Elements: ");

    for (i = 0; i < 5; i++)
        printf("%d ", ptr[i]);

    printf("\n");

    free(ptr);

    return 0;
}
