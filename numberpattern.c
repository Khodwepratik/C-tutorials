/* 1 22 333 4444 5555/*/
#include <stdio.h>
void main()
{

    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}