#include <stdio.h>

int main()
{
    FILE *file;
    char ch;
    int characters = 0;
    int lines = 0;

    file = fopen("sample.txt", "r");

    if (file == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        characters++;

        if (ch == '\n')
            lines++;
    }

    fclose(file);

    printf("Characters: %d\n", characters);
    printf("Lines: %d\n", lines);

    return 0;
}
