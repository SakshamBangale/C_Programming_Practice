#include <stdio.h>

int main()
{
    FILE *file;
    char line[200];

    file = fopen("students.csv", "r");

    if (file == NULL)
    {
        printf("CSV file not found.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file))
        printf("%s", line);

    fclose(file);

    return 0;
}
