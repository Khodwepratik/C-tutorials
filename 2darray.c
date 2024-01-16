// coping the string into another string
#include <stdio.h>

void main()
{
	int arr[2][2]={ {10,20}, {30,40} }, i,j;
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d\t", arr[i][j]);
		} 
		printf("\n");
	} 
}