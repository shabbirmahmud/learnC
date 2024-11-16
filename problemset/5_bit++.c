#include <stdio.h>

int main()
{
    int n, X = 0;
    char op[4];
    scanf("%d", &n);
    if (1 <= n && n <= 150)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%3s", &op);

            if (op[0] == 'X' && op[1] == '+' && op[2] == '+')
            {
                X++;
            }
            else if (op[0] == '+' && op[1] == '+' && op[2] == 'X')
            {
                ++X;
            }
            else if (op[0] == 'X' && op[1] == '-' && op[2] == '-')
            {
                X--;
            }
            else
            {
                --X;
            }
        }
        printf("%d", X);
    }
}