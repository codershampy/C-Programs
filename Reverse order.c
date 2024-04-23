#include<stdio.h>
int main()
{
    int a[10],i;
    for(i=0;i<10;i++)
    {
        printf("\n Enter number:");
        scanf("%d",&a[i]);
    }
    for(i=9;i>=0;i--)
    printf("\n%d",a[i]);
    return 0;
}