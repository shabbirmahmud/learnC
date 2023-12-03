#include <stdio.h>

int main()
{
    int i;
    printf("Put value either 5,9 or 10 = ");
    scanf("%d", &i);
    switch (i)
    {
    case 5:
        printf("Value is 5");
        break;
    case 9:
        printf("Value is 9");
        break;
    case 10:
        printf("Value is 10");
        break;
    default:
        printf("Nothing matched");
        break;
    }
    return 0;
}
