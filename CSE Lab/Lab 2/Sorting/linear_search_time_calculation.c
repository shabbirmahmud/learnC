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

int searchElement(int a[], int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    srand(time(0));
    clock_t start_time, end_time;
    start_time = clock();
    double time_passed;

    int n = 10;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100 + 1;
    }
    printArray(arr, n);

    end_time = clock();
    time_passed = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("\nTime: %lf seconds\n", time_passed);

    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    int index = searchElement(arr, n, number);
    if (index == -1)
        printf("Number not found\n");
    else
        printf("Number found at index: %d\n", index);
    return 0;
}