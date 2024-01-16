#include<stdio.h>

int main() {
    int mat1[3][3], mat2[3][3], sum[3][3], i, j;

    // Input for the first matrix
    printf("Enter elements for the first matrix (3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input for the second matrix
    printf("Enter elements for the second matrix (3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Calculate the sum of the matrices
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Display the matrices and their sum
    printf("\nThe first matrix is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nThe second matrix is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }

    printf("\nThe sum of the matrices is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
