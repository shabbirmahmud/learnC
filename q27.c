// Write a nested for loop to print the following: (In each pass you should print only one character)
// *
// **..
// ***...***
// ****....****....
// *****.....*****.....*****
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0; i <= 4; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        if (i > 0)
        {
            for (j = 1; j <= i + 1; j++)
            {
                printf(".");
            }
        }
        if (i > 1)
        {
            for (j = 2; j <= i + 2; j++)
            {
                printf("*");
            }
        }
        if (i > 2)
        {
            for (j = 3; j <= i + 3; j++)
            {
                printf(".");
            }
        }
        if (i > 3)
        {
            for (j = 4; j <= i + 4; j++)
            {
                printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}