// Write a loop to output the following: aaacccebbbdddfccceeegdddff

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    for (int i = 0; i <= 25; i++)
    {
        printf("%c", i % 7 / 3 * 2 + 'a' + i / 7);
    }
    return 0;
}