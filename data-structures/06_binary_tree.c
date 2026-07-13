#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int value)
{
    struct Node *node = malloc(sizeof(struct Node));

    node->data = value;
    node->left = NULL;
    node->right = NULL;

    return node;
}

void inorder(struct Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int main()
{
    struct Node *root = createNode(10);

    root->left = createNode(5);
    root->right = createNode(15);

    inorder(root);

    return 0;
}
