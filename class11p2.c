#include <stdio.h>
int main(int argc, char const *argv[])
{
    int time1,time2;
    printf("Enter the time = ");
    scanf("%d%d",&time1,&time2);
    switch (time1)
    {
    case 8:
        printf("\nEat your breakfast");
        switch (time2)
        {
        case 10:
        printf("\nGo to college");
            break;
        case 13:
        printf("\nTake a bath");
            break;       
        default:
        printf("\nYou are definitely lazy");
        break;
        } 
        break;
    default:
    printf("\nWhat are u doing bruh?");
    }
    return 0;
}
