
#include<stdio.h>
void main(){
    int a = 5;
    printf("value of a + %d\n",a);
    printf("address of a = %u\n",&a);
    int *ptr;
    ptr=&a;
    printf("value of ptr = %u\n",ptr);
    printf("address of ptr = %u\n",&ptr);
    int **ptr1;
    ptr1=&ptr;
    printf("value of ptr1 = %u\n", ptr1);
    int ***ptr2;
    ptr2 = &ptr1;
    printf("value of ptr2 = %u\n",ptr2);
}