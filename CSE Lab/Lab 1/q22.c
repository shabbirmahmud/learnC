// Write a Program to produce the output below:
// #####*
// ####***
// ###*****
// ##*******
// #*********
// ***********
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6 - i; j++)
        {
            printf("#");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}