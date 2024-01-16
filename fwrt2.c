// Function without the return type
// parameter values

#include<stdio.h>

void add(int,int); // 1.function prototyping

void main()
{
	add(20,50);
}
void add(int a, int b)  // function defination 
{
	int sum=0;
	sum=a+b;
	printf("Addition :%d\n", sum);
}