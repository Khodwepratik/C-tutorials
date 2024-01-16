// Element odd or even checker 	

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
		if(arr[i]%2==0)
		{ 	
		 	printf("Even Element  = %d \n",arr[i]);
		}
		else
		{
			printf("oddElement  = %d\n",arr[i]); 
		}

	}

}

