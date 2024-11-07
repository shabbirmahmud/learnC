#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selection_sort(int a[], int n)
{
    int i, j, min_index, temp;

    for (i = 0; i < n - 1; i++)
    {
        min_index = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_index])
            {
                min_index = j;
            }
        }
        temp = a[min_index];
        a[min_index] = a[i];
        a[i] = temp;
    }
}

void printArray(int arr[], int n)
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
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
    selection_sort(arr, n);
    printf("\nSorted:");
    printArray(arr, n);
    return 0;
}