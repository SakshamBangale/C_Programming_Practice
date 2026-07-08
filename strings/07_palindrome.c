#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, length;
    int palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    length = strlen(str);

    if (str[length - 1] == '\n')
        length--;

    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");

    return 0;
}
