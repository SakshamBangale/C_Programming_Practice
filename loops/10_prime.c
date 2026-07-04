#include <stdio.h>

int main()
{
    int n, i;
    int prime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
        prime = 0;

    for (i = 2; i * i <= n && prime; i++)
    {
        if (n % i == 0)
            prime = 0;
    }

    if (prime)
        printf("%d is a Prime Number\n", n);
    else
        printf("%d is Not a Prime Number\n", n);

    return 0;
}
