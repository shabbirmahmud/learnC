// (b) Write a function mini() that takes three integers as input and returns the minimum value among them. eg. mini( 2, 5, 4) should return 2.
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int mini(int a, int b, int c);
int main()
{
    int a, b, c;
    printf("Enter three numbers = ");
    scanf("%d%d%d", &a, &b, &c);
    printf("\n%d", mini(a, b, c));
    return 0;
}
int mini(int a, int b, int c)
{
    if (a < c)
    {
        return a;
    }
    else if (b < c)
    {
        return b;
    }
    return c;
}
