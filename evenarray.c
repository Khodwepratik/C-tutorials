// 1D array	

#include<stdio.h>

void main()
{
	int arr[5];
	int i;
	printf ("Enter 5 Elements: \n");

	for (i=0; i<5;i++)
	{
 		scanf( "%d", &arr[i]);
	}

	

	for (i=0; i<5;i++)
	{
		if(i%2==0)
		{ 	
		 	printf("Element at the Even %d index = %d \n", i, arr[i]);
		}
		else
		{
			printf("Element at the odd %d index = %d\n", i, arr[i]); 
		}

	}

}

