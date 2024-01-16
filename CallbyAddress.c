//Call by Address
#include<stdio.h>
void swap(int *,int *);
void main()
{
	int a,b;
	printf("Enter 2 numbers: \n");
	scanf("%d%d" ,&a,&b);
	printf("Before swap a = %d, b=%d\n" , a,b);
	swap(&a,&b);
	printf("After swap a = %d, b = %d\n",a,b);
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("In swap a = %d,b = %d\n",*a,*b);
}