#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str;

    str = (char *)malloc(100 * sizeof(char));

    if (str == NULL)
        return 1;

    printf("Enter a string: ");
    scanf(" %99[^\n]", str);

    printf("String: %s\n", str);

    free(str);

    return 0;
}
