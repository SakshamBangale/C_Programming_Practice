#include <stdio.h>

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 8;

    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] == key)
        {
            printf("Found at index %d\n", mid);
            return 0;
        }

        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }

    printf("Not Found\n");

    return 0;
}
