// Reversing an array

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void arrRev(int arr[])
{
    int temp;
    for (int i = 0; i < 9 / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[8 - i];
        arr[8 - i] = temp;
    }
}
void printArr(int arr[])
{
    for (int i = 0; i < 9; i++)
    {
        printf("The %d element of the array is %d\n", i, arr[i]);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("Before Reversing the array\n");
    printArr(arr);
    printf("\nAfter reversing the array\n");
    arrRev(arr);
    printArr(arr);
    return 0;
}