// Write a Program to produce the output below:
// ##########1
// #########121
// ########12321
// #######1234321
// ######123454321
// #####12345654321
// ####1234567654321
// ###123456787654321
// ##12345678987654321
// #1234567890987654321
// 123456789010987654321
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    for (int i = 1; i <= 11; i++)
    {
        for (int j = 0; j <= 11 - i; j++)
        {
            printf("#");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j % 10);
        }
        for (int j = i - 1; j >= 1; j--)
        {
            printf("%d", j % 10);
        }
        printf("\n");
    }

    return 0;
}
