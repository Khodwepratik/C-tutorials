// Addition of all elements in array

#include<stdio.h>

void main()
{
	int arr[5], i, sum=0;
	printf("Enter the five Elements:\n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d", &arr[i]);
	}

	for(i=0;i<5;i++)
	{
		sum= sum+ arr[i];
	}


	printf("Addition of all elements is: %d\n", sum);

}

