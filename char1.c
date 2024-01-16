// string


#include<stdio.h>
	

void main()
{
	char str[6];
	int i, length=0;

	printf("Enter the string: \n");	
	for (i=0;i<6;i++)
	{
		scanf("%c", &str[i]);
	}
	
	for (i=0;str[i]!='\0';i++)
	{
		length++;
	}
	printf("length of the string %d\n", length-1);
}