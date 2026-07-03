#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0)
        printf("Positive Number\n");
    else
        printf("Zero or Negative Number\n");

    return 0;
}