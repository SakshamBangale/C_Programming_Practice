#include <stdio.h>

int main()
{
    FILE *source;
    FILE *destination;
    char ch;

    source = fopen("sample.txt", "r");
    destination = fopen("copy.txt", "w");

    if (source == NULL || destination == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
        fputc(ch, destination);

    fclose(source);
    fclose(destination);

    printf("File copied successfully.\n");

    return 0;
}
