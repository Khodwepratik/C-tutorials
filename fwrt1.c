// Function without the return type

#include<stdio.h>

void add(); // 1.function prototyping

void main()
{
	add();
}
void add()  // function defination 
{
	int a, b, sum=0;
	printf("Enter the value of a: \n");
	scanf("%d",&a);
	printf("Enter the value of b%d\n", &b);
	scanf("%d",&b);
	sum=a+b;
	printf("Addition of a and b is:%d\n", sum);
}