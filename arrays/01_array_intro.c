#include <stdio.h>

int main()
{
    int arr[5];
    int i;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Array Elements: ");

    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}
