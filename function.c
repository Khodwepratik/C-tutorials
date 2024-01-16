// user defined function
//parameterless function 
#include<stdio.h>


void display(); // 1. function prototyping

void main()
{
	display(); //3. Function call
}
void display()  // 2. function defination 
{
	printf("From Display Function...\n");
}