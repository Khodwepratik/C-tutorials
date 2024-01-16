#include <stdio.h>

void main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("Breaking out of the loop when i is 5\n");
            break;
        }

        printf("i = %d\n", i);
    }

    printf("Loop finished\n");
}
