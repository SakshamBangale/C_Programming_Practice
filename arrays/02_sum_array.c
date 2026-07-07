#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, sum = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
        sum += arr[i];

    printf("Sum = %d\n", sum);

    return 0;
}