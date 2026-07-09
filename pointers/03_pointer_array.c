#include <stdio.h>

int main()
{
    int arr[] = {5, 10, 15, 20, 25};
    int *ptr = arr;
    int i;

    for (i = 0; i < 5; i++)
        printf("%d ", *(ptr + i));

    printf("\n");

    return 0;
}
