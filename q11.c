// A number is “very special” if it is divisible by more than two of the six numbers 2, 3,
// 5, 7, 9, 11. Assume that input numbers will not exceed 10000000
// For example:
// ● 11 is not very special as it is divisible by one of the numbers.
// ● 15 is not very special as it is divisible by 3 and 5 only
// ● 45 is very special as it is divisible by 3, 5, 9 so divisible by more than two
// numbers
// ● 42 is very special as it is divisible by 2, 3 and 7.
// ● 125 is not very special as it is divisible by only 5. Of course it is divisible by 25
// but that is not in the given list of numbers.
// ● 26 is not very special as it is divisible by only 2. Of course it is divisible by 13
// but that is not in the given list of numbers.
// ● Write a program to find out whether a number is “very special” or not.
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num, t2, t3, t5, t7, t9, t11, total;
    printf("Enter a number = ");
    scanf("%d", &num);
    t2 = num % 2 == 0;
    t3 = num % 3 == 0;
    t5 = num % 5 == 0;
    t7 = num % 7 == 0;
    t9 = num % 9 == 0;
    t11 = num % 11 == 0;
    total = t2 + t3 + t5 + t7 + t9 + t11;
    if (total > 2)
    {
        printf("\nThis is a very special number");
    }
    else
    {
        printf("\nThis is not a very special number");
    }

    return 0;
}