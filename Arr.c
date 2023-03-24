#include<stdio.h>
int main()
{
    int a[5]={3,6,1,7,5};
    // int b[5];
    // for(int i=1;i<5;i++){
    //     b[i]=a[i-1];
    // }
    // b[0]=a[5-1];
    // for(int i=0;i<5;i++)
    // {
    //     printf("%d ",b[i]);
    // }
    int x=a[4];
    for(int i=4;i>0;i--)
    {
       a[i]=a[i-1];
    }
    a[0]=x;
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }

}