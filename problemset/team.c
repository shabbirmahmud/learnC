#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n, P, V, T, j = 0;
    scanf("%d", &n);
    if (1 <= n && n <= 1000)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d%d%d", &P, &V, &T);
            if ((P && V == 1 || P && T == 1 || V && T == 1 || P && V && T == 1) && ((P || V || T == 1) || (P || V || T == 0)))
            {
                j++;
            }
        }
    }
    else
    {
        return 0;
    }
    printf("\n%d\n", j);
    return 0;
}
