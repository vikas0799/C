#include<stdio.h>
int main(){
    int n; scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    //storing frequency array value 0
    int fre[6];
    for(int i=0;i<6;i++){
        fre[i]=0;
    }
    for(int i=0;i<n;i++){
        fre[arr[i]-1]=fre[arr[i]-1]+1;
    }

    //frequency array of each dice 
    // for(int i=0;i<6;i++){
    //     printf("%d",fre[i]);
    // }
    // printf("\n");
    // now printing in decreasing order frequency

  int flag=0,  idx=-1,max=0;
  while(flag<6){
    for(int i=0;i<6;i++){
        if(max<fre[i]){
            idx=i;
            max=fre[i];
        }
    }
    if(idx>=0)
    printf("%d : %d\n",idx+1,max);
    else
    printf("%d : %d\n",flag+1,max);


    fre[idx]=-1;
    max=0;
    idx=-1;
    flag++;
 }
}