// A number is “special” if it is divisible by exactly any two of the four numbers 3, 5, 7
// and 9.
// For example:
// 11 is not special as it is divisible by none of the numbers.
// 15 is special as it is divisible by 3 and 5 only
// 45 is not special as it is divisible by 3, 5, 9 so more than two numbers
// 21 is special as it is divisible by 3 and 7.
// Write a program to find out whether a number is special or not.
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num;
    printf("Enter a number = ");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 5 == 0 && num % 7 != 0 && num % 9 != 0)
    {
        printf("\nIt is a special number");
    }
    else if (num % 3 == 0 && num % 5 != 0 && num % 7 == 0 && num % 9 != 0)
    {
        printf("\nIt is a special number");
    }
    else if (num % 3 == 0 && num % 5 != 0 && num % 7 != 0 && num % 9 == 0)
    {
        printf("\nIt is a special number");
    }
    else if (num % 3 != 0 && num % 5 == 0 && num % 7 == 0 && num % 9 != 0)
    {
        printf("\nIt is a special number");
    }
    else if (num % 3 != 0 && num % 5 == 0 && num % 7 != 0 && num % 9 == 0)
    {
        printf("\nIt is a special number");
    }
    else if (num % 3 != 0 && num % 5 != 0 && num % 7 == 0 && num % 9 == 0)
    {
        printf("\nIt is a special number");
    }
    else
    {
        printf("\nThis is not a special number");
    }
    return 0;
}