// (b)  A function max2(int a, int b) returns the maximum of two integers. Using this function, write another function
// max5(int a, int b, int c, int d, int e) which returns the maximum of 5 values.

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int max2(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}
int max5(int a, int b, int c, int d, int e)
{
    return max2(max2(max2(max2(a, b), c), d), e);
}
int main()
{
    int a, b, c, d, e;
    printf("ernter 5 numbers - ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    printf("\n%d", max5(a, b, c, d, e));
    return 0;
}