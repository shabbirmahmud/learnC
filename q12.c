// Write program using for loop to produce the output on the right
// 1
// -2
// 3
// -4
// 5
// -6
// 7
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    for (int i = 1, j = 1; i <= 7; i++, j = -j)
    {
        printf("%d\n", i * j);
    }

    return 0;
}