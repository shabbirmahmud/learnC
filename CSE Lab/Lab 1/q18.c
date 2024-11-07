// Write a loop to print the following numbers: (In each pass you should print only one number)
// 10 20 30 40 50 60
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    for (int i = 10; i <= 60; i = i + 10)
    {
        printf("%d ", i);
    }

    return 0;
}