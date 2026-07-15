#include <stdio.h>

int isPrime(int n, int divisor)
{
    if (n <= 1)
        return 0;

    if (divisor * divisor > n)
        return 1;

    if (n % divisor == 0)
        return 0;

    return isPrime(n, divisor + 1);
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number, 2))
        printf("Prime Number\n");
    else
        printf("Not a Prime Number\n");

    return 0;
}
