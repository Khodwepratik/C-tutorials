// Element odd or even checker 	

#include<stdio.h>

void main()
{
	//User Defining array

	int arr[5], i, j, temp;
	printf ("Enter 5 Elements: \n");

	for (i=0; i<5;i++)
	{
 		scanf( "%d", &arr[i]);
	}

	
	for (i=0; i<5; i++)
	{
 		for (j=i+1; j<5; j++)
		{
			if (arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i]= arr[j];	
				arr[j]= temp;			 
			}
		}
	}

	printf("The Sorted array is: \n");

		for (i=0; i<5;i++)
		{
			printf("%d\t", arr[i]);
		}
    	
}

