#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (rear == SIZE - 1)
    {
        printf("Queue Full\n");
        return;
    }

    if (front == -1)
        front = 0;

    queue[++rear] = value;
}

int dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Empty\n");
        return -1;
    }

    return queue[front++];
}

int main()
{
    enqueue(5);
    enqueue(10);
    enqueue(15);

    printf("%d\n", dequeue());
    printf("%d\n", dequeue());

    return 0;
}
