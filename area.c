// calculating the area of circle 
#include<stdio.h>
#define PI 3.14

void main()
{
	float radius, area;
	printf("Enter the radius: \n");
	scanf("%f", &radius);
	area= PI*radius*radius;
	printf("Area of Circle :%f\n ",area); 

}