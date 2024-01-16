// For loop user defined array	

#include<stdio.h>

int main() {
    int arr[5], i;

    printf("Enter 5 Elements:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements of an array:\n");

    for (i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
