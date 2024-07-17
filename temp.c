#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    for (int F1 = 0, F2 = 1, F3 = 1, F = F1 + F2 + F3, printf("%d %d %d", F1, F2, F3); F <= 24)
    {
        printf(" %d", F);
        F1 = F2;
        F2 = F3;
        F3 = F;
        F = F1 + F2 + F3;
    }

    return 0;
}