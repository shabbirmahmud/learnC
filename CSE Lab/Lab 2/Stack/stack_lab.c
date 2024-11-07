#include <stdio.h>

int top = -1;
int st[20];

int push(int x)
{
    top++;
    st[top] = x;
    return st[top];
}

int pop()
{
    int temp = st[top];
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
    printf("Is Empty: %d\n", isEmpty());
    printf("size: %d\n\n", size());

    printf("Pushing %d\n", push(7));
    printf("Pushing %d\n", push(3));
    printf("Pushing %d\n", push(8));
    printf("Is Empty: %d\n", isEmpty());
    printf("size: %d\n\n", size());

    printf("Popping %d\n", pop());
    printf("Is Empty: %d\n", isEmpty());
    printf("size: %d\n\n", size());

    printf("Popping %d\n", pop());
    printf("Is Empty: %d\n", isEmpty());
    printf("size: %d\n\n", size());

    return 0;
}