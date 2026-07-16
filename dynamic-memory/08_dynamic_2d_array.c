#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **matrix;
    int rows = 3;
    int cols = 3;
    int i, j;

    matrix = (int **)malloc(rows * sizeof(int *));

    for (i = 0; i < rows; i++)
        matrix[i] = (int *)malloc(cols * sizeof(int));

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            matrix[i][j] = i + j;
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);

        printf("\n");
    }

    for (i = 0; i < rows; i++)
        free(matrix[i]);

    free(matrix);

    return 0;
}
