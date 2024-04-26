// Write a for loop to print the output: [ In Each pass print just one number]
// 5 8 11 2 5 8 11 2 5 8 11 2 5 8
// Why do we provide the red text?
// To discourage loop like:
// for(i=1;i<=1;i++)
// {
// printf(“5 8 11 2 5 8 11 2 5 8 11 2 5 8\n”);
// }
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    for (int i = 1; i < 16; i++)
    {
        printf("%d\n", i % 4 * 3 + 2);
    }

    return 0;
}