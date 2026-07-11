#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
    FILE *file = fopen("missing.txt", "r");

    if (file == NULL)
    {
        printf("Error: %s\n", strerror(errno));
        return 1;
    }

    fclose(file);

    return 0;
}
