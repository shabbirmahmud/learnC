#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    for (int i = 0; i <= 43; i++)
    {
        printf("%c", (i % 9) / 3 + 97 + (i / 9));
        if (i == 8)
        {
            printf(" ");
        }
        else if (i == 17)
        {
            printf(" ");
        }
        else if (i == 26)
        {
            printf(" ");
        }
        else if (i == 35)
        {
            printf(" ");
        }
    }
    return 0;
}
