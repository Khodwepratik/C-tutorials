//Swapping the values of integer
// call by value

#include <stdio.h>

void swap(int, int);

int main() 
{
  int a,b;
  printf("Enter the value of a : \n");
  scanf("%d", &a);
  printf("Enter the value of b : \n");
  scanf("%d", &b);
  printf("The values before swapping are a= %d and b= %d \n", a,b);
  swap(a,b);
  

}

void swap(int a, int b) 
{
	int temp;
	temp=a;
	a=b;
	b=temp;	
	printf("The values after swapping are a= %d and b= %d \n", a, b);
}

