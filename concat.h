#include<stdio.h>

void main()
{
    char s1[100] = "programming";
    char s2[] = " is awesome"; // Added the missing data type for s2 and fixed the string value
    
    int length = 0, j;

    // Calculate the length of s1
    while (s1[length] != '\0')
    {
        length++;
    }

    // Concatenate s2 to s1
    for (j = 0; s2[j] != '\0'; ++j, ++length)
    {
        s1[length] = s2[j];
    }

    // Terminating the s1 string
    s1[length] = '\0'; // Corrected the assignment of null terminator

    printf("After concatenation: ");
    puts(s1);
}
