#include <stdio.h>

int main()
{
    if (remove("sample.txt") == 0)
        printf("File deleted successfully.\n");
    else
        printf("Unable to delete file.\n");

    return 0;
}
