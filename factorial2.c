// Factorial Function with recursion
// 5!= 5*4*3*2*1 

#include<stdio.h>

int  fact(int);
void main()
{
	int n, res;
	printf("enter the number:\n");
	scanf("%d",&n);
	res = fact(n);
	printf("Factorial %d", res);
}

int fact(int n)
{
	if (n>=1)
	{
		return n*fact(n-1);
	}
	else 
	{
		return 1;
	}
}