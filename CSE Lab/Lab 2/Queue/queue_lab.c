#include <stdio.h>

int top = -1;
int qu[20];

int push(int x)
{
    top++;
    qu[top] = x;
    return qu[top];
}

int pop()
{
    int temp = qu[0];
    for (int i = 1; i <= top; i++)
    {
        qu[i - 1] = qu[i];
    }
    top--;
    return temp;
}

int isEmpty()
{
    return top == -1;
}

int size()
{
    return top + 1;
}

int main()
{
    printf("Is empty: %d\n", isEmpty());
    printf("Size: %d\n\n", size());

    printf("Pushed %d\n", push(7));
    printf("Pushed %d\n", push(3));
    printf("Pushed %d\n", push(2));
    printf("Is empty: %d\n", isEmpty());
    printf("Size: %d\n\n", size());

    printf("Popping %d\n", pop());
    printf("Is empty: %d\n", isEmpty());
    printf("Size: %d\n\n", size());

    printf("Popping %d\n", pop());
    printf("Is empty: %d\n", isEmpty());
    printf("Size: %d\n\n", size());

    return 0;
}