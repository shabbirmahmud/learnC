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
    int usr, num;
    printf("Enter a number = ");
    scanf("%d", usr);
    // num = (usr % 2 == 0) + (usr % 3 == 0) + (usr % 5 == 0) + (usr % 7 == 0) + (usr % 9 == 0) + (usr % 11 == 0);11
    num = (usr % 2 == 0);
    printf("%d", num);
    if (num > 2)
    {
        printf("\nThis is a very special number");
    }
    else
    {
        printf("\nThis is not a very special number");
    }

    return 0;
}
