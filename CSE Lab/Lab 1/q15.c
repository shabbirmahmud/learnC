// Write a Program to produce the output below:
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i, j;
    for (i = 1; i < 6; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}