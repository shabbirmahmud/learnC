// Write a Program to produce the output below:
// A
// BB
// CCC
// DDDD
// EEEEE
// FFFFFF

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    for (int i = 'A'; i <= 'F'; i++)
    {
        for (int j = 'A'; j <= i; j++)
        {
            printf("%c", i);
        }
        printf("\n");
    }

    return 0;
}