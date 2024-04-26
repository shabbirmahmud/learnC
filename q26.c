// Write a Program to print the pyramid below:
// 1
// 1122
// 111222333
// 1111222233334444
// 1111122222333334444455555
// 111111222222333333444444555555666666
// 1111111222222233333334444444555555566666667777777

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    for (int i = 1; i < 8; i++)
    {
        for (int j = 0; j < i * i; j++)
        {
            printf("%d", j / i + 1);
        }
        printf("\n");
    }

    return 0;
}