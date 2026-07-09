#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }

    printf("\n");

    return 0;
}
