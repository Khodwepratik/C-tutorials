// Reversing the string


#include<stdio.h>
	

void main()
{
	char str[6];
	int i;
	printf ( "Enter the string: \n");

	for (i=0;i<6;i++)
		{
			scanf("%c", &str[i]);
		}

	for (i=6;i>=0;i--)
		{
			printf("%c", str[i]);
		}
}