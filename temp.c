#include <stdio.h>
int main()
{
    int n;
    int P, S, Q;
    int num = 0;
    printf("The number of problems in the contest :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d %d", &P, &S, &Q);
        if ((P && Q == 1) || (P && S == 1) || (S && Q == 1) || (P && Q && S == 1))
            num++;
    }
    printf("\n%d\n", num);
    return 0;
}
