#include <stdio.h>

#define MAX 100

int main()
{
    int prime[MAX + 1];
    int i, j;

    for (i = 0; i <= MAX; i++)
        prime[i] = 1;

    prime[0] = prime[1] = 0;

    for (i = 2; i * i <= MAX; i++)
    {
        if (prime[i])
        {
            for (j = i * i; j <= MAX; j += i)
                prime[j] = 0;
        }
    }

    printf("Prime Numbers:\n");

    for (i = 2; i <= MAX; i++)
    {
        if (prime[i])
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}
