#include <stdio.h>

void main()
{
    int arr[3][3], i, j, sum_diagonal=0, sum_nondiagonal=0;

    printf("Enter 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if(i == j)
            {
                sum_diagonal = sum_diagonal + arr[i][j];
            }
            else
            {
                sum_nondiagonal = sum_nondiagonal + arr[i][j];
            }
        }
    }

    printf("Sum of diagonal elements: %d\n", sum_diagonal);
    printf("Sum of non-diagonal elements: %d\n", sum_nondiagonal);
}
