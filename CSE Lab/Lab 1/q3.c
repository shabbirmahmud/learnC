#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <gmp.h>
// If no overflow occurs then what would the value of sin(60^10000+5) following the rules of C, 60^10000 means sixty to the power 10000.
int main()
{
    double result=pow(60,10000)+5;
    printf("Result = %lf\n",result);
    return 0;
}