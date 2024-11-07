#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int const ID1 = 7;
int array2D[10][4] = {1, 8, 7, 6, 2, 8, 15, 7, 11, 13, 1, 4, 8, 6, 7, 9, 3, 6, 9, 2, 4, 8, 16, 32, 3, 3, 4, 5, 8};
int main(void)
{
    int row, col;
    for (col = 1; col <= 6; col++)
    {
        for (row = ID1 / 4; row < 3 + (ID1 / 4); row++)
        {
            printf("%5d", array2D[col / 2][3 - row / 2]);
        }
        printf("\n");
    }
}