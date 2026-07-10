#include <stdio.h>

struct Status
{
    unsigned int read : 1;
    unsigned int write : 1;
    unsigned int execute : 1;
};

int main()
{
    struct Status file = {1, 0, 1};

    printf("Read: %u\n", file.read);
    printf("Write: %u\n", file.write);
    printf("Execute: %u\n", file.execute);

    return 0;
}
