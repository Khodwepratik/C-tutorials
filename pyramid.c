#include <stdio.h>

int main()
{
    int i, space, rows = 5, j;

    for (i = 1; i <= rows; i++)
    {
        for (space = 1; space <= (rows - i); space++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}