//Multiplication of 2 matrices
// -= 

#include<stdio.h>

void main() {
    int mat1[3][3], mat2[3][3], product[3][3], i, j, k;

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

    // Initialization of product matrix with zeros

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            product[i][j] = 0;
        }
    }

    // Performing matrix multiplication
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 3; k++) {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Displaying the product

   
    printf("\nThe product of the matrices is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }

}