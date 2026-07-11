#include <stdio.h>

int main()
{
    FILE *file = fopen("sample.txt", "w");

    if (file == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    fprintf(file, "Hello, World!\n");
    fprintf(file, "Welcome to C File Handling.\n");

    fclose(file);

    printf("Data written successfully.\n");

    return 0;
}
