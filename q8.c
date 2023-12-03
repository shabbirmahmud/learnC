#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <gmp.h>
#include <string.h>
// char text2[]=  “There is no error in this \\0 method\0 Right?”, then what is the value of strlen(text2)?
int main()
{
    char a[]="There is no error in this \\0 method\0 Right?";
    printf("%s\n",a);
    printf("%ld\n", strlen(a));
    return 0;
}