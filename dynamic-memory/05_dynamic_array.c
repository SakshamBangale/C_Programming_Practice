#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
        return 1;

    printf("Enter elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Array: ");

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    free(arr);

    return 0;
}
