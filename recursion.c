//sum of natural numbers using recursion
//Recursion

#include <stdio.h>

int sum(int);		//function prototype

int main() 
{

  int number, result;
  printf("Enter a positive integer: ");
  scanf("%d", &number);
	
  result = sum(number);
  printf("Sum =%d\n", result);   // function Calling
}

int sum(int n)   // function Defination
{  

  if (n != 0)
		// sum() function call itself
   	return n + sum (n - 1);
  	else
    	return n;
}
