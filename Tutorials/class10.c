#include <stdio.h>
int main(int argc, char const *argv[])
{
    int numtotal;
    printf("Follow the steps to know about your reward");
    printf("Enter your total number of Physics & Math = ");
    scanf("%d", &numtotal);
    if (numtotal >= 80)
    {
        printf("\nyou have got a handwatch");
    }
    else if (numtotal >= 60)
    {
        printf("\nyou have got a book");
    }
    else if (numtotal >= 33)
    {
        printf("\nyou have got a pen");
    }
    else
    {
        if (numtotal < 33)
        {
            printf("\nyou dont deserve nothing");
        }
    }
    return 0;
}
