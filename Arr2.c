#include<stdio.h>
int main()
{
    int n=7;
    int a[7]={-9,6,11,7,5,7,90};
    int i=2;
    while(i>0){
        for(int j=1;j<n;j++)
        {
            if(a[j-1]>a[j])
            {
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
        i--;
    }   
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}