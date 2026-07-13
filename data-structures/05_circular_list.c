#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *first = malloc(sizeof(struct Node));
    struct Node *second = malloc(sizeof(struct Node));

    first->data = 1;
    first->next = second;

    second->data = 2;
    second->next = first;

    struct Node *temp = first;
    int count = 0;

    while (count < 4)
    {
        printf("%d ", temp->data);
        temp = temp->next;
        count++;
    }

    free(first);
    free(second);

    return 0;
}
