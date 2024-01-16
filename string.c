//string


#include<stdio.h>
	

void main()
{
	char str[6]= {'H','e','l','l','o',' '};
	int i;	
	for (i=0;i<6;i++)
	{
		printf("%c", str[i]);
	}

	
	char str1[6]= "World";
	for(i=0; i<6; i++)
	{
		printf("%c", str1[i]);
	}
}