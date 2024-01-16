// Function with the return type and parameter value

#include<stdio.h>

int add(int, int); // 1.function prototyping

void main()
{
	int a, b, res;
	printf("Enter the values of a :\n");
	scanf("%d",&a);
	printf("Enter the values of b :\n");
	scanf("%d",&b);
	res = add(a,b); // 3.function call

	printf("Addition of a and b is : %d\n", res);
}
int add(int a, int b)  // 2. function defination 
{
	int sum=0;
	sum=a+b;
	return sum;
}