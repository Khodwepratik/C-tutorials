// 1D array	

#include<stdio.h>

void main()
{
	int arr[5]={10,20,30,40,50};
	printf("array element arr[0] = %d\n", arr[0]);
	printf("array element arr[1] = %d\n", arr[1]);
	printf("array element arr[2] = %d\n", arr[2]);
	printf("array element arr[3] = %d\n", arr[3]);
	printf("array element arr[4] = %d\n", arr[4]);

	
	int i;
	for(i=0; i<5; i++)
	{
		printf(" At the %d index we are having %d\n", i , arr[i]);
	}

}
