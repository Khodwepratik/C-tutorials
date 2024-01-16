// Factorial Function without recursion
// 5!= 5*4*3*2*1 

#include<stdio.h>

int fact(int);
void main()
{
	int n, res;
	printf("enter the number:\n");
	scanf("%d",&n);
	res = fact(n);
	printf("Factorial is : %d\n", res);
}

int fact (int n)
{
	int fact =1;
	while (n>=1)
	{
		fact = fact*n;
		n--;
	}
	return fact;	
}