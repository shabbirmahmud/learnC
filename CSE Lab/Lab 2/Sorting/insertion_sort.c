#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray(int arr[], int n)
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void insertion_sort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i <= n-1
    ; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}


int main()
{
    srand(time(0));

    int n = 10;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100 + 1;
    }

    printArray(arr, n);
    insertion_sort(arr, n);
    printf("\nSorted:");
    printArray(arr, n);
    return 0;
}