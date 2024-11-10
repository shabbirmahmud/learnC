#include <stdio.h>

int main()
{
    int W;
    scanf("%d", &W);
    if (2 < W & W <= 100 & W % 2 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}