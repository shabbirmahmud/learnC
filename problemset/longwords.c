#include <stdio.h>
#include <string.h>
int main()
{
    int i, len;
    char w[99];
    scanf("%d", &i);
    for (int j = 1; j <= i; j++)
    {
        len = strlen(w);
    }
    if (len > 10)
    {
        printf("%c%d%c", w[0], len - 2, w[len - 1]);
    }
    return 0;
}