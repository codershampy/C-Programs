#include<stdio.h>
void main()
{
    int number = 50;
    int *p;
    p = &number;
    printf("Address of p variable is %u\n",p);
    p=p-1;
    printf("After decrement : Address of p variable is %u\n",p);
}