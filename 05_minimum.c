#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, min;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    min = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Minimum = %d\n", min);

    return 0;
}