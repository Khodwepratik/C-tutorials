#include<stdio.h>

void main()
{
    // User Defining array
    int arr[5], i, n, count = 0;

    printf("Enter 5 Elements: \n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element that you want to search: \n");
    scanf("%d", &n);

    for (i = 0; i < 5; i++)
    {
        if (arr[i] == n)
        {
            printf("Element found at position %d...\n", i);
            count++; // Increment count if the element is found
        }
    }

    if (count == 0)
    {
        printf("Element not found in the array.\n");
    }
}
