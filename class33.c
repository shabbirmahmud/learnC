// Take input from the user. 1 for triangular star pattern and 2 for reverse triangular star pattern
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <gmp.h>
#include <string.h>
int main()
{
    int inp;
    printf("Choose the follwing:\n1. Triangular star pattern.\n2. Reversed triangular star pattern.\nEnter the number: ");
    scanf("%d", &inp);
    if (inp == 1)
    {
        int i, j, rows;
        printf("Please enter the value of rows: ");
        scanf("%d", &rows);
        printf("\n");
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    else if (inp == 2)
    {
        int i, j, rows;
        printf("Please enter the value of rows: ");
        scanf("%d", &rows);
        printf("\n");
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j <= rows - i - 1; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}