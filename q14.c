// Write a for loop to print the output: [ In Each pass print just one number]
// 11 8 5 2 11 8 5 2 11 8 5 2 11 8
// Hint:
// First print something like:
// 0 3 6 9 0 3 6 9 0 3 6
// Then do some manipulation in the expression to print 11 8 5...
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