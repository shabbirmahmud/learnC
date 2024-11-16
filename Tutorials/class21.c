#include <stdio.h>
long double factorial(long double number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}
long double main()
{
    long double num;
    printf("Please enter the number you want factorial of = ");
    scanf("%Lf", &num);
    printf("\n%Lf! is %Lf\n", num, factorial(num));
    return 0;
}