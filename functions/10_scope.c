#include <stdio.h>

int number = 100;

void showScope(void);

int main()
{
    int number = 50;

    printf("Local = %d\n", number);

    showScope();

    return 0;
}

void showScope(void)
{
    printf("Global = %d\n", number);
}
