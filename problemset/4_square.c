#include <stdio.h>
#include <math.h>
int main()
{
    long long n, m, a, len, wid;
    scanf("%lld%lld%lld", &n, &m, &a);

    if (n >= 1 && a <= 1E9)
    {
        len = ceil((double)n / a);
        wid = ceil((double)m / a);
        printf("%lld\n", len * wid);
    }
    return 0;
}