#include<stdio.h>
void swapx(int*,int*);
int main()
{
    int a=10,b=20;
    swapx(&a,&b);
    printf("Inside the caller:\na=%d b=%d\n",a,b);
    return 0;
}

void swapx(int*x,int*y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("Inside the function: \nx=%d y=%d \n",*x,*y);
}

