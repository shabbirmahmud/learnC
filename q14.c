// Write a for loop to print the output: [ In Each pass print just one number]
// 11 8 5 2 11 8 5 2 11 8 5 2 11 8
#include <stdio.h>

int main(void)
{
    int i;
    for (i = 0; i <= 13; i++)
    {
        printf("%d ", (i % 4 * 3 - 11) * (-1));
    }
    return 0;
}