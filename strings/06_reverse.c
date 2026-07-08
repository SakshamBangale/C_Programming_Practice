#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    length = strlen(str);

    if (str[length - 1] == '\n')
        length--;

    printf("Reversed String: ");

    for (i = length - 1; i >= 0; i--)
        printf("%c", str[i]);

    printf("\n");

    return 0;
}
