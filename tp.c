#include<stdio.h>

void main(){
	int rows,i,j;
	printf("Enter the rows: \n");
	scanf("%d", &rows);
	for (i=1;i<=rows;i++)
	{
		for (j=1;j<=rows;j++)
		{	
			if ((i+j)<=rows)
			{
				printf(" ");
			}
			else 
			{
				printf("*");
			}
		}
	printf("\n");
	}	
}