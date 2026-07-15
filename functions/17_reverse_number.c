#include <stdio.h>

int reverse(int n, int result)
{
    if (n == 0)
        return result;

    return reverse(n / 10, result * 10 + n % 10);
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Reverse = %d\n", reverse(number, 0));

    return 0;
}
