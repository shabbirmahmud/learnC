#include <stdio.h>
// 1D Array
int main()
{
    int marks[4];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the %d element of the array is = ", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("\nThe %d element of the array is = %d\n", i, marks[i]);
    }
    return 0;
}
// int main()
// {
//     int marks[6]={55,55,53,56,45,54};
//     for (int i = 0; i < 6; i++)
//     {
//         printf("\nThe %d element of the array is = %d\n", i, marks[i]);
//     }
//     return 0;
// }