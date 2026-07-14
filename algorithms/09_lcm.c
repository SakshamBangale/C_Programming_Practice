#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main()
{
    int a = 12;
    int b = 18;

    int lcm = (a * b) / gcd(a, b);

    printf("LCM = %d\n", lcm);

    return 0;
}
