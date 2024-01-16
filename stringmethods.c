#include <stdio.h>
#include <string.h>

int main() {
    char a[20], b[10]; // String declarations

    // Input strings
    printf("Enter the first string: \n");
    scanf("%s", a);

    printf("Enter the second string: \n");
    scanf("%s", b);

    // String length using strlen
    printf("\nThe string length of the first string is: %zu\n", strlen(a));
    printf("The string length of the second string is: %zu\n", strlen(b));

    // Concatenate strings using strcat
    strcat(a, b);
    printf("\nstrcat(): %s\n", a);

    // Compare strings using strcmp
    int compareResult = strcmp(a, b);
    printf("strcmp(): %d\n", compareResult);

    // Convert to lowercase using strlwr
    strlwr(a);
    printf("strlwr(): %s\n", a);

    // Convert to uppercase using strupr
    strupr(a);
    printf("strupr(): %s\n", a);

    // Copy string using strcpy
    strcpy(a, b);
    printf("strcpy(): %s\n", a);

    return 0;
}
