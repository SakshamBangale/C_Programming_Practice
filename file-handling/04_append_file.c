#include <stdio.h>

int main()
{
    FILE *file = fopen("sample.txt", "a");

    if (file == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    fprintf(file, "This line was appended.\n");

    fclose(file);

    printf("Data appended successfully.\n");

    return 0;
}
