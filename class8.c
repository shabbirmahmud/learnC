#include <stdio.h>

int main()
{
    /*
    Q-print multiplication table of a number entered by the  user in pretty form.
    example -
    input-
    enter the number you want multiplication table of:
    6
    Outout:
    table of 6:
    6*1=6
    6*2=12r
    ......
    */
    int mul=6;
    printf("The table of 6 is :\n");
    printf("6 * 1 = %d\n", mul*1);
    printf("6 * 2 = %d\n", mul*2);
    printf("6 * 3 = %d\n", mul*3);
    printf("6 * 4 = %d\n", mul*4);
    printf("6 * 5 = %d\n", mul*5);
    printf("6 * 6 = %d\n", mul*6);
    printf("6 * 7 = %d\n", mul*7);
    printf("6 * 8 = %d\n", mul*8);
    printf("6 * 9 = %d\n", mul*9);
    printf("6 * 10 = %d\n", mul*10);
    return 0;
}
