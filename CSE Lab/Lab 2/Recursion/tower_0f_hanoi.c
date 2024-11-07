#include <stdio.h>
#include <math.h>

void toh_recursive(int n, char beg, char aux, char end)
{
    if (n <= 0)
    {
        printf("Invalid Entry\n");
    }
    else if (n == 1)
    {
        printf("Move disk from %c to %c\n", beg, end);
    }
    else
    {
        toh_recursive(n - 1, beg, end, aux);
        toh_recursive(1, beg, aux, end);
        toh_recursive(n - 1, aux, beg, end);
    }
}

void toh_iterative(int n, char beg, char aux, char end)
{
    int total_steps = pow(2, n) - 1; // Total moves
    char from, to;

    // If the number of disks is even, swap the destination and auxiliary pegs
    if (n % 2 == 0)
    {
        char temp = aux;
        aux = end;
        end = temp;
    }

    // Determine the moves
    for (int i = 1; i <= total_steps; i++)
    {
        // Determine the source and destination based on the current step
        if (i % 3 == 1)
        {
            from = beg;
            to = end;
        }
        else if (i % 3 == 2)
        {
            from = beg;
            to = aux;
        }
        else
        {
            from = aux;
            to = end;
        }

        // Print the move
        printf("Move disk from %c to %c\n", from, to);
    }
}

int main()
{
    int n;
    char a = 'A', b = 'B', c = 'C';
    printf("How many disks? ");
    scanf("%d", &n);
    printf("Tower of Hanoi of %d disks\n", n);
    printf("Recursively....\n");
    toh_recursive(n, a, b, c);
    printf("Iteratively....\n");
    toh_iterative(n, a, b, c);

    return 0; // Added return statement to main
}
