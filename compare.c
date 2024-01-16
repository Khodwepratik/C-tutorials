#include <stdio.h>

int compare(char[], char[]); // function prototype

int main()
{
    char str1[20], str2[20]; // string declaration

    printf("Enter the first string: \n");
    scanf("%s", str1);

    printf("Enter the second string: \n");
    scanf("%s", str2);

    int c = compare(str1, str2); // function calling

    if (c == 0)
    {
        printf("Strings are the same\n");
    }
    else
    {
        printf("Strings are not the same\n");
    }

    return 0;
}

int compare(char a[], char b[])
{
    int flag = 0, i = 0;

    while (a[i] != '\0' && b[i] != '\0')
    {
        if (a[i] != b[i])
        {
            flag = 1;
            break;
        }
        i++;
    }

    if (a[i] != '\0' || b[i] != '\0')
        return 1;

    if (flag == 0)
        return 0;
    else
        return 1;
}
