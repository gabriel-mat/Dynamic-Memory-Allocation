#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pointer;

    pointer = malloc(3 * sizeof(int));

    if (pointer == NULL)
    {
        printf("Oops, no memory!\n");
        return 0;
    }

    *pointer = 1;
    pointer[1] = 2;
    *(pointer + 2) = 3;

    for (int i = 0; i < 3; i++)
        printf("%d ", pointer[i]);

    return 0;
}