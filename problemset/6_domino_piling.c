#include <stdio.h>

int main()
{
    const int domino = 2 * 1;
    int M, N, square, maxDom;
    scanf("%d %d", &M, &N);
    if (1 <= M && M <= N && N <= 16)
    {
        square = M * N;
        maxDom = square / domino;
    }
    printf("%d", maxDom);
    return 0;
}