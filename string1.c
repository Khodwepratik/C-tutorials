// Accept the string from user and display


#include<stdio.h>
	

void main()
{
	char str[6], str1[6];
	int i;
	printf("Enter the string: \n");
	for (i=0; i<6; i++)
		{
			scanf("%c", &str[i]);
		}
	for (i=0; i<6; i++)
		{
			printf("%c", str[i]);
		}


	printf("\n Enter Another String: \n");
	scanf("%s", &str1);
	printf("%s", str1);
	
}