#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rows=5, cols=5, arr[rows][cols], moves;
    int x = 0, y = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    moves = abs(x - 2) + abs(y - 2);
    printf("%d\n", moves);
    return 0;
}