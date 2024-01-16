// Function without the return type

#include<stdio.h>

void add(int, int); // 1.function prototyping

void main()
{
	int a,b;
	printf("Enter the value of a: \n");
	scanf("%d",&a);
	printf("Enter the value of b%d\n", &b);
	scanf("%d",&b);
	add(a,b);   //Function Call
}
void add(int a, int b)  // function defination 
{
	int sum=0;
	sum=a+b;
	printf("Addition :%d\n", sum);
}