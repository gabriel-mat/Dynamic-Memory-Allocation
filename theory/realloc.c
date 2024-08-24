#include <stdio.h>
#include <stdlib.h>

void completeArray(int *pointer, int size);
void printArray(int *pointer, int size);

int main()
{
    int *pointer, *newPointer;

    pointer = calloc(5, sizeof(int));
    completeArray(pointer, 5);
    printArray(pointer, 5);

    // increasing the array size

    newPointer = realloc(pointer, 10 * sizeof(int)); // using a "temporary pointer" is safer, otherwise we could get "pointer = NULL"

    if (newPointer != NULL)
        pointer = newPointer;
    else
        return 1;

    free(newPointer);

    completeArray(pointer, 10);
    printArray(pointer, 10);

    free(pointer);

    return 0;
}

void completeArray(int *pointer, int size)
{
    for (int i = 0; i < size; i++)
        *(pointer + i) = i + 1;
}

void printArray(int *pointer, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", pointer[i]);

    printf("\n");
}