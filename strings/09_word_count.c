#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int i;
    int words = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if ((i == 0 || str[i - 1] == ' ') &&
            str[i] != ' ' &&
            str[i] != '\n')
            words++;
    }

    printf("Words = %d\n", words);

    return 0;
}
