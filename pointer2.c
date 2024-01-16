//pointer with diffrent data types
// integer and float type pointer 


#include <stdio.h>

void main() 
{
 	int a=5;
	printf("Value of the a =%d\n", a);
	printf("Address of the a =%u\n", &a);
	
	// declaring the pointer and value of ptr
	int *ptr;
	ptr = &a;
	printf("Value of the ptr =%u\n", ptr);

	//declaring float	
	
	float f1 =10.50;
	printf("Value of the f1 =%F\n", f1);
	printf("Address of the f1 =%u\n", &f1);
	
	float *fptr;
	fptr = &f1;
	printf("Value of fptr =%u\n:", fptr);
	
}

