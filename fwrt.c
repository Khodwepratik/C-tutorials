// Function without the return type and parameter value


#include<stdio.h>

void add(); // 1.function prototyping

void main()
{
	add();
}
void add()  // function defination 
{
	int a=10, b=20, sum=0;
	sum=a+b;
	printf("Addition :%d\n", sum);
}