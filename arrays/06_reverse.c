#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Reversed Array: ");

    for (i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}