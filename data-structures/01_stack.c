#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int value)
{
    if (top == SIZE - 1)
    {
        printf("Stack Overflow\n");
        return;
    }

    stack[++top] = value;
}

int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }

    return stack[top--];
}

void display()
{
    int i;

    for (i = top; i >= 0; i--)
        printf("%d ", stack[i]);

    printf("\n");
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    printf("Popped: %d\n", pop());

    display();

    return 0;
}
