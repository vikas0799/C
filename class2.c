#include<stdio.h>
void coinToss(int n, char ans[]){
    if(n<0){
        printf("%s\n",ans);
        return;
    }
    char ch = ans[n];
    ans[n]='H';
    coinToss(n-1,ans);
    ans[n]='T';
    coinToss(n-1,ans);
    ans[n]=ch;
}

int main(){
    int n;
    scanf("%d",&n);
    char ans[n];
    coinToss(n-1,ans);
}