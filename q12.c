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