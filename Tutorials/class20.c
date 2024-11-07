#include <stdio.h>
int main()
{
    int num, i, mul;
    printf("Enter the number you want multiplication of = ");
    scanf("%d", &num);
    printf("\nThe multiplication table of %d is =\n", num);
    for (i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n", num, i, mul = num * i);
    }
    return 0;
}
