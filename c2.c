#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int firstMax=0;
    int secondMax=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>firstMax)
        {
            secondMax=firstMax;
            firstMax=arr[i];
            
        }else if(arr[i]<firstMax && arr[i]>secondMax)
        {
            secondMax=arr[i];
        }
    }
   
    int firstMin=100;
    int secondMin=100;
    for(int i=0;i<n;i++)
    {
        if(firstMin>arr[i])
        {
            secondMin=firstMin;
            firstMin=arr[i];
        }else if(arr[i]>firstMin && arr[i]<secondMin)
        {
            secondMin=arr[i];
        }
    }
  
     
     printf("%d",secondMax-secondMin);
   
    return 0;
}