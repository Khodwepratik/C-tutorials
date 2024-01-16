// sum of elements at even and odd

#include<stdio.h>

void main()
{
	int arr[5], i, sum_even=0, sum_odd=0;
	printf("Enter the five Elements:\n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d", &arr[i]);
	}
	

	for(i=0;i<5;i++)
	{	
		if (i%2==0)
		{	
			sum_even= sum_even + arr[i];
		}
		else
		{
			sum_odd= sum_odd + arr[i];
		}
			printf ("Sum even  = %d and  Sum odd = %d\n", sum_even, sum_odd );
	}
}