#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr_arr=arr;
    for(int i=0;i<5;i++)
    {
        printf ("%d",*ptr_arr++);

    }
    return 0;
}