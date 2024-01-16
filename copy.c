#include <stdio.h>

void main()
{
    char str1[6], str2[6];
    int i;
    
    printf("Enter the string: \n");
    scanf("%s", str1);

    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }

    str2[i] = '\0'; // Ensure the destination string is null-terminated

    printf("New String is: %s\n", str2);

    
}
