#include <stdio.h>
#include <string.h>

int main()
{
    char source[100];
    char destination[100];

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    strcpy(destination, source);

    printf("Copied String: %s", destination);

    return 0;
}
