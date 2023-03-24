#include<stdio.h>
int main()
{
    int a[5]={3,6,1,7,5};
    for(int i=0;i<5;i++){
        int sum=0;
        for(int j=i;j<5;j++)
        {
            sum=sum+a[j];
            printf("%d ",sum);
        }
        printf("\n");
    }
}