#include <stdio.h>

#define SIZE 10

int table[SIZE];

int hash(int key)
{
    return key % SIZE;
}

int main()
{
    int key = 35;

    table[hash(key)] = key;

    printf("Stored %d at index %d\n", key, hash(key));

    return 0;
}
