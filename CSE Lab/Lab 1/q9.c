// Write a Program to detect Leap Year
// Earth orbits the Sun at an average distance of 149.60 million km (92.96 million mile),
// and solar year = 365 days, 5 hours, 48 minutes, 45.51 seconds
// But if we add one day every four years, then the length of one solar year becomes 365
// days 6 hours (Which is around 11 minutes 15 seconds more). To counter that the rule
// of leap-year is something like:
// A leap year is a year which is (i) divisible by 4 but not divisible by 100. But it is a leap
// year if divisible by 400.
// So 2004 is a leap year (Divisible by 4)
// 1900 is not a leap year despite being divisible by 4 (Divisible by 100)
// But 2000 is a leap year although it is divisible by 100(As it is divisible by 400)
// 1993 is not a leap year because it is not divisible by 4.
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int year;
    printf("Enter the Year?\n");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("This is Leap Year");
    }
    else
    {
        printf("This is not Leap Year");
    }

    return 0;
}