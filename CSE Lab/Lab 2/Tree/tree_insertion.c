#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data) {
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

struct node *insert(struct node *root, struct node *node) {
    struct node *parent_node = NULL;
    struct node *current_node = root;
    
    while (current_node != NULL) {
        parent_node = current_node;
        if (node->data < current_node->data) {
            current_node = current_node->left;
        } else {
            current_node = current_node->right;
        }
    }
    
    if (parent_node == NULL) {
        // Tree was empty, so new node becomes the root
        root = node;
    } else if (node->data < parent_node->data) {
        parent_node->left = node;
    } else {
        parent_node->right = node;
    }
    
    return root;
}

void in_order(struct node *node)
{
    if (node->left != NULL)
        in_order(node->left);///
    printf("%d->", node->data);
    if (node->right != NULL)
        in_order(node->right);///
}

int main() {
    struct node *root = NULL;
    int nodes;
    printf("Enter the number of nodes: ");
    scanf("%d", &nodes);

    int num;
    for (int i = 0; i < nodes; i++) {
        printf("Enter node value: ");
        scanf("%d", &num);
        root = insert(root, createNode(num));
    }
    // Perform in-order traversal
    printf("In-order Traversal: ");
    in_order(root);
    printf("NULL\n");
    // Remember to free the allocated memory (not shown here for brevity)

    return 0;
}
