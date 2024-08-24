#include <stdio.h>
#include <stdlib.h>

void printArray(int *P, int size);
int checkPointer(int *P);

int main()
{
    int *pointer;

    // with calloc, all elements are set to zero
    pointer = calloc(5, sizeof(int));

    if (checkPointer(pointer))
        return 1;

    for (int i = 0; i < 5; i++)
        pointer[i] = i + 1;

    printArray(pointer, 5);

    free(pointer);

    return 0;
}

void printArray(int *P, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", P[i]);

    printf("\n");
}

int checkPointer(int *P)
{
    if (P == NULL)
    {
        printf("No memory!\n");
        return 1;
    }
    return 0;
}