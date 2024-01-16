#include<stdio.h>

int main() {
    int mat1[2][2], mat2[2][2], result[2][2], i, j, k;

    // Input for the first matrix
    printf("Enter elements for the first matrix (2x2):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input for the second matrix
    printf("Enter elements for the second matrix (2x2):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Calculate the multiplication of the matrices
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            result[i][j] = 0;
            for(k = 0; k < 2; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Display the matrices and their product
    printf("\nThe first matrix is:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nThe second matrix is:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }

    printf("\nThe product of the matrices is:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
