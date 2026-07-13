#include <stdio.h>

#define VERTICES 4

int main()
{
    int graph[VERTICES][VERTICES] =
    {
        {0, 1, 1, 0},
        {1, 0, 1, 1},
        {1, 1, 0, 0},
        {0, 1, 0, 0}
    };

    int i, j;

    printf("Adjacency Matrix:\n");

    for (i = 0; i < VERTICES; i++)
    {
        for (j = 0; j < VERTICES; j++)
            printf("%d ", graph[i][j]);

        printf("\n");
    }

    return 0;
}
