#include <stdio.h>

void merge(int arr[], int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = 0;
    int temp[100];

    while (i <= mid && j <= right)
    {
        if (arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left, k = 0; i <= right; i++, k++)
        arr[i] = temp[k];
}

void mergeSort(int arr[], int left, int right)
{
    if (left >= right)
        return;

    int mid = (left + right) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    merge(arr, left, mid, right);
}

int main()
{
    int arr[] = {8, 4, 2, 1, 7, 5, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    mergeSort(arr, 0, n - 1);

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
