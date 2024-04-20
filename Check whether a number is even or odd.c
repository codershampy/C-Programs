#include <stdio.h>
int even_odd(int);
void main()
{
    int n,flag=0;
    printf("\n Going to check whether a number is even or odd");
    printf("\n Enter the number:");
    scanf("%d",&n);
    flag=even_odd(n);
    if(flag==0)
    {
        printf("\n The number is odd");
}
    else{
    printf("\n The number is even");
}
}
int even_odd(int n)
{
    if(n%2==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}