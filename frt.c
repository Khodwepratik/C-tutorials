// Function with return type and parameter values

#include<stdio.h>

int add(); // 1.function prototyping

void main()
{
	int res;
	res=add();
	printf("Addition of a and b is : %d\n", res);
}
int add()  // function defination 
{
	int a, b, sum=0;
	printf("******************\n");
	printf("Enter the value of a: \n");
	scanf("%d",&a);
	printf("Enter the value of b%d\n", &b);
	scanf("%d",&b);
	printf("******************\n");
	sum=a+b;
	return sum;
}