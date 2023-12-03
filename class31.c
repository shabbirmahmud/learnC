#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <gmp.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
void change1(int *sum, int *sub)
{
    *sum = 4 + 3;
    *sub = 4 - 3;
}
int main()
{
    int a = 4, b = 3;
    printf("The value of a is %d and b is %d\n", a, b);
    change1(&a, &b);
    printf("The value of a is %d and value of b is %d", a, b);
    return 0;
}