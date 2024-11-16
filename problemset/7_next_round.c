#include <stdio.h>

int main()
{
    int k, n, ai[101], next_round = 0;
    scanf("%d %d", &n, &k);
    if (n >= k && 1 <= k && n <= 50)
    {
        int i = 0;
        do
        {
            scanf("%d", &ai[i]);
            if (0 <= ai[i] && ai[i] <= 100)
            {
                i++;
            }
            else
            {
                break;
            }
        } while (i < n);
        for (int i = 0; i < n; i++)
        {
            if (ai[i] > 0 && ai[i] >= ai[k - 1])
            {
                if (ai[n - 1] <= ai[i] || ai[i] >= ai[i + 1])
                {
                    next_round = i + 1;
                }
            }
        }
        printf("%d", next_round);
    }
    return 0;
}