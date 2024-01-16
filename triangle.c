#include <stdio.h>
void main()
{
    int i, j, N;

    printf("Enter the Number of Rows: ");
    scanf("%d", &N);

        for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= i; j++)
        {

            if (i == 1 || i == N || j == 1 || j == i)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
}