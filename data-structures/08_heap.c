#include <stdio.h>

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        heapify(arr, n, largest);
    }
}

int main()
{
    int arr[] = {4, 10, 3, 5, 1};

    heapify(arr, 5, 0);

    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}
