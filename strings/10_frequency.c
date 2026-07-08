#include <stdio.h>

int main()
{
    char str[200];
    char ch;
    int i = 0;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character: ");
    scanf("%c", &ch);

    while (str[i] != '\0')
    {
        if (str[i] == ch)
            count++;

        i++;
    }

    printf("Frequency = %d\n", count);

    return 0;
}
