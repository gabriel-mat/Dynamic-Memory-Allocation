#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *pointer;

    pointer = malloc(6 * sizeof(char));

    if (pointer == NULL)
    {
        printf("Oops, no memory!\n");
        return 0;
    }

    pointer[0] = 'H';
    pointer[1] = 'e';
    pointer[2] = 'l';
    pointer[3] = 'l';
    pointer[4] = 'o';
    pointer[5] = '\n';

    for (int i = 0; i < 6; i++)
        printf("%c", pointer[i]);

    free(pointer);

    return 0;
}