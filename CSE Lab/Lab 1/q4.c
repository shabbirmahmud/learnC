#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <gmp.h>
#include <string.h>
// What is the value of strlen("\\\\...\\0") following rules of C?, Here ... means there is a sequence of \, assume that there are total 102202022201 \ (backslash) there to the left of zero. Assume that your computer has enough memory to run this function.
int main()
{
    char a[]="\\\\\0";
    // I typed 4 backslashes before \0. so the string length is 2. if I type 102202022200 backslash before \0 then the string length will be (102202022200\2)=51101011100.
    printf("%s\n",a);
    printf("%ld\n", strlen(a));
    return 0;
}