// Write a loop to print the following: (In each pass you should print only one integer)
// 1 111 11111 1111111 111111111
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("1", j);
        }
        printf(" ");
    }

    return 0;
}