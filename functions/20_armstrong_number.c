#include <stdio.h>

int power(int base, int exponent)
{
    if (exponent == 0)
        return 1;

    return base * power(base, exponent - 1);
}

int countDigits(int n)
{
    if (n == 0)
        return 0;

    return 1 + countDigits(n / 10);
}

int armstrongSum(int n, int digits)
{
    if (n == 0)
        return 0;

    return power(n % 10, digits) + armstrongSum(n / 10, digits);
}

int main()
{
    int number;
    int digits;

    printf("Enter a number: ");
    scanf("%d", &number);

    digits = countDigits(number);

    if (number == armstrongSum(number, digits))
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

    return 0;
}
