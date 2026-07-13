#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

int main()
{
    struct Node *first = malloc(sizeof(struct Node));
    struct Node *second = malloc(sizeof(struct Node));

    first->data = 10;
    first->prev = NULL;
    first->next = second;

    second->data = 20;
    second->prev = first;
    second->next = NULL;

    printf("%d %d\n", first->data, second->data);

    free(first);
    free(second);

    return 0;
}
