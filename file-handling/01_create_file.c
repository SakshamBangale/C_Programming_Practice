#include <stdio.h>

int main()
{
    FILE *file = fopen("sample.txt", "w");

    if (file == NULL)
    {
        printf("Failed to create file.\n");
        return 1;
    }

    fclose(file);

    printf("File created successfully.\n");

    return 0;
}
