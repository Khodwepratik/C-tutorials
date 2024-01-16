#include<stdio.h>

void main()
{
	int i,j;
	for( i=1,j=5;i<=5,j>=1; i++,j--)
	{
		if ( i==3 || j==3)
		{
			continue;
		}
		printf("%d\t%d\n",i,j);
	}
	
}
