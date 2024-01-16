//pointer 

#include <stdio.h>

void main() 
{
 	int a=5;
	printf("Value of the a =%d\n", a);
	printf("Address of the a =%u\n", &a);
	int *ptr;
	ptr=&a;
	printf(" Value of ptr = %u\n", ptr);
	
}

