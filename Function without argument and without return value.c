#include<stdio.h>
void sum();
void main()
{
    printf("\n Going to calculate the sum of two numbers:");
    sum();
}

void sum()
{
    int a,b;
    printf("\n Enter two numbers");
    scanf("%d %d",&a,&b);
    printf("The sum is %d",a+b);
}