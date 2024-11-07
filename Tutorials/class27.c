#include <stdio.h>
int main()
{
    int arr[] = {22, 33, 44, 34, 33};
    arr[0]++;
    arr[1]++;

    printf("The value of element 0 is = %d\n", arr[0]);
    printf("The value of element 0 is = %d\n", *arr);
    printf("The value of element 0 is = %d\n", *(&arr[0]));

    printf("The adress of element 0 is = %d\n", arr);
    printf("The adress of element 0 is = %d\n", &arr[0]);

    printf("The value of element 0 is = %d\n", arr[0] + 1);
    printf("The value of element 0 is = %d\n", (*(arr) + 1));
    printf("The value of element 0 is = %d\n", (*(&arr[0])) + 1);

    printf("The adress of element 0 is = %d\n", arr + 1);
    printf("The adress of element 0 is = %d\n", &arr[1]);
    printf("The adress of element 0 is = %d\n", &arr[0] + 1);
    return 0;
}