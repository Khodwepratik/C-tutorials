//Different types of the pointers

#include<stdio.h>
void main()
{
	int a=5;
	printf("value of a = %d\n",a);
	printf("address of a = %u\n",&a);
	int *ptr;
	ptr=&a;
	printf("value of ptr = %u\n",ptr);
	float f1=10.50;
	printf("value of f1 = %f\n",f1);
	printf("address of f1 = %u\n",&f1);
	float *fptr;
	printf("value of fptr = %u\n", fptr);
	char ch='F';
	printf("value of ch = %c\n",ch);
	printf("address of ch = %u\n", &ch);
	char *cptr;
	cptr=&ch;
	printf("value of cptr = %u\n",cptr);
}

//to overcome the call by value 
