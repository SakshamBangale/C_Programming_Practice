#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, sum = 0;
    float average;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (float)sum / n;

    printf("Average = %.2f\n", average);

    return 0;
}
