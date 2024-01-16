//Pointer Arithmetic ++ -- + - 
#include<stdio.h>
void main()
{
	int a=5;
	printf("value of a = %d\n",a);
	printf("address of a = %u\n",&a);
	int *ptr;
	ptr=&a;
	printf("before ptr++ value pf ptr = %u\n",ptr);
	ptr++;
	printf("after ptr++ value of ptr = %u\n",ptr);
	printf("before ptr-- value of ptr = %u\n",ptr);
	ptr--;
	printf("after ptr-- value of ptr = %u\n",ptr);
	printf("before ptr=ptr+2 value of ptr = %u\n",ptr);
	ptr=ptr+2;
	printf("after ptr=ptr+2 value of ptr = %u\n",ptr);
	printf("before ptr=ptr*2 value of ptr = %u\n",ptr);
	ptr=ptr-2;
	printf("after ptr=ptr-2 value of ptr = %u\n",ptr);
} 