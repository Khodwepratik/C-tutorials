#include <stdio.h>
#include <string.h>

int main() {
    char str1[20], str2[20];

    // Input strings
    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // strlen: Length of the string
    printf("\n1. Length of str1: %zu\n", strlen(str1));
    printf("   Length of str2: %zu\n", strlen(str2));

    // strcpy: Copy one string to another
    strcpy(str1, str2);
    printf("\n2. After copying str2 to str1, str1 is now: %s\n", str1);

    // strcat: Concatenate two strings
    strcat(str1, " is concatenated.");
    printf("\n3. After concatenation, str1 is now: %s\n", str1);

    // strcmp: Compare two strings
    int result = strcmp(str1, str2);
    printf("\n4. Comparison result between str1 and str2: %d\n", result);

    // strchr: Find the first occurrence of a character in a string
    char ch = 'a';
    char *ptr = strchr(str1, ch);
    if (ptr != NULL) {
        printf("\n5. First occurrence of '%c' in str1 is at position: %ld\n", ch, ptr - str1 + 1);
    } else {
        printf("\n5. '%c' not found in str1.\n", ch);
    }

    // strstr: Find the first occurrence of a substring in a string
    char substr[] = "conca";
    ptr = strstr(str1, substr);
    if (ptr != NULL) {
        printf("\n6. First occurrence of '%s' in str1 starts at position: %ld\n", substr, ptr - str1 + 1);
    } else {
        printf("\n6. '%s' not found in str1.\n", substr);
    }

    return 0;
}
