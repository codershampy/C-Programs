#include<stdio.h>
int main()
{
    int a[10],i,flag=0,key,pos;
    for(i=0;i<10;i++)
    {
        printf("\n Enter Number:");
        scanf("%d",&a[i]);
    }
    printf("\n Enter number to search:");
    scanf("%d",&key);
    for(i=0;i<10;i++)
    {
        if(a[i]==key)
        {
            pos=i+1;
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("\n Number found at %d position",pos);
    else("\n Number not found:");
    return 0;
}