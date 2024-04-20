#include<stdio.h>
int sum();
void main()
{
    int result;
    printf("\n Going to calculate the sum of two numbers:");
    result=sum();
    printf("%d",result);
}
int sum()
{
    int a,b;
    printf("\n Enter two numbers");
    scanf("%d %d",&a,&b);
    return a+b;
}
