#include <stdio.h>

int main()
{
    int age;
    char citizen;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Are you a citizen? (Y/N): ");
    scanf(" %c", &citizen);

    if (age >= 18)
    {
        if (citizen == 'Y' || citizen == 'y')
            printf("Eligible to vote.\n");
        else
            printf("Not a citizen.\n");
    }
    else
    {
        printf("Under age.\n");
    }

    return 0;
}