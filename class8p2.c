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
    int inpt,num,mul;
    printf("Enter the value u want multiplication of = ");
    scanf("%d", &inpt);
    printf("\nThe table of %d is :\n", inpt);
    printf("%d * 1 = %d\n", inpt,mul=inpt*1);
    printf("%d * 2 = %d\n", inpt,mul=inpt*2);
    printf("%d * 3 = %d\n", inpt,mul=inpt*3);
    printf("%d * 4 = %d\n", inpt,mul=inpt*4);
    printf("%d * 5 = %d\n", inpt,mul=inpt*5);
    printf("%d * 6 = %d\n", inpt,mul=inpt*6);
    printf("%d * 7 = %d\n", inpt,mul=inpt*7);
    printf("%d * 8 = %d\n", inpt,mul=inpt*8);
    printf("%d * 9 = %d\n", inpt,mul=inpt*9);
    printf("%d * 10 = %d\n", inpt,mul=inpt*10);
    return 0;
}