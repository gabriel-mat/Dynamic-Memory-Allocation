#include <stdio.h>
#include <stdlib.h>

void completeMatrix(int **m, int dimension);
void printMatrix(int **m, int dimension);

int main()
{
    int **pointer;

    // creating a 3x3 matrix
    // int **I -> int *J -> int K

    pointer = malloc(3 * sizeof(int *));

    if (pointer == NULL)
        return 1;

    for (int i = 0; i < 3; i++)
    {
        pointer[i] = malloc(3 * sizeof(int));
        if (pointer[i] == NULL)
            return 1;
    }

    completeMatrix(pointer, 3);
    printMatrix(pointer, 3);

    // freeing memory (the order matters)
    for (int i = 0; i < 3; i++)
        free(pointer[i]);
    free(pointer);

    return 0;
}

void completeMatrix(int **m, int dimension)
{
    for (int i = 0, k = 1; i < dimension; i++)
        for (int j = 0; j < dimension; j++)
            m[i][j] = k++;
}

void printMatrix(int **m, int dimension)
{
    for (int i = 0; i < dimension; i++)
    {
        for (int j = 0; j < dimension; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}