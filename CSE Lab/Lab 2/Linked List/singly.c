#include <stdio.h>
#include <stdlib.h>

// traversal, searching, insertion and deletion

struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int search(struct node *ptr, int value)
{
    while (ptr != NULL)
    {
        if (ptr->data == value)
        {
            printf("\nThe Element %d has been found\n", value);
        }
        ptr = ptr->next;
    }
}

struct node *insertFirst(struct node *head, int data)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    ptr->next = head;
    return ptr;
}

struct node *insertIndex(struct node *head, int data, int index)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

struct node *insertBefore(struct node *head, struct node *prevNode, struct node *nextNode, int data)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    prevNode->next = ptr;
    ptr->next = nextNode;

    return head;
}

struct node *deleteFirst(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct node *deleteIndex(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;

    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next; // q at the node which will be deleted
    free(q);
    return head;
}

struct node *deleteValue(struct node *head, int data)
{
    struct node *p = head;
    struct node *q = head->next;

    while (q->data != data && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == data)
    {
        p->next = q->next; // q at the node which will be deleted
        free(q);
    }
    return head;
}

int main()
{
    struct node *head, *second, *third;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 12;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 39;
    third->next = NULL;

    traversal(head);

    search(head, 39);

    // insert first
    head = insertFirst(head, 45);
    traversal(head);
    printf("\n");

    // insert at index
    head = insertIndex(head, 55, 3);
    traversal(head);
    printf("\n");

    // insert before a node
    head = insertBefore(head, second, third, 90);
    traversal(head);
    printf("\n");

    // delete first
    head = deleteFirst(head);
    traversal(head);
    printf("\n");

    // delete at index
    head = deleteIndex(head, 3);
    traversal(head);
    printf("\n");

    // delete at value
    head = deleteValue(head, 20);
    traversal(head);
    printf("\n");

    return 0;
}