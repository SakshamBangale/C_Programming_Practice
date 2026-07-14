#include <stdio.h>

int main()
{
    int arr[] = {3, 7, 9, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 9;
    int i;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("Found at index %d\n", i);
            return 0;
        }
    }

    printf("Not Found\n");

    return 0;
}
