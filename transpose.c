#include<stdio.h>

int main() {
    int arr[3][3], arr1[3][3], i, j;

    printf("Enter 3 X 3 matrix: \n");

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Transpose the matrix
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            arr1[j][i] = arr[i][j];
        }
    }

    printf(" The transpose of the above matrix is: \n");

    // Print the transposed matrix
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
