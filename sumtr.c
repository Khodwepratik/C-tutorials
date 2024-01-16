// addition of matrix and transpose matrix
// sum



#include<stdio.h>

int main() {
    int arr[3][3], arr1[3][3], sum[3][3], i, j;

    printf("Enter 3 X 3 matrix: \n");

    // Input matrix
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

    // Calculate the sum of the matrix and its transpose
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            sum[i][j] = arr[i][j] + arr1[i][j];
        }
    }

    printf(" The original matrix is: \n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n The transpose of the above matrix is: \n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }

    printf("\n The sum of the original matrix and its transpose is: \n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
