// User defined 2d array
// printing the 3*3 matrix

#include <stdio.h>

void main()
{
    int arr[3][3], i, j;

    printf("Enter 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Your 3x3 matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%-5d", arr[i][j]);
        }
        printf("\n");
    }
}
