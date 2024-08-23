#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pointer;

    pointer = malloc(3 * sizeof(int));

    *pointer = 0;
    pointer[1] = 1;
    *(pointer + 2) = 2;

    for (int i = 0; i < 3; i++)
        printf("%d ", pointer[i]);

    return 0;
}